#!/usr/bin/env python3
"""Read-only NintendoWare UI2D FLYT / FLAN v9 -> inspectable JSON.

ACNH 3.0.3 samples verified as v0x09000000, BOM ff fe, exact 0x14 header,
41 FLYT + 21 FLAN sections. Unknown section bytes retain exact SHA256 and
offsets and source originals are never changed. Animation target interpretation
is bounded, with unknown target/curve type recorded instead of invented values.

Format references:
https://epd.zeldamods.org/wiki/Bflyt
https://epd.zeldamods.org/wiki/Bflan
"""
from __future__ import annotations
import hashlib
import math
import struct

PANE_TAGS={"pan1","pic1","txt1","wnd1","prt1","bnd1","ali1","cpt1","scr1"}
GROUP_TAGS={"grp1"}
MAX_SECTIONS=10000
MAX_ENTRIES=25000
MAX_ANIM_KEYFRAMES=100000
ANIM_TARGET_NAMES={0:"pane",1:"material",2:"user_data",3:"pane_extended",4:"state_machine"}
ANIM_CURVES={0:"constant",1:"step",2:"hermite"}

def sha(x):return hashlib.sha256(x).hexdigest()
def need(d,p,n,lim=None):
    size=len(d) if lim is None else min(lim,len(d))
    if p<0 or n<0 or p+n>size:raise ValueError(f"offset out of bounds: 0x{p:x} len {n} limit {size}")
    return d[p:p+n]
def u(d,p,e,lim=None):return struct.unpack(e+"I",need(d,p,4,lim))[0]
def h(d,p,e,lim=None):return struct.unpack(e+"H",need(d,p,2,lim))[0]
def f(d,p,e,lim=None):
    x=struct.unpack(e+"f",need(d,p,4,lim))[0]
    return x if math.isfinite(x) else None
def floats(d,p,n,e,lim=None):return [f(d,p+i*4,e,lim) for i in range(n)]
def text_fixed(d,p,size,lim=None):
    raw=need(d,p,size,lim).split(b"\0",1)[0]
    return raw.decode("utf-8","replace")
def cstring(d,p,end,maxlen=512):
    if p<0 or p>=end:raise ValueError("string pointer is outside section")
    q=d.find(b"\0",p,min(end,p+maxlen+1))
    if q<0:raise ValueError("unterminated UI2D string")
    return d[p:q].decode("utf-8","replace")

def parse_headers(data):
    if len(data)<20 or data[:4] not in (b"FLYT",b"FLAN"):raise ValueError("not UI2D FLYT/FLAN")
    bom=data[4:6]
    endian="<" if bom==b"\xff\xfe" else ">" if bom==b"\xfe\xff" else None
    if not endian:raise ValueError("invalid UI2D byte order mark")
    header_size=h(data,6,endian)
    version=u(data,8,endian)
    declared=u(data,12,endian)
    count=h(data,16,endian)
    if header_size<20 or header_size>64 or declared!=len(data) or count>MAX_SECTIONS:
        raise ValueError("UI2D header size/file size/section count invalid")
    sections=[]
    pos=header_size
    for i in range(count):
        tag=need(data,pos,4).decode("ascii","strict")
        size=u(data,pos+4,endian)
        if size<8 or pos+size>len(data):
            raise ValueError("invalid UI2D section length or bounds")
        sections.append({"index":i,"tag":tag,"offset":pos,"size":size,"end":pos+size,
                         "sha256":sha(data[pos:pos+size])})
        pos+=size
    if pos!=len(data):raise ValueError("UI2D section list does not exhaust source")
    return {"magic":data[:4].decode(),"version_hex":f"0x{version:08x}",
            "endian":"little" if endian=="<" else "big","source_sha256":sha(data),
            "bytes":len(data),"sections":sections},endian

def parse_resource_list(data,start,end,e):
    count=h(data,start+8,e,end)
    if count>MAX_ENTRIES or start+12+4*count>end:raise ValueError("resource index table invalid")
    files=[]
    for i in range(count):
        relative=u(data,start+12+i*4,e,end)
        files.append(cstring(data,start+relative,end))
    return files

