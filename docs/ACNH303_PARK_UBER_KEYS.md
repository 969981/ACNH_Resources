# ACNH 3.0.3 Park_UBER shader keys and material-pass candidates

## Source and verification
Current research branch (base 3.0.3), draft PR #126. Original source Shader/Park_UBER_All.Nin_NX_NVN.szs Git blob b290dd85bf7ca23bc5b969a79e520048f5bde1af; FSHA SHA256 912fea96a6671db31f2cee83d72e8754af1851247c5f3742f21b715b174b1049. Uses prior verified helper scripts from retained commit b17b413c7344b85f46beb620f636ac98d6e988ba. Layout hints: KillzXGaming/ShaderLibrary BfshaLoader.cs blob faf5f6ea6d748bfbf79a007f67853500506de95f, Structs.cs blob 9a9aeb10d8f425a96c8097bcc8acefc2df0e356c, ShaderOptionSearcher.cs blob f00c14a6b7bf041447a47b4130bfd581f2c325c9; BfresLibrary 65c005275deed1e085069e72fea523247f955b87 ModelParser.cs/ShapeParser.cs. Original bytes and bounds checks are the evidence.

Actual CI 45563193510 passed initial layout/keys. Independent inspection found null choice value arrays were incorrectly read from file offset 0; fixed in a044aa2f813f4bc0fdcbdaa8b0ba7a0760f33397. Actual corrected run 45563432189, job 139032379286 success, artifact 14998932148. All 725 option records have null choice value array pointers; names and their dictionary ordinal are available, no numeric value array invented. Initial matches were not affected (key choice uses dictionary index). Corrected artifact replaces initial artifact 14997908859.

## FSHA v8 layout
Header +0x48 model array, +0x50 model dictionary (zero signature, not _DIC), 0x100 model stride. Model +0x08/+0x10 static array/dict; +0x18/+0x20 dynamic array/dict; +0x38/+0x40 sampler array/dict; +0x88 program array; +0x90 key table; +0xa8 BNSH. +0xe4 static count, +0xe6 dynamic count, +0xe8 programs, +0xea/+0xeb static/dynamic word counts. Option 0x28 bytes, +0x18 choice count, +0x19 default index, +0x1d keyOffset, +0x1e bit32Index, +0x1f shift, +0x20 mask. Static word index=bit32Index; dynamic=staticWords+bit32Index-keyOffset. Program stride 0x40, +0x20 variation pointer, +0x28 parent model. Cross-check every parent and variation index, dictionary identity, disjoint masks, valid key indices; all 6520 unique full key tuples independently confirmed.

| Model | Offset | Static/Dynamic | Words | Program count | Program array | Key table | BNSH |
|---|---:|---:|---:|---:|---:|---:|---:|
| park_uber | 128 | 379/4 | 39+1 | 6496 | 24536 | 440280 | 7536640 |
| park_uber_vr | 384 | 338/4 | 35+1 | 24 | 7389520 | 7391056 | 42782720 |

Main dynamic key word39: gsys_weight mask F0000000 shift28 choices [-1,0,1,2,3,4,5,6,7,8]; gsys_index_stream_format mask 08000000 shift27 only 0; gsys_assign_type mask 07000000 shift24 choices material,zonly,depthshadow,cubemap,user0,user1,user2,visualize (all gsys_assign_ prefixed); system_id mask 00800000 shift23 only 0. Weight default -1 does not yield any of the eight matched material programs. Do not assume default runtime selection.

## Actual material-pass candidates
All 8 original FMATs match all 379 static choices (3032 exact constraints); four dynamic options absent from FMAT. Original FMDL +0x28 FSHP array, +0x30 dictionary, +0x6a count; FSHP 0x60 stride, +0x50 shape index, +0x52 material index, +0x5a VertexSkinCount. 8 shapes independently verified, all skin count 0. Conditional selection gsys_weight=0, gsys_assign_type=gsys_assign_material, gsys_index_stream_format=0, system_id=0 produces exactly one key per material. Native runtime producer and pass scheduler not yet confirmed, so these are exact conditional candidates.

| Asset/material | static candidates | Program | Variation | Vertex bytes | Fragment bytes |
|---|---:|---:|---:|---:|---:|
| Babybed mBody |40|2976|496|3072|9216|
| Babybed mReBody |40|2976|496|3072|9216|
| Babybed mReFabric |40|5712|1696|3328|10752|
| LampJapan mReBody |32|3568|1784|3072|9472|
| LampJapan mReFabric |16|5816|1752|3328|9728|
| BearS mReBody |32|3192|1840|3072|10752|
| BearS mReFabric |40|5712|1696|3328|10752|
| IceTableL mReBody |16|896|1800|3072|10752|

8 material associations, 6 distinct programs, 3 unique vertex binaries, 6 unique fragment binaries, 8 distinct control blobs, all 17 file SHA verified locally. Same program 5712 is reused by Babybed/BearS fabric; both have identical GPU code hashes. Bytecode/control records use original BNSH stage pointers, sizes and bounded offsets. No opcode/IR/GLSL decompilation or executed GPU rendering yet.

## Concrete texture slot evidence
Program 2976 active fragment sampler indices _a0=0,_n0=1,_s0=2. 3568/5816 additionally _e0=3 (FMAT _emi0); 5712 and 3192 additionally _ex0=5 (FMAT _es0/Mix2 vs _edgcod0/EdgCod). 896 _ex0=5 (Grd), _ind=9 (Mix), _a0=0 and _s0=2 both Mix, _n0=1 Normal. Raw v8 location arrays retained; fragment position follows ShaderLibrary reader layout. Not yet a hardware descriptor offset or channel extraction proof.

All seven non-ice FMATs material_select_roughness=2, material_select_roughness_channel=3, material_select_occlusion_channel=1, material_alpha_channel=3. IceTableL differs at roughness_channel=2. Choice dictionary names for channel are 0,1,2,3; values are absent. Do not infer RGBA order from this alone.

## Next
Authenticate native gsys_weight and gsys_assign_type producers and per-pass shader lookup. Decode selected Maxwell GPU code with an independently validated decoder, resolve texture slot/handle tables, trace sample/component operations and const_float0 usage. Compare program 5712 vs 3192 vs 896 with exact FMAT assignments. No blanket PBR channel semantics and no runtime selection or pixel equivalence claim.
