"""R38 investigate real Blender NLA track isolation/leaked pose and source data.

Import real R36 GLB one time; evaluate action-first, action-after-action and
action-again sequences. Also record exact imported NLA strip action channels,
extrapolation, blending, and per-bone differences. Never claim Nintendo parity.
"""
import argparse,bpy,hashlib,json,sys
from pathlib import Path
ap=argparse.ArgumentParser()
ap.add_argument("--glb",required=True,type=Path);ap.add_argument("--out",required=True,type=Path)
arg=sys.argv[sys.argv.index("--")+1:]
a=ap.parse_args(arg)
raw=a.glb.read_bytes()
if hashlib.sha256(raw).hexdigest()!="4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3":raise ValueError("source GLB changed")
bpy.ops.object.select_all(action="SELECT");bpy.ops.object.delete(use_global=False)
bpy.ops.import_scene.gltf(filepath=str(a.glb.resolve()))
arms=[x for x in bpy.data.objects if x.type=="ARMATURE"]
if len(arms)!=1 or len(arms[0].pose.bones)!=46:raise ValueError("real 46 armature missing")
arm=arms[0];ad=arm.animation_data;ad.action=None;ad.use_nla=True
names=["Root","Mdl_Root","nw4f_root","Waist","Leg_1_L","Leg_2_L","Ankle_L","Toe_L",
       "Leg_1_R","Leg_2_R","Ankle_R","Toe_R","Arm_2_L","Hand_L","Head","Neck"]
track_info=[]
for tr in ad.nla_tracks:
 strips=[]
 for s in tr.strips:
  action=s.action
  strips.append({"name":s.name,"action":action.name if action else None,
    "strip_extrapolation":s.extrapolation,"blend_type":s.blend_type,
    "strip_frame_start":s.frame_start,"strip_frame_end":s.frame_end,
    "strip_action_frame_start":s.action_frame_start,"strip_action_frame_end":s.action_frame_end,
    "animated_bones_sample":sorted({p.data_path.split('"')[1] for p in action.fcurves if '"' in p.data_path})[:65] if action else []})
 track_info.append({"track_name":tr.name,"strip_info":strips})
order=["Act_BookOpen_Player","Act_ArrangeRemoveFtrHigh","Act_BookRead_Player","Act_BookOpen_Player","Act_BookRead_Player","Act_ArrangeRemoveFtrHigh"]
results=[]
for c,clip in enumerate(order):
 for tr in ad.nla_tracks:tr.mute=(tr.name!=clip)
 if sum(not x.mute for x in ad.nla_tracks)!=1:raise ValueError("not isolated")
 for frame in (0,15):
  bpy.context.scene.frame_set(-1);bpy.context.scene.frame_set(frame+1);bpy.context.view_layer.update()
  loc={n:[float(x) for x in (arm.matrix_world@arm.pose.bones[n].matrix).translation] for n in names if n in arm.pose.bones}
  results.append({"iteration":c,"clip":clip,"source_frame":frame,"bone_xyz":loc})
r={"schema":"acnh303-r38-real-Blender-NLA-state-leak-and-source-clip-order-proof-v1",
"R36_GLB_SHA256":hashlib.sha256(raw).hexdigest(),"Blender":bpy.app.version_string,
"actual_imported_track_properties":track_info,"actual_isolated_track_playback_order":order,
"real_repeated_clip_frame_bone_matrix_results":results,
"authentic_game_runtime_included":False}
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(r,indent=2,sort_keys=True)+"\n")
print("R38_BLENDER_NLA_ORDER",[(x["iteration"],x["clip"],x["source_frame"],x["bone_xyz"].get("Toe_L")) for x in results])
