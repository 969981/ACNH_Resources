
void FUN_039121e4(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar3 = malloc(0x558);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        pvVar3 = (void *)0x0;
        goto LAB_03912284;
      }
    }
    pvVar3 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x558,8);
  }
LAB_03912284:
  FUN_0390cee0(pvVar3);
  *(undefined8 *)((long)pvVar3 + 0x120) = 0;
  *(undefined8 *)((long)pvVar3 + 0x128) = 0;
  *(undefined4 *)((long)pvVar3 + 0x130) = 0xffffffff;
  *(undefined8 *)((long)pvVar3 + 0x110) = 0;
  *(undefined8 *)((long)pvVar3 + 0x118) = 0;
  *(undefined4 *)((long)pvVar3 + 0x178) = 0x10000;
  *(undefined8 *)((long)pvVar3 + 0x200) = 0;
  *(undefined4 *)((long)pvVar3 + 0x208) = 0xffffffff;
  *(undefined8 *)((long)pvVar3 + 0x210) = 0;
  *(undefined8 *)((long)pvVar3 + 0x218) = 0;
  *(undefined8 *)((long)pvVar3 + 0x220) = 0;
  *(undefined8 *)((long)pvVar3 + 0x228) = 0;
  *(undefined8 *)((long)pvVar3 + 0x230) = 0;
  *(undefined8 *)((long)pvVar3 + 0x238) = 0;
  *(undefined8 *)((long)pvVar3 + 0x240) = 0;
  *(char **)((long)pvVar3 + 0x248) = "agl::TextureData";
  *(undefined4 *)((long)pvVar3 + 0x250) = 0x10000;
  *(undefined8 *)((long)pvVar3 + 600) = 0;
  *(undefined8 *)((long)pvVar3 + 0x260) = 0;
  *(undefined8 *)((long)pvVar3 + 0x268) = 0;
  *(undefined8 *)((long)pvVar3 + 0x270) = 0;
  *(undefined8 *)((long)pvVar3 + 0x278) = 0;
  *(undefined8 *)((long)pvVar3 + 0x280) = 0;
  *(undefined8 *)((long)pvVar3 + 0x288) = 0;
  *(undefined8 *)((long)pvVar3 + 0x290) = 0;
  *(undefined8 *)((long)pvVar3 + 0x298) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2a0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2a8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2b0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2b8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2c0) = 0;
  *(undefined4 *)((long)pvVar3 + 0x2c8) = 0xffffffff;
  *(undefined8 *)((long)pvVar3 + 0x2d0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2d8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2e0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2e8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2f0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x2f8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x300) = 0;
  *(char **)((long)pvVar3 + 0x308) = "agl::TextureData";
  *(undefined4 *)((long)pvVar3 + 0x310) = 0x10000;
  *(undefined8 *)((long)pvVar3 + 0x318) = 0xffffffffffffffff;
  *(undefined8 *)((long)pvVar3 + 800) = 0xffffffffffffffff;
  *(undefined1 **)((long)pvVar3 + 0x330) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)pvVar3 + 0x338) = 0;
  *(undefined8 *)((long)pvVar3 + 0x100) = 0;
  *(undefined8 *)((long)pvVar3 + 0x108) = 0;
  *(undefined8 *)((long)pvVar3 + 0xf0) = 0;
  *(undefined8 *)((long)pvVar3 + 0xf8) = 0;
  *(undefined8 *)((long)pvVar3 + 0xe0) = 0;
  *(undefined8 *)((long)pvVar3 + 0xe8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x138) = 0;
  *(undefined8 *)((long)pvVar3 + 0x140) = 0;
  *(undefined8 *)((long)pvVar3 + 0x148) = 0;
  *(undefined8 *)((long)pvVar3 + 0x150) = 0;
  *(undefined8 *)((long)pvVar3 + 0x158) = 0;
  *(undefined8 *)((long)pvVar3 + 0x160) = 0;
  *(undefined8 *)((long)pvVar3 + 0x168) = 0;
  *(char **)((long)pvVar3 + 0x170) = "agl::TextureData";
  *(undefined8 *)((long)pvVar3 + 0x180) = 0;
  *(undefined8 *)((long)pvVar3 + 0x188) = 0;
  *(undefined8 *)((long)pvVar3 + 400) = 0;
  *(undefined8 *)((long)pvVar3 + 0x198) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1a0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1a8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1b0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1b8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1c0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1c8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1d0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1d8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1e0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1e8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1f0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1f8) = 0;
  puVar1 = PTR_DAT_04bd1178;
  *(undefined1 **)((long)pvVar3 + 0x340) = &DAT_3f8000003f800000;
  *(undefined **)((long)pvVar3 + 0x328) = puVar1 + 0x10;
  *(undefined8 *)((long)pvVar3 + 0x348) = 0;
  *(undefined8 *)((long)pvVar3 + 0x350) = 0;
  *(undefined8 *)((long)pvVar3 + 0x358) = 0;
  *(undefined8 *)((long)pvVar3 + 0x360) = 0;
  *(undefined8 *)((long)pvVar3 + 0x368) = 0;
  *(undefined8 *)((long)pvVar3 + 0x370) = 0;
  *(undefined8 *)((long)pvVar3 + 0x378) = 0;
  *(undefined8 *)((long)pvVar3 + 0x380) = 0;
  *(undefined8 *)((long)pvVar3 + 0x388) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3e0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3d8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3d0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3c8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3c0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3b8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3b0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3a8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3a0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x398) = 0;
  *(undefined4 *)((long)pvVar3 + 1000) = 0xffffffff;
  *(undefined8 *)((long)pvVar3 + 0x420) = 0;
  *(undefined8 *)((long)pvVar3 + 0x418) = 0;
  *(undefined8 *)((long)pvVar3 + 0x410) = 0;
  *(undefined8 *)((long)pvVar3 + 0x408) = 0;
  *(undefined8 *)((long)pvVar3 + 0x400) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3f8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x3f0) = 0;
  *(char **)((long)pvVar3 + 0x428) = "agl::TextureData";
  *(undefined4 *)((long)pvVar3 + 0x430) = 0x10000;
  *(undefined4 *)((long)pvVar3 + 0x448) = 0xff;
  *(undefined **)((long)pvVar3 + 0x390) = PTR_DAT_04bd1198 + 0x10;
  *(undefined4 *)((long)pvVar3 + 0x44c) = 0;
  *(undefined8 *)((long)pvVar3 + 0x450) = 0x80000000000;
  *(undefined8 *)((long)pvVar3 + 0x468) = 0;
  *(undefined8 *)((long)pvVar3 + 0x460) = 0;
  *(undefined8 *)((long)pvVar3 + 0x458) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4c0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4b8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4b0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4a8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4a0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x498) = 0;
  *(undefined8 *)((long)pvVar3 + 0x490) = 0;
  *(undefined8 *)((long)pvVar3 + 0x488) = 0;
  *(undefined8 *)((long)pvVar3 + 0x480) = 0;
  *(undefined8 *)((long)pvVar3 + 0x478) = 0;
  *(undefined4 *)((long)pvVar3 + 0x4c8) = 0xffffffff;
  *(undefined8 *)((long)pvVar3 + 0x500) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4f8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4f0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4e8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4e0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4d8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x4d0) = 0;
  *(char **)((long)pvVar3 + 0x508) = "agl::TextureData";
  *(undefined4 *)((long)pvVar3 + 0x510) = 0x10000;
  *(undefined4 *)((long)pvVar3 + 0x528) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x52c) = 0;
  *(undefined **)((long)pvVar3 + 0x470) = PTR_DAT_04bd11a0 + 0x10;
  *(undefined8 *)((long)pvVar3 + 0x530) = 0x80000000000;
  *(undefined8 *)((long)pvVar3 + 0x548) = 0;
  *(undefined8 *)((long)pvVar3 + 0x540) = 0;
  pcVar5 = *(code **)PTR_DAT_04bcf220;
  *(undefined8 *)((long)pvVar3 + 0x538) = 0;
  (*pcVar5)((long)pvVar3 + 0x518);
  *(undefined1 *)((long)pvVar3 + 0x550) = 0;
  *(char **)((long)pvVar3 + 0x170) = "agl::env::CubeMap";
  *(void **)(param_1 + 0x10) = pvVar3;
  *(undefined4 *)(param_1 + 0xc0) = *param_4;
  *(undefined4 *)(param_1 + 0xc4) = param_4[1];
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_4 + 2);
  uVar6 = *(undefined8 *)(param_4 + 4);
  *(undefined4 *)(param_1 + 0xd8) = param_5;
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  *(undefined4 *)(param_1 + 0xe0) = *param_6;
  *(undefined4 *)(param_1 + 0xe4) = param_6[1];
  lVar8 = *(long *)(param_6 + 2);
  *(long *)(param_1 + 0xe8) = lVar8;
  uVar6 = *(undefined8 *)(param_6 + 4);
  *(undefined4 *)(param_1 + 0xf8) = param_7;
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  if (lVar8 != 0) {
    FUN_0390a734(param_1 + 0x18,1,0x14,1,1,1,1,1,0,1);
    iVar7 = *(int *)(param_1 + 0x54);
    uStack_64 = *(undefined4 *)(param_1 + 0xe4);
    *(char **)(param_1 + 0xa8) = "CMM_Unit";
    bVar4 = false;
    if (iVar7 < 0x21) {
      iVar7 = 0x20;
    }
    local_60 = *(undefined8 *)(param_1 + 0xe8);
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    local_68 = (*(int *)(param_1 + 0xe0) + iVar7) - 1U & -iVar7;
    *(uint *)(param_1 + 0x18) = local_68;
    *(undefined4 *)(param_1 + 0x1c) = uStack_64;
    *(undefined8 *)(param_1 + 0x20) = local_60;
    *(undefined8 *)(param_1 + 0x28) = uStack_58;
    if ((*(byte *)(param_1 + 0x66) >> 1 & 1) != 0) {
      bVar4 = 0x11 < *(ushort *)(param_1 + 0xb0) && *(ushort *)(param_1 + 0xb0) - 0x59 < 0xffffffd6;
    }
    FUN_038fd3e0(param_1 + 0x68,&local_68,param_1 + 0x48,0,"CMM_Unit",bVar4,1);
  }
  *(undefined8 *)(param_1 + 0xfc) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}

