"""Inventory original image-related resource paths and read actual sample container metadata."""
import argparse, collections, csv, hashlib, json, subprocess, sys
from pathlib import Path
ROM="e10617820db06889e1638499478da0de_NCA/1/"
DIRS={"Model","Layout","Font","Effect","Env","Stage","Pack","Videogame","System","Swkbd","Shader","Movie"}
def git(*args): return subprocess.check_output(["git",*args])
def category(path):
    d,name=path.split("/",1)
    if d=="Model":
        if name.startswith("Layout_"): return "Model/"+name.split("_",2)[1]
        if "ReBody" in name: return "Model/ReBody"
        if "ReFabric" in name: return "Model/ReFabric"
        if "Tex" in name: return "Model/Tex name"
        return "Model/Other"
    return d
def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--historical",type=Path,required=True);ap.add_argument("--out",type=Path,default=Path("out/image-sources"))
    args=ap.parse_args();sys.path.insert(0,str(args.historical/"Scripts"))
    import acnh_formats as af
    from probe_acnh_babybed_textures import nested_files,valid_bntx_slices,parse_bntx
    tree={}
    for line in git("ls-tree","-r","-l","-z","HEAD","--",ROM).split(b"\0"):
        if not line:continue
        meta,p=line.split(b"\t",1);mode,kind,blob,size=meta.decode().split();path=p.decode().removeprefix(ROM)
        if kind=="blob":tree[path]=(blob,int(size))
    assert tree
    counts=collections.Counter(); extensions=collections.Counter(); candidates=[]
    for p,(blob,size) in sorted(tree.items()):
        d=p.split("/")[0]
        if d not in DIRS:continue
        c=category(p);counts[c]+=1;extensions[(d,Path(p).suffix.lower())]+=1
        candidates.append(dict(path=p,category=c,bytes=size,git_blob=blob,evidence="git_tree_only"))
    out=args.out;out.mkdir(parents=True,exist_ok=True)
    with (out/"original-files.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(candidates[0]));w.writeheader();w.writerows(candidates)
    picks=["Model/Layout_FtrIcon_FtrBabybed_Remake_0_0.Nin_NX_NVN.zs","Model/Layout_ClosetIcon_TopsTexMarinesuitNormalLNook0.Nin_NX_NVN.zs","Model/FtrBabybed.Nin_NX_NVN.zs","Model/FtrBabybedReBody0.Nin_NX_NVN.zs","Model/FtrBabybedReFabric0.Nin_NX_NVN.zs","Layout/Addressee.Nin_NX_NVN.zs","Layout/LIconLoad.Nin_NX_NVN.zs","Font/BmpFont_CN.sarc.zs"]
    for group in ("Model/NpcIcon","Model/FtrIcon","Model/ClosetIcon"):
        match=next((r["path"] for r in candidates if r["category"]==group),None)
        if match and match not in picks:picks.append(match)
    samples=[]
    for p in picks:
        if p not in tree:samples.append(dict(path=p,status="absent"));continue
        blob,size=tree[p];raw=git("cat-file","blob",blob);assert len(raw)==size
        r=dict(path=p,git_blob=blob,sha256=hashlib.sha256(raw).hexdigest(),bytes=size,outer=af.detect(raw),leaves=[],textures=[],errors=[])
        try:
            for label,data in nested_files(raw,p,af):
                kind=af.detect(data);r["leaves"].append(dict(path=label,format=kind,bytes=len(data),magic_hex=data[:8].hex()))
                for offset,b in ([(0,data)] if kind=="bntx" else valid_bntx_slices(data)):
                    try:
                        for t in parse_bntx(b):r["textures"].append(dict(member=label,embedded_offset=offset,**t))
                    except Exception as e:r["errors"].append(str(e))
            r["status"]="metadata_read"
        except Exception as e:r["status"]="parse_error";r["errors"].append(str(e))
        samples.append(r)
    summary=dict(source_commit=git("rev-parse","HEAD").decode().strip(),rom_tree_files=len(tree),candidate_files=len(candidates),groups=dict(sorted(counts.items())),extensions=[dict(directory=d,extension=e,count=n) for (d,e),n in sorted(extensions.items())],samples=samples,pixel_decode_performed=False)
    (out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(dict(candidate_files=len(candidates),groups=summary["groups"],samples=[dict(path=r["path"],status=r["status"],outer=r.get("outer"),textures=len(r.get("textures",[])),leaves=collections.Counter(x["format"] for x in r.get("leaves",[]))) for r in samples]),ensure_ascii=False))
if __name__=="__main__":main()
