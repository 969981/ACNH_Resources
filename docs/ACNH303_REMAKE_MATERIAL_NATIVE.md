# ReBody / ReFabric — native material binding, stage 2

## Stage 1 actual acceptance
PR #122 merged f09e15460d02790060a374b2ad6ba569ba9b97ed into 3.0.3_Unpack. Actions 45556794745 job 139010672284 all steps passed, artifact 14995444108. Original Model Git tree 60166 files; 1306 ItemRemake definitions, 1785/1785 non-sentinel item references linked, 479 reverse-ID mismatches/shared references and 479 Kind_Bromide special candidates, 4 empty model names among remake references. Ordinary resource candidate checks: body 6414/6563 (149 missing), fabric 1570/1570, base 1302 found, complete ordinary candidates 1282. Counts are per reference/path expectation, not unique source texture objects. Do not infer absent resources imply game defect. Source name divergence 2064 total, 512 with remakes. No model pixel decode in this run.

## Stage 2 actual C evidence
- 01530C60 initializes DAT_0520F368=0 and DAT_0520F378=1 using guarded static initialization. Both index PTR_s_mReBody_049A7730 with bound 12. The 12 pointer table slots need original NSO relocation authentication. Index 0=mReBody and 1=mReFabric are expected, not asserted as measured until the new CI passes.
- 01533310 initializes explicit names mReFabric_Alb, mRug_Alb, mReFabric_OP, FtrBromideFrame, FtrBromideFrameWall and mBody_Alb. These are distinct from material enum indices.
- 01664B40 checks material dictionary at *(param_2+0xd8)+0x48 using name byte comparison, then obtains instance array at param_2+0x120, stride 0x80. Slot count at material descriptor+0x9d, texture name pointer array at descriptor+0x30 (length-prefixed names, +2).
- 038FE510 calls 038FDE10, obtains dictionary at returned object+0x38 and compares full name length and bytes before looking up entry from +0x28. 01664B40 uses returned texture object's +0x88/+0x90 pair, updates instance reference arrays at +0x50/+0x58; callback +0x78 invoked on changed references (precise change condition requires ARM64 verification). If lookup fails, the slot is not overwritten. This is a static material/texture reference update, not yet full ShaderParam/sampler interpretation.
- Raw machine-code audit uses existing R100 authenticated ELF+NSO decoder, resolves 12 RELA/RELR table entries to original string bytes, verifies direct BL edges and exports original instruction bytes in bounded windows. New CI pending; cannot claim runtime binding or pixel equivalence.
- Babybed existing 16 BFRES resources and 37 decoded textures are separate from 56 CDN images. Next compare actual material TextureRef/SamplerRef slots against BRTI names and native update behavior for a 2x2 sample before rendering. Body missing-path inventory also requires investigation, especially shared resource bases and native special modes.

## Reproduction
```bash
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_remake_material_native.py --root . --out artifacts/remake-material-native
```
No changes to acnh-web or robot payloads.
