#!/usr/bin/env python3
"""Audited, resumable external ACNH icon import. No 3.0.3 native provenance claim.

Reads the user supplied canonical expected filenames already indexed in
assets/catalog/expected-png-names.txt. Fetches *actual* PNG pixels from the
independently verified ACNH community image services, validates CRC and full
Pillow pixel decoding, records URL and SHA-256, and never synthesizes PNGs.

Only known HTTPS image hosts are used; 404, invalid pixels, name conflicts and
network errors are tracked as unsuccessful sources. Re-running is idempotent.
"""
from __future__ import annotations

import argparse
import hashlib
import io
import json
import os
import socket
import time
import urllib.error
import urllib.parse
import urllib.request
from datetime import datetime, timezone
from pathlib import Path

from PIL import Image, UnidentifiedImageError
from acnh303_assets import load_catalog, png_info

MAX_RESPONSE = 4 * 1024 * 1024
VALID_HOSTS = {"acnhcdn.com", "img.iswitchplus.com"}
USER_AGENT = "ACNH-Resources-source-audit/1.0 (verification and provenance)"


class LimitedRedirect(urllib.request.HTTPRedirectHandler):
    def redirect_request(self, req, fp, code, msg, headers, newurl):
        p = urllib.parse.urlsplit(newurl)
        if p.scheme != "https" or p.hostname not in VALID_HOSTS:
            raise ValueError(f"blocked untrusted redirect to {p.netloc}")
        return super().redirect_request(req, fp, code, msg, headers, newurl)


def candidates(filename: str) -> list[tuple[str, str]]:
    safe = urllib.parse.quote(filename, safe="")
    paths = []
    if filename.startswith(("Ftr", "Bromide", "Poster", "Room", "Rug")):
        paths.append(("acnhcdn-FtrIcon", f"https://acnhcdn.com/latest/FtrIcon/{safe}"))
    if filename.startswith(("Tops", "Cap", "Bottoms", "Shoes", "Socks",
                            "Accessory", "Bag", "Umbrella")):
        paths.append(("acnhcdn-ClosetIcon", f"https://acnhcdn.com/latest/ClosetIcon/{safe}"))
    paths.append(("iswitchplus", f"https://img.iswitchplus.com/acnh/{safe}"))
    return paths


def verify_pixels(data: bytes) -> dict:
    if len(data) < 64 or len(data) > MAX_RESPONSE:
        raise ValueError("remote PNG bytes outside limits")
    if not data.startswith(b"\x89PNG\r\n\x1a\n"):
        raise ValueError("not PNG signature")
    with Image.open(io.BytesIO(data)) as img:
        img.load()
        if img.format != "PNG":
            raise ValueError("not a decoded PNG image")
        w, h = img.size
        if not (24 <= w <= 4096 and 24 <= h <= 4096 and w * h <= 4_194_304):
            raise ValueError("invalid icon dimensions")
        rgba = img.convert("RGBA")
        if rgba.getbbox() is None:
            raise ValueError("fully transparent empty image")
    return {"width": w, "height": h, "bytes": len(data),
            "sha256": hashlib.sha256(data).hexdigest(),
            "full_pixel_decode": "Pillow.Image.load"}


def retrieve(filename: str, delay_seconds: float, attempts: int, last_request: list[float]) -> dict:
    errors = []
    opener = urllib.request.build_opener(LimitedRedirect())
    for provider, url in candidates(filename):
        for retry in range(attempts):
            to_wait = max(0, delay_seconds - (time.monotonic() - last_request[0]))
            if to_wait:
                time.sleep(to_wait)
            last_request[0] = time.monotonic()
            try:
                request = urllib.request.Request(url, headers={
                    "User-Agent": USER_AGENT, "Accept": "image/png",
                })
                with opener.open(request, timeout=15) as response:
                    final_url = response.geturl()
                    host = urllib.parse.urlsplit(final_url).hostname
                    if host not in VALID_HOSTS:
                        raise ValueError("unexpected remote image host")
                    content_type = response.headers.get("Content-Type", "").split(";")[0].strip().lower()
                    if content_type not in {"image/png", "application/octet-stream"}:
                        raise ValueError(f"unexpected content-type: {content_type}")
                    raw = response.read(MAX_RESPONSE + 1)
                    meta = verify_pixels(raw)
                    return {"success": True, "provider": provider,
                            "url": url, "final_url": final_url,
                            "content_type": content_type, "png": raw, **meta}
            except urllib.error.HTTPError as err:
                errors.append({"provider": provider, "code": err.code})
                if err.code in {404, 410}:
                    break
                if err.code == 429:
                    time.sleep(3)
                if err.code not in (429, 500, 502, 503, 504):
                    break
            except (urllib.error.URLError, TimeoutError, socket.timeout, ValueError,
                    OSError, UnidentifiedImageError) as err:
                errors.append({"provider": provider, "error": str(err)[:200]})
                if isinstance(err, ValueError):
                    break
    return {"success": False, "failures": errors}


