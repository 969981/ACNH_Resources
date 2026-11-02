#!/usr/bin/env python3
"""Mirror ACNH 3.0.3 original paths into UnPack/0 and UnPack/1 without dummy decoded files.

Commands:
  scaffold           Mirror the complete source directory hierarchy locally.
  basic --file ...   Run the proven L0-L2 parser on a source-relative RomFS file.
  basic --kind ...   Run a supported parser group (tables/byml/...).
  media --file ...   Run the verified L3 media exporter for a source file.
  audit              Compare directory topology; summarize actual output files.

Original NCA is always read-only; converters work in temporary directories.
"""
from __future__ import annotations

import argparse
from datetime import datetime, timezone
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import shutil
import subprocess
import sys
import tempfile

NCA = "e10617820db06889e1638499478da0de_NCA"
BASIC_KINDS = ("tables", "byml", "messages", "archives", "compressed", "events", "other")
MEDIA_SUFFIXES = {".glb", ".png", ".wav"}


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def clean_rel(value: str) -> Path:
    # Reject absolute paths, traversals, and Windows drive / UNC paths.
    value = value.replace("\\", "/")
    p = PurePosixPath(value)
    if not value or p.is_absolute() or any(part in ("..", ".", "") for part in p.parts):
        raise ValueError("invalid RomFS-relative path: " + value)
    if ":" in p.parts[0] or value.startswith("//"):
        raise ValueError("invalid drive or UNC path: " + value)
    return Path(*p.parts)


def record(meta_dir: Path, item: dict) -> None:
    meta_dir.mkdir(parents=True, exist_ok=True)
    item["recorded_at_utc"] = datetime.now(timezone.utc).isoformat()
    with (meta_dir / "run_log.jsonl").open("a", encoding="utf-8") as f:
        f.write(json.dumps(item, sort_keys=True, ensure_ascii=False) + "\n")


def copy_verified(src: Path, dest: Path, *, overwrite: bool = False) -> dict:
    if not src.is_file() or src.is_symlink():
        raise RuntimeError("missing or unsafe conversion output: " + str(src))
    if src.stat().st_size > 90 * 1024 * 1024:
        raise RuntimeError("Output exceeds safe per-file GitHub limit (90 MiB): " + str(src))
    sha = digest(src)
    if dest.exists():
        if not dest.is_file() or dest.is_symlink():
            raise RuntimeError("output path collision: " + str(dest))
        old_sha = digest(dest)
        if old_sha == sha:
            return {"path": dest.as_posix(), "sha256": sha, "bytes": src.stat().st_size, "reused": True}
        if not overwrite:
            raise RuntimeError("refusing to overwrite a different output: " + str(dest))
    dest.parent.mkdir(parents=True, exist_ok=True)
    temp = dest.with_name(dest.name + ".partial")
    try:
        shutil.copyfile(src, temp)
        if digest(temp) != sha:
            raise RuntimeError("SHA-256 mismatch after copying: " + str(dest))
        os.replace(temp, dest)
    finally:
        temp.unlink(missing_ok=True)
    return {"path": dest.as_posix(), "sha256": sha, "bytes": dest.stat().st_size, "reused": False}


def original_paths(root: Path):
    source = root / NCA
    exe, rom = source / "0", source / "1"
    if not rom.is_dir():
        raise FileNotFoundError("source NCA 1/ RomFS directory is required")
    return exe, rom


def scaffold(rom: Path, out: Path) -> int:
    dest = out / "1"
    total = 1
    dest.mkdir(parents=True, exist_ok=True)
    for directory, dirs, _ in os.walk(rom, followlinks=False):
        root_path = Path(directory)
        safe_dirs = []
        for name in dirs:
            child = root_path / name
            if not child.is_symlink():
                safe_dirs.append(name)
        dirs[:] = safe_dirs
        rel = root_path.relative_to(rom)
        (dest / rel).mkdir(parents=True, exist_ok=True)
        total += 1
    (out / "0").mkdir(parents=True, exist_ok=True)
    print(json.dumps({"source_directories_mirrored": total, "output_root": str(out)}, ensure_ascii=False))
    return total


