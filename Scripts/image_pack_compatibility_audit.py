"""ImagePackCompatibilityAudit: byte, decoded RGBA, geometry and alias audit, no image publication."""
import argparse, collections, csv, hashlib, io, json, re, subprocess, zipfile
from pathlib import Path, PurePosixPath
from PIL import Image, ImageChops, __version__ as PIL_VERSION

REF="f09e15460d02790060a374b2ad6ba569ba9b97ed"
POKER_REF="24e238f743143cdb92f149d47bd61bfcff0b544a"
ZIP_SHA="efe734cfb300959c83db3da9a102f083421e869d1ce5f9b38768729004ae4d9d"
ZIP_BYTES=95110127
ROM="e10617820db06889e1638499478da0de_NCA"
MAX_FILE=32*1024*1024
MAX_PIXELS=4096*4096
Image.MAX_IMAGE_PIXELS=MAX_PIXELS

def sha(b): return hashlib.sha256(b).hexdigest()
def git(root,*args):return subprocess.check_output(["git","-C",str(root),*args])
def read(p):
    with Path(p).open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def write(p,rows,fields=None):
    if not rows and not fields:raise ValueError(str(p))
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=fields or list(rows[0]));w.writeheader();w.writerows(rows)
def inspect(b):
    assert len(b)<=MAX_FILE
    with Image.open(io.BytesIO(b)) as im:
        assert im.format=="PNG" and im.width*im.height<=MAX_PIXELS and getattr(im,"n_frames",1)==1
        im.load()
        original_mode=im.mode;icc=im.info.get("icc_profile");gamma=im.info.get("gamma")
        rgba=im.convert("RGBA");pixels=rgba.tobytes();alpha=rgba.getchannel("A").histogram()
        # Dimensions participate in the digest. RGB below alpha=0 is deliberately preserved.
        header=f"{rgba.width}x{rgba.height}:RGBA:".encode()
        return dict(bytes=len(b),sha256=sha(b),rgba_sha256=sha(header+pixels),width=rgba.width,height=rgba.height,original_mode=original_mode,alpha_zero=alpha[0],alpha_partial=sum(alpha[1:255]),alpha_opaque=alpha[255],icc_sha256=sha(icc) if icc else "",gamma="" if gamma is None else gamma),rgba
def compare(a,b,ai,bi):
    result=dict(comparison="",changed_pixels="",changed_visible_pixels="",mean_abs_rgba="",max_abs_rgba="",alpha_equal="",rgb_equal_where_both_visible="",icc_equal=int(a["icc_sha256"]==b["icc_sha256"]),gamma_equal=int(a["gamma"]==b["gamma"]))
    if (a["width"],a["height"])!=(b["width"],b["height"]):
        result["comparison"]="different_dimensions";return result
    result["comparison"]="identical_png_bytes" if a["sha256"]==b["sha256"] else "identical_rgba_different_png" if a["rgba_sha256"]==b["rgba_sha256"] else "different_rgba"
    diff=ImageChops.difference(ai,bi);hist=diff.histogram();n=ai.width*ai.height
    result["mean_abs_rgba"]=round(sum((i%256)*v for i,v in enumerate(hist))/(4*n),8)
    result["max_abs_rgba"]=max((i%256 for i,v in enumerate(hist) if v),default=0)
    result["alpha_equal"]=int(diff.getchannel("A").getbbox() is None)
    if result["comparison"]!="different_rgba":
        result.update(changed_pixels=0,changed_visible_pixels=0,rgb_equal_where_both_visible=1);return result
    changed=visible=0;rgb_visible=True
    for x,y in zip(ai.getdata(),bi.getdata()):
        if x!=y:
            changed+=1
            if x[3] or y[3]:visible+=1
            if x[3] and y[3] and x[:3]!=y[:3]:rgb_visible=False
    result.update(changed_pixels=changed,changed_visible_pixels=visible,rgb_equal_where_both_visible=int(rgb_visible))
    return result
def key(name):
    p=PurePosixPath(name);return p.stem.casefold()
def safe_zip(z):
    seen=set();total=0;entries=[]
    for x in z.infolist():
        n=x.filename;p=PurePosixPath(n)
        if not n or "\\" in n or p.is_absolute() or ".." in p.parts or ":" in n or n in seen or (x.external_attr>>16)&0o170000==0o120000:raise ValueError("unsafe/duplicate entry: "+n)
        seen.add(n)
        if x.is_dir():continue
        total+=x.file_size
        assert x.file_size<=MAX_FILE and total<=4*1024**3
        if p.suffix.lower()==".png":entries.append(x)
    assert entries and len(entries)<200000
    return entries
