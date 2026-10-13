"""Read-only, bounded parsers for selected ACNH 3.0.3 formats.

Unknown field semantics are deliberately kept as raw values. No write/pack routines.
Python 3.10+. zstandard is optional but required for .zs inputs.
"""
from __future__ import annotations

import io
import struct
from pathlib import PurePosixPath


class FormatError(ValueError):
    pass


def bounded(data: bytes, offset: int, size: int) -> bytes:
    if offset < 0 or size < 0 or offset + size > len(data):
        raise FormatError(f"out of bounds: offset={offset}, size={size}, len={len(data)}")
    return data[offset:offset + size]


def number(data: bytes, offset: int, size: int, byteorder: str = "little") -> int:
    return int.from_bytes(bounded(data, offset, size), byteorder)


def detect(data: bytes) -> str:
    if data.startswith(b"\x28\xb5\x2f\xfd"):
        return "zstd"
    if data.startswith(b"Yaz0"):
        return "yaz0"
    if data.startswith(b"SARC"):
        return "sarc"
    if data[:2] in (b"YB", b"BY"):
        return "byml"
    if len(data) >= 28 and data[12:16] == b"VSCB":
        return "bcsv"
    if data.startswith(b"MsgStdBn"):
        return "msbt"
    if data.startswith(b"MsgPrjBn"):
        return "msbp"
    if data.startswith(b"BFEVFL"):
        return "bfevfl"
    if data.startswith(b"FRES"):
        return "bfres"
    if data.startswith(b"BNTX"):
        return "bntx"
    if data.startswith(b"FLYT"):
        return "bflyt"
    if data.startswith(b"FLAN"):
        return "bflan"
    if data.startswith(b"PK\x03\x04"):
        return "zip"
    return "unknown"


def decompress(data: bytes, limit: int = 256 * 1024 * 1024) -> tuple[bytes, str]:
    kind = detect(data)
    if kind == "zstd":
        try:
            import zstandard  # type: ignore
        except ImportError as exc:
            raise FormatError("zstandard unavailable: python -m pip install zstandard") from exc
        try:
            with zstandard.ZstdDecompressor().stream_reader(io.BytesIO(data)) as stream:
                output = stream.read(limit + 1)
        except zstandard.ZstdError as exc:
            raise FormatError(f"zstd decompression: {exc}") from exc
        if len(output) > limit:
            raise FormatError("zstd output exceeds expansion limit")
        return output, "zstd"
    if kind == "yaz0":
        size = number(data, 4, 4, "big")
        if size > limit:
            raise FormatError("Yaz0 output exceeds expansion limit")
        result = bytearray()
        at = 16
        mask = 0
        flags = 0
        while len(result) < size:
            if mask == 0:
                flags = number(data, at, 1)
                at += 1
                mask = 0x80
            if flags & mask:
                result.extend(bounded(data, at, 1))
                at += 1
            else:
                a, b = bounded(data, at, 2)
                at += 2
                distance = ((a & 0x0F) << 8) | b
                length = a >> 4
                if length == 0:
                    length = number(data, at, 1) + 0x12
                    at += 1
                else:
                    length += 2
                pos = len(result) - distance - 1
                if pos < 0 or len(result) + length > size:
                    raise FormatError("Yaz0 invalid backreference/length")
                for _ in range(length):
                    result.append(result[pos])
                    pos += 1
            mask >>= 1
        return bytes(result), "yaz0"
    raise FormatError("not a supported compressed stream")


def parse_bcsv(data: bytes, max_rows: int = 1_000_000) -> tuple[dict, list[dict]]:
    if detect(data) != "bcsv":
        raise FormatError("not ACNH VSCB")
    rows = number(data, 0, 4)
    row_size = number(data, 4, 4)
    cols = number(data, 8, 2)
    start = 0x1C + cols * 8
    if rows > max_rows or cols > 4096 or row_size < 4 or row_size > (1 << 20):
        raise FormatError("BCSV dimensions out of range")
    bounded(data, start, rows * row_size)
    fields = []
    for i in range(cols):
        h = number(data, 0x1C + i * 8, 4)
        offset = number(data, 0x20 + i * 8, 4)
        if offset < 4 or offset >= row_size:
            raise FormatError(f"BCSV invalid column offset: {offset}")
        fields.append({"name": f"hash_{h:08X}", "crc32": f"{h:08X}", "offset": offset})
    unique_offsets = sorted(set(f["offset"] for f in fields)) + [row_size]
    for f in fields:
        index = unique_offsets.index(f["offset"])
        f["width_hint"] = unique_offsets[index + 1] - f["offset"]
    records = []
    for i in range(rows):
        row_start = start + i * row_size
        values = {"_row_index": i, "_row_offset_raw": number(data, row_start, 4)}
        for f in fields:
            width = f["width_hint"]
            raw = bounded(data, row_start + f["offset"], width)
            if width in (1, 2, 4, 8):
                # Type is NOT encoded in the file: unsigned raw storage only.
                value: str = str(int.from_bytes(raw, "little"))
            elif raw and b"\x00" in raw:
                head = raw.split(b"\x00", 1)[0]
                try:
                    val = head.decode("utf-8")
                    value = val if val.isprintable() else "hex:" + raw.hex()
                except UnicodeDecodeError:
                    value = "hex:" + raw.hex()
            else:
                value = "hex:" + raw.hex()
            values[f["name"]] = value
        records.append(values)
    meta = {
        "format": "ACNH_BCSV_VSCB", "row_count": rows,
        "row_size": row_size, "column_count": cols,
        "columns": fields,
        "warning": "Column names are CRC32 hashes. Original names and numeric/string types are NOT encoded; widths are inferred.",
    }
    return meta, records


