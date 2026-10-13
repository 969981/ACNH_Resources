"""GitHub Actions ACNH 3.0.3 read-only format probes, no file output."""
import hashlib
import json
from pathlib import Path
from acnh_formats import detect, decompress, parse_sarc

NCA = "e10617820db06889e1638499478da0de_NCA"
SAMPLES = [
    "Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs",
    "Layout/Bell.Nin_NX_NVN.zs",
    "Effect/Park_Idr.Nin_NX_NVN.szs",
    "Shader/Park_Proc.Nin_NX_NVN.release.szs",
    "Sound/Resource/AirportDemoAirplaneShadow.bars",
    "EventFlow/1PArbeitExplain5.bfevfl",
]


def probe_one(name):
    path = Path(NCA) / "1" / name
    raw = path.read_bytes()
    obj = {"path": name, "source_size": len(raw), "sha256": hashlib.sha256(raw).hexdigest(),
           "original_magic": raw[:16].hex(), "detected": detect(raw)}
    try:
        if detect(raw) in ("zstd", "yaz0"):
            data, codec = decompress(raw)
            obj.update({"codec": codec, "decompressed_size": len(data), "inner_magic": data[:32].hex(),
                        "inner_ascii": repr(data[:16]), "inner_detect": detect(data)})
        else:
            data = raw
        if detect(data) == "sarc":
            records, members = parse_sarc(data)
            obj["sarc_count"] = len(records)
            obj["first_members"] = records[:5]
        if name.endswith(".bfevfl"):
            import evfl
            e = evfl.EventFlow()
            e.read(data)
            fc = e.flowchart
            obj["evfl"] = {"name": e.name, "flowchart": fc.name if fc else None,
                           "actors": len(fc.actors) if fc else 0,
                           "events": len(fc.events) if fc else 0,
                           "entrypoints": [v.name for v in fc.entry_points] if fc else []}
    except Exception as error:
        obj["error"] = f"{type(error).__name__}: {error}"
    return obj


def main():
    for path in SAMPLES:
        result = probe_one(path)
        print(json.dumps(result, ensure_ascii=False, sort_keys=True), flush=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
