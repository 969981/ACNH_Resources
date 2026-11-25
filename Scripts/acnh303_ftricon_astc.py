#!/usr/bin/env python3
"""Bounded independent ASTC 4x4 BNTX mip0 decoder for missing FtrIcon.
Tegra block-linear addressing; no gamma conversion (PNG channel bytes).
Only known ordinary RGBA selector layout is accepted.
"""
import argparse,hashlib,json,math,struct
from pathlib import Path
from PIL import Image,ImageChops
import texture2ddecoder
from acnh303_babybed_texture_export import extract
from acnh303_ftricon_full import require,sha,blob,write
def decode(root,r):
    raw,cs=extract(root/r["path"],r["path"]);require(blob(raw)==r["blob"],"Git blob")
    require(len(cs)==1 and len(cs[0]["native_textures"])==1,"Single BNTX/BRTI")
    b=cs[0]["bntx_bytes"];t=cs[0]["native_textures"][0]
    require(t["name"]==r["name"],"Name")
    p=int(t["brti_offset_hex"],16);w,h=t["width"],t["height"]
    u16=lambda o:struct.unpack_from("<H",b,p+o)[0]
    u32=lambda o:struct.unpack_from("<I",b,p+o)[0]
    u64=lambda o:struct.unpack_from("<Q",b,p+o)[0]
    mode=u16(0x12);fmt=u32(0x1c);layout=u32(0x34);size=u32(0x50);selector=u32(0x58);ptr=u64(0x70)
    require(fmt in (0x2d01,0x2d06) and u32(0x2c)==1 and u32(0x30)==1,"Unsupported ASTC image")
    require(selector==0x05040302,"Unsupported component selector "+hex(selector))
    require(ptr+8<=len(b),"Mip pointer")
    start=struct.unpack_from("<Q",b,ptr)[0];require(0<start<len(b) and start+size<=len(b),"Mip extent")
    nx,ny=(w+3)//4,(h+3)//4;bh=1<<(layout&7)
    require(bh<=32 and mode in (0,1),"Tile layout")
    pitch=((nx*16+63)//64)*64 if mode==0 else ((nx*16+31)//32)*32
    blocks=bytearray()
    for y in range(ny):
        for x in range(nx):
            xb=x*16
            if mode==1:off=y*pitch+xb
            else:off=(y//(8*bh))*512*bh*(pitch//64)+(xb//64)*512*bh+((y%(8*bh))//8)*512+((xb%64)//32)*256+((y%8)//2)*64+((xb%32)//16)*32+(y%2)*16+xb%16
            require(off+16<=size,"Block extent")
            blocks+=b[start+off:start+off+16]
    pixels=texture2ddecoder.decode_astc(bytes(blocks),w,h,4,4)
    require(len(pixels)==w*h*4,"Decoder length")
    im=Image.frombytes("RGBA",(w,h),pixels,"raw","BGRA")
    info={"sourceSha256":sha(raw),"bntxSha256":sha(b),"format":hex(fmt),"tileMode":mode,"textureLayout":hex(layout),"componentSelector":hex(selector),"mip0Offset":start,"width":w,"height":h,"blockLinearSha256":sha(bytes(blocks)),"rgbaSha256":sha(im.tobytes())}
    return im,info
def main(root,inventory,out):
    rows=json.loads(inventory.read_text("utf-8"));missing=[r for r in rows if r["status"]=="needs_decode"];require(len(missing)==1,"Single-gap run only")
    controls=[next(r for r in rows if r["name"]==n) for n in ("FtrBabybed_Remake_0_0","FtrBabybed_Remake_7_6")]
    out.mkdir(parents=True,exist_ok=True);(out/"png").mkdir(exist_ok=True)
    control_reports=[]
    for r in controls:
        im,m=decode(root,r);require(m["sourceSha256"]==r["sourceSha256"],"Prior source SHA")
        p=root/r["output"];require(sha(p.read_bytes())==r["pngSha256"],"Prior PNG SHA")
        with Image.open(p) as prior:
            other=prior.convert("RGBA");require(other.size==im.size,"Control dimensions")
            delta=ImageChops.difference(im,other);mx=max(x[1] for x in delta.getextrema())
            # Reject any significant difference: decoder rounding may differ by one.
            require(mx<=1,"Control pixel difference "+str(mx))
            control_reports.append({"name":r["name"],"maxChannelDelta":mx,"pixelEqual":mx==0,**m})
    results=[]
    for r in missing:
        im,m=decode(root,r);dest=out/"png"/(r["name"]+".png");im.save(dest)
        with Image.open(dest) as p:p.load();require(p.tobytes()==im.tobytes(),"PNG roundtrip")
        results.append({**r,**m,"status":"new_native_png","output":"png/"+dest.name,"pngSha256":sha(dest.read_bytes()),"decoder":"texture2ddecoder ASTC 4x4 independent"})
    write(out/"results.json",results);write(out/"controls.json",control_reports)
    print(json.dumps({"results":results,"controls":control_reports},ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--inventory",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.inventory,a.out)