def parse_flyt(data):
    root,e=parse_headers(data)
    if root["magic"]!="FLYT":raise ValueError("not FLYT")
    panes=[];stack=[];current=None;group_stack=[];last_group=None;groups=[]
    resources={};unknown=[];lyt=None
    for section in root["sections"]:
        tag=section["tag"];p=section["offset"];end=section["end"];size=section["size"]
        if tag=="lyt1":
            if size<28:raise ValueError("lyt1 too short")
            lyt={"centered":bool(data[p+8]),"width":f(data,p+12,e,end),
                 "height":f(data,p+16,e,end),
                 "parts_width":f(data,p+20,e,end),"parts_height":f(data,p+24,e,end),
                 "name":cstring(data,p+28,end) if end>p+28 else ""}
            section["decoded"]="layout"
        elif tag in ("txl1","fnl1"):
            try:
                resources[tag]=parse_resource_list(data,p,end,e)
                section["decoded"]="resource_names"
            except ValueError as exc:
                section["parse_warning"]=str(exc)
        elif tag in PANE_TAGS and size>=84:
            pane={"pane_index":len(panes),"type":tag,"name":text_fixed(data,p+12,24,end),
                  "user_name":text_fixed(data,p+36,8,end),
                  "flags":data[p+8],"origin_flags":data[p+9],"alpha":data[p+10],
                  "translation":floats(data,p+44,3,e,end),
                  "rotation":floats(data,p+56,3,e,end),
                  "scale":floats(data,p+68,2,e,end),
                  "size":floats(data,p+76,2,e,end),
                  "parent_pane_index":stack[-1] if stack else None,
                  "section_index":section["index"],"children":[]}
            if tag=="txt1" and size>=0x66:
                pane["text_info"]={"text_max_bytes":h(data,p+0x54,e,end),
                                   "text_length":h(data,p+0x56,e,end),
                                   "material_index":h(data,p+0x58,e,end),
                                   "font_index":h(data,p+0x5a,e,end)}
            if tag=="pic1" and size>=0x68:
                pane["picture_info"]={"material_index":h(data,p+0x64,e,end),
                                      "texture_uv_sets":data[p+0x66]}
            if stack:panes[stack[-1]]["children"].append(len(panes))
            current=len(panes);panes.append(pane);section["decoded"]="pane"
        elif tag=="pas1":
            if current is None:raise ValueError("pas1 without preceding pane")
            stack.append(current);section["decoded"]="pane_push"
        elif tag=="pae1":
            if not stack:raise ValueError("pae1 without matching pas1")
            stack.pop();section["decoded"]="pane_pop"
        elif tag=="grp1" and size>=0x24:
            count=h(data,p+0x20,e,end)
            if count>MAX_ENTRIES or p+0x24+24*count>end:raise ValueError("group children bounds")
            group={"name":text_fixed(data,p+8,24,end),
                   "children":[text_fixed(data,p+0x24+24*i,24,end) for i in range(count)],
                   "parent_group":group_stack[-1] if group_stack else None}
            last_group=len(groups);groups.append(group);section["decoded"]="group"
        elif tag=="grs1":
            if last_group is None:raise ValueError("grs1 without grp1")
            group_stack.append(last_group);section["decoded"]="group_push"
        elif tag=="gre1":
            if not group_stack:raise ValueError("gre1 without grs1")
            group_stack.pop();section["decoded"]="group_pop"
        else:
            unknown.append({"tag":tag,"section_index":section["index"],"source_offset":p,
                            "size":size,"sha256":section["sha256"]})
    if stack or group_stack:raise ValueError("unbalanced pane/group stack")
    root.update({"layout":lyt,"panes":panes,
                 "root_pane_indices":[x["pane_index"] for x in panes if x["parent_pane_index"] is None],
                 "groups":groups,"named_resources":resources,
                 "unparsed_sections":unknown,
                 "decoded_scope":"pane transforms and hierarchy, layout dimensions, names, section structure; other pane/material userdata retained as section hashes"})
    return root