def invoke(command: list[str]) -> None:
    print("RUN", " ".join(command), flush=True)
    subprocess.run(command, check=True)


def run_basic(root: Path, rom: Path, out: Path, args) -> None:
    script = root / "Scripts" / "unpack_acnh.py"
    if not script.is_file():
        raise FileNotFoundError(script)
    with tempfile.TemporaryDirectory(prefix="acnh303_basic_") as temporary:
        stage = Path(temporary)
        cmd = [sys.executable, str(script), "--root", str(root), "--out", str(stage)]
        if args.file:
            rel = clean_rel(args.file)
            if not (rom / rel).is_file() or (rom / rel).is_symlink():
                raise FileNotFoundError(rom / rel)
            cmd += ["--file", rel.as_posix()]
        elif args.kind:
            cmd += ["--kind", args.kind]
        elif args.all:
            cmd += ["--all"]
        else:
            raise ValueError("basic requires --file, --kind or --all")
        if args.extract_members:
            cmd += ["--extract-members"]
        invoke(cmd)
        src_out = stage / NCA / "1"
        generated = []
        if src_out.exists():
            for converted in sorted(src_out.rglob("*")):
                if not converted.is_file() or converted.is_symlink():
                    continue
                rel = converted.relative_to(src_out)
                result = copy_verified(converted, out / "1" / rel, overwrite=args.overwrite)
                generated.append(result)
        meta = stage / "_meta"
        for name in ("manifest.json", "manifest.csv", "summary.json", "errors.csv", "unsupported.csv"):
            src_file = meta / name
            if src_file.is_file():
                copy_verified(src_file, out / "_meta" / ("basic_last_" + name), overwrite=True)
        record(out / "_meta", {
            "command": "basic", "selection": args.file or args.kind or "all",
            "produced": generated, "count": len(generated),
            "note": "Only files emitted by the real parser are counted",
        })
        print(f"Committed {len(generated)} real L0-L2 output files into {out / '1'}")


def output_filename(source: Path, leaf: Path, total_for_extension: int) -> str:
    name = source.name
    for compression in (".zs", ".szs", ".bwav"):
        if name.lower().endswith(compression):
            name = name[:-len(compression)]
            break
    extension = leaf.suffix.lower()
    if extension not in MEDIA_SUFFIXES:
        raise ValueError("unrecognized output type: " + str(leaf))
    # Stable identifiers when a source contains several embedded textures/meshes/audio.
    match = re.search(r"\.img(\d+)\.png$", leaf.name, flags=re.IGNORECASE)
    if match:
        return name + ".img" + match.group(1) + ".png"
    if total_for_extension > 1:
        m = re.search(r"leaf_(\d+)", leaf.name)
        tag = ("leaf" + m.group(1)) if m else leaf.stem.replace(".", "_")
        return name + "." + tag + extension
    return name + extension


