"""ACNH 3.0.3 native BDLI/LBLI structure parser, read-only, bounds checked.

Do not interpret the counts/hash fields as dialogue semantics without independent
native-code evidence. The uncompressed .bdli is the lossless intermediate.
"""
from __future__ import annotations
import hashlib
import struct


class BdliError(ValueError):
    pass


def parse_bdli(data: bytes) -> dict:
    if len(data) < 20 or data[:4] != b"BDLI":
        raise BdliError("BDLI header missing")
    version, section_count = struct.unpack_from("<HH", data, 4)
    reserved, header_start, content_offset = struct.unpack_from("<III", data, 8)
    if version not in (2,) or section_count > 32768:
        raise BdliError("unsupported BDLI version or implausible section count")
    if header_start != 20 or content_offset != header_start + section_count * 16 or content_offset > len(data):
        raise BdliError("invalid BDLI section header directory")
    descriptors = []
    offsets = []
    for i in range(section_count):
        p = header_start + i * 16
        magic, count, relative, ident = struct.unpack_from("<4sIII", data, p)
        if magic != b"LBLI":
            raise BdliError(f"unsupported BDLI section {i}: {magic!r}")
        abs_offset = header_start + relative
        if abs_offset < content_offset or abs_offset > len(data):
            raise BdliError(f"BDLI section {i} payload offset out of bounds")
        offsets.append(abs_offset)
        descriptors.append({
            "index": i, "tag": magic.decode("ascii"),
            "count_raw": count, "identifier_hex": f"{ident:08x}",
            "offset_relative_to_directory": relative,
            "offset_absolute": abs_offset,
        })
    all_starts = sorted(set(offsets))
    for entry in descriptors:
        start = entry["offset_absolute"]
        next_start = next((o for o in all_starts if o > start), len(data))
        chunk = data[start:next_start]
        entry["byte_length"] = len(chunk)
        entry["sha256"] = hashlib.sha256(chunk).hexdigest()
        # The complete, exact raw BDLI is exported separately by the dispatcher.
        entry["first_32_bytes_hex"] = chunk[:32].hex()
    return {
        "format": "BDLI", "version": version, "section_count": section_count,
        "reserved_u32": reserved, "directory_offset": header_start,
        "payload_offset": content_offset, "file_size": len(data),
        "sections": descriptors,
        "status": "structure_only",
        "note": "Section types/counts/CRC-like identifiers not semantically resolved; exact decompressed BDLI retained.",
    }
