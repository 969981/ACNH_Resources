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
    # Both independently sampled original FCPX v9.3 blobs contain an
    # array of 0x28-byte font-reference records beginning at file+0x40.
    # The word at record+0x04 is an absolute filename offset minus 0x18.
    # This relationship held for all 9/11 records across both source blobs.
    record_start=0x40
    record_stride=0x28
    filename_pointer_field=4
    offset_bias=0x18
    if record_start+record_stride*count>len(data):
        raise ValueError("font records exceed FCPX declared length")
    names=[]
    for i in range(count):
        base=record_start+i*record_stride
        pointer=struct.unpack_from("<I",data,base+filename_pointer_field)[0]
        name_pos=pointer+offset_bias
        if name_pos<record_start+record_stride*count or name_pos>=len(data):
            raise ValueError(f"font record {i} has out-of-bounds filename offset")
        zero=data.find(b"\0",name_pos,min(len(data),name_pos+256))
        if zero<0:
            raise ValueError(f"font record {i} has unterminated name")
        raw=data[name_pos:zero]
        if not raw.endswith(FONT_SUFFIXES) or not re.fullmatch(rb"[A-Za-z0-9_+\-]+[.]bf(?:ttf|otf)",raw):
            raise ValueError(f"font record {i} does not address an exact known font filename")
        name=raw.decode("ascii")
        words=list(struct.unpack_from("<10I",data,base))
        names.append({"index":i,"name":name,"offset":name_pos,
                      "name_pointer_field_file_offset":base+filename_pointer_field,
                      "name_pointer_raw":pointer,"record_file_offset":base,
                      "record_length":record_stride,
                      "record_words_u32_le":words,
                      "record_sha256":hashlib.sha256(data[base:base+record_stride]).hexdigest(),
                      "ext":name.rsplit(".",1)[-1],"reference_only":True})
    # Independently scan for all recognizable filenames; this rejects
    # dropped, duplicate or incidentally embedded pointer targets.
    string_scan=[(m.start(),m.group(0)[:-1].decode("ascii")) for m in TOKEN.finditer(data)]
    if string_scan != [(n["offset"],n["name"]) for n in names]:
        raise ValueError("font pointer-indexed names differ from original string table")
    return {"magic":"FCPX","file_sha256":hashlib.sha256(data).hexdigest(),
            "file_bytes":len(data),"header_size":header_len,
            "version_hex":f"0x{version:08x}","endian":"little",
            "declared_font_reference_count":count,
            "font_reference_table":{"start_file_offset":64,"record_stride":40,"filename_pointer_field_within_record":4,"filename_pointer_bias":24,
                "verified_real_v9_3_blobs":2,"semantic_limit":"order of binary records is not proven to equal fallback priority; record flags remain opaque"},
            "fonts":names,
            "unparsed_binary":{"byte_ranges_not_claimed_decoded":
              "all binary record tables, shape/style mappings and font substitution conditions",
              "raw_prefix_sha256":hashlib.sha256(data[:names[0]["offset"]] if names else data).hexdigest()},
            "scope":"filename references only; no font glyph or character-map extraction"}