def run_media(root: Path, rom: Path, out: Path, args) -> None:
    if not args.file:
        raise ValueError("media requires --file relative to RomFS/1")
    rel = clean_rel(args.file)
    source = rom / rel
    if not source.is_file() or source.is_symlink():
        raise FileNotFoundError(source)
    script = root / "Scripts" / "acnh303_media_l3.py"
    with tempfile.TemporaryDirectory(prefix="acnh303_media_", dir=root) as temporary:
        stage = Path(temporary)
        cmd = [
            sys.executable, str(script), "--root", str(root), "--source", rel.as_posix(),
            "--out", str(stage), "--require", args.require, "--max-output-mb", "90",
        ]
        if args.wmdlt:
            cmd += ["--tool-wmdlt", args.wmdlt]
        if args.wimgt:
            cmd += ["--tool-wimgt", args.wimgt]
        if args.vgmstream:
            cmd += ["--tool-vgmstream", args.vgmstream]
        invoke(cmd)
        produced_dir = stage / NCA / "1" / rel.parent / (rel.name + ".converted")
        manifest_path = produced_dir / "_conversion_manifest.json"
        if not manifest_path.is_file():
            raise RuntimeError("media converter produced no validation manifest")
        manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
        if manifest.get("source_sha256") != digest(source):
            raise RuntimeError("source hash mismatch in media manifest")
        candidates = []
        for member in manifest.get("members", []):
            if member.get("status") != "converted":
                continue
            for item in member.get("outputs", []):
                leaf = Path(item["path"]).name
                src = produced_dir / leaf
                if not src.is_file() or src.stat().st_size != item["size_bytes"]:
                    raise RuntimeError("output missing or byte count mismatch: " + leaf)
                if digest(src) != item["sha256"]:
                    raise RuntimeError("conversion manifest checksum mismatch: " + leaf)
                candidates.append(src)
        if not candidates:
            actual_errors = [m.get("error", "") for m in manifest.get("members", []) if m.get("error")]
            if actual_errors:
                raise RuntimeError("verified decoder produced errors: " + "; ".join(actual_errors)[-1000:])
            record(out / "_meta", {
                "command": "media", "source": rel.as_posix(),
                "source_sha256": manifest["source_sha256"], "produced": [],
                "status": "no_target_leaf", "leaf_count": manifest.get("leaf_count", 0),
                "note": "No validated BFRES/BNTX/BWAV target; original container may only contain BFLYT/BFLAN/other structures",
            })
            print("No supported media target in " + rel.as_posix())
            return
        counts = {ext: sum(p.suffix.lower() == ext for p in candidates) for ext in MEDIA_SUFFIXES}
        outputs = []
        names = set()
        for src in candidates:
            target_name = output_filename(rel, src, counts[src.suffix.lower()])
            if target_name in names:
                raise RuntimeError("output filename collision for " + target_name)
            names.add(target_name)
            outputs.append(copy_verified(src, out / "1" / rel.parent / target_name, overwrite=args.overwrite))
        record(out / "_meta", {
            "command": "media", "source": rel.as_posix(),
            "source_sha256": manifest["source_sha256"], "produced": outputs,
            "status": manifest.get("status"), "count": len(outputs),
        })
        print(f"Committed {len(outputs)} verified media outputs to {out / '1' / rel.parent}")


def audit(rom: Path, out: Path) -> None:
    source_dirs = {str(Path(p).relative_to(rom)) for p, _, _ in os.walk(rom)}
    target = out / "1"
    output_dirs = {str(Path(p).relative_to(target)) for p, _, _ in os.walk(target)} if target.exists() else set()
    real_outputs = sum(
        1 for p in target.rglob("*")
        if p.is_file() and p.name not in (".gitkeep", ".gitignore") and not p.is_symlink()
    ) if target.exists() else 0
    missing = sorted(source_dirs - output_dirs)
    print(json.dumps({
        "source_directories": len(source_dirs),
        "mirrored_directories": len(source_dirs & output_dirs),
        "directories_missing_from_UnPack": len(missing),
        "missing_examples": missing[:25],
        "real_output_files_present": real_outputs,
        "complete_file_conversion_claim": False,
    }, ensure_ascii=False, indent=2))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("command", choices=("scaffold", "basic", "media", "audit"))
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--out", type=Path, default=Path("UnPack"))
    parser.add_argument("--file", help="RomFS/1-relative path to an actual source")
    parser.add_argument("--kind", choices=BASIC_KINDS)
    parser.add_argument("--all", action="store_true", help="run legacy basic parser across all RomFS")
    parser.add_argument("--extract-members", action="store_true")
    parser.add_argument("--overwrite", action="store_true", help="replace differing outputs explicitly")
    parser.add_argument("--require", choices=("any", "bfres", "bntx", "bwav"), default="any")
    parser.add_argument("--wmdlt")
    parser.add_argument("--wimgt")
    parser.add_argument("--vgmstream")
    args = parser.parse_args()
    root = args.root.resolve()
    out = (root / args.out).resolve()
    _, rom = original_paths(root)
    if out == root / NCA or out.is_relative_to(root / NCA):
        raise ValueError("output must not be inside the read-only source NCA")
    if args.command == "scaffold":
        scaffold(rom, out)
    elif args.command == "audit":
        audit(rom, out)
    elif args.command == "basic":
        run_basic(root, rom, out, args)
    else:
        run_media(root, rom, out, args)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