def selftest():
    def png(im,level):
        f=io.BytesIO();im.save(f,format="PNG",compress_level=level);return f.getvalue()
    im=Image.new("RGBA",(4,4),(20,30,40,255));a,ai=inspect(png(im,0));b,bi=inspect(png(im,9))
    assert compare(a,a,ai,ai)["comparison"]=="identical_png_bytes"
    assert a["sha256"]!=b["sha256"] and compare(a,b,ai,bi)["comparison"]=="identical_rgba_different_png"
    im.putpixel((0,0),(21,30,40,255));c,ci=inspect(png(im,9));d=compare(a,c,ai,ci);assert d["changed_pixels"]==1 and d["max_abs_rgba"]==1 and d["alpha_equal"]==1
    im2=Image.new("RGBA",(3,4));c,ci=inspect(png(im2,9));assert compare(a,c,ai,ci)["comparison"]=="different_dimensions"
    f=io.BytesIO()
    with zipfile.ZipFile(f,"w") as z:z.writestr("../escape.png",b"x")
    with zipfile.ZipFile(f) as z:
        try:safe_zip(z)
        except ValueError:pass
        else:raise AssertionError("unsafe path accepted")
    print("synthetic comparisons and ZIP path tests PASS")
def main():
    ap=argparse.ArgumentParser();ap.add_argument("--historical",type=Path);ap.add_argument("--pack",type=Path);ap.add_argument("--override",type=Path);ap.add_argument("--out",type=Path,default=Path("research/image-pack-audit"));ap.add_argument("--selftest",action="store_true");args=ap.parse_args()
    selftest()
    if args.selftest:return
    H=args.historical;out=args.out;out.mkdir(parents=True,exist_ok=True)
    assert git(H,"rev-parse","HEAD").decode().strip()==REF
    assert git(Path("."),"rev-parse","HEAD:"+ROM)==git(H,"rev-parse","HEAD:"+ROM)
    zb=args.pack.read_bytes();assert len(zb)==ZIP_BYTES and sha(zb)==ZIP_SHA
    manifest=read("research/image-mapping/source-png.csv");assert len(manifest)==34127
    expected=collections.defaultdict(set);srcpaths=collections.defaultdict(set);families=collections.defaultdict(set);blobs=collections.defaultdict(set)
    for r in manifest:
        p=r["png_path"];expected[p].add(r["png_sha256"]);srcpaths[p].add(r["source_path"]);families[p].add(r["family"]);blobs[p].add(r["png_git_blob"])
    tree={}
    for l in git(H,"ls-tree","-rz","HEAD","--","assets/images").split(b"\0"):
        if l:
            meta,p=l.split(b"\t",1);p=p.decode()
            if p.lower().endswith(".png"):tree[p]=meta.decode().split()[2]
    assert expected.keys()<=tree.keys()
    aliases=collections.defaultdict(set)
    with args.override.open(encoding="utf-8-sig") as f:
        reader=csv.DictReader(f,delimiter=";")
        for row in reader:
            r={k.strip():v.strip() for k,v in row.items() if k and v is not None}
            if r.get("iName") and r.get("overrideName"):
                aliases[r["iName"].casefold()].add(r["overrideName"].casefold())
                aliases[r["overrideName"].casefold()].add(r["iName"].casefold())
    # Compare historical native PNGs and other historical image paths separately; no assumptions about CDN source.
    native=[];old=[];pack=[];errors=[];bykey=collections.defaultdict(list);byhash=collections.defaultdict(list);bypixel=collections.defaultdict(list)
    for p,blob in sorted(tree.items()):
        b=(H/p).read_bytes()
        assert hashlib.sha1(f"blob {len(b)}\0".encode()+b).hexdigest()==blob,p
        if p in expected:assert expected[p]=={sha(b)} and blobs[p]=={blob},p
        try:m,_=inspect(b)
        except Exception as e:
            errors.append(dict(side="historical",path=p,error=str(e)));continue
        row=dict(path=p,filename=PurePosixPath(p).name,role="native_provenance" if p in expected else "historical_unclassified",family=";".join(sorted(families[p])),source_count=len(srcpaths[p]),git_blob=blob,**m)
        (native if p in expected else old).append(row)
        bykey[key(p)].append(row);byhash[m["sha256"]].append(row);bypixel[m["rgba_sha256"]].append(row)
    assert len(native)==len(expected),("native PNG decode incomplete",len(native),len(expected))
    pairs=[];coverage=[];native_hits=collections.defaultdict(set);old_hits=collections.defaultdict(set);hist_byte=set();hist_pixel=set();native_name=set()
    with zipfile.ZipFile(io.BytesIO(zb)) as z:
        entries=safe_zip(z);all_entries=len(z.infolist());nonpng=[x.filename for x in z.infolist() if not x.is_dir() and PurePosixPath(x.filename).suffix.lower()!=".png"]
        for e in sorted(entries,key=lambda x:x.filename):
            b=z.read(e)
            try:m,im=inspect(b)
            except Exception as exc:
                errors.append(dict(side="poker",path=e.filename,error=str(exc)));continue
            p=dict(path=e.filename,filename=PurePosixPath(e.filename).name,**m);pack.append(p)
            k=key(e.filename);cand={}
            for r in bykey[k]:cand[r["path"]]=(r,"exact_basename" if r["filename"]==p["filename"] else "casefold_basename")
            for alias in aliases[k]:
                for r in bykey[alias]:
                    if r["path"] not in cand:cand[r["path"]]=(r,"poker_override_alias_candidate")
            # All same-byte and same-pixel aliases counted without expanding repeated blank images into Cartesian products.
            byte_matches=byhash[m["sha256"]];pixel_matches=bypixel[m["rgba_sha256"]]
            for r in byte_matches:hist_byte.add(r["path"])
            for r in pixel_matches:hist_pixel.add(r["path"])
            ns=[r for r in pixel_matches if r["role"]=="native_provenance"]
            os=[r for r in pixel_matches if r["role"]!="native_provenance"]
            statuses=collections.defaultdict(set)
            for r,rule in cand.values():
                _,ri=inspect((H/r["path"]).read_bytes());d=compare(m,r,im,ri)
                family=r["family"]
                role_match="unknown_or_generic"
                if "/villager/" in ("/"+e.filename.casefold()):
                    role_match="npc_icon_candidate" if "NpcIcon" in family.split(";") else "different_or_unknown_npc_role"
                elif "NpcIcon" in family.split(";"):role_match="npc_icon_outside_villager_folder"
                rr=dict(poker_path=p["path"],historical_path=r["path"],historical_role=r["role"],historical_family=family,rule=rule,role_context=role_match,poker_width=m["width"],poker_height=m["height"],historical_width=r["width"],historical_height=r["height"],poker_sha256=m["sha256"],historical_sha256=r["sha256"],**d)
                pairs.append(rr);statuses[r["role"]].add(d["comparison"])
                if r["role"]=="native_provenance":native_hits[r["path"]].add(d["comparison"]);native_name.add(p["path"])
                else:old_hits[r["path"]].add(d["comparison"])
            def best(role,ps,bs):
                if any(r["role"]==role for r in bs):return "identical_png_any_name"
                if any(r["role"]==role for r in ps):return "identical_rgba_any_name"
                st=statuses[role]
                if "different_rgba" in st:return "name_candidate_different_rgba"
                if "different_dimensions" in st:return "name_candidate_different_dimensions"
                return "no_name_or_pixel_candidate"
            coverage.append(dict(poker_path=p["path"],native_status=best("native_provenance",pixel_matches,byte_matches),historical_other_status=best("historical_unclassified",pixel_matches,byte_matches),native_name_candidates=sum(r["role"]=="native_provenance" for r,_ in cand.values()),historical_other_name_candidates=sum(r["role"]!="native_provenance" for r,_ in cand.values()),native_pixel_matches=len(ns),other_pixel_matches=len(os),native_same_byte_matches=sum(r["role"]=="native_provenance" for r in byte_matches),native_pixel_example=ns[0]["path"] if ns else "",other_pixel_example=os[0]["path"] if os else ""))
    write(out/"poker-images.csv",pack);write(out/"native-images.csv",native);write(out/"historical-other-images.csv",old)
    write(out/"name-comparisons.csv",pairs);write(out/"poker-coverage.csv",coverage)
    rev=[]
    for r in native+old:
        p=r["path"];hits=(native_hits if r["role"]=="native_provenance" else old_hits)[p]
        status="identical_png_any_name" if p in hist_byte else "identical_rgba_any_name" if p in hist_pixel else "name_candidate_different_rgba" if "different_rgba" in hits else "name_candidate_different_dimensions" if "different_dimensions" in hits else "no_name_or_pixel_candidate"
        rev.append(dict(historical_path=p,role=r["role"],family=r["family"],status=status,name_comparison_types=";".join(sorted(hits))))
    write(out/"historical-coverage.csv",rev)
    write(out/"errors.csv",errors,["side","path","error"])
    (out/"zip-non-png.json").write_text(json.dumps(nonpng,ensure_ascii=False,indent=2)+"\n")
    assert len(pack)+sum(r["side"]=="poker" for r in errors)==len(entries)
    def counts(rows,k):return dict(collections.Counter(r[k] for r in rows))
    summary=dict(historical_commit=REF,poker_commit=POKER_REF,zip_sha256=ZIP_SHA,zip_bytes=ZIP_BYTES,pillow_version=PIL_VERSION,original_tree_equal=True,zip_entries=all_entries,zip_png_entries=len(entries),zip_non_png_files=len(nonpng),poker_decoded_pngs=len(pack),historical_native_provenance_rows=len(manifest),historical_native_unique_png_paths=len(native),historical_other_decoded_pngs=len(old),historical_total_png_paths=len(tree),name_comparison_rows=len(pairs),poker_vs_native=counts(coverage,"native_status"),poker_vs_other=counts(coverage,"historical_other_status"),native_vs_poker=counts([r for r in rev if r["role"]=="native_provenance"],"status"),other_vs_poker=counts([r for r in rev if r["role"]!="native_provenance"],"status"),native_name_pair_comparison=counts([r for r in pairs if r["historical_role"]=="native_provenance"],"comparison"),errors=len(errors),all_pngs_redecoded=True,runtime_verified=False)
    (out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n")
    print(json.dumps(summary,ensure_ascii=False))
    if errors:raise AssertionError("PNG decode errors; inspect errors.csv")
if __name__=="__main__":main()
