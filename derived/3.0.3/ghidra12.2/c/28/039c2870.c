
undefined8 FUN_039c2870(uint *param_1,uint param_2,long *param_3,undefined4 param_4)

{
  size_t __size;
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  
  lVar4 = DAT_05ae7600;
  if ((int)param_2 < 1) {
    return 0;
  }
  __size = (ulong)param_2 * 0x5a8 + 8;
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(__size);
    if (puVar3 == (ulong *)0x0) {
      return 0;
    }
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        return 0;
      }
    }
    puVar3 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,param_4);
    if (puVar3 == (ulong *)0x0) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_04bd1178;
  *puVar3 = (ulong)param_2;
  lVar4 = 0;
  do {
    lVar2 = lVar4 + 0x5a8;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x68) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x18) = 0;
    *(undefined1 **)((long)puVar3 + lVar4 + 0x20) = &DAT_3f8000003f800000;
    *(undefined4 *)((long)puVar3 + lVar4 + 200) = 0xffffffff;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x110) = 0x10000;
    *(undefined **)((long)puVar3 + lVar4 + 8) = puVar1 + 0x10;
    *(undefined1 **)((long)puVar3 + lVar4 + 0x10) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x38) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x40) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x48) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x50) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x58) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x60) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x78) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x80) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x88) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x90) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x98) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xa0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xa8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xb0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xb8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xc0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xf0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xf8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xe0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xe8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xd0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0xd8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x100) = 0;
    *(char **)((long)puVar3 + lVar4 + 0x108) = "agl::TextureData";
    *(undefined4 *)((long)puVar3 + lVar4 + 0x128) = 0xff;
    *(undefined4 *)((long)puVar3 + lVar4 + 300) = 0;
    *(undefined ***)((long)puVar3 + lVar4 + 0x70) = &PTR_LAB_04b65dc0;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x1a8) = 0xffffffff;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x1f0) = 0x10000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x140) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x148) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x130) = 0x80000000000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x138) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x158) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x160) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x168) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x170) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x178) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x180) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x188) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 400) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x198) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1a0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1d0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1d8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1c0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1c8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1b0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1b8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1e0) = 0;
    *(char **)((long)puVar3 + lVar4 + 0x1e8) = "agl::TextureData";
    *(undefined4 *)((long)puVar3 + lVar4 + 0x208) = 0xff;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x20c) = 0;
    *(undefined ***)((long)puVar3 + lVar4 + 0x150) = &PTR_LAB_04b65dc0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x210) = 0x80000000000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x228) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x220) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x218) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x280) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x278) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x270) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x268) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x260) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 600) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x250) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x248) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x240) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x238) = 0;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x288) = 0xffffffff;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2c0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2b8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2b0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2a8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2a0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x298) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x290) = 0;
    *(char **)((long)puVar3 + lVar4 + 0x2c8) = "agl::TextureData";
    *(undefined4 *)((long)puVar3 + lVar4 + 0x2d0) = 0x10000;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x2e8) = 0xff;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x2ec) = 0;
    *(undefined ***)((long)puVar3 + lVar4 + 0x230) = &PTR_LAB_04b65dc0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2f0) = 0x80000000000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x308) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x300) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2f8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x360) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x358) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x350) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x348) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x340) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x338) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x330) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x328) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 800) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x318) = 0;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x368) = 0xffffffff;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x3a0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x398) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x390) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x388) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x380) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x378) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x370) = 0;
    *(char **)((long)puVar3 + lVar4 + 0x3a8) = "agl::TextureData";
    *(undefined4 *)((long)puVar3 + lVar4 + 0x3b0) = 0x10000;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x3c8) = 0xff;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x3cc) = 0;
    *(undefined ***)((long)puVar3 + lVar4 + 0x310) = &PTR_LAB_04b65dc0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x3d0) = 0x80000000000;
    *(undefined8 *)((long)puVar3 + lVar4 + 1000) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x3e0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x3d8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x440) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x438) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x430) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x428) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x420) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x418) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x410) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x408) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x400) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x3f8) = 0;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x448) = 0xffffffff;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x480) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x478) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x470) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x468) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x460) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x458) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x450) = 0;
    *(char **)((long)puVar3 + lVar4 + 0x488) = "agl::TextureData";
    *(undefined4 *)((long)puVar3 + lVar4 + 0x490) = 0x10000;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x4a8) = 0xff;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x4ac) = 0;
    *(undefined ***)((long)puVar3 + lVar4 + 0x3f0) = &PTR_LAB_04b65dc0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4b0) = 0x80000000000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4c8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4c0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4b8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x520) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x518) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x510) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x508) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x500) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4f8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4f0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4e8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4e0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x4d8) = 0;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x528) = 0xffffffff;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x560) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x558) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x550) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x548) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x540) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x538) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x530) = 0;
    *(char **)((long)puVar3 + lVar4 + 0x568) = "agl::TextureData";
    *(undefined4 *)((long)puVar3 + lVar4 + 0x570) = 0x10000;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x588) = 0xff;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x58c) = 0;
    *(undefined ***)((long)puVar3 + lVar4 + 0x4d0) = &PTR_LAB_04b65dc0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x590) = 0x80000000000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x5a8) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x5a0) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x598) = 0;
    lVar4 = lVar2;
  } while ((ulong)param_2 * 0x5a8 != lVar2);
  *param_1 = param_2;
  *(ulong **)(param_1 + 2) = puVar3 + 1;
  return 1;
}