def store_png(output: Path, data: bytes, metadata: dict) -> str:
    if output.exists():
        old = png_info(output)
        if old["sha256"] != metadata["sha256"]:
            return "existing_different_png_never_overwrite"
        return "already_same_png"
    output.parent.mkdir(parents=True, exist_ok=True)
    temporary = output.with_suffix(".partial")
    try:
        with temporary.open("wb") as stream:
            stream.write(data)
        if png_info(temporary)["sha256"] != metadata["sha256"]:
            raise ValueError("post-download PNG CRC/SHA-256 mismatch")
        os.replace(temporary, output)
    finally:
        temporary.unlink(missing_ok=True)
    return "created_verified_png"


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--catalog", type=Path, default=Path("assets/catalog/expected-png-names.txt"))
    parser.add_argument("--output", type=Path, default=Path("assets/images/items"))
    parser.add_argument("--manifest-dir", type=Path, default=Path("assets/evidence/icon-cdn"))
    parser.add_argument("--cursor", type=Path, default=Path("assets/evidence/icon-cdn/next-offset.json"))
    parser.add_argument("--prefix", default="", help="Subset by exact filename prefix; does not advance main cursor")
    parser.add_argument("--offset", default="auto", help="Integer index or auto for saved cursor")
    parser.add_argument("--max-count", type=int, default=500)
    parser.add_argument("--delay", type=float, default=0.18, help="Min delay between source requests")
    parser.add_argument("--retries", type=int, default=2)
    parser.add_argument("--total-byte-limit-mb", type=int, default=128)
    args = parser.parse_args()
    if not (1 <= args.max_count <= 2000 and .10 <= args.delay <= 30 and
            1 <= args.retries <= 3 and 10 <= args.total_byte_limit_mb <= 512):
        parser.error("invalid bounded request/output parameters")
    names = [x for x in load_catalog(args.catalog) if x.startswith(args.prefix)]
    if args.offset == "auto":
        if args.prefix:
            offset = 0
        elif args.cursor.is_file():
            cursor = json.loads(args.cursor.read_text("utf-8"))
            if cursor.get("catalog_sha256") != hashlib.sha256(args.catalog.read_bytes()).hexdigest():
                parser.error("catalog changed: explicit reset required")
            offset = int(cursor["next_offset"])
        else:
            offset = 0
    else:
        offset = int(args.offset)
    if not (0 <= offset <= len(names)):
        parser.error("offset outside catalog")
    batch = names[offset:offset + args.max_count]
    args.manifest_dir.mkdir(parents=True, exist_ok=True)
    rows = []
    rate = [0.]
    consumed_bytes = 0
    for idx, filename in enumerate(batch, start=offset):
        output = args.output / filename
        entry = {"index": idx, "filename": filename}
        if output.is_file():
            try:
                existing = png_info(output)
                entry.update(status="existing_png", **existing)
                rows.append(entry)
                continue
            except ValueError as e:
                entry["existing_invalid"] = str(e)
                entry["status"] = "invalid_existing_png_never_overwrite"
                rows.append(entry)
                continue
        result = retrieve(filename, args.delay, args.retries, rate)
        if result["success"]:
            raw = result.pop("png")
            if consumed_bytes + len(raw) > args.total_byte_limit_mb * 1024 * 1024:
                entry["status"] = "batch_byte_limit_exceeded"
                entry["bytes"] = len(raw)
                rows.append(entry)
                break
            consumed_bytes += len(raw)
            status = store_png(output, raw, result)
            result.pop("success")
            entry.update(result)
            entry["status"] = status
            entry["native_game_icon_verified"] = False
            entry["provenance"] = "downloaded_community_icon_not_original_game_renderer"
        else:
            entry["status"] = "no_verified_remote_png"
            entry["failures"] = result["failures"]
        rows.append(entry)
        if len(rows) % 50 == 0:
            print(json.dumps({"progress":len(rows),"of":len(batch),
                              "created":sum(r.get("status") == "created_verified_png" for r in rows),
                              "missing":sum(r.get("status") == "no_verified_remote_png" for r in rows)}), flush=True)
    next_offset = offset + len(rows)
    manifest = {
        "schema": "acnh303_verified_external_icon_import_v1",
        "generated_utc": datetime.now(timezone.utc).isoformat(),
        "source_listing_count": len(names),
        "source_listing_sha256": hashlib.sha256(args.catalog.read_bytes()).hexdigest(),
        "requested_offset": offset,
        "next_offset": next_offset,
        "requested_limit": args.max_count,
        "prefix": args.prefix,
        "images_created": sum(r["status"] == "created_verified_png" for r in rows),
        "already_existing": sum(r["status"] == "existing_png" for r in rows),
        "no_verified_remote_png": sum(r["status"] == "no_verified_remote_png" for r in rows),
        "all_external_images_unverified_as_native_game_icons": True,
        "results": rows
    }
    key = "prefix-" + args.prefix if args.prefix else "batch"
    key = "".join(c for c in key if c.isalnum() or c in "_-")[:55]
    manifest_path = args.manifest_dir / f"{key}-{offset:06d}-{next_offset:06d}.json"
    manifest_path.write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    if not args.prefix and args.offset == "auto":
        args.cursor.write_text(json.dumps({
            "schema": "acnh303_cdn_catalog_cursor_v1",
            "catalog_sha256": hashlib.sha256(args.catalog.read_bytes()).hexdigest(),
            "next_offset": next_offset,
            "total_names": len(names),
            "first_pass_complete": next_offset == len(names)
        }, indent=2) + "\n", "utf-8")
    print(json.dumps({"manifest": str(manifest_path), "total_names": len(names),
                      "next_offset": next_offset, "created": manifest["images_created"],
                      "existing": manifest["already_existing"],
                      "missing": manifest["no_verified_remote_png"]}, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
