"""Full image metrics + source/BRTI reverse search + ASTC decoder parity.
No asset publication. Name matches and layout hypotheses are not runtime proof.
"""
import collections, csv, hashlib, io, json, math, subprocess, sys, tempfile, zipfile
from pathlib import Path
import numpy as np
from PIL import Image
from skimage.metrics import structural_similarity
import image_pack_compatibility_audit as v1

ROOT=Path("research/image-pack-audit")
OUT=Path("research/texture-decoder-parity")
H=Path("historical")
ROM=v1.ROM+"/1/"
def read(p): return v1.read(p)
def write(name,rows,fields=None): v1.write(OUT/name,rows,fields)
def sha(b):return hashlib.sha256(b).hexdigest()
def arr(b):
    with Image.open(io.BytesIO(b)) as im:
        return np.asarray(im.convert("RGBA"),dtype=np.uint8)
def psnr(a,b):
    mse=float(np.mean((a.astype(np.float32)-b.astype(np.float32))**2))
    return 10*math.log10(255**2/mse) if mse else None
def composite(a,bg):
    a=a.astype(np.float32); t=a[...,3:4]/255
    return a[...,:3]*t+bg*(1-t)
def mae(a,b):return float(np.abs(a.astype(np.float32)-b.astype(np.float32)).mean())
def srgb_to_linear(a):
    x=a/255.;return np.where(x<=.04045,x/12.92,((x+.055)/1.055)**2.4)*255
def linear_to_srgb(a):
    x=a/255.;return np.where(x<=.0031308,12.92*x,1.055*x**(1/2.4)-.055)*255
def metrics(a,b):
    assert a.shape==b.shape
    d=np.abs(a.astype(np.int16)-b.astype(np.int16)); ah=np.bincount(d[...,3].ravel(),minlength=256)
    r={}
    for i,c in enumerate("rgba"):
        r[c+"_mae"]=float(d[...,i].mean())
        r[c+"_max"]=int(d[...,i].max())
        r[c+"_changed"]=int(np.count_nonzero(d[...,i]))
    aa=a[...,3];ba=b[...,3]; both=(aa>0)&(ba>0); edge=((aa>0)&(aa<255))|((ba>0)&(ba<255))
    r.update(alpha_pixels=int(aa.size),alpha_edge_pixels=int(edge.sum()),alpha_edge_mae=float(d[...,3][edge].mean()) if edge.any() else None,alpha_0_to_nonzero=int(((aa==0)&(ba>0)).sum()),alpha_nonzero_to_0=int(((aa>0)&(ba==0)).sum()),alpha_signed_mean=float((aa.astype(np.int16)-ba.astype(np.int16)).mean()),both_visible_pixels=int(both.sum()))
    x=a[...,:3].astype(np.float32)[both];y=b[...,:3].astype(np.float32)[both]
    ax=aa[both,None].astype(np.float32)/255;by=ba[both,None].astype(np.float32)/255
    r["rgb_visible_mae"]=mae(x,y) if x.size else None
    for name,xx,yy in (("poker_premultiplied",x,np.rint(y*by)),("native_premultiplied",np.rint(x*ax),y),("poker_unpremultiply",np.clip(np.rint(x/ax),0,255),y),("native_unpremultiply",x,np.clip(np.rint(y/by),0,255)),("poker_linear_to_srgb",np.rint(linear_to_srgb(x)),y),("native_linear_to_srgb",x,np.rint(linear_to_srgb(y))),("poker_srgb_to_linear",np.rint(srgb_to_linear(x)),y),("native_srgb_to_linear",x,np.rint(srgb_to_linear(y)))):
        r[name+"_mae"]=mae(xx,yy) if x.size else None
    r["rgba_psnr_db"]=psnr(a,b)
    for bg,name in ((0,"black"),(255,"white")):
        ca,cb=composite(a,bg),composite(b,bg)
        r[name+"_psnr_db"]=psnr(ca,cb)
        win=min(7,a.shape[0],a.shape[1]);win-=1-win%2
        r[name+"_ssim"]=float(structural_similarity(ca,cb,data_range=255,channel_axis=2,win_size=win)) if win>=3 else None
    return r,ah
def selftest():
    a=np.zeros((8,8,4),np.uint8);a[:]=[100,40,20,128];b=a.copy()
    r,h=metrics(a,b);assert r["a_mae"]==0 and h[0]==64 and r["black_ssim"]==1 and r["rgba_psnr_db"] is None
    b[0,0,3]=129;r,h=metrics(a,b);assert r["a_mae"]==1/64 and h[1]==1 and r["r_mae"]==0
    b=a.copy();b[...,:3]=np.rint(a[...,:3]*128/255);r,_=metrics(b,a);assert r["poker_premultiplied_mae"]==0 and r["rgb_visible_mae"]>0
    print("metric selftests passed",flush=True)
