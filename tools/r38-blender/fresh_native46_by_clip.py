"""R38 reimport original 46-native FSKL GLB from scratch PER action.

Blender NLA HOLD on unkeyed legs must never inherit previous action state.
Do not overwrite matrix_basis (failed experiment). Import fresh source object,
mute other strips, then extract same 93 source frames in correct 30 fps.
"""
import argparse,bpy,hashlib,json,sys
from pathlib import Path
p=argparse.ArgumentParser()
p.add_argument("--glb",type=Path,required=True);p.add_argument("--out",type=Path,required=True)
a=p.parse_args(sys.argv[sys.argv.index("--")+1:])
sha=hashlib.sha256(a.glb.read_bytes()).hexdigest()
if sha!="7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083":
 raise ValueError("not original 46 source FSKL repaired GLB")
scene=bpy.context.scene;scene.render.fps=30;scene.render.fps_base=1.0
clips=[("Act_ArrangeRemoveFtrHigh",28),("Act_BookOpen_Player",30),("Act_BookRead_Player",32)]
full=[]
for clip,frames in clips:
 bpy.ops.object.select_all(action="SELECT")
 bpy.ops.object.delete(use_global=False)
 # Real full importer reset: let Blender construct a fresh armature rest,
 # never mutate bone.matrix_basis or reapply previous clip HOLD pose.
 for old in list(bpy.data.actions):
  if old.users==0:bpy.data.actions.remove(old)
 bpy.ops.import_scene.gltf(filepath=str(a.glb.resolve()))
 armatures=[x for x in bpy.data.objects if x.type=="ARMATURE"]
 if len(armatures)!=1 or len(armatures[0].pose.bones)!=46:
  raise ValueError("original actual native repaired skeleton not imported")
 arm=armatures[0];ad=arm.animation_data
 if len(ad.nla_tracks)!=3:raise ValueError("source true 3 NLA tracks not imported")
 ad.action=None;ad.use_nla=True
 active=0
 for track in ad.nla_tracks:
  hit=track.name==clip
  track.mute=not hit
  if hit:active+=1
 if active!=1:raise ValueError("fresh import did not uniquely isolate source NLA action "+clip)
 rows=[]
 for f in range(frames+1):
  scene.frame_set(-1);scene.frame_set(f+1);bpy.context.view_layer.update()
  joints={bone.name:[float(v) for v in (arm.matrix_world@bone.matrix).translation] for bone in arm.pose.bones}
  if len(joints)!=46:raise ValueError("source 46 bone mismatch")
  rows.append({"source_frame":f,"blender_scene_frame":f+1,"joint_world_translations":joints})
 full.append({"name":clip,"native_FSKA_SourceFrameCount":frames,
             "source_frames_exported":len(rows),"blender_pose_frames":rows})
 print("R38_FRESH_IMPORT_NATIVE_SOURCE",clip,len(rows),rows[0]["joint_world_translations"]["Toe_L"],flush=True)
res={"schema":"acnh303-r38-Blender-original-FSKL-rest-repaired-46-bone-every-source-frame-v1",
 "source_glb_sha256":sha,"blender_version":bpy.app.version_string,
 "source_fps_assumption":30,"blender_scene_fps_set_to_30_BEFORE_GLTF_import":True,
 "independent_native_FSKL_reimport_for_EACH_of_3_source_clips":True,
 "original_FSKA_actions":3,"actual_skeleton_bones":46,
 "complete_frame_records":full,
 "authentic_Nintendo_ACNH_3_0_3_runtime_pose_captured":False,
 "limit":"Independent fresh Blender per clip glTF importer and NLA state, not original ACNH 3.0.3 game engine. 93 frames all source-math only."}
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(res,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
