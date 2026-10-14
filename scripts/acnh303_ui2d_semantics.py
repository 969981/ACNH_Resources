"""Bounded, evidence-conscious material, parts and control section metadata for Switch FLYT v9.

No proprietary shader flags, compositing pipeline, glyph rasterization or
real in-game UI preview is inferred. Section data is read-only.
"""
import hashlib
import math
import struct

MAX_ROWS=4096
def val(d,off,n,end):
    if off<0 or n<0 or off+n>end or end>len(d):raise ValueError(f"out-of-bounds section access at {off}")
    return d[off:off+n]
def u16(d,p,end):return struct.unpack("<H",val(d,p,2,end))[0]
def u32(d,p,end):return struct.unpack("<I",val(d,p,4,end))[0]
def sf(d,p,end):
    x=struct.unpack("<f",val(d,p,4,end))[0]
    return x if math.isfinite(x) else None
def name(d,p,n,end):return val(d,p,n,end).split(b"\0",1)[0].decode("utf-8","replace")
def hash_bytes(d,p,end):return hashlib.sha256(d[p:end]).hexdigest()

def material_table(d,p,end):
    if end-p<12:raise ValueError("short mat1")
    count=u32(d,p+8,end)
    if count>MAX_ROWS or p+12+4*count>end:raise ValueError("invalid material offset table")
    start=p+12+4*count;offsets=[u32(d,p+12+4*i,end) for i in range(count)]
    result=[]
    for i,rel in enumerate(offsets):
        q=p+rel
        limit=p+offsets[i+1] if i+1<count else end
        if q<start or limit<q or limit>end or q+28>limit:
            raise ValueError("invalid mat1 material bounds")
        result.append({"index":i,"name":name(d,q,28,limit),
          "raw_offset_relative_section":rel,"byte_size":limit-q,
          "record_sha256":hash_bytes(d,q,limit),
          "fields_unparsed":"texture references, blend flags and shader data; v9 layout varies"})
    return {"count":count,"items":result}

def parts_table(d,p,end):
    if end-p<0x64:raise ValueError("short prt1")
    count=u32(d,p+0x54,end)
    scale=[sf(d,p+0x58,end),sf(d,p+0x5c,end)]
    if count>MAX_ROWS or p+0x64+0x28*count>end:raise ValueError("invalid prt1 part table bounds")
    items=[]
    for i in range(count):
        q=p+0x64+i*0x28
        offsets=[u32(d,q+0x1c+j*4,end) for j in range(3)]
        targets=[{"relative_offset":offset,"within_section":offset==0 or 0x64<=offset<end-p}
                 for offset in offsets]
        items.append({"index":i,"part_name":name(d,q,24,end),
                      "usage_flags":list(val(d,q+24,4,end)),
                      "link_offsets":targets,
                      "opaque_reference":True})
    return {"part_count":count,"magnify":scale,"items":items,
            "note":"nested part record references recorded; target pane/material semantics not established"}

def control_section(d,p,end):
    if end-p<0x1c:raise ValueError("short cnt1")
    fields={"control_user_name_offset":u32(d,p+8,end),
            "functional_panel_names_offset":u32(d,p+12,end),
            "functional_panel_count":u16(d,p+16,end),
            "panel_animation_count":u16(d,p+18,end),
            "panel_parameter_offset":u32(d,p+20,end),
            "animation_parameter_offset":u32(d,p+24,end)}
    n=fields["control_user_name_offset"]
    if 0x1c<=n<end-p:
        z=d.find(b"\0",p+n,min(end,p+n+128))
        if z>p+n:fields["control_user_name"]=d[p+n:z].decode("utf-8","replace")
    fields["unparsed"]="table target and parameter value semantics"
    return fields

def examine(data,sections,endian):
    if endian!="<":return {"scope":"little endian v9 subset only","warnings":["other endian not decoded"]}
    results={"materials":[],"parts":[],"controls":[],"user_data":[],"warnings":[],
             "scope":"material labels/section extents, prt1 part names and offsets, cnt1 offsets; not material shading or UI rendering"}
    for section in sections:
        tag=section["tag"];p=section["offset"];end=section["end"]
        if tag=="mat1":
            try:results["materials"].append({"section_index":section["index"],**material_table(data,p,end)})
            except ValueError as e:results["warnings"].append({"section_index":section["index"],"tag":tag,"error":str(e)})
        if tag=="prt1":
            try:results["parts"].append({"section_index":section["index"],**parts_table(data,p,end)})
            except ValueError as e:results["warnings"].append({"section_index":section["index"],"tag":tag,"error":str(e)})
        if tag=="cnt1":
            try:results["controls"].append({"section_index":section["index"],**control_section(data,p,end)})
            except ValueError as e:results["warnings"].append({"section_index":section["index"],"tag":tag,"error":str(e)})
        if tag=="usd1":
            results["user_data"].append({"section_index":section["index"],"size":end-p,
                                         "sha256":hash_bytes(data,p,end),"state":"opaque userdata"})
    return results