def tree():
    result={}
    for line in v1.git(Path("."),"ls-tree","-rz","HEAD","--",ROM).split(b"\0"):
        if line:
            meta,p=line.split(b"\t",1);result[p.decode()]=meta.decode().split()[2]
    return result
def native_name(p):
    n=Path(p).name.split(".Nin_NX_NVN",1)[0].removesuffix(".zs")
    if n.startswith("Layout_"):return n.split("_",2)[-1]
    return n
def texture_rows(p,blob):
    import acnh_formats as af
    from probe_acnh_babybed_textures import nested_files,valid_bntx_slices,parse_bntx
    raw=v1.git(Path("."),"cat-file","blob",blob)
    assert hashlib.sha1(f"blob {len(raw)}\0".encode()+raw).hexdigest()==blob
    for member,data in nested_files(raw,p,af):
        for off,b in ([(0,data)] if af.detect(data)=="bntx" else valid_bntx_slices(data)):
            for t in parse_bntx(b):
                yield dict(source_path=p,git_blob=blob,source_sha256=sha(raw),member=member,bntx_offset=off,bntx_sha256=sha(b),**t),b
def mip0_astc(t,b):
    import struct
    p=int(t["brti_offset_hex"],16)
    order="<" if b[12:14]==b"\xff\xfe" else ">"
    def u(off,fmt="I"):return struct.unpack_from(order+fmt,b,p+off)[0]
    fmt=int(t["format_hex"],16);w,h=t["width"],t["height"]
    sizes=[(4,4),(5,4),(5,5),(6,5),(6,6),(8,5),(8,6),(8,8),(10,5),(10,6),(10,8),(10,10),(12,10),(12,12)]
    if fmt>>8 not in range(0x2d,0x3b) or fmt&255 not in (1,6):raise ValueError("not supported ASTC LDR")
    bw,bh=sizes[(fmt>>8)-0x2d]
    tile=u(0x12,"H");layout=u(0x34);layout2=u(0x38);size=u(0x50);ptr=u(0x70,"Q");depth=u(0x2c);layers=u(0x30)
    if not (depth==1 and layers==1 and 0<ptr<=len(b)-8 and size>0):raise ValueError("unsupported depth/array/mip pointer")
    start=struct.unpack_from(order+"Q",b,ptr)[0]
    if not 0<start<=len(b)-size:raise ValueError("invalid data size")
    end=start+size
    if t["mip_count"]>1:
        nxt=struct.unpack_from(order+"Q",b,ptr+8)[0]
        if not start<nxt<=end:raise ValueError("invalid mip1 pointer")
        end=nxt
    nx=(w+bw-1)//bw;ny=(h+bh-1)//bh
    if tile!=0:raise ValueError("only block-linear tile=0 currently tested")
    log=layout&7
    if log>5:raise ValueError("invalid block height")
    block=1<<log
    if (1<<(ny-1).bit_length())<8*block:block=max(1,block//2)
    pitch=(nx*16+63)//64
    out=bytearray()
    for y in range(ny):
        for x in range(nx):
            xb=x*16
            g=(y//(8*block))*512*block*pitch+(xb//64)*512*block+((y%(8*block))//8)*512
            q=start+g+((xb%64)//32)*256+((y%8)//2)*64+((xb%32)//16)*32+(y%2)*16+xb%16
            if q+16>end:raise ValueError("deswizzle exceeds mip0")
            out.extend(b[q:q+16])
    return bytes(out),dict(tile_mode=tile,layout_hex=hex(layout),layout2_hex=hex(layout2),block_height=block,channels_hex=b[p+0x58:p+0x5c].hex(),mip0_offset=start,mip0_padded_bytes=end-start,compressed_sha256=sha(out),compressed_bytes=len(out),block_width=bw,block_height_pixels=bh)
def decoder_test(t,b,targets,z):
    import texture2ddecoder as td
    data,meta=mip0_astc(t,b);w,h=t["width"],t["height"];bw,bh=meta["block_width"],meta["block_height_pixels"]
    a=np.asarray(Image.frombytes("RGBA",(w,h),td.decode_astc(data,w,h,bw,bh),"raw","BGRA"))
    hdr=bytes.fromhex("13aba15c")+bytes([bw,bh,1])+w.to_bytes(3,"little")+h.to_bytes(3,"little")+bytes([1,0,0])
    rows=[]
    with tempfile.TemporaryDirectory() as tmp:
        ip=Path(tmp)/"input.astc";ip.write_bytes(hdr+data)
        for profile in ("-ds","-dl"):
            op=Path(tmp)/"out.png"
            subprocess.run(["astcenc",profile,str(ip),str(op)],check=True,capture_output=True,timeout=60)
            c=arr(op.read_bytes())
            for label,x,y in [("texture2ddecoder_vs_astcenc"+profile,a,c)]+[(dec+"_vs_"+target,im,ref) for target,ref in targets for dec,im in (("texture2ddecoder",a),("astcenc"+profile,c)) if im.shape==ref.shape]:
                rr,_=metrics(x,y);rows.append(dict(**t,**meta,profile=profile,comparison=label,left_rgba_sha256=sha(x.tobytes()),right_rgba_sha256=sha(y.tobytes()),**rr))
    return rows
def main():
    import argparse
    ap=argparse.ArgumentParser();ap.add_argument("--pack",type=Path,required=True);args=ap.parse_args()
    OUT.mkdir(parents=True,exist_ok=True);selftest()
    assert v1.git(H,"rev-parse","HEAD").decode().strip()==v1.REF
    assert v1.git(Path("."),"rev-parse","HEAD:"+v1.ROM)==v1.git(H,"rev-parse","HEAD:"+v1.ROM)
    raw=args.pack.read_bytes();assert sha(raw)==v1.ZIP_SHA
    pairs=[r for r in read(ROOT/"name-comparisons.csv") if r["historical_role"]=="native_provenance" and r["comparison"]=="different_rgba"]
    assert len(pairs)==28210
    missing=[r for r in read(ROOT/"poker-coverage.csv") if r["native_status"]=="no_name_or_pixel_candidate"];assert len(missing)==642
    hist=collections.defaultdict(lambda:np.zeros(256,dtype=np.int64));rows=[]
    src=collections.defaultdict(list)
    for r in read("research/image-mapping/source-png.csv"):src[r["png_path"]].append(r["source_path"])
    tr=tree();assert tr
    byname=collections.defaultdict(list)
    for p in tr:byname[native_name(p).casefold()].append(p)
    names=collections.defaultdict(list)
    for r in missing:names[v1.key(r["poker_path"])].append(r["poker_path"])
    selected={p for p in tr if p.startswith(ROM+"Layout/") or p.startswith(ROM+"Model/Layout_MenuIcon_") or p.startswith(ROM+"Model/Layout_ManpuIcon_")}
    for k in names:selected.update(byname[k])
    # Extra unrepresented icon families (not thousands of already registered item icons).
    for p in tr:
        if p.startswith(ROM+"Model/Layout_") and not p.startswith(tuple(ROM+"Model/Layout_"+f+"_" for f in ("FtrIcon","ClosetIcon","NpcIcon","NpcBromide","NpcPoster"))):selected.add(p)
    print("reverse source scan",len(selected),flush=True)
    candidates=[];scan=[];errors=[];found=collections.defaultdict(set);dec=[];planned=[]
    with zipfile.ZipFile(io.BytesIO(raw)) as z:
        for i,r in enumerate(pairs):
            a=arr(z.read(r["poker_path"]));b=arr((H/r["historical_path"]).read_bytes())
            assert a.shape==b.shape and sha(z.read(r["poker_path"]))==r["poker_sha256"]
            m,h=metrics(a,b);family=r["historical_family"]
            hist["ALL"]+=h;hist[family]+=h
            rows.append(dict(poker_path=r["poker_path"],historical_path=r["historical_path"],family=family,rule=r["rule"],**m))
            if i%2000==0:print("metric pairs",i,flush=True)
        write("pair-metrics.csv",rows)
        write("alpha-histogram.csv",[dict(family=f,absolute_delta=i,pixels=int(n)) for f,h in sorted(hist.items()) for i,n in enumerate(h)])
        for k,ps in names.items():
            for p in byname[k]:
                for pp in ps:candidates.append(dict(poker_path=pp,source_path=p,git_blob=tr[p],evidence="source_stem_candidate",texture_name="",format_hex="",width="",height="",source_sha256="",bntx_sha256="",member="",brti_offset_hex=""))
        for i,p in enumerate(sorted(selected)):
            count=0
            try:
                for t,b in texture_rows(p,tr[p]):
                    count+=1;k=t["name"].casefold()
                    for pp in names[k]:
                        found[pp].add(p)
                        candidates.append(dict(poker_path=pp,source_path=p,git_blob=tr[p],evidence="actual_brti_name",texture_name=t["name"],format_hex=t["format_hex"],width=t["width"],height=t["height"],source_sha256=t["source_sha256"],bntx_sha256=t["bntx_sha256"],member=t["member"],brti_offset_hex=t["brti_offset_hex"]))
                scan.append(dict(source_path=p,git_blob=tr[p],texture_count=count,status="parsed" if count else "no_bntx",error=""))
            except Exception as e:scan.append(dict(source_path=p,git_blob=tr[p],texture_count=count,status="error",error=str(e)))
            if i%250==0:print("source scan",i,flush=True)
        write("source-scan.csv",scan)
        write("missing-candidates.csv",candidates,["poker_path","source_path","git_blob","evidence","texture_name","format_hex","width","height","source_sha256","bntx_sha256","member","brti_offset_hex"])
        path_hits=collections.Counter(r["poker_path"] for r in candidates if r["evidence"]=="source_stem_candidate")
        write("missing-coverage.csv",[dict(poker_path=r["poker_path"],source_name_candidates=path_hits[r["poker_path"]],brti_source_candidates=len(found[r["poker_path"]]),status="brti_name_candidate" if found[r["poker_path"]] else "source_name_candidate" if path_hits[r["poker_path"]] else "unresolved") for r in missing])
        # Stratified, deterministic sample of exact filename pairs with actual provenance.
        fam=collections.defaultdict(list)
        for r in pairs:
            if r["rule"]=="exact_basename" and src[r["historical_path"]]:fam[r["historical_family"]].append(r)
        for family,rr in sorted(fam.items()):
            chosen=sorted(rr,key=lambda r:sha(r["poker_path"].encode()))[:8]
            chosen+= [r for r in rr if Path(r["poker_path"]).stem in ("FtrBabybed_Remake_0_0","FtrBabybed_Remake_7_6","1000Bell","ant00")]
            for r in {q["poker_path"]:q for q in chosen}.values():
                for p in sorted(set(src[r["historical_path"]])):
                    rec=dict(poker_path=r["poker_path"],historical_path=r["historical_path"],source_path=p,status="unresolved",error="")
                    try:
                        assert p in tr
                        ts=list(texture_rows(p,tr[p]))
                        match=[(t,b) for t,b in ts if t["name"].casefold()==v1.key(r["poker_path"]) and t["width"]==int(r["poker_width"]) and t["height"]==int(r["poker_height"])]
                        if len(match)!=1:raise ValueError("not a unique same-name same-size BRTI")
                        t,b=match[0]
                        targets=[("poker",arr(z.read(r["poker_path"]))),("historical",arr((H/r["historical_path"]).read_bytes()))]
                        dec.extend(decoder_test(t,b,targets,z));rec["status"]="decoded_astc"
                    except Exception as e:rec["error"]=str(e)
                    planned.append(rec)
        write("decoder-sample-status.csv",planned)
        if dec:write("decoder-metrics.csv",dec)
    def summarize(rr):
        result={}
        for k in rr[0]:
            if k in ("poker_path","historical_path","family","rule"):continue
            v=[r[k] for r in rr if r[k] is not None]
            if v:result[k]=dict(n=len(v),mean=float(np.mean(v)),median=float(np.median(v)),p90=float(np.quantile(v,.9)))
        return result
    byfam=collections.defaultdict(list)
    for r in rows:byfam[r["family"]].append(r)
    hypotheses={}
    for key in rows[0]:
        if key.endswith("_mae") and key.startswith(("poker_","native_")):
            valid=[r for r in rows if r[key] is not None and r["rgb_visible_mae"] is not None]
            hypotheses[key]=dict(n=len(valid),improved=sum(r[key]<r["rgb_visible_mae"] for r in valid),exact=sum(r[key]==0 for r in valid),mean_improvement=float(np.mean([r["rgb_visible_mae"]-r[key] for r in valid])) if valid else None)
    summary=dict(pairs=len(rows),all=summarize(rows),families={f:summarize(rr) for f,rr in byfam.items()},alpha_histogram=hist["ALL"].tolist(),hypotheses=hypotheses,missing_total=len(missing),missing_brti=len(found),missing_source_name=len(path_hits),missing_union=len(set(found)|set(path_hits)),source_scan_count=len(scan),source_scan_status=dict(collections.Counter(r["status"] for r in scan)),decoder_sample_status=dict(collections.Counter(r["status"] for r in planned)),decoder_comparison_rows=len(dec),runtime_verified=False,raw_bcn_independent_decoder="not implemented")
    (OUT/"summary.json").write_text(json.dumps(summary,indent=2,allow_nan=False)+"\n")
    print(json.dumps({k:v for k,v in summary.items() if k not in ("all","families","alpha_histogram")}),flush=True)
    assert len(rows)==28210 and len(missing)==642
    assert dec,"no successful original ASTC calibration; inspect artifact"
if __name__=="__main__":main()