def parse_byml(data: bytes, max_nodes: int = 300_000) -> dict:
    if detect(data) != "byml" or len(data) < 16:
        raise FormatError("invalid BYML")
    order = "little" if data[:2] == b"YB" else "big"
    endian = "<" if order == "little" else ">"
    u32 = lambda p: number(data, p, 4, order)
    version = number(data, 2, 2, order)
    name_root, string_root, doc_root = u32(4), u32(8), u32(12)
    if version > 10 or doc_root == 0:
        raise FormatError("BYML unsupported header")
    def strings(offset: int) -> list[str]:
        if offset == 0:
            return []
        if bounded(data, offset, 1)[0] != 0xC2:
            raise FormatError("BYML invalid string table")
        count = number(data, offset + 1, 3, order)
        if count > max_nodes:
            raise FormatError("BYML oversized string table")
        result = []
        for i in range(count):
            relative = u32(offset + 4 + i * 4)
            start = offset + relative
            bounded(data, start, 1)
            end = data.find(b"\x00", start)
            if end < 0 or end - start > (1 << 20):
                raise FormatError("BYML unterminated/oversize string")
            result.append(data[start:end].decode("utf-8", "replace"))
        return result
    names = strings(name_root)
    values = strings(string_root)
    steps = 0
    def parse_value(kind: int, raw: int, depth: int, trail: frozenset[int]):
        nonlocal steps
        steps += 1
        if steps > max_nodes or depth > 64:
            raise FormatError("BYML recursion/size limit")
        if kind == 0xFF:
            return None
        if kind == 0xA0:
            if raw >= len(values):
                raise FormatError("BYML invalid string index")
            return values[raw]
        if kind == 0xD0:
            return bool(raw)
        if kind == 0xD1:
            return struct.unpack(endian + "i", raw.to_bytes(4, order))[0]
        if kind == 0xD2:
            return struct.unpack(endian + "f", raw.to_bytes(4, order))[0]
        if kind == 0xD3:
            return raw
        if kind in (0xD4, 0xD5, 0xD6):
            fmt = {0xD4: "q", 0xD5: "Q", 0xD6: "d"}[kind]
            return struct.unpack(endian + fmt, bounded(data, raw, 8))[0]
        if kind in (0xA1, 0xA2):
            n = u32(raw)
            p = raw + (8 if kind == 0xA2 else 4)
            if n > 8 * 1024 * 1024:
                raise FormatError("BYML binary data exceeds limit")
            blob = bounded(data, p, n)
            return {"_binary_hex": blob.hex(), **({"_parameter": u32(raw + 4)} if kind == 0xA2 else {})}
        if kind not in (0xC0, 0xC1):
            raise FormatError(f"BYML unsupported node 0x{kind:02X}")
        if raw in trail:
            raise FormatError("BYML cyclic node reference")
        if bounded(data, raw, 1)[0] != kind:
            raise FormatError("BYML node type mismatch")
        count = number(data, raw + 1, 3, order)
        if count > max_nodes:
            raise FormatError("BYML node count exceeds limit")
        seen = trail | {raw}
        if kind == 0xC0:
            base = (raw + 4 + count + 3) & ~3
            types = bounded(data, raw + 4, count)
            bounded(data, base, count * 4)
            return [parse_value(t, u32(base + i * 4), depth + 1, seen) for i, t in enumerate(types)]
        bounded(data, raw + 4, count * 8)
        obj = {}
        for i in range(count):
            pos = raw + 4 + i * 8
            key = number(data, pos, 3, order)
            kind_child = data[pos + 3]
            if key >= len(names):
                raise FormatError("BYML invalid dictionary key index")
            obj[names[key]] = parse_value(kind_child, u32(pos + 4), depth + 1, seen)
        return obj
    root_type = bounded(data, doc_root, 1)[0]
    return {
        "format": "BYML", "version": version, "byteorder": order,
        "root": parse_value(root_type, doc_root, 0, frozenset()),
    }


def safe_member_name(name: str) -> str:
    if not name or "\x00" in name or "\\" in name or name.startswith("/"):
        raise FormatError("unsafe archive name")
    parts = PurePosixPath(name).parts
    if any(p in ("", ".", "..") for p in parts) or len(parts) > 32 or len(name) > 512:
        raise FormatError("unsafe archive path")
    if any(":" in p or p.endswith(" ") or p.endswith(".") for p in parts):
        raise FormatError("nonportable archive path")
    return "/".join(parts)


