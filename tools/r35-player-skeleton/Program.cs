using System;
using System.Linq;
using System.IO;
using System.Text.Json;
using System.Collections.Generic;
using BfresLibrary;

if (args.Length!=2) { Console.Error.WriteLine("Usage: SkeletonProbe real_original.bfres report.json");return 2; }
var result=new Dictionary<string,object?>();
try {
 using var f=File.OpenRead(args[0]); var file=new ResFile(f);
 var items=new List<object>(); int boneCount=0, shapeCount=0;
 for(int m=0;m<file.Models.Count;m++){
  var model=file.Models[m];
  var boneList=new List<object>();
  var skeleton=model.Skeleton;
  for(int i=0;i<skeleton.Bones.Count;i++){
   var bone=skeleton.Bones[i];
   boneList.Add(new {
    bone_index=i,name=bone.Name,parent_index=bone.ParentIndex,
    scale=new[]{bone.Scale.X,bone.Scale.Y,bone.Scale.Z},
    rotation=new[]{bone.Rotation.X,bone.Rotation.Y,bone.Rotation.Z,bone.Rotation.W},
    translation=new[]{bone.Position.X,bone.Position.Y,bone.Position.Z},
    rotation_flag=bone.FlagsRotation.ToString()});
  }
  boneCount+=boneList.Count;shapeCount+=model.Shapes.Count;
  items.Add(new {
    index=m, name=model.Name,
    shape_count=model.Shapes.Count,
    vertex_buffer_count=model.VertexBuffers.Count,
    material_count=model.Materials.Count,
    real_fskl_bone_count=boneList.Count,
    real_bones=boneList
  });
 }
 result["status"]="BfresLibrary_FMDL_FSKL_deserialized";
 result["input_bytes"]=new FileInfo(args[0]).Length;
 result["model_count"]=items.Count;
 result["total_bones"]=boneCount;
 result["total_shapes"]=shapeCount;
 result["models"]=items;
 result["limitations"]="Actual native parent hierarchy and transforms from original. Model FSKL bone identity does not alone prove Nintendo native runtime skinning or inverse bind matrix fidelity in glTF.";
} catch(Exception e) {
 result["status"]="parse_failed";result["error"]=e.Message;result["exception_type"]=e.GetType().FullName;
}
Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(args[1]))!);
File.WriteAllText(args[1],JsonSerializer.Serialize(result,new JsonSerializerOptions{WriteIndented=true}));
Console.WriteLine("R35_PLAYERBODY_REAL_FSKL "+JsonSerializer.Serialize(result.Where(x=>x.Key!="models").ToDictionary(x=>x.Key,x=>x.Value)));
return result["status"]?.ToString()=="BfresLibrary_FMDL_FSKL_deserialized"?0:3;