def parse_flan(data):
    root,e=parse_headers(data)
    if root["magic"]!="FLAN":raise ValueError("not FLAN")
    animations=[];unknown=[]
    for section in root["sections"]:
        tag=section["tag"];p=section["offset"];end=section["end"];size=section["size"]
        if tag=="pat1" and size>=0x1c:
            count=h(data,p+10,e,end)
            nameoff=u(data,p+12,e,end);groupoff=u(data,p+16,e,end)
            a={"tag_order":h(data,p+8,e,end),
               "group_count":count,
               "animation_name":cstring(data,p+nameoff,end) if nameoff else None,
               "frame_start":h(data,p+24,e,end),
               "frame_end":h(data,p+26,e,end)}
            groups=[]
            if count<=MAX_ENTRIES and groupoff and p+groupoff+36*count<=end:
                for i in range(count):
                    offset=p+groupoff+36*i
                    groups.append({"name":text_fixed(data,offset,33,end),"flag":data[offset+33]})
            a["groups"]=groups
            animations.append({"section":"pat1","value":a});section["decoded"]="animation_tag"
        elif tag=="pai1" and size>=0x14:
            frame_count=h(data,p+8,e,end)
            textures=h(data,p+12,e,end)
            entries=h(data,p+14,e,end)
            table_off=u(data,p+16,e,end)
            obj={"frame_count":frame_count,"looping":bool(data[p+10]),
                 "texture_count":textures,"entry_count":entries,
                 "content_table_offset":table_off,"textures":[],"entries":[]}
            if textures<=MAX_ENTRIES and p+20+textures*4<=end:
                for i in range(textures):
                    off=u(data,p+20+i*4,e,end)
                    try:obj["textures"].append(cstring(data,p+20+i*4+off,end))
                    except ValueError:obj["textures"].append({"raw_offset":off,"unresolved":True})
            if entries<=MAX_ENTRIES and table_off and p+table_off+entries*4<=end:
                for i in range(entries):
                    off=u(data,p+table_off+i*4,e,end)
                    addr=p+off
                    if addr+0x20>end or addr<p+8:
                        obj["entries"].append({"offset":off,"invalid_or_unresolved":True})
                        continue
                    info_count=data[addr+0x1c]
                    target=data[addr+0x1d]
                    item={"name":text_fixed(data,addr,28,end),
                          "target_type":target,
                          "target_type_name":ANIM_TARGET_NAMES.get(target,"unknown"),
                          "anim_info_count":info_count,"infos":[]}
                    if info_count<=250 and addr+0x20+4*info_count<=end:
                        for k in range(info_count):
                            raw=u(data,addr+0x20+4*k,e,end)
                            tag_at=addr+raw
                            if tag_at+8>end or tag_at<addr:
                                item["infos"].append({"offset":raw,"invalid_or_unresolved":True});continue
                            atag=need(data,tag_at,4,end).decode("ascii","replace")
                            nt=data[tag_at+4]
                            info={"tag":atag,"targets":nt,"keyframes":[]}
                            if nt<=128 and tag_at+8+nt*4<=end:
                                for idx in range(nt):
                                    ptr=u(data,tag_at+8+idx*4,e,end)
                                    tgt=tag_at+ptr
                                    if tgt+12>end or tgt<tag_at:
                                        info["keyframes"].append({"invalid_offset":ptr});continue
                                    n=h(data,tgt+4,e,end);curve=data[tgt+2]
                                    keys_at=tgt+u(data,tgt+8,e,end)
                                    target_info={"index":data[tgt+1],"curve":ANIM_CURVES.get(curve,f"unknown_{curve}"),
                                                 "frame_keys_declared":n,"keys":[]}
                                    key_size={0:8,1:8,2:12}.get(curve)
                                    if n<=MAX_ANIM_KEYFRAMES and key_size and keys_at>=tgt and keys_at+n*key_size<=end:
                                        for z in range(n):
                                            kpos=keys_at+z*key_size
                                            frame=f(data,kpos,e,end)
                                            if curve==2:
                                                val=f(data,kpos+4,e,end)
                                                slope=f(data,kpos+8,e,end)
                                                target_info["keys"].append([frame,val,slope])
                                            elif curve==1:
                                                val=h(data,kpos+4,e,end)
                                                target_info["keys"].append([frame,val])
                                            else:
                                                target_info["keys"].append([frame,f(data,kpos+4,e,end)])
                                    else:
                                        target_info["decode_warning"]="keys unverified / unhandled curve type"
                                    info["keyframes"].append(target_info)
                            item["infos"].append(info)
                    obj["entries"].append(item)
            animations.append({"section":"pai1","value":obj});section["decoded"]="animation_tracks"
        else:
            unknown.append({"tag":tag,"section_index":section["index"],"sha256":section["sha256"]})
    root.update({"animations":animations,"unparsed_sections":unknown,
                 "decoded_scope":"animation names, frame ranges, entry/target descriptors, supported constant/step/hermite frame keys; unknown curves marked raw"})
    return root

def parse_ui2d(data):
    if data.startswith(b"FLYT"):return parse_flyt(data)
    if data.startswith(b"FLAN"):return parse_flan(data)
    raise ValueError("unknown UI2D format")
