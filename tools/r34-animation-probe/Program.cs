using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Text.Json;
using BfresLibrary;

// Read-only animation exporter: export actual parsed metadata, curve/keyframes.
// Never synthesize mesh geometry from an animation-only BFRES.
if (args.Length != 2)
{
    Console.Error.WriteLine("Usage: ResAnimProbe <real-original.bfres> <report.json>");
    return 2;
}
var path = args[0];
var reportFile = args[1];
var info = new Dictionary<string, object?>();
try
{
    using var fs = File.OpenRead(path);
    var bfres = new ResFile(fs);
    var skeletonAnimations = new List<object>();
    long allBoneCurves = 0, allFrameValues = 0;
    for (int i = 0; i < bfres.SkeletalAnims.Count; i++)
    {
        var item = bfres.SkeletalAnims[i];
        var bones = new List<object>();
        for (int j = 0; j < item.BoneAnims.Count; j++)
        {
            var bone = item.BoneAnims[j];
            var curves = new List<object>();
            foreach (var curve in bone.Curves)
            {
                var frames = curve.Frames?.ToArray() ?? Array.Empty<float>();
                var keyCount = curve.Keys?.GetLength(0) ?? 0;
                if (keyCount != frames.Length && keyCount > 0)
                    throw new InvalidDataException("Curve keyframe dimensions disagree: " + item.Name);
                allFrameValues += frames.Length;
                allBoneCurves++;
                if (allFrameValues > 5000000 || allBoneCurves > 500000)
                    throw new InvalidDataException("Animation complexity exceeds read-only safe bounds");
                var keys = new List<float[]>();
                if (curve.Keys != null)
                {
                    for (int k = 0; k < curve.Keys.GetLength(0); k++)
                    {
                        var comps = new float[curve.Keys.GetLength(1)];
                        for (int n = 0; n < comps.Length; n++)
                        {
                            float v = curve.Keys[k,n];
                            if (!float.IsFinite(v)) throw new InvalidDataException("Nonfinite key value");
                            comps[n] = v;
                        }
                        keys.Add(comps);
                    }
                }
                if (frames.Any(x => !float.IsFinite(x))) throw new InvalidDataException("Nonfinite frame");
                curves.Add(new { curve_type=curve.CurveType.ToString(),
                    frame_type=curve.FrameType.ToString(), key_type=curve.KeyType.ToString(),
                    animation_data_offset=curve.AnimDataOffset,
                    start_frame=curve.StartFrame, end_frame=curve.EndFrame,
                    frames, keys, key_count=keyCount });
            }
            bones.Add(new { name=bone.Name, curve_count=curves.Count, curves });
        }
        skeletonAnimations.Add(new { index=i, name=item.Name, frame_count=item.FrameCount,
            loop=item.Loop, baked=item.Baked, bone_animation_count=bones.Count,
            binding_skeleton_is_null=item.BindSkeleton == null,
            bone_animations=bones });
    }
    info["status"]="fully_deserialized_with_external_bfres_library";
    info["library"]="BfresLibrary 1.6.0";
    info["input_bytes"]=new FileInfo(path).Length;
    info["actual_skeletal_animation_count"]=skeletonAnimations.Count;
    info["actual_bone_curve_count"]=allBoneCurves;
    info["actual_frame_value_count"]=allFrameValues;
    info["skeletal_animations"]=skeletonAnimations;
    info["limits"]="Actual parsed keyframes and bone names; skeleton bindings/glTF runtime and native renderer interpolation are NOT established by deserialization alone.";
}
catch (Exception e)
{
    info["status"]="library_parse_failed";
    info["exception_type"]=e.GetType().FullName;
    info["error"]=e.Message;
    info["limits"]="Preserve original bytes; never claim fully parsed FSKA on library exception.";
}
Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(reportFile))!);
File.WriteAllText(reportFile, JsonSerializer.Serialize(info, new JsonSerializerOptions { WriteIndented=true }));
Console.WriteLine("R34_FSKA_NATIVE " + JsonSerializer.Serialize(
    info.Where(x=>x.Key!="skeletal_animations").ToDictionary(x=>x.Key,x=>x.Value)));
return info["status"]?.ToString()=="fully_deserialized_with_external_bfres_library" ? 0 : 3;
