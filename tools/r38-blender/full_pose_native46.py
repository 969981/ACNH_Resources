"""R38 Blender fixed native FSKL-rest PlayerBody 46-joint 3-clip FULL FRAME pose export.

Can produce Blender animation reference, NOT ACNH native game capture.
"""
import bpy,os,sys,argparse,hashlib,json
from pathlib import Path
a=argparse.ArgumentParser()
a.add_argument("--glb",type=Path,required=True)
a.add_argument("--out",type=Path,required=True)
args=sys.argv[sys.argv.index("--")+1:] if "--" in sys.argv else [
 "--glb",os.environ["R38_GLB"],"--out",os.environ["R38_POSE_OUT"]]
v=a.parse_args(args)
v.out.parent.mkdir(parents=True,exist_ok=True)
raw=v.glb.read_bytes()
sha=hashlib.sha256(raw).hexdigest()
if sha!="7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083":
 raise ValueError("source R36 GLB sha mismatch")
bpy.ops.object.select_all(action="SELECT")
bpy.ops.object.delete(use_global=False)
bpy.ops.import_scene.gltf(filepath=str(v.glb.resolve()))
arms=[o for o in bpy.data.objects if o.type=="ARMATURE"]
if len(arms)!=1 or len(arms[0].data.bones)!=46:raise ValueError("original Blender 46-joint skeleton changed")
arm=arms[0];ad=arm.animation_data
if ad is None or len(ad.nla_tracks)!=3:raise ValueError("three original source NLA expected")
ad.action=None;ad.use_nla=True
clips=[("Act_ArrangeRemoveFtrHigh",28),
       ("Act_BookOpen_Player",30),
       ("Act_BookRead_Player",32)]
full=[]
scene=bpy.context.scene
for name,frames in clips:
 tracks=[]
 for track in ad.nla_tracks:
  active=track.name==name
  track.mute=not active
  if active:tracks.append(track.name)
 if len(tracks)!=1:raise ValueError("actual FSKA action NLA not uniquely isolated")
 records=[]
 for frame in range(frames+1):
  scene.frame_set(-1)
  scene.frame_set(frame+1)
  bpy.context.view_layer.update()
  joints={}
  for bone in arm.pose.bones:
   m=arm.matrix_world@bone.matrix
   joints[bone.name]=[float(x) for x in m.translation]
  if len(joints)!=46:raise ValueError("Blender original pose bones missing")
  records.append({"source_frame":frame,"blender_scene_frame":frame+1,
      "joint_world_translations":joints})
 full.append({"name":name,"native_FSKA_SourceFrameCount":frames,
    "source_frames_exported":len(records),"blender_pose_frames":records})
 result={"schema":"acnh303-r38-Blender-original-FSKL-rest-repaired-46-bone-every-source-frame-v1",
   "source_glb_sha256":sha,"blender_version":bpy.app.version_string,
   "source_fps_assumption":30,"actual_skeleton_bones":len(arm.data.bones),
   "original_mesh_object_count":sum(x.type=="MESH" for x in bpy.data.objects),
   "original_FSKA_actions":len(full),"complete_frame_records":full,
   "authentic_Nintendo_ACNH_3_0_3_runtime_pose_captured":False,
   "limit":"This is a Blender glTF evaluator snapshot, NOT source ACNH 3.0.3 native runtime poses. Source frame 0 maps Blender NLA scene frame 1."}
 v.out.write_text(json.dumps(result,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
 print("R38_BLENDER_ALL_POSES",[(x["name"],x["source_frames_exported"]) for x in full])
