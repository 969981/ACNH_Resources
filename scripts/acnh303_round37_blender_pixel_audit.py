#!/usr/bin/env python3
"""R37 independent image-pixel evidence for Blender rendered R36 glTF frames.

Strict pixel hashes/diffs prevent PNG metadata, scene filenames or capture
timestamps from masquerading as actually animated visual geometry.
"""
import argparse,hashlib,itertools,json
from pathlib import Path
import numpy as np
from PIL import Image
CLIPS=("Act_ArrangeRemoveFtrHigh","Act_BookOpen_Player","Act_BookRead_Player")
def read(p):
 im=Image.open(p).convert("RGBA")
 raw=np.asarray(im,dtype=np.uint8)
 return raw
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--images",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 x=p.parse_args()
 images={}
 for clip in CLIPS:
  for frame in (0,15):
   path=x.images/f"{clip}_frame{frame:03d}.png"
   raw=read(path)
   if raw.shape!=(640,640,4):raise ValueError("Blender real 640x640 image missing")
   images[clip,frame]=raw
 dims={}
 for (ca,fa),(cb,fb) in itertools.combinations(images,2):
  a,b=images[ca,fa],images[cb,fb]
  absdiff=np.abs(a.astype(np.int16)-b.astype(np.int16))
  changed=np.any(absdiff[:,:,:3]!=0,axis=2)
  bbox=np.argwhere(changed)
  dims[f"{ca}@{fa}__{cb}@{fb}"]={
    "pixel_change_count":int(np.count_nonzero(changed)),
    "fraction_changed":float(np.mean(changed)),
    "rgb_mean_absolute_error":float(np.mean(absdiff[:,:,:3])),
    "changed_bbox_yx":[bbox.min(axis=0).tolist(),bbox.max(axis=0).tolist()] if len(bbox)>0 else None}
 files=[]
 for (clip,frame),raw in images.items():
  files.append({"clip":clip,"frame":frame,"pixel_rgba_sha256":hashlib.sha256(raw.tobytes()).hexdigest()})
 in_clip={}
 for c in CLIPS:
  name=f"{c}@0__{c}@15"
  in_clip[c]=dims[name]
 r={"schema":"acnh303-r37-real-Blender-PNG-RGBA-independent-motion-pixel-difference-v1",
    "image_count":len(images),"image_size":[640,640],
    "source_png_pixel_sha256":files,"pairwise_rendered_image_pixel_differences":dims,
    "within_clip_rendered_pixel_difference":in_clip,
    "number_of_clips_with_nonidentical_RGB_pixels":sum(v["pixel_change_count"]>0 for v in in_clip.values()),
    "actual_original_game_screen_pixel_diff":"NOT_AVAILABLE",
    "limits":"Independent decoded Blender PNG-pixel comparisons prove only that import/render changed pixels, not correspondence with any original ACNH game frame. Equal pixels would mean the visual NLA probe did not demonstrate motion regardless of PNG file SHA."}
 x.out.parent.mkdir(parents=True,exist_ok=True)
 x.out.write_text(json.dumps(r,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
 print("R37_BLENDER_PIXEL_MOVEMENT",[(n,a["pixel_change_count"],a["rgb_mean_absolute_error"]) for n,a in in_clip.items()])
if __name__=="__main__":main()