def parse_sarc(data: bytes, max_members: int = 30_000) -> tuple[list[dict], list[tuple[str, bytes]]]:
    if detect(data) != "sarc" or len(data) < 0x24:
        raise FormatError("not SARC")
    order = "little" if data[6:8] == b"\xff\xfe" else "big" if data[6:8] == b"\xfe\xff" else ""
    if not order:
        raise FormatError("invalid SARC BOM")
    u16 = lambda p: number(data, p, 2, order)
    u32 = lambda p: number(data, p, 4, order)
    header_len = u16(4)
    file_size, data_start = u32(8), u32(12)
    if header_len < 0x14 or file_size > len(data) or data_start > len(data):
        raise FormatError("invalid SARC header")
    sfat = header_len
    if bounded(data, sfat, 4) != b"SFAT":
        raise FormatError("SARC missing SFAT")
    count = u16(sfat + 6)
    if count > max_members:
        raise FormatError("too many SARC members")
    node_start = sfat + u16(sfat + 4)
    sfnt = node_start + count * 0x10
    if bounded(data, sfnt, 4) != b"SFNT":
        raise FormatError("SARC missing SFNT")
    name_start = sfnt + u16(sfnt + 4)
    manifest = []
    members = []
    used = set()
    for i in range(count):
        entry = node_start + i * 16
        key, attr, begin, end = (u32(entry + k) for k in (0, 4, 8, 12))
        if begin > end or data_start + end > len(data):
            raise FormatError("invalid SARC member bounds")
        if attr & 0x01000000:
            name_pos = name_start + (attr & 0x00FFFFFF) * 4
            bounded(data, name_pos, 1)
            end_name = data.find(b"\x00", name_pos)
            if end_name < 0 or end_name - name_pos > 512:
                raise FormatError("bad SARC member name")
            name = data[name_pos:end_name].decode("utf-8", "strict")
        else:
            name = f"unnamed_{key:08x}_{i:05d}.bin"
        name = safe_member_name(name)
        if name.casefold() in used:
            raise FormatError("SARC duplicate member path")
        used.add(name.casefold())
        raw = bounded(data, data_start + begin, end - begin)
        manifest.append({"name": name, "hash": f"{key:08x}", "size": len(raw), "detected_format": detect(raw)})
        members.append((name, raw))
    return manifest, members


def parse_msbt(data: bytes) -> dict:
    if detect(data) != "msbt":
        raise FormatError("not MSBT")
    if len(data) < 32:
        raise FormatError("short MSBT")
    order = "little" if data[8:10] == b"\xff\xfe" else "big" if data[8:10] == b"\xfe\xff" else ""
    if not order:
        raise FormatError("invalid MSBT BOM")
    u16 = lambda p: number(data, p, 2, order)
    u32 = lambda p: number(data, p, 4, order)
    encoding = data[12]
    section_count = u16(14)
    if section_count > 64:
        raise FormatError("unreasonable MSBT section count")
    at = 0x20
    labels = {}
    strings = []
    sections = []
    for _ in range(section_count):
        tag = bounded(data, at, 4).decode("ascii", "replace")
        size = u32(at + 4)
        start = at + 16
        section = bounded(data, start, size)
        sections.append({"tag": tag, "size": size})
        if tag == "TXT2":
            n = number(section, 0, 4, order)
            if n > 200_000:
                raise FormatError("MSBT too many strings")
            offsets = [number(section, 4 + i * 4, 4, order) for i in range(n)]
            for i, off in enumerate(offsets):
                end = offsets[i + 1] if i + 1 < n else len(section)
                raw = bounded(section, off, max(0, end - off))
                if encoding == 1:
                    text = raw.decode("utf-16-le" if order == "little" else "utf-16-be", "replace").rstrip("\x00")
                else:
                    text = raw.decode("utf-8", "replace").rstrip("\x00")
                strings.append(text)
        elif tag == "LBL1":
            groups = number(section, 0, 4, order)
            if groups > 100_000:
                raise FormatError("MSBT too many label groups")
            for group in range(groups):
                count = number(section, 4 + group * 8, 4, order)
                off = number(section, 8 + group * 8, 4, order)
                if count > 200_000:
                    raise FormatError("MSBT too many labels")
                for _ in range(count):
                    length = number(section, off, 1)
                    name = bounded(section, off + 1, length).decode("utf-8", "replace")
                    idx = number(section, off + 1 + length, 4, order)
                    labels[idx] = name
                    off += 1 + length + 4
        at = (start + size + 15) & ~15
    return {
        "format": "MSBT", "byteorder": order,
        "text_encoding": "utf16" if encoding == 1 else "utf8",
        "sections": sections,
        "entries": [{"index": i, "label": labels.get(i), "text": s} for i, s in enumerate(strings)],
    }


def inspect_binary(data: bytes) -> dict:
    kind = detect(data)
    if kind == "unknown":
        raise FormatError("unknown binary format")
    return {
        "format": kind, "size": len(data), "magic_hex": data[:16].hex(),
        "status": "structure_only",
        "warning": "Header identification only; no decoded node graph or texture/audio pixels.",
    }
