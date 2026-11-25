# HASH-008G — AD0C787A default ReBody variant dataflow

返回 [知识库首页](README.md) · [专题索引](Research/Native-Research.md) · [研究路线](Research/Research-Roadmap.md)。

## Accepted baseline

HASH-008F CI [45568225032](https://github.com/969981/ACNH_Resources/actions/runs/45568225032), job 139048179541 PASS. Exact original forward/backref join 8/8, 36 ordinary recipes with body_count=2,fabric_count=0, flag=0. Five original predicate B/BL edges, all BL immediately followed by TBZ W0,#0; body_count 408 edges, fabric_count 142, recipe_index 15.

## All five caller C exports

Pinned archived source acabc03099dff264184465c7fd9c3b298dd1fcda, image base 0x100000. Each C export contains the explicit call (not inferred solely from proximity).

| Ghidra function | Ghidra call site | Source blob | Meaning |
|---|---|---|---|
| 01AF6A60 | 01AF6E28 | [54db7e97a8856d0e1ff65b38d3acbac348ee8d13](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/6a/01af6a60.c) | Layout_%s_%s_Remake_%d_%d |
| 026138CC | 026139E8 | [7567c24f364117e1e29a0074c6a7ba44945fba47](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/38/026138cc.c) | non-default test |
| 0261FB40 | 0261FF40 | [941544b67281d12cfb75f76e1b47db9b3263121d](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/fb/0261fb40.c) | recipe writer |
| 028AA290 | 028AAA9C | [68a284ef7683aa7a16fa065138a0474740655cbd](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/a2/028aa290.c) | scene writer |
| 03412D40 | 03413224 | [1604f3cbcaf43056e011dd360b29b9f66d3d58ce](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/2d/03412d40.c) | icon selection |

FUN_026138CC reads *FUN_01AFD600(wrapper) & 7, validates < body_count, then for flag=true checks actual body != selected environment value (for env 0 or 1). Normal path tests body != 0. FUN_0261FB40 creates 8-byte item in param_2+8 via FUN_0277D4AC, copies into wrapper, if predicate true and selected environment==1 and body_count>1, writes halfword & 0xFFF8 | 1, copies modified 8 bytes back. FUN_028AA290 in local_6c[0]==0x122 branch writes halfword & 0xFFF8 | (environment==1), copies modified 8-byte item to target and history records. FUN_03412D40 passes selector 1 for environment0 and 2 for environment1 to FUN_01AF6A60; latter uses Layout_%s_%s_Remake_%d_%d. Accessor FUN_01AFD600 blob 8e116e483fb7d64ad0f9f8635720819c75b43bb6 selects storage by item kind, not a universal pointer offset.

## Environment resolver (source-level reconstruction)

```cpp
ctx = *PTR_DAT_04BB27D0;
if (!ctx->member10 || (ctx->member80 & ~1u) != 2 ||
    ctx->member10->member3E4 == 1) {
    env = (*PTR_DAT_04BB30A0)->member65204;
    if (env > 1) env = 0;
} else {
    env = (*PTR_DAT_04BBAED0)->member274;
}
```

FUN_0261FB40 skips when primary env>1 instead of clamping. Primary/alternate root memory offsets are directly recovered, semantics of context selector +0x3E4 are NOT proven. External corroboration NHSE Item.cs blob 1966ea1799c1ab1db2e655a31d3ecfe150b019fe: Item 8-byte FreeParam +4, BodyType mask 7; Hemisphere.cs blob 4c62317d4b000ff077c0715b7a5531620bdb6587: Northern=0 Southern=1; MainSave.cs blob b16a9a3b691d901fc58bd2945675b3c361dd2155: Hemisphere reads WeatherArea. These establish independent structure/enum compatibility, not direct runtime storage provenance.

## Evidence grading

AD0C787A semantic alias EnvironmentDependentDefaultReBody (high confidence static code; not original header). Runtime hemisphere source and exact 3.0.3 save mapping remain open. New machine-code verifier exports raw NSO/ELF authenticated contexts, GOT relocations, bounded accessor BL and STRH [x0] candidates; candidate count not a verified field writer until instruction dataflow checked. Local CRC32 50,342,400 evaluations of targeted WeatherArea/Hemisphere/Remake/Default/Season combinations with compatible suffixes, no match; 28 original names remain unknown. Next trace producers of member65204 and member274, test actual variant generation for both hemisphere values and archive field evidence without replacing unknown names.
