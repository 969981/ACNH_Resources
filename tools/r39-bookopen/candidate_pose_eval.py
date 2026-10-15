"""R39 actual Blender 30fps import evaluation of native source BookOpen BaseData candidates.

Accept candidate exact SHA arg derived from verified R39 candidate source
report. Compare one isolated BookOpen action; no native game frame assumed.
"""
import argparse,bpy,hashlib,json,sys
from pathlib import Path
p=argparse.ArgumentParser()
p.add_argument("--glb",required=True,type=Path)
p.add_argument("--sha",required=True)
p.add_argument("--out",required=True,type=Path)
a=p.parse_args(sys.argv[sys.argv.index("--")+1:])
realsha=hashlib.sha256(a.glb.read_bytes()).hexdigest()
if realsha!=a.sha or len(a.sha)!=64:raise ValueError("actual candidate source GLB SHA mismatch")
bpy.context.scene.render.fps=30
bpy.context.scene.render.fps_base=1.0
bpy.ops.object.select_all(action="SELECT");bpy.ops.object.delete(use_global=False)
bpy.ops.import_scene.gltf(filepath=str(a.glb.resolve()))
arms=[x for x in bpy.data.objects if x.type=="ARMATURE"]
if len(arms)!=1 or len(arms[0].pose.bones)!=46:raise ValueError("not real original 46 native-FSKL source joints")
arm=arms[0];ad=arm.animation_data
if ad is None or len(ad.nla_tracks)!=3:raise ValueError("original 3 source clips not imported")
ad.action=None;ad.use_nla=True
present=[x for x in ad.nla_tracks if x.name=="Act_BookOpen_Player"]
if len(present)!=1:raise ValueError("original BookOpen action not imported")
for tr in ad.nla_tracks:tr.mute=(tr!=present[0])
frames=[]
for f in range(31):
 bpy.context.scene.frame_set(-1)
 bpy.context.scene.frame_set(f+1)
 bpy.context.view_layer.update()
 xyz={bone.name:[float(x) for x in (arm.matrix_world@bone.matrix).translation]
      for bone in arm.pose.bones}
 frames.append({"source_frame":f,"real_Blender_frame":f+1,"joint_world_translations":xyz})
out={"schema":"acnh303-r39-verified-original-FSKA-BaseData-BookOpen-actual-Blender-31-frame-pose-v1",
 "source_candidate_SHA256":realsha,"blender_version":bpy.app.version_string,
 "fps_set_to_30_before_original_glTF_import":True,"real_original_source_Skin_joint_count":46,
 "actual_BookOpen_NLA_tracks":len(present),
 "BookOpen_actual_Blender_pose_frames":frames,
 "game_original_native_runtime_pose_used":False}
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(out,indent=2,sort_keys=True)+"\n")
print("R39_BOOKOPEN_SOURCE_NATIVE_BASEDATA_BLENDER",realsha,len(frames),frames[0]["joint_world_translations"]["Waist"])
