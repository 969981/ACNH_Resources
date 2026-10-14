#!/usr/bin/env python3
"""Read-only ACNH FCPX v9.3 font-reference configuration -> JSON.

Do NOT interpret FCPX as a TTF/OTF or claim glyph images exist here.
These files refer to .bfttf / .bfotf assets and store additional
unreversed binary records. Only verified header and filename references
are decoded. The initial 41-Layout corpus contains two unique FCPX blobs.
"""
import hashlib
import re
import struct

FONT_SUFFIXES=(b".bfttf",b".bfotf")
TOKEN=re.compile(rb"[A-Za-z0-9_+\-]+[.]bf(?:ttf|otf)\x00")
MAX_FONT_NAMES=4096
MAX_FCPX=16*1024*1024

def parse_fcpx(data):
    if not isinstance(data,bytes) or len(data)<32 or len(data)>MAX_FCPX or data[:4]!=b"FCPX":
        raise ValueError("invalid FCPX font configuration signature/size")
    if data[4:6]!=b"\xff\xfe":raise ValueError("unsupported FCPX byte-order mark")
    header_len=struct.unpack_from("<H",data,6)[0]
    version=struct.unpack_from("<I",data,8)[0]
    declared_size=struct.unpack_from("<I",data,12)[0]
    if header_len!=0x14 or declared_size!=len(data):
        raise ValueError("invalid FCPX header / declared file size")
    count=struct.unpack_from("<I",data,0x24)[0]
    if count>MAX_FONT_NAMES:
        raise ValueError("unreasonable font-name count")
    names=[]
    for match in TOKEN.finditer(data):
        name=match.group(0)[:-1].decode("ascii")
        names.append({"name":name,"offset":match.start(),
                      "ext":name.rsplit(".",1)[-1],"reference_only":True})
    if len(names)!=count:
        raise ValueError(f"FCPX +0x24 font count {count} != recoverable names {len(names)}")
    if any(item["offset"]<0x30 for item in names):
        raise ValueError("font string overlaps fixed-size fields")
    return {"magic":"FCPX","file_sha256":hashlib.sha256(data).hexdigest(),
            "file_bytes":len(data),"header_size":header_len,
            "version_hex":f"0x{version:08x}","endian":"little",
            "declared_font_reference_count":count,
            "fonts":names,
            "unparsed_binary":{"byte_ranges_not_claimed_decoded":
              "all binary record tables, shape/style mappings and font substitution conditions",
              "raw_prefix_sha256":hashlib.sha256(data[:names[0]["offset"]] if names else data).hexdigest()},
            "scope":"filename references only; no font glyph or character-map extraction"}
