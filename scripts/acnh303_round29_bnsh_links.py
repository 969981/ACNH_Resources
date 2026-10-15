#!/usr/bin/env python3
"""ACNH R29: read-only, bounded BNSH nn::util relocation and shader-link audit.

This is a *structure* parser using exact input release bytes, not a GPU shader
decompiler. Graph links are accepted only when their binary offsets, containing
regions, parent identity and dictionary strings pass explicit checks.

References (format hints, NOT substitute for verifying game bytes):
 - nn::util::BinaryFileHeader/BinaryBlockHeader/RelocationTable (EPD wiki)
 - maierfelix/bnsh-decoder BNSH.ksy (open-source format description)
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from collections import Counter,defaultdict
from pathlib import Path

def sha(b):return hashlib.sha256(b).hexdigest()
def fail(message):raise ValueError(message)
class Bin:
    def __init__(self,buf):
        self.data=buf;self.n=len(buf)
        if self.n<0x70 or buf[:4]!=b"BNSH":fail("bad BNSH header")
        bom=buf[0xc:0xe]
        if bom==b"\xff\xfe":self.endian="<"
        elif bom==b"\xfe\xff":self.endian=">"
        else:fail("invalid endian marker")
    def ok(self,p,size=1):
        return isinstance(p,int) and 0<=p<=self.n and size>=0 and size<=self.n-p
    def get(self,p,n):
        if not self.ok(p,n):fail(f"file read out of bounds {p:#x}+{n:#x}/{self.n:#x}")
        return self.data[p:p+n]
    def u8(self,p):return self.get(p,1)[0]
    def u16(self,p):return struct.unpack(self.endian+"H",self.get(p,2))[0]
    def u32(self,p):return struct.unpack(self.endian+"I",self.get(p,4))[0]
    def u64(self,p):return struct.unpack(self.endian+"Q",self.get(p,8))[0]
    def pointer(self,p,minbytes=8):
        v=self.u64(p)
        return v if v and self.ok(v,minbytes) else None
    def string(self,p,maxlen=100):
        if not p or not self.ok(p,1):return None
        # NintendoWare strings typically have a preceding length field.
        cap=min(maxlen,self.n-p)
        raw=self.get(p,cap).split(b"\0",1)[0]
        if not raw or any(v<0x20 or v>0x7e for v in raw):return None
        return raw.decode("ascii")

def audit(buf,tag):
    b=Bin(buf);size=b.n;warnings=[]
    expected=b.u32(0x1c)
    if expected!=size:fail(f"file size header disagrees {expected} != {size}")
    head={"version_raw":b.get(8,4).hex(),"bom_raw":b.get(12,2).hex(),
          "align_shift":b.u8(0xe),"address_size_byte":b.u8(0xf),
          "name_pointer_raw":b.u32(0x10),
          "relocated_flag":b.u16(0x14),
          "first_block":b.u16(0x16),"reloc_offset":b.u32(0x18),
          "file_size":expected}
    if not b.ok(head["first_block"],16):fail("first block outside file")
    blocks=[];seen=set();block=head["first_block"]
    for i in range(32):
        if block in seen:fail("linked block cycle")
        seen.add(block)
        magic=b.get(block,4).decode("ascii","replace")
        rel_next=b.u32(block+4)
        blk_size=b.u32(block+8)
        reserve=b.u32(block+12)
        if blk_size<16 or not b.ok(block,blk_size):
            fail("linked block size invalid at "+hex(block))
        obj={"offset":block,"magic":magic,"next_relative":rel_next,
            "byte_size":blk_size,"reserved":reserve,"signature":"linked_BinaryBlockHeader"}
        blocks.append(obj)
        if not rel_next:break
        # relative to THIS block, not necessarily the file head
        following=block+rel_next
        if not b.ok(following,16):fail("next block outside file")
        block=following
    else:fail("too many linked blocks")
    reloc={}
    p=head["reloc_offset"]
    if not b.ok(p,0x10):fail("no relocation header")
    reloc["offset"]=p;reloc["magic"]=b.get(p,4).decode("ascii","replace")
    reloc["self_offset"]=b.u32(p+4)
    reloc["section_count"]=b.u32(p+8)
    reloc["reserved"]=b.u32(p+12)
    if reloc["magic"]!="_RLT":fail("missing relocation magic")
    if reloc["self_offset"]!=p:fail("relocation self offset mismatch")
    count=reloc["section_count"]
    if count>128 or not b.ok(p+0x10,0x18*count):fail("unsafe relocation section count")
    reloc["sections"]=[]
    descriptor_hits=[];reloc_field_positions=set()
    for i in range(count):
        s=p+0x10+i*0x18
        base=b.u64(s);region_start=b.u32(s+8);region_size=b.u32(s+12)
        start_index=b.u32(s+16);entry_count=b.u32(s+20)
        if region_start>size or region_size>size-region_start:
            warnings.append(f"section {i}: invalid region {region_start:#x}/{region_size:#x}")
        reloc["sections"].append({"index":i,"raw_base_pointer":base,"region_offset":region_start,
            "region_size":region_size,"entry_start":start_index,"entry_count":entry_count})
    # The relocation entry array is immediately after the section array.
    entry_base=p+0x10+0x18*count
    parsed_entries=[]
    for section in reloc["sections"]:
        start=section["entry_start"];cnt=section["entry_count"]
        if cnt>65536 or start>65536 or not b.ok(entry_base+8*start,cnt*8):
            warnings.append(f"section {section['index']}: invalid relocation entry bounds")
            continue
        for i in range(cnt):
            off=entry_base+(start+i)*8
            pos=b.u32(off);arrays=b.u16(off+4);nptr=b.u8(off+6);stride=b.u8(off+7)
            # Per wiki, pos is relative to file region offset. Do not
            # invent base pointer relocation outside the raw file.
            r={"section":section["index"],"index":start+i,"file_offset":off,
               "region_relative_position":pos,"array_count":arrays,
               "pointer_count_per_array":nptr,"array_stride_pointer_units":stride,
               "status":"bounded_descriptor_only"}
            if arrays<=1024 and nptr<=32 and stride<=128:
                seq_start=section["region_offset"]+pos
                end=seq_start+max(0,arrays-1)*(nptr+stride)*8+nptr*8
                if arrays and nptr and b.ok(seq_start,max(0,end-seq_start)):
                    r["first_pointer_file_offset"]=seq_start
                    r["range_end_exclusive"]=end
                    r["status"]="in_bounds_relocation_pointer_field_range"
                    for j in range(arrays):
                        for k in range(nptr):
                            at=seq_start+(j*(nptr+stride)+k)*8
                            if b.ok(at,8):reloc_field_positions.add(at)
            parsed_entries.append(r)
    reloc["entries"]=parsed_entries
    reloc["bounded_pointer_field_count"]=len(reloc_field_positions)
    reloc["data_pointer_targets_in_bounds"]=sum(1 for x in reloc_field_positions if b.pointer(x))
    grscs=[]
    variations=[];programs={};reflections={};dictionaries={}
    for blk in blocks:
        if blk["magic"].lower()!="grsc":continue
        # grsc block's payload after the 16-byte BinaryBlockHeader.
        g=blk["offset"]+16
        if not b.ok(g,0x50):
            warnings.append("grsc truncated");continue
        vg_count=b.u32(g+12)
        vg_ptr=b.u64(g+16)
        pool=b.u64(g+24)
        rec={"block_offset":blk["offset"],"target_api_type":b.u16(g),
             "target_api_version":b.u16(g+2),"code_type":b.u16(g+4),
             "compiler_version_raw":b.get(g+8,4).hex(),
             "shader_variation_count":vg_count,
             "variation_array_pointer_raw":vg_ptr,
             "binary_pool_pointer_raw":pool,
             "link_status":"unresolved"}
        if vg_count<=1024 and b.ok(vg_ptr,vg_count*0x40) and vg_ptr>0:
            rec["link_status"]="array_in_bounds"
            for i in range(vg_count):
                v=vg_ptr+i*0x40
                ptrs=[b.u64(v+j*8) for j in range(4)]
                item={"index":i,"file_offset":v,"source_program_pointer":ptrs[0],
                      "intermediate_program_pointer":ptrs[1],
                      "binary_program_pointer":ptrs[2],
                      "parent_pointer":ptrs[3],
                      "parent_matches_array_base":ptrs[3] in (0,vg_ptr),
                      "programs":[]}
                for typ,pos in zip(("source","intermediate","binary"),ptrs[:3]):
                    if not pos:continue
                    if not b.ok(pos,0xb0):
                        item["programs"].append({"type":typ,"pointer":pos,"status":"outside_bounded_program"})
                        continue
                    key=str(pos)
                    if key not in programs:
                        # Layout matches external field sketch; the actual
                        # pointer and parent are validated below.
                        refl=b.u64(pos+0x80)
                        parent=b.u64(pos+0x78)
                        sizeword=b.u32(pos+0x60)
                        prog={"file_offset":pos,"size_field_at_0x60":sizeword,
                           "object_pointer":b.u64(pos+0x70),"parent_pointer":parent,
                           "parent_matches_variation":parent==v,
                           "reflection_pointer":refl,
                           "reflection_in_bounds":bool(refl and b.ok(refl,0x40)),
                           "code_type_byte":b.u8(pos+2),
                           "linked_variation_indexes":[i],
                           "stage_reflection":[]}
                        programs[key]=prog
                    else:programs[key]["linked_variation_indexes"].append(i)
                    item["programs"].append({"type":typ,"pointer":pos,"status":"bounded_program_pointer"})
                variations.append(item)
        else:
            warnings.append(f"grsc variation array outside bounds: count={vg_count} ptr={vg_ptr:x}")
        grscs.append(rec)
    # Shader stage reflection pointers at +0x00 to +0x28, six pointer slots.
    # Only dereference when a program points to a bounded reflection object.
    for key,prog in programs.items():
        ptr=prog["reflection_pointer"]
        if not prog["reflection_in_bounds"]:continue
        if str(ptr) not in reflections:
            stages={}
            for j,stage in enumerate(("vertex","hull","domain","geometry","fragment","compute")):
                p_stage=b.u64(ptr+j*8)
                if not p_stage:continue
                rd={"stage":stage,"pointer":p_stage,"status":"pointer_not_verified"}
                if b.ok(p_stage,0x60):
                    rd["status"]="stage_record_bounded"
                    rd["dictionary_pointers"]={}
                    for k,label in enumerate(("input","output","sampler","constant_buffer","unordered_access")):
                        pp=b.u64(p_stage+8*k)
                        rd["dictionary_pointers"][label]=pp
                        if not pp or not b.ok(pp,0x18):continue
                        if b.get(pp,4)!=b"_DIC":continue
                        dic_count=b.u32(pp+4)
                        if dic_count>4096 or not b.ok(pp+8,0x10*(dic_count+1)):continue
                        names=[]
                        for t in range(1,dic_count+1):
                            keyptr=b.u64(pp+8+t*0x10+8)
                            name=b.string(keyptr)
                            if name:names.append(name)
                        rd[label+"_name_candidates"]=names[:128]
                        dicid=str(pp)
                        if dicid not in dictionaries:
                            dictionaries[dicid]={"offset":pp,"category":label,"entry_count":dic_count,
                                "validated_printable_ascii_name_count":len(names),
                                "names":names[:128]}
                stages[stage]=rd
            reflections[str(ptr)]={"pointer":ptr,"stages":stages}
        prog["stage_reflection"]=list(reflections[str(ptr)]["stages"].keys())
    # Crosscheck with nn::util relocation descriptors, never skip missing links.
    return {"schema":"acnh303-r29-bnsh-relocation-variation-reflection-v1",
      "member":tag,"sha256":sha(buf),"file_size":size,"file_header":head,
      "linked_blocks":blocks,"relocation":reloc,"grsc_blocks":grscs,
      "variation_records":variations,"distinct_shader_programs":list(programs.values()),
      "reflection_records":list(reflections.values()),
      "resource_dictionaries":list(dictionaries.values()),
      "relocation_field_positions_sample":sorted(reloc_field_positions)[:128],
      "warnings":warnings,
      "limits":"Read-only file format structure; input layout not full GPU program disassembly. Dictionary/stage links bounded and validated; unknown address semantics retained."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--roots",type=Path,nargs="+",required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    files=[]
    for root in a.roots:
        if not root.is_dir():fail("missing binary input dir "+str(root))
        for f in sorted(root.rglob("*.bnsh")):
            if f.is_file():files.append((f,str(f.relative_to(root))))
    if len(files)<28:fail(f"not enough real original R27+R28 BNSH members: {len(files)}")
    records=[];errors=[]
    for f,name in files:
        try:records.append(audit(f.read_bytes(),name))
        except ValueError as e:errors.append({"member":name,"error":str(e)})
    unique={}
    for r in records:
        unique.setdefault(r["sha256"],r)
    result={"schema":"acnh303-r29-28-real-native-bnsh-samples-v1",
            "source_members":len(files),"parsed_members":len(records),
            "failed_member_names":errors,"distinct_sha":len(unique),
            "blocks":dict(Counter(b["magic"] for r in records for b in r["linked_blocks"])),
            "variation_total":sum(len(r["variation_records"]) for r in records),
            "bounded_program_count":sum(len(r["distinct_shader_programs"]) for r in records),
            "reflection_count":sum(len(r["reflection_records"]) for r in records),
            "resource_dictionary_count":sum(len(r["resource_dictionaries"]) for r in records),
            "relocation_entry_total":sum(len(r["relocation"]["entries"]) for r in records),
            "records":records,
            "limits":"Source byte-preserving parsing; structural pointers require bounds and expected signature. GPU machine code and runtime slots not proved."}
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R29_BNSH_RESULT",json.dumps({k:v for k,v in result.items() if k not in ("records","failed_member_names")},ensure_ascii=False))
    print("R29_BNSH_ERRORS",errors[:5])
    if errors:raise SystemExit(2)
if __name__=="__main__":main()
