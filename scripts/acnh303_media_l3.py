#!/usr/bin/env python3
"""ACNH 3.0.3 REAL leaf media converters (GLB, PNG, WAV) and validators.

Uses independently maintained format-specific tools, not invented BFRES geometry,
BNTX pixels or BWAV samples. Source container bytes are always read-only.

Stage: zstd/Yaz0 -> SARC -> BFRES/BNTX leaves, preserving member identity.
Convert: wmdlt/wimgt/vgmstream-cli binaries; validate actual generated files.
Every result is audited with source and output SHA-256.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
import struct
import subprocess
import tempfile
import wave
import zlib

from acnh_formats import decompress, detect, parse_sarc

NCA = "e10617820db06889e1638499478da0de_NCA"
MAX_INPUT = 128 * 1024 * 1024
MAX_EXPANDED = 256 * 1024 * 1024
VERSION = "acnh303-media-l3-v1"
MAGIC = {b"FRES": "bfres", b"BNTX": "bntx", b"BWAV": "bwav"}
CMD = {"bfres": "wmdlt", "bntx": "wimgt", "bwav": "vgmstream-cli"}
EXT = {"bfres": ".glb", "bntx": ".png", "bwav": ".wav"}


def hexdigest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def validate_glb(path: Path) -> dict:
    data = path.read_bytes()
    if len(data) < 32 or data[:4] != b"glTF":
        raise ValueError("GLB not glTF magic")
    _, version, length = struct.unpack_from("<4sII", data)
    if version != 2 or length != len(data):
        raise ValueError("GLB incorrect version/length")
    n, kind = struct.unpack_from("<I4s", data, 12)
    if kind != b"JSON" or n == 0 or n + 20 > len(data):
        raise ValueError("GLB JSON chunk invalid")
    document = json.loads(data[20:20+n])
    if document.get("asset", {}).get("version") != "2.0":
        raise ValueError("GLB missing glTF 2.0 asset")
    meshes = document.get("meshes", [])
    primitives = [p for mesh in meshes for p in mesh.get("primitives", [])]
    if not primitives or not any("POSITION" in p.get("attributes", {}) for p in primitives):
        raise ValueError("GLB has no real triangle/geometry POSITION accessor")
    accessors = document.get("accessors", [])
    if not accessors:
        raise ValueError("GLB missing accessors")
    for primitive in primitives:
        for i in list(primitive.get("attributes", {}).values()) + ([primitive["indices"]] if "indices" in primitive else []):
            if not isinstance(i, int) or not (0 <= i < len(accessors)):
                raise ValueError("GLB invalid accessor reference")
    return {"type": "glb", "meshes": len(meshes), "primitives": len(primitives),
            "accessors": len(accessors), "nodes": len(document.get("nodes", []))}


def validate_png(path: Path) -> dict:
    data = path.read_bytes()
    if len(data) < 57 or data[:8] != b"\x89PNG\r\n\x1a\n":
        raise ValueError("not PNG")
    at = 8
    have_iend = False
    ihdr = None
    while at < len(data):
        if at + 12 > len(data):
            raise ValueError("PNG chunk truncated")
        size = struct.unpack_from(">I", data, at)[0]
        name = data[at + 4:at + 8]
        end = at + 12 + size
        if size > 256 * 1024 * 1024 or end > len(data):
            raise ValueError("invalid PNG chunk size")
        actual_crc = struct.unpack_from(">I", data, at + 8 + size)[0]
        expected_crc = zlib.crc32(data[at+4:at+8+size]) & 0xFFFFFFFF
        if actual_crc != expected_crc:
            raise ValueError("PNG CRC mismatch")
        if at == 8:
            if name != b"IHDR" or size != 13:
                raise ValueError("PNG missing IHDR")
            width, height, depth, color, comp, filter_type, interlace = struct.unpack_from(">IIBBBBB", data, at + 8)
            if width == 0 or height == 0 or width > 32768 or height > 32768:
                raise ValueError("implausible PNG dimensions")
            ihdr = (width, height, depth, color)
        if name == b"IEND":
            have_iend = end == len(data)
            break
        at = end
    if not have_iend:
        raise ValueError("PNG missing final IEND")
    # A PNG with valid chunk CRCs can still have empty/corrupt IDAT pixels.
    # Force a full raster decode, not merely signature/header validation.
    try:
        from PIL import Image, UnidentifiedImageError
        with Image.open(path) as image:
            image.load()
            if image.size != (ihdr[0], ihdr[1]):
                raise ValueError("PNG decoded image dimensions differ from IHDR")
            pixel_mode = image.mode
    except (UnidentifiedImageError, OSError) as exc:
        raise ValueError(f"PNG pixel decode failed: {exc}") from exc
    return {"type": "png", "width": ihdr[0], "height": ihdr[1],
            "bit_depth": ihdr[2], "color_type": ihdr[3],
            "pixel_decode": "Pillow.Image.load", "pixel_mode": pixel_mode}


def validate_wav(path: Path) -> dict:
    with wave.open(str(path), "rb") as wav:
        c = wav.getnchannels()
        rate = wav.getframerate()
        frames = wav.getnframes()
        sample_width = wav.getsampwidth()
        if not (1 <= c <= 16 and 8000 <= rate <= 384000 and frames > 0
                and sample_width in (1, 2, 3, 4) and wav.getcomptype() == "NONE"):
            raise ValueError(f"invalid PCM WAV properties: channels={c}, rate={rate}, frames={frames}, sample_width={sample_width}, compression={wav.getcomptype()}, file_bytes={path.stat().st_size}")
        wav.readframes(1)
    return {"type": "wav", "channels": c, "sample_rate": rate,
            "frames": frames, "sample_width": sample_width,
            "seconds": round(frames / rate, 4)}


VALID = {"glb": validate_glb, "png": validate_png, "wav": validate_wav}


def member_path(name: str) -> Path:
    rel = Path(name.replace("\\", "/"))
    if rel.is_absolute() or ".." in rel.parts or any(not p or p in (".", "..") for p in rel.parts):
        raise ValueError(f"unsafe archive member: {name}")
    return rel


def is_texture_only_switch_fres(data: bytes) -> bool:
    """Conservative classification: validated Switch FRES without any mesh signatures."""
    if len(data) < 0x100 or data[:4] != b"FRES":
        return False
    # 0xFEFF represented little-endian in Switch resource headers.
    bom = struct.unpack_from("<H", data, 0x0C)[0]
    version = struct.unpack_from("<I", data, 8)[0]
    first_model = struct.unpack_from("<Q", data, 0x28)[0]
    major = (version >> 16) & 0xFFFF
    return (bom == 0xFEFF and major >= 9 and first_model == 0
            and b"FMDL" not in data and b"FSHP" not in data
            and b"FVTX" not in data and b"BNTX" in data)


def extract_embedded_bntx(data: bytes):
    """Return bounds-checked, self-contained BNTX buffers inside a meshless FRES.

    The BNTX is a standalone subcontainer; its internal pointers remain
    BNTX-relative. Do not search/copy arbitrary 4-byte strings without checking
    the Switch BOM, declared size, texture count and platform header.
    """
    if not is_texture_only_switch_fres(data):
        return
    at = 0
    while True:
        at = data.find(b"BNTX", at)
        if at < 0:
            break
        if at % 0x10 != 0 or at + 0x40 > len(data):
            at += 4
            continue
        bom = struct.unpack_from("<H", data, at + 0x0C)[0]
        size = struct.unpack_from("<I", data, at + 0x1C)[0]
        count = struct.unpack_from("<I", data, at + 0x24)[0]
        platform = data[at+0x20:at+0x24]
        if (bom == 0xFEFF and 0x40 <= size <= len(data)-at
                and size <= MAX_EXPANDED and platform == b"NX  "
                and 1 <= count <= 65536):
            yield at, data[at:at+size]
            at += size
        else:
            at += 4


def find_leaf(data: bytes, name: str, depth: int = 0):
    if depth > 5:
        raise ValueError("archive recursion depth exceeded")
    kind = detect(data)
    if kind in ("zstd", "yaz0"):
        raw, _ = decompress(data, limit=MAX_EXPANDED)
        yield from find_leaf(raw, name, depth + 1)
        return
    if kind == "sarc":
        _, members = parse_sarc(data)
        for member_name, payload in members:
            child = str(member_path(member_name))
            yield from find_leaf(payload, name + "/_members/" + child, depth + 1)
        return
    media = MAGIC.get(data[:4])
    if media == "bfres" and is_texture_only_switch_fres(data):
        # These Switch FRES v9 envelopes contain an independently addressable
        # BNTX at an aligned offset, but no FMDL/FSHP/FVTX model mesh.
        # Never manufacture a GLB for them. Validate and export the BNTX
        # using the existing standard PNG decoder.
        embedded = list(extract_embedded_bntx(data))
        if not embedded:
            raise ValueError("texture-only FRES declared no valid embedded BNTX")
        for offset, payload in embedded:
            yield {"source_member": name + "/embedded@0x%x/internal.bntx" % offset,
                   "format": "bntx", "container_format": "bfres",
                   "origin_type": "texture_only_fres_bntx",
                   "embedded_bntx_offset": offset, "data": payload}
        return
    yield {"source_member": name, "format": media or kind, "data": data}


def command(kind: str, binary: str, source: Path, output: Path):
    if kind in ("bfres", "bntx"):
        return [binary, "DECODE", str(source), "--dest", str(output)]
    if kind == "bwav":
        return [binary, "-i", "-o", str(output), str(source)]
    raise ValueError(f"unsupported media type: {kind}")


def main():
    a = argparse.ArgumentParser(description=__doc__)
    a.add_argument("--root", type=Path, default=Path("."))
    a.add_argument("--source", required=True, help="Original RomFS-relative path e.g. Model/X.zs")
    a.add_argument("--out", type=Path, default=Path("Unpack_L3"))
    a.add_argument("--tool-wmdlt", default="wmdlt")
    a.add_argument("--tool-wimgt", default="wimgt")
    a.add_argument("--tool-vgmstream", default="vgmstream-cli")
    a.add_argument("--require", choices=["bfres", "bntx", "bwav", "any"], default="any")
    a.add_argument("--fail-on-no-conversion", action="store_true")
    a.add_argument("--max-output-mb", type=int, default=128)
    args = a.parse_args()
    root = args.root.resolve()
    rel = member_path(args.source)
    romfs = (root / NCA / "1").resolve()
    original = (romfs / rel).resolve()
    if not original.is_relative_to(romfs) or not original.is_file():
        a.error("source missing or outside original RomFS")
    if original.stat().st_size > MAX_INPUT:
        a.error("source exceeds safe input size")
    src = original.read_bytes()
    source_meta = {"source": args.source, "source_sha256": hexdigest(src),
                   "source_bytes": len(src), "converter_version": VERSION, "members": []}
    dest = (root / args.out / NCA / "1" / rel.parent / (rel.name + ".converted")).resolve()
    if dest.is_relative_to(romfs) or dest == root:
        a.error("destination may not overwrite original RomFS")
    dest.mkdir(parents=True, exist_ok=True)
    binaries = {"bfres": args.tool_wmdlt, "bntx": args.tool_wimgt,
                "bwav": args.tool_vgmstream}
    with tempfile.TemporaryDirectory(prefix="acnh303-media-") as tmp:
        workspace = Path(tmp)
        for index, leaf in enumerate(find_leaf(src, rel.as_posix())):
            data = leaf.pop("data")
            kind = leaf["format"]
            record = {**leaf, "input_bytes": len(data), "input_sha256": hexdigest(data),
                      "status": "partial"}
            if kind in binaries:
                member = member_path(leaf["source_member"])
                # Workstation path is only a temp staging file, not a Git artifact.
                staging = workspace / ("leaf_%05d" % index + "." + kind)
                staging.write_bytes(data)
                leaf_name = Path(leaf["source_member"]).stem
                leaf_name = "".join(ch if ch.isalnum() or ch in "_-" else "_" for ch in leaf_name)[:48]
                outpath = dest / ("leaf_%05d-%s" % (index, leaf_name) + EXT[kind])
                bin_name = binaries[kind]
                try:
                    proc = subprocess.run(command(kind, bin_name, staging, outpath),
                                          capture_output=True, text=True, timeout=180,
                                          check=False)
                    record["tool_exit_code"] = proc.returncode
                    record["tool_stdout_tail"] = proc.stdout[-1500:]
                    record["tool_stderr_tail"] = proc.stderr[-1500:]
                    if proc.returncode != 0:
                        record["error"] = "external converter error"
                    else:
                        # Multi-image BNTX exports leaf_N.img000.png,
                        # leaf_N.img001.png ... rather than the requested
                        # single leaf_N.png. Every image must pass CRC check.
                        outputs = [outpath] if outpath.is_file() else []
                        if kind == "bntx":
                            outputs += sorted(dest.glob(outpath.stem + ".*.png"))
                        outputs = list(dict.fromkeys(outputs))
                        if not outputs:
                            record["error"] = "external converter returned success but no output file"
                        else:
                            validated = []
                            for produced in outputs:
                                if produced.stat().st_size > args.max_output_mb * 1024 * 1024:
                                    raise ValueError("converted file exceeds size cap")
                                info = VALID[EXT[kind][1:]](produced)
                                validated.append({
                                    "path": produced.relative_to(root).as_posix(),
                                    "size_bytes": produced.stat().st_size,
                                    "sha256": hexdigest(produced.read_bytes()),
                                    "validation": info,
                                })
                            record["status"] = "converted"
                            record["output_count"] = len(validated)
                            record["outputs"] = validated
                            record["validation"] = [x["validation"] for x in validated]
                            if len(validated) == 1:
                                record["output"] = validated[0]["path"]
                                record["output_bytes"] = validated[0]["size_bytes"]
                                record["output_sha256"] = validated[0]["sha256"]
                except (ValueError, OSError, subprocess.TimeoutExpired, wave.Error) as exc:
                    record["error"] = f"{type(exc).__name__}: {exc}"
                if record["status"] != "converted":
                    for generated in [outpath, *dest.glob(outpath.stem + ".*.png")]:
                        if generated.exists():
                            generated.unlink()
            source_meta["members"].append(record)
    total = sum(r["status"] == "converted" for r in source_meta["members"])
    source_meta["converted_count"] = total
    source_meta["leaf_count"] = len(source_meta["members"])
    source_meta["status"] = "partial" if (not total or any(x["status"] != "converted" for x in source_meta["members"])) else "converted"
    evidence_path = dest / "_conversion_manifest.json"
    evidence_path.write_text(json.dumps(source_meta, ensure_ascii=False, sort_keys=True, indent=2) + "\n", "utf-8")
    print(json.dumps(source_meta, ensure_ascii=False, indent=2), flush=True)
    if args.fail_on_no_conversion and (not total or args.require != "any" and not any(
            r["format"] == args.require and r["status"] == "converted" for r in source_meta["members"])):
        return 2
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
