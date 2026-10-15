"""Blender headless actual GLB import and rendered evidence (NOT original ACNH parity).

Usage: blender -b -t 2 --python tools/r37-blender/probe.py -- --glb ...
"""
import argparse,bpy,hashlib,json,math,struct,sys,os
from pathlib import Path
from mathutils import Vector
arg=sys.argv[sys.argv.index("--")+1:] if "--" in sys.argv else []
p=argparse.ArgumentParser()
p.add_argument("--glb",type=Path,required=True)
p.add_argument("--output",type=Path,required=True)
a=p.parse_args(arg if arg else ["--glb",os.environ["R37_GLB"],"--output",os.environ["R37_OUTPUT"]]);a.output.mkdir(parents=True,exist_ok=True)
src=a.glb.read_bytes();digest=hashlib.sha256(src).hexdigest()
if digest!="4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3":
 raise ValueError("Original native R36 69-channel GLB SHA mismatch")
bpy.ops.object.select_all(action="SELECT");bpy.ops.object.delete(use_global=False)
scene=bpy.context.scene
scene.render.fps=30
scene.render.resolution_x=640;scene.render.resolution_y=640;scene.render.resolution_percentage=100
scene.render.image_settings.file_format="PNG"
# EEVEE/Workbench live-only; avoid Cycles GPU differences.
scene.render.engine="BLENDER_WORKBENCH"
scene.display.shading.light='STUDIO'
scene.display.shading.color_type='MATERIAL'
scene.display.shading.show_shadows=True
bpy.ops.import_scene.gltf(filepath=str(a.glb.resolve()))
meshes=[o for o in bpy.data.objects if o.type=="MESH"]
arms=[o for o in bpy.data.objects if o.type=="ARMATURE"]
actions=[action.name for action in bpy.data.actions]
nla=[]
for obj in bpy.data.objects:
 anim=obj.animation_data
 if anim is None:continue
 for tr in anim.nla_tracks:
  strips=[{"name":s.name,"action_name":s.action.name if s.action else None,
           "frame_start":s.frame_start,"frame_end":s.frame_end} for s in tr.strips]
  nla.append({"object":obj.name,"track":tr.name,"strips":strips})
if len(meshes)<11 or not arms:
 raise ValueError("Blender imported fewer than 11 original mesh objects or missing armature")
# Place camera based on actual transformed mesh bounds at frame 0.
scene.frame_set(0);bpy.context.view_layer.update()
pts=[]
for ob in meshes:
 if ob.hide_render:continue
 pts.extend([ob.matrix_world@Vector(corner) for corner in ob.bound_box])
if not pts:raise ValueError("no actual mesh geometry for Blender bounds")
mn=Vector([min(q[i] for q in pts) for i in range(3)])
mx=Vector([max(q[i] for q in pts) for i in range(3)])
center=(mn+mx)*.5
radius=max((mx-mn).length,1)
bpy.ops.object.camera_add(location=center+Vector((radius*1.3,-radius*1.8,radius*.9)))
cam=bpy.context.object
direction=center-cam.location
cam.rotation_euler=direction.to_track_quat("-Z","Y").to_euler()
cam.data.type="ORTHO";cam.data.ortho_scale=radius*1.6
scene.camera=cam
scene.render.film_transparent=False
scene.world.color=(.06,.06,.06)
clips=("Act_ArrangeRemoveFtrHigh","Act_BookOpen_Player","Act_BookRead_Player")
results=[]
for clip in clips:
 enabled=0;available=0
 for ob in bpy.data.objects:
  ad=ob.animation_data
  if not ad:continue
  if len(ad.nla_tracks):
   ad.action=None
   ad.use_nla=True
  for tr in ad.nla_tracks:
   matched=any(clip in (strip.action.name if strip.action else "") or clip in strip.name for strip in tr.strips)
   available+=len(tr.strips)
   tr.mute=not matched
   if matched:enabled+=1
 if enabled==0:
  results.append({"name":clip,"render_status":"SKIPPED_NOT_FOUND_IN_NLA",
   "available_action_names":actions,"available_strips":available})
  continue
 frames=(0,15)
 pics=[]
 for frame in frames:
  scene.frame_set(-1)
  scene.frame_set(frame+1);bpy.context.view_layer.update()
  path=a.output/(clip+"_frame%03d.png"%frame)
  scene.render.filepath=str(path.resolve())
  bpy.ops.render.render(write_still=True)
  raw=path.read_bytes()
  if len(raw)<4096 or raw[:8]!=b"\x89PNG\r\n\x1a\n":
   raise ValueError("Blender output invalid PNG")
  bone_snapshots={}
  for arm in arms:
   bone_snapshots[arm.name]={name:[float(x) for x in arm.pose.bones[name].matrix.translation] for name in
      ("Spine_1","Arm_2_L","Arm_2_R","Head","Waist","Leg_1_L","Leg_1_R") if name in arm.pose.bones}
  pic={"frame":frame,"blender_scene_frame":frame+1,"source_pose_world_bone_translation":bone_snapshots,
   "size_bytes":len(raw),"sha256":hashlib.sha256(raw).hexdigest(),
   "path":str(path)}
  pics.append(pic)
 results.append({"name":clip,"enabled_nla_tracks":enabled,"render_status":"REAL_BLENDER_RENDER",
   "frames":pics,"source_game_pixel_diff_available":False})
report={"schema":"acnh303-r37-isolated-real-Blender-NLA-source-clip-render-v2",
 "original_glb_sha":digest,"blender_version":bpy.app.version_string,
 "imported_mesh_objects":len(meshes),"armature_count":len(arms),
 "armature_bone_counts":[len(x.data.bones) for x in arms],
 "original_materials":len(bpy.data.materials),"actions":actions,
 "original_animation_track_names":nla,
 "clip_isolation_mode":"clear_active_action_enable_nla_mute_other_tracks_force_scene_cache_reset",
 "renders":results,
 "game_original_runtime_frame_comparison":"NOT_TESTED",
 "absolute_image_visual_quality_accepted":False,
 "note":"Renders verify Blender can load/evaluate skin/motion images; there are no ACNH in-game truth frames, skeleton evaluator traces or pixel-diff, so never mark Nintendo parity."}
path=a.output/"blender_import_and_render_report.json"
path.write_text(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
print("R37_BLENDER_REAL_IMPORT",len(meshes),[len(x.data.bones) for x in arms],len(bpy.data.actions))
print("R37_BLENDER_NATIVE_FSKA_CLIPS",[(x["name"],x["render_status"]) for x in results])
