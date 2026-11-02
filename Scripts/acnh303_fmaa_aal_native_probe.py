#!/usr/bin/env python3
"""Read-only AArch64 static string/XREF *candidates* for FMAA and AAL.

Never interpret a nearby BL as a file reader or a curve interpolator.
Missing literals do not prove absence of a parser.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from acnh303_round11_elf_xref import parse_elf, survey, locate_xrefs

TERMS = ("FMAA", "FRES", "AnimCurve", "MaterialAnimData", "ParamAnimInfo",
         "tex_srt0", "AAL", "aal::", "BARS", "AMTA")
EXPECTED = "83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"


def probe(path: Path, expected_sha256: str = EXPECTED) -> dict:
    raw = path.read_bytes()
    actual = hashlib.sha256(raw).hexdigest()
    if actual != expected_sha256:
        raise ValueError("ELF bytes do not match the pinned ACNH 3.0.3 ELF SHA256")
    segments = parse_elf(raw)
    hits = survey(raw, segments, list(TERMS))
    xrefs, examined_pages = locate_xrefs(raw, segments, hits)
    return {
        "schema": "acnh303-fmaa-aal-static-string-probe-v1",
        "elf_path": path.as_posix(),
        "elf_bytes": len(raw), "elf_sha256": actual,
        "method": "exact mapped string hits plus ADR/ADRP+ADD/verified mapped pointer candidates",
        "terms": [{
            "term": term, "literal_hits": hits[term]["locations"],
            "candidate_code_references": xrefs.get(term, []),
            "status": "static_xref_only" if xrefs.get(term) else
                      "literal_no_verified_xref" if hits[term]["locations"] else
                      "no_exact_literal_not_proof_of_absence"
        } for term in TERMS],
        "matched_adrp_pages_examined": examined_pages,
        "limitations": ("FMAA AnimCurve/ParamAnimInfo interpolation and tex_srt0 target "
                        "are NOT demonstrated. AAL open/read/close and buffer owner "
                        "require a real game session. Nearby calls are not consumer proof.")
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--elf", type=Path, default=Path("UnPack/0/main.elf"))
    parser.add_argument("--expected-sha256", default=EXPECTED)
    parser.add_argument("--out", type=Path, default=Path("fmaa_aal_static.json"))
    args = parser.parse_args()
    result = probe(args.elf, args.expected_sha256)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2, ensure_ascii=False, sort_keys=True) + "\n",
                        encoding="utf-8")
    print(json.dumps({"ELF": result["elf_sha256"],
                      "hits": [{"term": t["term"], "n_literals": len(t["literal_hits"]),
                                "n_xrefs": len(t["candidate_code_references"])}
                               for t in result["terms"]]}, ensure_ascii=False))


if __name__ == "__main__":
    main()
