#!/usr/bin/env python3
"""Source-authenticated Park_UBER FSHA and embedded BNSH structure inventory."""
import argparse,collections,hashlib,json,re,struct
from pathlib import Path
from acnh303_media_l3 import NCA,find_leaf
from acnh303_round29_bnsh_links import audit
SOURCE=NCA+"/1/Shader/Park_UBER_All.Nin_NX_NVN.szs"
EXPECTED="b290dd85bf7ca23bc5b969a79e520048f5bde1af"
def sha(b):return hashlib.sha256(b).hexdigest()
def require(ok,msg):
    if not ok:raise ValueError(msg)
def write(p,x):p.write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def header(b,off,magic):
    require(b[off:off+4]==magic and off+32<=len(b),"Invalid header")
    require(b[off+12:off+14]==b"\xff\xfe","Unsupported endian")
    size=struct.unpack_from("<I",b,off+28)[0];rlt=struct.unpack_from("<I",b,off+24)[0]
    require(32<=size<=len(b)-off,"Invalid file size")
    require(0<rlt<size-16 and b[off+rlt:off+rlt+4]==b"_RLT","Invalid relocation header")
    require(struct.unpack_from("<I",b,off+rlt+4)[0]==rlt,"Relocation self offset")
    return {"offset":off,"size":size,"relocation":rlt,"version":b[off+8:off+12].hex(),"firstBlock":struct.unpack_from("<H",b,off+22)[0],"headerHex":b[off:off+min(size,128)].hex()}
def fsha_dictionaries(b):
    # Validate Patricia dictionary signature, extent, child indices, and names.
    # Dictionary role is deliberately not inferred from its location.
    result=[]
    for m in re.finditer(b"_DIC",b):
        p=m.start()
        if p%4 or p+8>len(b):continue
        n=struct.unpack_from("<I",b,p+4)[0]
        if not 0<n<=8192 or p+8+(n+1)*16>len(b):continue
        keys=[]
        for i in range(1,n+1):
            q=p+8+16*i
            _,l,r,s=struct.unpack_from("<IHHQ",b,q)
            if l>n or r>n or not 0<s<len(b)-2:break
            length=struct.unpack_from("<H",b,s)[0]
            name=None
            if 0<length<=256 and s+2+length<len(b) and b[s+2+length]==0:
                a=b[s+2:s+2+length]
                if all(32<=c<127 for c in a):name=a.decode()
            if name is None:
                end=b.find(b"\0",s,min(s+257,len(b)))
                if end>s and all(32<=c<127 for c in b[s:end]):name=b[s:end].decode()
            if not name:break
            keys.append(name)
        if len(keys)==n and len(set(keys))==n:result.append({"offset":p,"count":n,"keys":keys,"role":"unassigned_dictionary_candidate"})
    return result
def main(root,out):
    raw=(root/SOURCE).read_bytes();blob=hashlib.sha1(b"blob "+str(len(raw)).encode()+b"\0"+raw).hexdigest()
    require(blob==EXPECTED,"Original shader blob mismatch")
    leaves=list(find_leaf(raw,SOURCE));matches=[x for x in leaves if x["data"].startswith(b"FSHA")]
    require(len(matches)==1,"Expected one FSHA leaf");x=matches[0];b=x["data"]
    h=header(b,0,b"FSHA");require(h["size"]==len(b),"FSHA length")
    out.mkdir(parents=True,exist_ok=True)
    dictionaries=fsha_dictionaries(b);records=[];rejected=[];program_counts=collections.Counter()
    for m in re.finditer(b"BNSH",b):
        p=m.start()
        try:z=header(b,p,b"BNSH")
        except ValueError as e:
            rejected.append({"offset":p,"reason":str(e)});continue
        member=b[p:p+z["size"]];z["sha256"]=sha(member)
        try:
            q=audit(member,"embedded@"+hex(p))
            z.update(status="bounded_structure",variationCount=len(q["variation_records"]),programCount=len(q["distinct_shader_programs"]),reflectionCount=len(q["reflection_records"]),warnings=q["warnings"],grsc=q["grsc_blocks"])
            program_counts["variations"]+=z["variationCount"];program_counts["programs"]+=z["programCount"]
            # Keep bounded link evidence, but avoid copying multi-GB raw code to artifacts.
            write(out/("bnsh-"+str(p)+".json"),q)
        except ValueError as e:z.update(status="header_valid_structure_unresolved",error=str(e))
        records.append(z)
    require(bool(records),"No valid embedded BNSH headers")
    report={"source":SOURCE,"gitBlob":blob,"sourceSha256":sha(raw),"member":x["source_member"],"fshaSha256":sha(b),"fshaHeader":h,"dictionaries":dictionaries,"embeddedBnsh":records,"rejectedMagic":rejected,"counts":dict(program_counts),"gpuSemanticsVerified":False,"optionProgramSelectionVerified":False}
    write(out/"park-uber-audit.json",report)
    print(json.dumps({"fshaBytes":len(b),"version":h["version"],"dictionaries":len(dictionaries),"dictionaryKeys":sum(d["count"] for d in dictionaries),"bnshStatuses":dict(collections.Counter(r["status"] for r in records)),"counts":dict(program_counts),"rejectedMagic":len(rejected)}))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out)
