"""R39 controlled source GLB BookOpen untouched-vs-surgical unkeyed-pose reset.

R38 shows first Arranger imported pose leaks to BookOpen bones without FSKA
channels, independent fresh-import preserves the shift. This tests a STRICT
per-action glTF-rest restoration on just unkeyed bones (not a global pose
matrix_basis wipe). Numeric acceptance must be established separately.
"""
import argparse,bpy,hashlib,json,sys
from pathlib import Path
p=argparse.ArgumentParser()
p.add_argument("--glb",required=True,type=Path)
p.add_argument("--out",required=True,type=Path)
a=p.parse_args(sys.argv[sys.argv.index("--")+1:])
SHA="7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083"
if hashlib.sha256(a.glb.read_bytes()).hexdigest()!=SHA:raise ValueError("source 46 FSKL GLB changed")
bpy.context.scene.render.fps=30;bpy.context.scene.render.fps_base=1.
tasks=[("untouched",False),("surgical_unkeyed_only",True)]
results=[]
for mode,reset in tasks:
 bpy.ops.object.select_all(action="SELECT");bpy.ops.object.delete(use_global=False)
 bpy.ops.import_scene.gltf(filepath=str(a.glb.resolve()))
 arms=[x for x in bpy.data.objects if x.type=="ARMATURE"]
 if len(arms)!=1 or len(arms[0].pose.bones)!=46:raise ValueError("real source 46 FSKL bones not imported")
 arm=arms[0];ad=arm.animation_data
 tr=next((x for x in ad.nla_tracks if x.name=="Act_BookOpen_Player"),None)
 if tr is None or len(tr.strips)!=1:raise ValueError("true BookOpen NLA not found")
 actions={x for x in arm.pose.bones.keys()}
 keyed={p.data_path.split('"')[1] for p in tr.strips[0].action.fcurves if p.data_path.startswith('pose.bones["')}
 unkeyed=actions-keyed
 if len(keyed)!=15 or len(unkeyed)!=31:raise ValueError("expected 15 keyed original BookOpen bones and 31 no action curves")
 ad.action=None;ad.use_nla=False
 for track in ad.nla_tracks:track.mute=track!=tr
 scene=bpy.context.scene;scene.frame_set(-1);bpy.context.view_layer.update()
 before={name:[float(v) for v in arm.pose.bones[name].matrix_basis.translation] for name in
         ("Waist","Skl_Root","Leg_1_L","Nose02","Arm_2_L")}
 if reset:
  for name in unkeyed:
   arm.pose.bones[name].matrix_basis.identity()
 bpy.context.view_layer.update()
 after={name:[float(v) for v in arm.pose.bones[name].matrix_basis.translation] for name in before}
 ad.use_nla=True
 records=[]
 for frame in range(31):
  scene.frame_set(-1);scene.frame_set(frame+1)
  bpy.context.view_layer.update()
  records.append({"source_frame":frame,"blender_scene_frame":frame+1,
     "joint_world_translations":{b.name:[float(v) for v in (arm.matrix_world@b.matrix).translation] for b in arm.pose.bones}})
 results.append({"mode":mode,"reset":reset,"keyed_count":len(keyed),"unkeyed_count":len(unkeyed),
   "keyed_names":sorted(keyed),"unkeyed_names":sorted(unkeyed),
   "rest_basis_traces_before":before,"rest_basis_traces_after":after,
   "complete_source_bookopen_frames":records})
 print("R39_SURGICAL_BOOKOPEN",mode,records[0]["joint_world_translations"]["Waist"],
       records[0]["joint_world_translations"]["Leg_2_L"])
report={"schema":"acnh303-r39-real-Blender-BookOpen-surgical-unkeyed-nativeFSKL-rest-controls-v1",
 "real_source_GLBSHA":SHA,"Blender":bpy.app.version_string,
 "fps_set_before_import":30,
 "experimental_armature_BookOpen_controls":results,
 "no_real_game_runtime_pose":True,
 "limits":"Independent source GLB fresh import for each control. Isolates 31 no-curve bones; identity pose basis only on them. A further comparison with source glTF world matrices is required to claim correction."}
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
