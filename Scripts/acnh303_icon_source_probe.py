#!/usr/bin/env python3
"""Read-only smoke test of independent icon image sources; does not treat names as proof."""
import argparse, hashlib, io, json, urllib.request, urllib.error
from pathlib import Path
from PIL import Image

PROBES = [
    ("acnhcdn", "https://acnhcdn.com/latest/FtrIcon/FtrBabybed_Remake_0_0.png"),
    ("acnhcdn", "https://acnhcdn.com/latest/FtrIcon/FtrBabybed_Remake_1_1.png"),
    ("acnhcdn", "https://acnhcdn.com/latest/FtrIcon/FtrAntiquePhoneW_Remake_2_0.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/FtrBabybed_Remake_0_0.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/FtrBabybed.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/FtrArtHunterSnow.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/BromideNpcNmlAnt00_Remake_0_0.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/TopsTexMarinesuitNormalLNook0.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/CapBangsBear0.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/NpcNmlAnt00.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/PosterNpcNmlAnt00.png"),
    ("iswitchplus", "https://img.iswitchplus.com/acnh/ToolAngling.png"),
    ("acnhcdn", "https://acnhcdn.com/latest/ClosetIcon/TopsTexMarinesuitNormalLNook0.png"),
    ("acnhcdn", "https://acnhcdn.com/latest/FtrIcon/BromideNpcNmlAnt00_Remake_0_0.png"),
    ("acnhcdn", "https://acnhcdn.com/latest/ItemIcon/ToolAngling.png"),
]

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--out", default="assets/evidence/icon-cdn-smoke.json")
    args = p.parse_args()
    rows = []
    for provider, url in PROBES:
        row = {"provider": provider, "url": url, "verified_png": False}
        try:
            req = urllib.request.Request(url, headers={"User-Agent":"ACNH-Resources-source-audit/1.0", "Accept":"image/png"})
            with urllib.request.urlopen(req, timeout=15) as res:
                row["http_status"] = res.status
                row["content_type"] = res.headers.get("Content-Type","")
                data = res.read(4*1024*1024+1)
            if len(data) > 4*1024*1024: raise ValueError("response size cap exceeded")
            if not data.startswith(b"\x89PNG\r\n\x1a\n"): raise ValueError("not PNG signature")
            with Image.open(io.BytesIO(data)) as im:
                im.load()
                row["width"], row["height"] = im.size
                row["format"] = im.format
            row["verified_png"] = True
            row["sha256"] = hashlib.sha256(data).hexdigest()
            row["size_bytes"] = len(data)
        except Exception as err:
            row["error"] = str(err)[:260]
        rows.append(row)
        print(json.dumps(row, ensure_ascii=False), flush=True)
    path=Path(args.out);path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps({"schema":"acnh303_external_icon_probe_v1","tested":len(rows),"verified":sum(x["verified_png"] for x in rows),"probes":rows},indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
