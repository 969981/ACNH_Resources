#!/usr/bin/env python3
"""ACNH 3.0.3 Actions-safe, deterministic batch for Model/Layout/Effect/Shader/Sound/EventFlow.

This is an *index/extract* pipeline. BFRES -> GLB, BNTX -> PNG,
PTCL -> editable effects, and BARS -> WAV require verified decoders.
Produces source-relative JSON, bounded raw leaf files and SHA-256 manifests.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import io
import json
import math
import os
from pathlib import Path
import struct
import tempfile
import traceback
from datetime import datetime, timezone

from acnh_formats import FormatError, bounded, detect, decompress, parse_bcsv, parse_byml, parse_msbt, parse_sarc, safe_member_name
from acnh303_bdli import parse_bdli, BdliError

VERSION = "acnh303-assets-0.3"
NCA = "e10617820db06889e1638499478da0de_NCA"
MAX_SOURCE = 256 * 1024 * 1024
MAX_UNPACK = 384 * 1024 * 1024
MAX_MEMBER = 128 * 1024 * 1024
MAX_GRAPH_EVENTS = 100000
FORMATS = {
    b"FRES": "bfres", b"BNTX": "bntx", b"FLYT": "bflyt",
    b"FLAN": "bflan", b"BARS": "bars", b"BWAV": "bwav",
    b"FWAV": "bfwav", b"FSTM": "bfstm", b"PTCL": "ptcl",
    b"BDLI": "bdli",
    b"FSHA": "bfsha", b"BNSH": "bnsh", b"ASB ": "asb",
    b"BY\x00\x00": "byml",
}


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def format_of(data: bytes) -> str:
    return FORMATS.get(data[:4], detect(data))


def jbytes(obj) -> bytes:
    return (json.dumps(obj, indent=2, ensure_ascii=False, sort_keys=True, allow_nan=False) + "\n").encode("utf-8")


def atomic(path: Path, data: bytes):
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(delete=False, dir=path.parent, prefix="._tmp_") as f:
        name = f.name
        f.write(data)
    os.replace(name, path)


def json_value(obj, depth=0):
    """Convert verified evfl parsed fields only; no speculative names."""
    if depth > 12:
        raise FormatError("event metadata nesting exceeds limit")
    if obj is None or isinstance(obj, (str, int, bool)):
        return obj
    if isinstance(obj, float):
        return obj if math.isfinite(obj) else repr(obj)
    if isinstance(obj, (list, tuple)):
        return [json_value(v, depth + 1) for v in obj]
    if isinstance(obj, dict):
        return {str(k): json_value(v, depth + 1) for k, v in obj.items()}
    if hasattr(obj, "name") and hasattr(obj, "sub_name"):
        return {"name": obj.name, "sub_name": obj.sub_name}
    return {"_type": type(obj).__name__, "_string_value": str(obj)}


def parse_evfl(data: bytes) -> dict:
    import evfl
    import evfl.entry_point
    from evfl.util import SeekContext

    # Upstream evfl 1.2 assumes three EntryPoint fields are always zero.
    # ACNH 3.0.3 actually populates those slots in 55 verified resources.
    # Decode subflow indexes and main_event; keep extra pointer values raw.
    extended_by_entrypoint_id = {}
    def acnh_entrypoint_read(self, stream):
        offset = stream.read_u64()
        acnh_ptr_08 = stream.read_u64()
        acnh_ptr_10 = stream.read_u64()
        subflow_count = stream.read_u16()
        acnh_flags_1a = stream.read_u16()
        self.main_event._idx = stream.read_u16()
        reserved_1e = stream.read_u16()
        if reserved_1e != 0 or subflow_count > MAX_GRAPH_EVENTS:
            raise FormatError("invalid ACNH extended EntryPoint header")
        for ptr in (offset, acnh_ptr_08, acnh_ptr_10):
            if ptr and ptr >= len(stream.data):
                raise FormatError("ACNH EntryPoint pointer out of bounds")
        if subflow_count:
            if not offset or offset + subflow_count * 2 > len(stream.data):
                raise FormatError("invalid ACNH subflow index array")
            with SeekContext(stream, offset):
                self._sub_flow_event_indices = [stream.read_u16() for _ in range(subflow_count)]
        # Upstream EntryPoint uses __slots__, so store extras in a local sidecar.
        extended_by_entrypoint_id[id(self)] = {
            "offset_08": acnh_ptr_08, "offset_10": acnh_ptr_10,
            "flags_1a": acnh_flags_1a, "subflow_index_count": subflow_count,
        }
    # Read-only compatibility patch; no evfl serializer modifications.
    evfl.entry_point.EntryPoint._do_read = acnh_entrypoint_read

    e = evfl.EventFlow()
    e.read(data)
    fc = e.flowchart
    if fc is None:
        raise FormatError("EventFlow has no flowchart")
    if len(fc.events) > MAX_GRAPH_EVENTS:
        raise FormatError("EventFlow graph exceeds node limit")
    events = fc.events
    lookup = {id(node): i for i, node in enumerate(events)}
    def ref(v):
        item = getattr(v, "v", None)
        if item is None:
            return None
        if id(item) not in lookup:
            raise FormatError("EventFlow edge references unknown event")
        return lookup[id(item)]
    nodes = []
    for i, event in enumerate(events):
        d = event.data
        kind = type(d).__name__
        node = {"index": i, "name": event.name, "type": kind}
        if kind == "ActionEvent":
            node.update(actor=str(d.actor.v.identifier), action=str(d.actor_action.v),
                        next=ref(d.nxt), params=json_value(d.params.data if d.params else {}))
        elif kind == "SwitchEvent":
            node.update(actor=str(d.actor.v.identifier), query=str(d.actor_query.v),
                        cases=[{"value": k, "target": ref(v)} for k, v in sorted(d.cases.items())],
                        params=json_value(d.params.data if d.params else {}))
        elif kind == "ForkEvent":
            node.update(join=ref(d.join), forks=[ref(v) for v in d.forks])
        elif kind == "JoinEvent":
            node.update(next=ref(d.nxt))
        elif kind == "SubFlowEvent":
            node.update(next=ref(d.nxt), flowchart=d.res_flowchart_name,
                        entrypoint=d.entry_point_name,
                        params=json_value(d.params.data if d.params else {}))
        else:
            raise FormatError(f"unsupported event node {kind}")
        nodes.append(node)
    return {
        "format": "BFEVFL", "decoder": "evfl", "event_flow_name": e.name,
        "flowchart_name": fc.name, "event_count": len(nodes),
        "actors": [
            {"identifier": str(actor.identifier),
             "argument_name": actor.argument_name,
             "actions": [v.v for v in actor.actions],
             "queries": [v.v for v in actor.queries],
             "params": json_value(actor.params.data if actor.params else {})}
            for actor in fc.actors
        ],
        "entrypoints": [{"name": entry.name, "main_event": ref(entry.main_event),
                          "acnh_extended_raw": extended_by_entrypoint_id.get(id(entry), {})}
                        for entry in fc.entry_points],
        "events": nodes,
        "warning": "Decoded graph and parameter values; gameplay meanings require native-code analysis.",
    }


def parse_bars(data: bytes) -> dict:
    """BARS file offset/hash index, without fabricating playable PCM samples."""
    if data[:4] != b"BARS" or len(data) < 16:
        raise FormatError("not BARS")
    file_size, bom, version, count = struct.unpack_from("<IHHI", data, 4)
    if file_size != len(data) or count > 200_000 or 16 + count * 12 > len(data):
        raise FormatError("BARS invalid size or count")
    if bom != 0xFEFF:
        raise FormatError(f"BARS unknown BOM 0x{bom:04X}")
    hashes = [struct.unpack_from("<I", data, 16 + i * 4)[0] for i in range(count)]
    result = []
    offsets = 16 + count * 4
    for i in range(count):
        meta, audio = struct.unpack_from("<II", data, offsets + i * 8)
        if meta >= len(data):
            raise FormatError("BARS invalid AMTA offset")
        magic = bounded(data, meta, 4)
        if magic != b"AMTA":
            raise FormatError("BARS AMTA magic invalid")
        if audio != 0xFFFFFFFF and audio >= len(data):
            raise FormatError("BARS audio offset outside file")
        result.append({
            "crc32": f"{hashes[i]:08X}", "meta_offset": meta,
            "audio_offset": None if audio == 0xFFFFFFFF else audio,
            "audio_magic": data[audio:audio + 4].decode("ascii", "replace") if audio != 0xFFFFFFFF else None,
        })
    return {"format": "BARS", "version": version, "count": count, "assets": result,
            "warning": "File has indexed AMTA/audio offsets; PCM decode and WAV export not implemented."}


class Batch:
    def __init__(self, source: Path, output: Path, category: str, raw_limit: int):
        self.source = source.resolve()
        self.output = output.resolve()
        self.category = category
        self.raw_limit = raw_limit
        self.output.mkdir(parents=True, exist_ok=True)
        self.rows = []
        self.failed = 0

    def save(self, record: dict, rel: Path, data: bytes):
        if rel.is_absolute() or ".." in rel.parts:
            raise FormatError("unsafe output path")
        target = self.output / NCA / "1" / rel
        if not target.resolve().is_relative_to(self.output):
            raise FormatError("output symlink escape")
        atomic(target, data)
        record["outputs"].append({"path": str(Path(NCA) / "1" / rel).replace("\\", "/"),
                                  "bytes": len(data), "sha256": sha(data)})

    def visit(self, name: str, raw: bytes, depth: int, record: dict) -> dict:
        if depth > 4:
            return {"format": format_of(raw), "status": "partial", "note": "maximum archive recursion reached"}
        kind = format_of(raw)
        obj = {"format": kind, "size": len(raw), "sha256": sha(raw)}
        if kind in ("zstd", "yaz0"):
            expanded, codec = decompress(raw, MAX_UNPACK)
            if format_of(expanded) == "bdli" and len(expanded) <= self.raw_limit:
                bdli_rel = Path(record["source_path"]).with_suffix("")
                self.save(record, bdli_rel, expanded)
                obj["lossless_bdli_path"] = bdli_rel.as_posix()
            obj.update({"codec": codec, "uncompressed_size": len(expanded), "inner": self.visit(name, expanded, depth + 1, record)})
            return obj
        if kind == "sarc":
            items, members = parse_sarc(raw)
            obj["members"] = []
            for item, (member_name, content) in zip(items, members):
                node = dict(item)
                node["sha256"] = sha(content)
                # Unique per archive; preserve source-structure.
                member_rel = Path(record["source_path"]).with_suffix("")
                if record["source_path"].endswith(".sarc.zs"):
                    member_rel = member_rel.with_suffix("")
                member_rel = member_rel / "_members" / Path(safe_member_name(member_name))
                if len(content) <= self.raw_limit:
                    self.save(record, member_rel, content)
                    node["raw_extracted"] = True
                else:
                    node["raw_extracted"] = False
                    node["raw_skip_reason"] = "exceeds raw-leaf commit/artifact limit"
                if depth < 4 and format_of(content) in ("sarc", "zstd", "yaz0", "byml", "msbt", "bfevfl", "bars", "bdli"):
                    node["parsed"] = self.visit(name + "/" + member_name, content, depth + 1, record)
                obj["members"].append(node)
            return obj
        if kind == "bdli":
            obj["directory"] = parse_bdli(raw)
            obj["status"] = "partial"
            return obj
        if kind == "bfevfl":
            obj["graph"] = parse_evfl(raw)
            obj["status"] = "converted"
            return obj
        if kind == "bars":
            obj["index"] = parse_bars(raw)
            obj["status"] = "partial"
            return obj
        if kind == "byml":
            obj["tree"] = parse_byml(raw)
            obj["status"] = "converted"
            return obj
        if kind == "msbt":
            obj["messages"] = parse_msbt(raw)
            obj["status"] = "converted"
            return obj
        if kind == "bcsv":
            meta, rows = parse_bcsv(raw)
            obj.update({"columns": meta, "rows": rows, "status": "converted"})
            return obj
        obj.update({"magic_hex": raw[:32].hex(), "status": "partial",
                    "note": "Identified but media pixel/vertex/audio/effect representation NOT decoded"})
        return obj

    def process(self, path: Path):
        rel = path.relative_to(self.source).as_posix()
        result = {"source_path": rel, "source_size": path.stat().st_size,
                  "source_sha256": "", "status": "unsupported", "parser_version": VERSION,
                  "outputs": [], "notes": ""}
        h = hashlib.sha256()
        with path.open("rb") as f:
            for chunk in iter(lambda: f.read(1 << 20), b""):
                h.update(chunk)
        result["source_sha256"] = h.hexdigest()
        if result["source_size"] > MAX_SOURCE:
            result["notes"] = f"source exceeds {MAX_SOURCE} bytes"
            self.rows.append(result)
            return
        try:
            data = path.read_bytes()
            info = self.visit(rel, data, 0, result)
            result["detected_format"] = format_of(data)
            result["status"] = "converted" if info.get("status") == "converted" else "partial"
            result["inner_format"] = info.get("inner", {}).get("format", "")
            output_rel = Path(rel).with_suffix(".json")
            if rel.endswith(".sarc.zs"):
                output_rel = Path(rel[:-len(".sarc.zs")] + ".json")
            # For raw archive strings, preserve the original part of the filename.
            self.save(result, output_rel, jbytes(info))
        except (OSError, ValueError, AssertionError, MemoryError, RecursionError) as exc:
            self.failed += 1
            result["status"] = "failed"
            result["notes"] = "".join(traceback.format_exception(type(exc), exc, exc.__traceback__, limit=8))[-1800:]
        self.rows.append(result)

    def finish(self, output_report: Path, batch_id: str = "single"):
        totals = {}
        for r in self.rows:
            totals[r["status"]] = totals.get(r["status"], 0) + 1
        output_count = sum(len(r["outputs"]) for r in self.rows)
        report = {"category": self.category, "game_version": "3.0.3", "decoder": VERSION,
                  "batch_id": batch_id, "processed": len(self.rows), "statuses": totals,
                  "output_count": output_count,
                  "generated_utc": datetime.now(timezone.utc).isoformat(),
                  "limitations": [
                      "This batch is an actual container/graph/index pass, NOT BFRES mesh to GLB.",
                      "BNTX to PNG, PTCL rendering and BARS to WAV need validated media decoders.",
                      "Only bounded raw member bytes are written; excluded large payloads remain in source assets.",
                  ]}
        report_dir = output_report / self.category / batch_id
        report_dir.mkdir(parents=True, exist_ok=True)
        atomic(report_dir / "manifest.json", jbytes(self.rows))
        atomic(report_dir / "summary.json", jbytes(report))
        with tempfile.NamedTemporaryFile(dir=report_dir, delete=False, mode="w", encoding="utf-8", newline="") as f:
            wr = csv.writer(f)
            wr.writerow(["source_path", "source_size", "source_sha256", "status", "detected_format", "output_count", "notes"])
            for row in self.rows:
                wr.writerow([row["source_path"], row["source_size"], row["source_sha256"], row["status"],
                             row.get("detected_format", ""), len(row["outputs"]), row["notes"]])
            temp = f.name
        os.replace(temp, report_dir / "manifest.csv")
        print(json.dumps(report, ensure_ascii=False, indent=2), flush=True)
        return 1 if self.failed else 0


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--group", required=True, choices=["Model", "BDLI", "Sound", "Misc", "Layout", "Effect", "Shader", "EventFlow"])
    parser.add_argument("--out", type=Path, default=Path("Unpack_Batch"))
    parser.add_argument("--report-dir", type=Path, default=Path("reports"))
    parser.add_argument("--raw-limit-mb", type=int, default=1)
    parser.add_argument("--batch-id", default="single")
    args = parser.parse_args()
    root = args.root.resolve()
    inp = root / NCA / "1"
    output = (root / args.out).resolve()
    if not inp.is_dir() or output.is_relative_to(inp) or inp.is_relative_to(output):
        parser.error("invalid input/output roots")
    group = inp if args.group == "Misc" else inp / args.group
    if not group.is_dir():
        parser.error(f"group missing {group}")
    engine = Batch(inp, output, args.group, args.raw_limit_mb * (1 << 20))
    files = sorted(x for x in group.rglob("*") if x.is_file() and not x.is_symlink()
                   and (args.group != "Misc" or x.relative_to(inp).parts[0] not in ("Model", "BDLI", "Sound")))
    for i, p in enumerate(files, 1):
        engine.process(p)
        if i % 250 == 0:
            print(f"{args.group}: {i}/{len(files)}", flush=True)
    return engine.finish((root / args.report_dir).resolve(), args.batch_id)


if __name__ == "__main__":
    raise SystemExit(main())
