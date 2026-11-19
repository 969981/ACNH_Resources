
void FUN_039e1fc0(long param_1,int param_2,long param_3,undefined8 param_4,uint param_5,
                 long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t __size;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  short sVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  byte *pbVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  int *piVar32;
  void *pvVar33;
  undefined *puVar34;
  ulong *puVar35;
  long *local_4a8;
  undefined *local_490;
  byte *local_488;
  undefined *local_480;
  byte *local_478;
  int local_470;
  byte local_46c [31];
  undefined1 local_44d;
  
  *(char *)(param_1 + 0x309) = (char)param_2;
  *(long *)(param_1 + 0x168) = param_3;
  lVar25 = param_1;
  if (0 < param_2) {
    lVar25 = *(long *)(param_3 + 0x1d8);
  }
  FUN_03922d50(param_1,param_4,param_6);
  if ((int)param_5 < 1) {
LAB_039e2390:
    param_5 = *(uint *)(param_1 + 0x178);
    puVar35 = *(ulong **)(param_1 + 0x180);
  }
  else {
    uVar29 = (ulong)param_5 * 0x620 | 8;
    lVar24 = *(long *)PTR_DAT_04bb2698;
    if (lVar24 == 0) {
      puVar16 = malloc(uVar29);
    }
    else {
      plVar15 = param_6;
      if (param_6 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_039e2390;
      }
      puVar16 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar29,8);
    }
    if (puVar16 == (ulong *)0x0) goto LAB_039e2390;
    puVar35 = puVar16 + 1;
    *puVar16 = (ulong)param_5;
    puVar1 = PTR_DAT_04bd1178 + 0x10;
    puVar2 = PTR_DAT_04bd1198 + 0x10;
    puVar3 = PTR_DAT_04bd11b8 + 0x10;
    lVar24 = 0;
    do {
      lVar14 = lVar24 + 0x620;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x68) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x18) = 0;
      *(undefined1 **)((long)puVar16 + lVar24 + 0x20) = &DAT_3f8000003f800000;
      *(undefined4 *)((long)puVar16 + lVar24 + 200) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x110) = 0x10000;
      *(undefined **)((long)puVar16 + lVar24 + 8) = puVar1;
      *(undefined1 **)((long)puVar16 + lVar24 + 0x10) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x28) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x30) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x38) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x40) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x48) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x50) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x58) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x60) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x78) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x80) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x88) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x90) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x98) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xa0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xa8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xb0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xb8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xc0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xd0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xd8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xe0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xe8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xf0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0xf8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x100) = 0;
      *(char **)((long)puVar16 + lVar24 + 0x108) = "agl::TextureData";
      *(undefined4 *)((long)puVar16 + lVar24 + 0x128) = 0xff;
      *(undefined4 *)((long)puVar16 + lVar24 + 300) = 0;
      *(undefined **)((long)puVar16 + lVar24 + 0x70) = puVar2;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x1a8) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x1f0) = 0x10000;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x130) = 0x80000000000;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x138) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x140) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x148) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x198) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1a0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x188) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 400) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x178) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x180) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x168) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x170) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x158) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x160) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1d0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1d8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1c0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1c8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1b0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1b8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x1e0) = 0;
      *(char **)((long)puVar16 + lVar24 + 0x1e8) = "agl::TextureData";
      *(undefined4 *)((long)puVar16 + lVar24 + 0x208) = 0xff;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x20c) = 0;
      *(undefined **)((long)puVar16 + lVar24 + 0x150) = puVar2;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x210) = 0x80000000000;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x228) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x220) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x218) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x238) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x240) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x248) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x250) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 600) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x260) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x268) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x270) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x278) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x280) = 0;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x288) = 0xffffffff;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x2c0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x2b8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x2b0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x2a8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x2a0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x298) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x290) = 0;
      *(char **)((long)puVar16 + lVar24 + 0x2c8) = "agl::TextureData";
      *(undefined4 *)((long)puVar16 + lVar24 + 0x2d0) = 0x10000;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x2e8) = 0xff;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x2ec) = 0;
      *(undefined **)((long)puVar16 + lVar24 + 0x230) = puVar2;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x2f0) = 0x80000000000;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x308) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x300) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x2f8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x360) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x358) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x350) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x348) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x340) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x338) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x330) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x328) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 800) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x318) = 0;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x368) = 0xffffffff;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x3a0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x398) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x390) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x388) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x380) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x378) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x370) = 0;
      *(char **)((long)puVar16 + lVar24 + 0x3a8) = "agl::TextureData";
      *(undefined4 *)((long)puVar16 + lVar24 + 0x3b0) = 0x10000;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x3c8) = 0xff;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x3cc) = 0;
      *(undefined **)((long)puVar16 + lVar24 + 0x310) = puVar2;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x3d0) = 0x80000000000;
      *(undefined8 *)((long)puVar16 + lVar24 + 1000) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x3e0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x3d8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x440) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x438) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x430) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x428) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x420) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x418) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x410) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x408) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x400) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x3f8) = 0;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x448) = 0xffffffff;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x480) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x478) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x470) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x468) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x460) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x458) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x450) = 0;
      *(char **)((long)puVar16 + lVar24 + 0x488) = "agl::TextureData";
      *(undefined4 *)((long)puVar16 + lVar24 + 0x490) = 0x10000;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x4a8) = 0xff;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x4ac) = 0;
      *(undefined **)((long)puVar16 + lVar24 + 0x3f0) = puVar2;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4b0) = 0x80000000000;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4c8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4c0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4b8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x520) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x518) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x510) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x508) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x500) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4f8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4f0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4e8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4e0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x4d8) = 0;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x528) = 0xffffffff;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x560) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x558) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x550) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x548) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x540) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x538) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x530) = 0;
      *(char **)((long)puVar16 + lVar24 + 0x568) = "agl::TextureData";
      *(undefined4 *)((long)puVar16 + lVar24 + 0x570) = 0x10000;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x588) = 0xff;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x58c) = 0;
      *(undefined **)((long)puVar16 + lVar24 + 0x4d0) = puVar2;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x590) = 0x80000000000;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5a8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5a0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x598) = 0;
      *(undefined **)((long)puVar16 + lVar24 + 0x5b0) = puVar3;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5e0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5d8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5d0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5c8) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5c0) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x5b8) = 0;
      *(undefined4 *)((long)puVar16 + lVar24 + 0x5e8) = 0x10001;
      *(undefined1 *)((long)puVar16 + lVar24 + 0x5ec) = 0;
      *(undefined8 *)((long)puVar16 + lVar24 + 0x620) = 0;
      lVar24 = lVar14;
    } while ((ulong)param_5 * 0x620 != lVar14);
    *(uint *)(param_1 + 0x178) = param_5;
    *(ulong **)(param_1 + 0x180) = puVar35;
  }
  if (param_5 != 0) {
    uVar13 = 0;
    do {
      puVar16 = puVar35 + (long)(int)uVar13 * 0xc4 + 0xb5;
      if ((lVar25 == param_1) && (uVar13 == 0)) {
        FUN_0390d714(puVar16,2,param_6);
        piVar32 = (int *)(*(long *)puVar35[0xb6] +
                         (ulong)*(ushort *)((long)puVar35[0xb6] + 10) * 0xc);
        *(undefined1 *)(piVar32 + 2) = 6;
        *piVar32 = 1;
        *(undefined2 *)((long)piVar32 + 6) = 4;
        uVar12 = (int)puVar35[0xbb] + 0xfU & 0xfffffff0;
        *(uint *)(puVar35 + 0xbb) = uVar12;
        *(short *)(piVar32 + 1) = (short)uVar12;
        *(uint *)(puVar35 + 0xbb) =
             (int)puVar35[0xbb] + (uint)*(ushort *)((long)piVar32 + 6) * *piVar32 * 4;
        *(short *)(puVar35[0xb6] + 10) = *(short *)(puVar35[0xb6] + 10) + 1;
        plVar15 = (long *)puVar35[0xb6];
        uVar9 = *(ushort *)((long)plVar15 + 10);
        if (uVar9 == *(ushort *)(plVar15 + 1)) {
          *(uint *)(puVar35 + 0xbb) = (int)puVar35[0xbb] + 0x1fU & 0xffffffe0;
          uVar9 = *(ushort *)((long)plVar15 + 10);
        }
        piVar32 = (int *)(*plVar15 + (ulong)uVar9 * 0xc);
        *(undefined1 *)(piVar32 + 2) = 6;
        *piVar32 = 8;
        uVar12 = (**(code **)(*puVar16 + 0x18))(puVar16,6);
        *(ushort *)((long)piVar32 + 6) = (ushort)uVar12 & 0xff;
        uVar12 = ((uVar12 & 0xff) * 4 + (int)puVar35[0xbb]) - 1 & (uVar12 & 0xff) * -4;
        *(uint *)(puVar35 + 0xbb) = uVar12;
        *(short *)(piVar32 + 1) = (short)uVar12;
        *(uint *)(puVar35 + 0xbb) =
             (int)puVar35[0xbb] + (uint)*(ushort *)((long)piVar32 + 6) * *piVar32 * 4;
        *(short *)(puVar35[0xb6] + 10) = *(short *)(puVar35[0xb6] + 10) + 1;
        if (*(short *)(puVar35[0xb6] + 10) == *(short *)(puVar35[0xb6] + 8)) {
          *(uint *)(puVar35 + 0xbb) = (int)puVar35[0xbb] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar24 = *(long *)(lVar25 + 0x180);
        puVar35[(long)(int)uVar13 * 0xc4 + 0xb6] = *(ulong *)(lVar24 + 0x5b0);
        *(undefined4 *)(puVar35 + (long)(int)uVar13 * 0xc4 + 0xbb) = *(undefined4 *)(lVar24 + 0x5d8)
        ;
        *(byte *)((long)puVar35 + (long)(int)uVar13 * 0x620 + 0x5e4) =
             *(byte *)((long)puVar35 + (long)(int)uVar13 * 0x620 + 0x5e4) & 0xfe;
      }
      FUN_0390d990(puVar16,param_6,2,1);
      uVar13 = uVar13 + 1;
    } while (param_5 != uVar13);
  }
  if (param_2 == 0) {
    FUN_0390d714(param_1 + 0x620,2,param_6);
    piVar32 = (int *)(**(long **)(param_1 + 0x628) +
                     (ulong)*(ushort *)((long)*(long **)(param_1 + 0x628) + 10) * 0xc);
    *(undefined1 *)(piVar32 + 2) = 3;
    *piVar32 = 1;
    *(undefined2 *)((long)piVar32 + 6) = 1;
    uVar13 = *(int *)(param_1 + 0x650) + 3U & 0xfffffffc;
    *(uint *)(param_1 + 0x650) = uVar13;
    *(short *)(piVar32 + 1) = (short)uVar13;
    *(uint *)(param_1 + 0x650) =
         *(int *)(param_1 + 0x650) + (uint)*(ushort *)((long)piVar32 + 6) * *piVar32 * 4;
    *(short *)(*(long *)(param_1 + 0x628) + 10) = *(short *)(*(long *)(param_1 + 0x628) + 10) + 1;
    plVar15 = *(long **)(param_1 + 0x628);
    uVar9 = *(ushort *)((long)plVar15 + 10);
    if (uVar9 == *(ushort *)(plVar15 + 1)) {
      *(uint *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + 0x1fU & 0xffffffe0;
      uVar9 = *(ushort *)((long)plVar15 + 10);
    }
    piVar32 = (int *)(*plVar15 + (ulong)uVar9 * 0xc);
    *(undefined1 *)(piVar32 + 2) = 3;
    *piVar32 = 1;
    *(undefined2 *)((long)piVar32 + 6) = 1;
    uVar13 = *(int *)(param_1 + 0x650) + 3U & 0xfffffffc;
    *(uint *)(param_1 + 0x650) = uVar13;
    *(short *)(piVar32 + 1) = (short)uVar13;
    *(uint *)(param_1 + 0x650) =
         *(int *)(param_1 + 0x650) + (uint)*(ushort *)((long)piVar32 + 6) * *piVar32 * 4;
    *(short *)(*(long *)(param_1 + 0x628) + 10) = *(short *)(*(long *)(param_1 + 0x628) + 10) + 1;
    if (*(short *)(*(long *)(param_1 + 0x628) + 10) == *(short *)(*(long *)(param_1 + 0x628) + 8)) {
      *(uint *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + 0x1fU & 0xffffffe0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(lVar25 + 0x628);
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(lVar25 + 0x650);
    *(byte *)(param_1 + 0x65c) = *(byte *)(param_1 + 0x65c) & 0xfe;
  }
  FUN_0390d990(param_1 + 0x620,param_6,2,1);
  lVar24 = *(long *)PTR_DAT_04bb2698;
  if (lVar24 == 0) {
    puVar17 = malloc(0x260);
    if (puVar17 != (undefined8 *)0x0) goto LAB_039e2704;
LAB_039e27bc:
    iVar23 = *(int *)(param_1 + 0x698);
    if (iVar23 != 0) {
      plVar15 = *(long **)(param_1 + 0x6a0);
      goto LAB_039e27cc;
    }
  }
  else {
    plVar15 = param_6;
    if (param_6 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_039e27bc;
    }
    puVar17 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x260,8);
    if (puVar17 == (undefined8 *)0x0) goto LAB_039e27bc;
LAB_039e2704:
    puVar1 = PTR_DAT_04bd11b8;
    iVar23 = 5;
    *puVar17 = 5;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar1 = puVar1 + 0x10;
    puVar17[4] = 0;
    puVar17[5] = 0;
    *(undefined4 *)(puVar17 + 8) = 0x10001;
    *(undefined1 *)((long)puVar17 + 0x44) = 0;
    *(undefined4 *)(puVar17 + 0x17) = 0x10001;
    *(undefined1 *)((long)puVar17 + 0xbc) = 0;
    *(undefined4 *)(puVar17 + 0x26) = 0x10001;
    *(undefined1 *)((long)puVar17 + 0x134) = 0;
    *(undefined4 *)(puVar17 + 0x35) = 0x10001;
    plVar15 = puVar17 + 1;
    *plVar15 = (long)puVar1;
    *(undefined1 *)((long)puVar17 + 0x1ac) = 0;
    puVar17[0x43] = 0;
    puVar17[0x42] = 0;
    puVar17[0x41] = 0;
    puVar17[0x3e] = 0;
    *(undefined4 *)(puVar17 + 0x44) = 0x10001;
    *(undefined1 *)((long)puVar17 + 0x224) = 0;
    puVar17[0x4b] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    puVar17[0xf] = 0;
    puVar17[0x10] = puVar1;
    puVar17[0x11] = 0;
    puVar17[0x12] = 0;
    puVar17[0x13] = 0;
    puVar17[0x14] = 0;
    puVar17[0x15] = 0;
    puVar17[0x16] = 0;
    puVar17[0x1e] = 0;
    puVar17[0x1f] = puVar1;
    puVar17[0x20] = 0;
    puVar17[0x21] = 0;
    puVar17[0x22] = 0;
    puVar17[0x23] = 0;
    puVar17[0x24] = 0;
    puVar17[0x25] = 0;
    puVar17[0x2d] = 0;
    puVar17[0x2e] = puVar1;
    puVar17[0x2f] = 0;
    puVar17[0x30] = 0;
    puVar17[0x31] = 0;
    puVar17[0x32] = 0;
    puVar17[0x33] = 0;
    puVar17[0x34] = 0;
    puVar17[0x3c] = 0;
    puVar17[0x3d] = puVar1;
    puVar17[0x3f] = 0;
    puVar17[0x40] = 0;
    *(undefined4 *)(param_1 + 0x698) = 5;
    *(long **)(param_1 + 0x6a0) = plVar15;
LAB_039e27cc:
    uVar29 = 0;
    uVar30 = 0;
    do {
      iVar28 = (int)uVar30;
      if ((lVar25 == param_1) && ((int)uVar29 == 0)) {
        plVar26 = plVar15 + uVar30 * 0xf;
        FUN_0390d714(plVar26,3,param_6);
        piVar32 = (int *)(*(long *)plVar26[1] + (ulong)*(ushort *)(plVar26[1] + 10) * 0xc);
        *(undefined1 *)(piVar32 + 2) = 3;
        *piVar32 = 8;
        uVar13 = (**(code **)(*plVar26 + 0x18))(plVar26,3);
        *(ushort *)((long)piVar32 + 6) = (ushort)uVar13 & 0xff;
        uVar13 = ((uVar13 & 0xff) * 4 + (int)plVar26[6]) - 1 & (uVar13 & 0xff) * -4;
        *(uint *)(plVar26 + 6) = uVar13;
        *(short *)(piVar32 + 1) = (short)uVar13;
        *(uint *)(plVar26 + 6) =
             (int)plVar26[6] + (uint)*(ushort *)((long)piVar32 + 6) * *piVar32 * 4;
        *(short *)(plVar26[1] + 10) = *(short *)(plVar26[1] + 10) + 1;
        plVar21 = (long *)plVar26[1];
        uVar9 = *(ushort *)((long)plVar21 + 10);
        if (uVar9 == *(ushort *)(plVar21 + 1)) {
          *(uint *)(plVar26 + 6) = (int)plVar26[6] + 0x1fU & 0xffffffe0;
          uVar9 = *(ushort *)((long)plVar21 + 10);
        }
        piVar32 = (int *)(*plVar21 + (ulong)uVar9 * 0xc);
        *(undefined1 *)(piVar32 + 2) = 3;
        *piVar32 = 8;
        uVar13 = (**(code **)(*plVar26 + 0x18))(plVar26,3);
        *(ushort *)((long)piVar32 + 6) = (ushort)uVar13 & 0xff;
        uVar13 = ((uVar13 & 0xff) * 4 + (int)plVar26[6]) - 1 & (uVar13 & 0xff) * -4;
        *(uint *)(plVar26 + 6) = uVar13;
        *(short *)(piVar32 + 1) = (short)uVar13;
        *(uint *)(plVar26 + 6) =
             (int)plVar26[6] + (uint)*(ushort *)((long)piVar32 + 6) * *piVar32 * 4;
        *(short *)(plVar26[1] + 10) = *(short *)(plVar26[1] + 10) + 1;
        plVar21 = (long *)plVar26[1];
        uVar9 = *(ushort *)((long)plVar21 + 10);
        if (uVar9 == *(ushort *)(plVar21 + 1)) {
          *(uint *)(plVar26 + 6) = (int)plVar26[6] + 0x1fU & 0xffffffe0;
          uVar9 = *(ushort *)((long)plVar21 + 10);
        }
        piVar32 = (int *)(*plVar21 + (ulong)uVar9 * 0xc);
        *(undefined1 *)(piVar32 + 2) = 6;
        *piVar32 = 0x10;
        uVar13 = (**(code **)(*plVar26 + 0x18))(plVar26,6);
        *(ushort *)((long)piVar32 + 6) = (ushort)uVar13 & 0xff;
        uVar13 = ((uVar13 & 0xff) * 4 + (int)plVar26[6]) - 1 & (uVar13 & 0xff) * -4;
        *(uint *)(plVar26 + 6) = uVar13;
        *(short *)(piVar32 + 1) = (short)uVar13;
        *(uint *)(plVar26 + 6) =
             (int)plVar26[6] + (uint)*(ushort *)((long)piVar32 + 6) * *piVar32 * 4;
        *(short *)(plVar26[1] + 10) = *(short *)(plVar26[1] + 10) + 1;
        if (*(short *)(plVar26[1] + 10) == *(short *)(plVar26[1] + 8)) {
          *(uint *)(plVar26 + 6) = (int)plVar26[6] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar24 = *(long *)(lVar25 + 0x6a0);
        plVar15[(long)iVar28 * 0xf + 1] = *(long *)(lVar24 + 8);
        *(undefined4 *)(plVar15 + (long)iVar28 * 0xf + 6) = *(undefined4 *)(lVar24 + 0x30);
        *(byte *)((long)plVar15 + (long)iVar28 * 0x78 + 0x3c) =
             *(byte *)((long)plVar15 + (long)iVar28 * 0x78 + 0x3c) & 0xfe;
      }
      FUN_0390d990(plVar15 + (long)iVar28 * 0xf,param_6,2,1);
      uVar29 = uVar30 + 1;
      uVar30 = uVar29 & 0xffffffff;
    } while (iVar23 != (int)uVar29);
  }
  uVar6 = crc32b(0xffffffff,0x6c,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar7 = crc32b(0xffffffff,0x68,0x4c11db7);
  uVar7 = crc32b(uVar7,100,0x4c11db7);
  uVar6 = crc32b(uVar6,0x67,0x4c11db7);
  uVar7 = crc32b(uVar7,0x72,0x4c11db7);
  uVar6 = crc32b(uVar6,0x68,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar7 = crc32b(uVar7,0x65,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
  uVar6 = crc32b(uVar6,0x67,0x4c11db7);
  uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x68,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar7 = crc32b(uVar7,0x62,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar13 = crc32b(uVar6,0x74,0x4c11db7);
  plVar15 = (long *)(param_1 + 0x130);
  uVar12 = crc32b(uVar7,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x6d8) = ~uVar13;
  plVar21 = plVar15;
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar21 = (long *)(*(long *)(param_1 + 0x138) + 0x10);
  }
  *plVar21 = param_1 + 0x6d0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(uint *)(param_1 + 0x6f8) = ~uVar12;
  *(long *)(param_1 + 0x6e0) = param_1 + 0x6f0;
  *(long *)(param_1 + 0x138) = param_1 + 0x6f0;
  *(undefined1 *)(param_1 + 0x708) = 0;
  local_44d = 0;
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 2;
  puVar1 = PTR_PTR_04bb2238;
  local_470 = 0x20;
  local_480 = PTR_DAT_04bb2a08 + 0x10;
  local_478 = local_46c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pbVar31 = *(byte **)(puVar1 + 8);
  if (local_46c != pbVar31) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar25 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar25) == '\0') goto LAB_039e2bdc;
      lVar24 = *(long *)(puVar1 + 8) + lVar25;
      if (*(char *)(lVar24 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_039e2bdc;
      }
      if (*(char *)(lVar24 + 2) == '\0') {
        lVar25 = lVar25 + 2;
        goto LAB_039e2bdc;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039e2bdc:
    iVar23 = (int)lVar25;
    if (local_470 <= (int)lVar25) {
      iVar23 = local_470 + -1;
    }
    memcpy(local_46c,pbVar31,(long)iVar23);
    local_46c[iVar23] = 0;
  }
  pbVar31 = local_478;
  puVar1 = PTR_DAT_04bb2028;
  local_480 = PTR_DAT_04bb2028 + 0x10;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  uVar6 = crc32b(0xffffffff,0x72,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6d,0x4c11db7);
  uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
  uVar7 = crc32b(uVar6,0x6c,0x4c11db7);
  uVar7 = crc32b(uVar7,0x69,0x4c11db7);
  uVar7 = crc32b(uVar7,0x67,0x4c11db7);
  uVar7 = crc32b(uVar7,0x68,0x4c11db7);
  uVar7 = crc32b(uVar7,0x74,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x65,0x4c11db7);
  uVar13 = crc32b(uVar7,0x66,0x4c11db7);
  *(uint *)(param_1 + 0x7b8) = ~uVar13;
  plVar21 = plVar15;
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar21 = (long *)(*(long *)(param_1 + 0x138) + 0x10);
  }
  *plVar21 = param_1 + 0x7b0;
  *(long *)(param_1 + 0x138) = param_1 + 0x7b0;
  pbVar27 = *(byte **)(param_1 + 2000);
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  local_478[(long)local_470 + -1] = 0;
  if (pbVar27 != local_478) {
    (**(code **)(puVar1 + 0x28))(&local_480);
    lVar25 = 0;
    do {
      if (local_478[lVar25] == 0) goto LAB_039e2d1c;
      if (local_478[lVar25 + 1] == 0) {
        lVar25 = lVar25 + 1;
        goto LAB_039e2d1c;
      }
      if (local_478[lVar25 + 2] == 0) {
        lVar25 = lVar25 + 2;
        goto LAB_039e2d1c;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039e2d1c:
    iVar23 = (int)lVar25;
    if (*(int *)(param_1 + 0x7d8) <= (int)lVar25) {
      iVar23 = *(int *)(param_1 + 0x7d8) + -1;
    }
    memcpy(pbVar27,pbVar31,(long)iVar23);
    pbVar27[iVar23] = 0;
  }
  uVar7 = crc32b(uVar6,0x65,0x4c11db7);
  uVar8 = crc32b(uVar7,0x6e,0x4c11db7);
  plVar21 = plVar15;
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar21 = (long *)(*(long *)(param_1 + 0x138) + 0x10);
  }
  uVar8 = crc32b(uVar8,0x61,0x4c11db7);
  uVar8 = crc32b(uVar8,0x62,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6c,0x4c11db7);
  uVar13 = crc32b(uVar8,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x718) = ~uVar13;
  uVar8 = crc32b(uVar6,0x61,0x4c11db7);
  *plVar21 = param_1 + 0x710;
  *(undefined1 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x780) = 0;
  local_44d = 0;
  uVar7 = crc32b(uVar7,0x66,0x4c11db7);
  *(long *)(param_1 + 0x720) = param_1 + 0x730;
  *(undefined4 *)(param_1 + 0x748) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x768) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7a8) = 0x3f800000;
  uVar8 = crc32b(uVar8,0x6e,0x4c11db7);
  uVar7 = crc32b(uVar7,0x66,0x4c11db7);
  uVar7 = crc32b(uVar7,0x65,0x4c11db7);
  uVar7 = crc32b(uVar7,99,0x4c11db7);
  uVar8 = crc32b(uVar8,0x67,0x4c11db7);
  uVar13 = crc32b(uVar7,0x74,0x4c11db7);
  *(uint *)(param_1 + 0x738) = ~uVar13;
  uVar7 = crc32b(uVar6,0x77,0x4c11db7);
  uVar7 = crc32b(uVar7,0x69,0x4c11db7);
  *(long *)(param_1 + 0x740) = param_1 + 0x750;
  uVar7 = crc32b(uVar7,100,0x4c11db7);
  *(long *)(param_1 + 0x760) = param_1 + 0x790;
  uVar7 = crc32b(uVar7,0x74,0x4c11db7);
  uVar13 = crc32b(uVar7,0x68,0x4c11db7);
  *(uint *)(param_1 + 0x758) = ~uVar13;
  uVar7 = crc32b(uVar8,0x6c,0x4c11db7);
  *(long *)(param_1 + 0x7a0) = param_1 + 0x770;
  *(long *)(param_1 + 0x138) = param_1 + 0x770;
  uVar13 = crc32b(uVar7,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x798) = ~uVar13;
  uVar6 = crc32b(uVar6,0x70,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
  uVar13 = crc32b(uVar6,0x77,0x4c11db7);
  *(uint *)(param_1 + 0x778) = ~uVar13;
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 5;
  *(undefined4 *)(param_1 + 0x788) = 0x40000000;
  puVar1 = PTR_PTR_04bb2238;
  local_470 = 0x20;
  local_480 = PTR_DAT_04bb2a08 + 0x10;
  local_478 = local_46c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pbVar31 = *(byte **)(puVar1 + 8);
  if (local_46c != pbVar31) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar25 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar25) == '\0') goto LAB_039e2f1c;
      lVar24 = *(long *)(puVar1 + 8) + lVar25;
      if (*(char *)(lVar24 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_039e2f1c;
      }
      if (*(char *)(lVar24 + 2) == '\0') {
        lVar25 = lVar25 + 2;
        goto LAB_039e2f1c;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039e2f1c:
    iVar23 = (int)lVar25;
    if (local_470 <= (int)lVar25) {
      iVar23 = local_470 + -1;
    }
    memcpy(local_46c,pbVar31,(long)iVar23);
    local_46c[iVar23] = 0;
  }
  pbVar31 = local_478;
  puVar1 = PTR_DAT_04bb2028;
  local_480 = PTR_DAT_04bb2028 + 0x10;
  *(undefined8 *)(param_1 + 0x860) = 0;
  uVar6 = crc32b(0xffffffff,0x70,0x4c11db7);
  uVar7 = crc32b(uVar6,0x61,0x4c11db7);
  uVar7 = crc32b(uVar7,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x65,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
  uVar7 = crc32b(uVar7,0x74,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6d,0x4c11db7);
  uVar7 = crc32b(uVar7,0x61,0x4c11db7);
  uVar13 = crc32b(uVar7,0x70,0x4c11db7);
  *(uint *)(param_1 + 0x858) = ~uVar13;
  plVar21 = plVar15;
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar21 = (long *)(*(long *)(param_1 + 0x138) + 0x10);
  }
  *plVar21 = param_1 + 0x850;
  *(long *)(param_1 + 0x138) = param_1 + 0x850;
  pbVar27 = *(byte **)(param_1 + 0x870);
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  local_478[(long)local_470 + -1] = 0;
  if (pbVar27 != local_478) {
    (**(code **)(puVar1 + 0x28))(&local_480);
    lVar25 = 0;
    do {
      if (local_478[lVar25] == 0) goto LAB_039e304c;
      if (local_478[lVar25 + 1] == 0) {
        lVar25 = lVar25 + 1;
        goto LAB_039e304c;
      }
      if (local_478[lVar25 + 2] == 0) {
        lVar25 = lVar25 + 2;
        goto LAB_039e304c;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039e304c:
    iVar23 = (int)lVar25;
    if (*(int *)(param_1 + 0x878) <= (int)lVar25) {
      iVar23 = *(int *)(param_1 + 0x878) + -1;
    }
    memcpy(pbVar27,pbVar31,(long)iVar23);
    pbVar27[iVar23] = 0;
  }
  puVar1 = PTR_PTR_04bb2238;
  local_44d = 0;
  local_470 = 0x20;
  local_480 = PTR_DAT_04bb2a08 + 0x10;
  local_478 = local_46c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pbVar31 = *(byte **)(puVar1 + 8);
  if (local_46c != pbVar31) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar25 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar25) == '\0') goto LAB_039e3120;
      lVar24 = *(long *)(puVar1 + 8) + lVar25;
      if (*(char *)(lVar24 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_039e3120;
      }
      if (*(char *)(lVar24 + 2) == '\0') {
        lVar25 = lVar25 + 2;
        goto LAB_039e3120;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039e3120:
    iVar23 = (int)lVar25;
    if (local_470 <= (int)lVar25) {
      iVar23 = local_470 + -1;
    }
    memcpy(local_46c,pbVar31,(long)iVar23);
    local_46c[iVar23] = 0;
  }
  pbVar31 = local_478;
  puVar1 = PTR_DAT_04bb2028;
  local_480 = PTR_DAT_04bb2028 + 0x10;
  *(undefined8 *)(param_1 + 0x8b0) = 0;
  uVar7 = crc32b(0xffffffff,99,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x70,0x4c11db7);
  uVar7 = crc32b(uVar7,0x79,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6d,0x4c11db7);
  uVar7 = crc32b(uVar7,0x61,0x4c11db7);
  uVar13 = crc32b(uVar7,0x70,0x4c11db7);
  *(uint *)(param_1 + 0x8a8) = ~uVar13;
  plVar21 = plVar15;
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar21 = (long *)(*(long *)(param_1 + 0x138) + 0x10);
  }
  *plVar21 = param_1 + 0x8a0;
  *(long *)(param_1 + 0x138) = param_1 + 0x8a0;
  pbVar27 = *(byte **)(param_1 + 0x8c0);
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  local_478[(long)local_470 + -1] = 0;
  if (pbVar27 != local_478) {
    (**(code **)(puVar1 + 0x28))(&local_480);
    lVar25 = 0;
    do {
      if (local_478[lVar25] == 0) goto LAB_039e324c;
      if (local_478[lVar25 + 1] == 0) {
        lVar25 = lVar25 + 1;
        goto LAB_039e324c;
      }
      if (local_478[lVar25 + 2] == 0) {
        lVar25 = lVar25 + 2;
        goto LAB_039e324c;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039e324c:
    iVar23 = (int)lVar25;
    if (*(int *)(param_1 + 0x8c8) <= (int)lVar25) {
      iVar23 = *(int *)(param_1 + 0x8c8) + -1;
    }
    memcpy(pbVar27,pbVar31,(long)iVar23);
    pbVar27[iVar23] = 0;
  }
  uVar7 = crc32b(0xffffffff,0x6d,0x4c11db7);
  uVar7 = crc32b(uVar7,0x61,0x4c11db7);
  uVar7 = crc32b(uVar7,0x70,0x4c11db7);
  uVar7 = crc32b(uVar7,0x70,0x4c11db7);
  uVar7 = crc32b(uVar7,0x69,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
  uVar7 = crc32b(uVar7,0x67,0x4c11db7);
  uVar6 = crc32b(uVar6,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar7 = crc32b(uVar7,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x79,0x4c11db7);
  uVar6 = crc32b(uVar6,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x70,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar13 = crc32b(uVar7,0x65,0x4c11db7);
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar15 = (long *)(*(long *)(param_1 + 0x138) + 0x10);
  }
  *(uint *)(param_1 + 0x838) = ~uVar13;
  *plVar15 = param_1 + 0x830;
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(long *)(param_1 + 0x840) = param_1 + 0x8f0;
  *(long *)(param_1 + 0x138) = param_1 + 0x8f0;
  uVar13 = crc32b(uVar6,0x79,0x4c11db7);
  uVar12 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x908) = (uint)*(byte *)(param_1 + 0x309);
  *(uint *)(param_1 + 0x8f8) = ~uVar13;
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 2;
  if ((int)uVar12 < 1) {
LAB_039e3510:
    uVar12 = *(uint *)(param_1 + 0x610);
    puVar35 = *(ulong **)(param_1 + 0x618);
    puVar1 = PTR_DAT_04bb2020;
  }
  else {
    __size = (ulong)uVar12 * 0x168 + 8;
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      puVar16 = malloc(__size);
      puVar1 = PTR_DAT_04bb2028;
    }
    else {
      plVar15 = param_6;
      if (param_6 == (long *)0x0) {
        lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar25 + 8);
        if (lVar24 != 0) {
          plVar15 = (long *)(lVar24 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_039e3510;
      }
      puVar16 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,__size,8);
      puVar1 = PTR_DAT_04bb2028;
    }
    PTR_DAT_04bb2028 = puVar1;
    if (puVar16 == (ulong *)0x0) goto LAB_039e3510;
    uVar6 = crc32b(0xffffffff,100,0x4c11db7);
    uVar6 = crc32b(uVar6,0x65,0x4c11db7);
    puVar2 = PTR_DAT_04bd1080 + 0x10;
    puVar3 = PTR_DAT_04bd1078 + 0x10;
    puVar34 = PTR_DAT_04bd11d0 + 0x10;
    uVar6 = crc32b(uVar6,0x66,0x4c11db7);
    uVar6 = crc32b(uVar6,0x61,0x4c11db7);
    uVar6 = crc32b(uVar6,0x75,0x4c11db7);
    uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
    uVar13 = crc32b(uVar6,0x74,0x4c11db7);
    puVar35 = puVar16 + 1;
    *puVar16 = (ulong)uVar12;
    uVar13 = ~uVar13;
    puVar4 = PTR_DAT_04bd1088 + 0x10;
    lVar25 = 0;
    do {
      lVar24 = lVar25 + 0x168;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x18) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0x10) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0xa0) = puVar1 + 0x10;
      *(long *)((long)puVar16 + lVar25 + 0xa8) = (long)puVar16 + lVar25 + 0xb4;
      *(undefined **)((long)puVar16 + lVar25 + 8) = puVar2;
      *(undefined4 *)((long)puVar16 + lVar25 + 0x20) = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x38) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0x30) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0x28) = puVar3;
      *(undefined4 *)((long)puVar16 + lVar25 + 0x40) = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x58) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0x50) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0x48) = puVar3;
      *(undefined4 *)((long)puVar16 + lVar25 + 0x60) = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x78) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0x70) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0x68) = puVar3;
      *(undefined4 *)((long)puVar16 + lVar25 + 0x80) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0x90) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0x88) = puVar34;
      *(undefined4 *)((long)puVar16 + lVar25 + 0xb0) = 0x20;
      *(undefined1 *)((long)puVar16 + lVar25 + 0xd3) = 0;
      *(undefined1 *)((long)puVar16 + lVar25 + 0xb4) = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x98) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0xe0) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0xd8) = puVar34;
      *(undefined4 *)((long)puVar16 + lVar25 + 0x100) = 0x20;
      *(undefined1 *)((long)puVar16 + lVar25 + 0x123) = 0;
      *(undefined1 *)((long)puVar16 + lVar25 + 0x104) = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0xe8) = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x138) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0x130) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0x128) = puVar4;
      *(undefined1 *)((long)puVar16 + lVar25 + 0x140) = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x158) = 0;
      *(uint *)((long)puVar16 + lVar25 + 0x150) = uVar13;
      *(undefined **)((long)puVar16 + lVar25 + 0x148) = puVar4;
      *(undefined1 *)((long)puVar16 + lVar25 + 0x160) = 0;
      *(undefined **)((long)puVar16 + lVar25 + 0xf0) = puVar1 + 0x10;
      *(long *)((long)puVar16 + lVar25 + 0xf8) = (long)puVar16 + lVar25 + 0x104;
      lVar25 = lVar24;
    } while ((ulong)uVar12 * 0x168 != lVar24);
    *(uint *)(param_1 + 0x610) = uVar12;
    *(ulong **)(param_1 + 0x618) = puVar35;
    puVar1 = PTR_DAT_04bb2020;
  }
  PTR_DAT_04bb2020 = puVar1;
  if (uVar12 != 0) {
    uVar13 = 0;
    puVar2 = PTR_DAT_04bb2a08 + 0x10;
    puVar3 = PTR_DAT_04bb2028 + 0x10;
    do {
      puVar34 = PTR_DAT_04bb2020;
      if (0 < (int)*(uint *)PTR_DAT_04bd11d8) {
        uVar19 = 0;
        do {
          uVar20 = uVar19;
          if (*(uint *)(param_1 + 0x18) <= uVar19) {
            uVar20 = 0;
          }
          uVar9 = *(ushort *)(*(long *)(param_1 + 0x20) + (ulong)uVar20 * 4);
          if (((int)(uint)uVar9 <= (int)uVar13) &&
             ((int)uVar13 <
              (int)((uint)*(ushort *)(*(long *)(param_1 + 0x20) + (ulong)uVar20 * 4 + 2) +
                   (uint)uVar9))) goto LAB_039e3634;
          uVar19 = uVar19 + 1;
        } while (*(uint *)PTR_DAT_04bd11d8 != uVar19);
      }
      uVar19 = 0xffffffff;
LAB_039e3634:
      lVar25 = (long)(int)uVar13;
      puVar16 = puVar35 + (long)(int)uVar13 * 0x2d;
      lVar24 = *(long *)(param_1 + 0x160);
      sVar10 = **(short **)PTR_DAT_04bbdc40;
      uVar20 = *(uint *)(param_1 + 0x158);
      local_478 = (byte *)0x40f19de;
      puVar16[2] = 0;
      if (uVar20 <= uVar13) {
        lVar25 = 0;
      }
      local_480 = puVar1 + 0x10;
      (**(code **)(puVar1 + 0x28))(&local_480);
      uVar20 = (uint)*local_478;
      if (*local_478 != 0) {
        uVar22 = 0xffffffff;
        do {
          local_478 = local_478 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*local_478;
        } while (uVar20 != 0);
        uVar20 = ~uVar22;
      }
      lVar25 = lVar24 + lVar25 * 0x100;
      *(uint *)(puVar16 + 1) = uVar20;
      if (lVar24 != 0) {
        puVar17 = (undefined8 *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          puVar17 = (undefined8 *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *puVar17 = puVar16;
        *(ulong **)(lVar25 + 0x10) = puVar16;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      *(undefined4 *)(puVar16 + 3) = 0;
      puVar4 = PTR_PTR_04bb2238;
      local_470 = 0x20;
      local_44d = 0;
      local_480 = puVar2;
      local_478 = local_46c;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      puVar11 = PTR_PTR_04bb2238;
      pbVar31 = *(byte **)(puVar4 + 8);
      if (local_46c != pbVar31) {
        (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
        lVar14 = 0;
        do {
          if (*(char *)(*(long *)(puVar11 + 8) + lVar14) == '\0') goto LAB_039e3790;
          lVar5 = *(long *)(puVar11 + 8) + lVar14;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_039e3790;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_039e3790;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_039e3790:
        iVar23 = (int)lVar14;
        if (local_470 <= (int)lVar14) {
          iVar23 = local_470 + -1;
        }
        memcpy(local_46c,pbVar31,(long)iVar23);
        local_46c[iVar23] = 0;
      }
      local_490 = puVar34 + 0x10;
      local_488 = (byte *)0x40bd40e;
      puVar35[(long)(int)uVar13 * 0x2d + 0x12] = 0;
      local_480 = puVar3;
      (**(code **)(puVar34 + 0x28))(&local_490);
      uVar20 = (uint)*local_488;
      if (*local_488 != 0) {
        uVar22 = 0xffffffff;
        pbVar31 = local_488;
        do {
          pbVar31 = pbVar31 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*pbVar31;
        } while (uVar20 != 0);
        uVar20 = ~uVar22;
      }
      *(uint *)(puVar35 + (long)(int)uVar13 * 0x2d + 0x11) = uVar20;
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar15 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *plVar15 = (long)(puVar35 + (long)(int)uVar13 * 0x2d + 0x10);
        *(ulong **)(lVar25 + 0x10) = puVar35 + (long)(int)uVar13 * 0x2d + 0x10;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      pbVar27 = (byte *)puVar35[(long)(int)uVar13 * 0x2d + 0x14];
      (**(code **)(local_480 + 0x18))(&local_480);
      pbVar31 = local_478;
      if (pbVar27 != local_478) {
        (**(code **)(local_480 + 0x18))(&local_480);
        lVar14 = 0;
        do {
          if (local_478[lVar14] == 0) goto LAB_039e38d0;
          if (local_478[lVar14 + 1] == 0) {
            lVar14 = lVar14 + 1;
            goto LAB_039e38d0;
          }
          if (local_478[lVar14 + 2] == 0) {
            lVar14 = lVar14 + 2;
            goto LAB_039e38d0;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_039e38d0:
        iVar23 = (int)lVar14;
        if ((int)puVar35[(long)(int)uVar13 * 0x2d + 0x15] <= (int)lVar14) {
          iVar23 = (int)puVar35[(long)(int)uVar13 * 0x2d + 0x15] + -1;
        }
        memcpy(pbVar27,pbVar31,(long)iVar23);
        pbVar27[iVar23] = 0;
        puVar34 = PTR_DAT_04bb2020;
      }
      puVar4 = PTR_PTR_04bb2238;
      local_44d = 0;
      local_470 = 0x20;
      local_480 = PTR_DAT_04bb2a08 + 0x10;
      local_478 = local_46c;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      puVar11 = PTR_PTR_04bb2238;
      pbVar31 = *(byte **)(puVar4 + 8);
      if (local_46c != pbVar31) {
        (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
        lVar14 = 0;
        do {
          if (*(char *)(*(long *)(puVar11 + 8) + lVar14) == '\0') goto LAB_039e39ac;
          lVar5 = *(long *)(puVar11 + 8) + lVar14;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_039e39ac;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_039e39ac;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_039e39ac:
        iVar23 = (int)lVar14;
        if (local_470 <= (int)lVar14) {
          iVar23 = local_470 + -1;
        }
        memcpy(local_46c,pbVar31,(long)iVar23);
        local_46c[iVar23] = 0;
      }
      local_480 = PTR_DAT_04bb2028 + 0x10;
      local_490 = puVar34 + 0x10;
      local_488 = (byte *)0x40648ef;
      puVar35[(long)(int)uVar13 * 0x2d + 0x1c] = 0;
      (**(code **)(puVar34 + 0x28))(&local_490);
      uVar20 = (uint)*local_488;
      if (*local_488 != 0) {
        uVar22 = 0xffffffff;
        pbVar31 = local_488;
        do {
          pbVar31 = pbVar31 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*pbVar31;
        } while (uVar20 != 0);
        uVar20 = ~uVar22;
      }
      *(uint *)(puVar35 + (long)(int)uVar13 * 0x2d + 0x1b) = uVar20;
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar15 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *plVar15 = (long)(puVar35 + (long)(int)uVar13 * 0x2d + 0x1a);
        *(ulong **)(lVar25 + 0x10) = puVar35 + (long)(int)uVar13 * 0x2d + 0x1a;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      pbVar27 = (byte *)puVar35[(long)(int)uVar13 * 0x2d + 0x1e];
      (**(code **)(local_480 + 0x18))(&local_480);
      pbVar31 = local_478;
      if (pbVar27 != local_478) {
        (**(code **)(local_480 + 0x18))(&local_480);
        lVar14 = 0;
        do {
          if (local_478[lVar14] == 0) goto LAB_039e3afc;
          if (local_478[lVar14 + 1] == 0) {
            lVar14 = lVar14 + 1;
            goto LAB_039e3afc;
          }
          if (local_478[lVar14 + 2] == 0) {
            lVar14 = lVar14 + 2;
            goto LAB_039e3afc;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_039e3afc:
        iVar23 = (int)lVar14;
        if ((int)puVar35[(long)(int)uVar13 * 0x2d + 0x1f] <= (int)lVar14) {
          iVar23 = (int)puVar35[(long)(int)uVar13 * 0x2d + 0x1f] + -1;
        }
        memcpy(pbVar27,pbVar31,(long)iVar23);
        pbVar27[iVar23] = 0;
        puVar34 = PTR_DAT_04bb2020;
      }
      local_480 = puVar34 + 0x10;
      local_478 = (byte *)0x40d7096;
      puVar35[(long)(int)uVar13 * 0x2d + 6] = 0;
      (**(code **)(puVar34 + 0x28))(&local_480);
      uVar20 = (uint)*local_478;
      if (*local_478 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0xffffffff;
        do {
          local_478 = local_478 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*local_478;
        } while (uVar20 != 0);
        uVar22 = ~uVar22;
      }
      *(uint *)(puVar35 + (long)(int)uVar13 * 0x2d + 5) = uVar22;
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar15 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *plVar15 = (long)(puVar35 + (long)(int)uVar13 * 0x2d + 4);
        *(ulong **)(lVar25 + 0x10) = puVar35 + (long)(int)uVar13 * 0x2d + 4;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      local_480 = puVar34 + 0x10;
      *(undefined4 *)(puVar35 + (long)(int)uVar13 * 0x2d + 7) = 0x3f800000;
      local_478 = &DAT_04100fc5;
      puVar35[(long)(int)uVar13 * 0x2d + 10] = 0;
      (**(code **)(puVar34 + 0x28))(&local_480);
      uVar20 = (uint)*local_478;
      if (*local_478 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0xffffffff;
        do {
          local_478 = local_478 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*local_478;
        } while (uVar20 != 0);
        uVar22 = ~uVar22;
      }
      *(uint *)(puVar35 + (long)(int)uVar13 * 0x2d + 9) = uVar22;
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar15 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *plVar15 = (long)(puVar35 + (long)(int)uVar13 * 0x2d + 8);
        *(ulong **)(lVar25 + 0x10) = puVar35 + (long)(int)uVar13 * 0x2d + 8;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      local_480 = puVar34 + 0x10;
      *(undefined4 *)(puVar35 + (long)(int)uVar13 * 0x2d + 0xb) = 0x42480000;
      local_478 = (byte *)0x40b82f4;
      puVar35[(long)(int)uVar13 * 0x2d + 0xe] = 0;
      (**(code **)(puVar34 + 0x28))(&local_480);
      uVar20 = (uint)*local_478;
      if (*local_478 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0xffffffff;
        do {
          local_478 = local_478 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*local_478;
        } while (uVar20 != 0);
        uVar22 = ~uVar22;
      }
      *(uint *)(puVar35 + (long)(int)uVar13 * 0x2d + 0xd) = uVar22;
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar15 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *plVar15 = (long)(puVar35 + (long)(int)uVar13 * 0x2d + 0xc);
        *(ulong **)(lVar25 + 0x10) = puVar35 + (long)(int)uVar13 * 0x2d + 0xc;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      local_480 = puVar34 + 0x10;
      *(undefined4 *)(puVar35 + (long)(int)uVar13 * 0x2d + 0xf) = 0x40000000;
      local_478 = (byte *)0x40dc5c3;
      puVar35[(long)(int)uVar13 * 0x2d + 0x26] = 0;
      (**(code **)(puVar34 + 0x28))(&local_480);
      uVar20 = (uint)*local_478;
      if (*local_478 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0xffffffff;
        do {
          local_478 = local_478 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*local_478;
        } while (uVar20 != 0);
        uVar22 = ~uVar22;
      }
      *(uint *)(puVar35 + (long)(int)uVar13 * 0x2d + 0x25) = uVar22;
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar15 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *plVar15 = (long)(puVar35 + (long)(int)uVar13 * 0x2d + 0x24);
        *(ulong **)(lVar25 + 0x10) = puVar35 + (long)(int)uVar13 * 0x2d + 0x24;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      local_480 = puVar34 + 0x10;
      *(undefined1 *)(puVar35 + (long)(int)uVar13 * 0x2d + 0x27) = 1;
      local_478 = (byte *)0x40f19e8;
      puVar35[(long)(int)uVar13 * 0x2d + 0x2a] = 0;
      (**(code **)(puVar34 + 0x28))(&local_480);
      uVar20 = (uint)*local_478;
      if (*local_478 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0xffffffff;
        pbVar31 = local_478;
        do {
          pbVar31 = pbVar31 + 1;
          uVar22 = crc32b(uVar22,uVar20,0x4c11db7);
          uVar20 = (uint)*pbVar31;
        } while (uVar20 != 0);
        uVar22 = ~uVar22;
      }
      *(uint *)(puVar35 + (long)(int)uVar13 * 0x2d + 0x29) = uVar22;
      if (lVar24 != 0) {
        plVar15 = (long *)(lVar25 + 8);
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar15 = (long *)(*(long *)(lVar25 + 0x10) + 0x10);
        }
        *plVar15 = (long)(puVar35 + (long)(int)uVar13 * 0x2d + 0x28);
        *(ulong **)(lVar25 + 0x10) = puVar35 + (long)(int)uVar13 * 0x2d + 0x28;
        *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
      }
      *(bool *)(puVar35 + (long)(int)uVar13 * 0x2d + 0x2b) = uVar19 != (int)sVar10;
      pvVar18 = (void *)puVar35[(long)(int)uVar13 * 0x2d + 0x14];
      lVar25 = *(long *)(param_1 + 0x168);
      (**(code **)(*(long *)(lVar25 + 0x700) + 0x18))(lVar25 + 0x700);
      pvVar33 = *(void **)(lVar25 + 0x708);
      if (pvVar18 != pvVar33) {
        (**(code **)(*(long *)(lVar25 + 0x700) + 0x18))(lVar25 + 0x700);
        lVar24 = 0;
        do {
          if (*(char *)(*(long *)(lVar25 + 0x708) + lVar24) == '\0') goto LAB_039e3e90;
          lVar14 = *(long *)(lVar25 + 0x708) + lVar24;
          if (*(char *)(lVar14 + 1) == '\0') {
            lVar24 = lVar24 + 1;
            goto LAB_039e3e90;
          }
          if (*(char *)(lVar14 + 2) == '\0') {
            lVar24 = lVar24 + 2;
            goto LAB_039e3e90;
          }
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
        lVar24 = 0;
LAB_039e3e90:
        iVar23 = (int)lVar24;
        if ((int)puVar35[(long)(int)uVar13 * 0x2d + 0x15] <= (int)lVar24) {
          iVar23 = (int)puVar35[(long)(int)uVar13 * 0x2d + 0x15] + -1;
        }
        memcpy(pvVar18,pvVar33,(long)iVar23);
        *(undefined1 *)((long)pvVar18 + (long)iVar23) = 0;
      }
      pvVar18 = (void *)puVar35[(long)(int)uVar13 * 0x2d + 0x1e];
      lVar25 = *(long *)(param_1 + 0x168);
      (**(code **)(*(long *)(lVar25 + 0x700) + 0x18))(lVar25 + 0x700);
      pvVar33 = *(void **)(lVar25 + 0x708);
      if (pvVar18 != pvVar33) {
        (**(code **)(*(long *)(lVar25 + 0x700) + 0x18))(lVar25 + 0x700);
        lVar24 = 0;
        do {
          if (*(char *)(*(long *)(lVar25 + 0x708) + lVar24) == '\0') goto LAB_039e3570;
          lVar14 = *(long *)(lVar25 + 0x708) + lVar24;
          if (*(char *)(lVar14 + 1) == '\0') {
            lVar24 = lVar24 + 1;
            goto LAB_039e3570;
          }
          if (*(char *)(lVar14 + 2) == '\0') {
            lVar24 = lVar24 + 2;
            goto LAB_039e3570;
          }
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
        lVar24 = 0;
LAB_039e3570:
        iVar23 = (int)lVar24;
        if ((int)puVar35[(long)(int)uVar13 * 0x2d + 0x1f] <= (int)lVar24) {
          iVar23 = (int)puVar35[(long)(int)uVar13 * 0x2d + 0x1f] + -1;
        }
        memcpy(pvVar18,pvVar33,(long)iVar23);
        *(undefined1 *)((long)pvVar18 + (long)iVar23) = 0;
      }
      FUN_039e4150(param_1,uVar13);
      uVar13 = uVar13 + 1;
    } while (uVar12 != uVar13);
  }
  iVar23 = *(int *)(*(long *)(param_1 + 0x168) + 0x1d0);
  if (0 < iVar23) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      pvVar18 = malloc((long)iVar23 << 3);
    }
    else {
      local_4a8 = param_6;
      if (param_6 == (long *)0x0) {
        lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar17 = (undefined8 *)(lVar25 + 8);
        if (lVar24 != 0) {
          puVar17 = (undefined8 *)(lVar24 + 0xa8);
        }
        local_4a8 = (long *)*puVar17;
        if (local_4a8 == (long *)0x0) goto LAB_039e3fcc;
      }
      pvVar18 = (void *)(**(code **)(*local_4a8 + 0x30))(local_4a8,(long)iVar23 << 3,8);
    }
    if (pvVar18 != (void *)0x0) {
      *(void **)(param_1 + 0x6b0) = pvVar18;
      *(int *)(param_1 + 0x6ac) = iVar23;
    }
  }
LAB_039e3fcc:
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  FUN_006e9454(&local_480,"LightMap%d",*(undefined1 *)(param_1 + 0x309));
  pbVar27 = *(byte **)(param_1 + 0xa8);
  (**(code **)(local_480 + 0x18))(&local_480);
  pbVar31 = local_478;
  if (pbVar27 != local_478) {
    (**(code **)(local_480 + 0x18))(&local_480);
    lVar25 = 0;
    do {
      if (local_478[lVar25] == 0) goto LAB_039e4070;
      if (local_478[lVar25 + 1] == 0) {
        lVar25 = lVar25 + 1;
        goto LAB_039e4070;
      }
      if (local_478[lVar25 + 2] == 0) {
        lVar25 = lVar25 + 2;
        goto LAB_039e4070;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_039e4070:
    iVar23 = (int)lVar25;
    if (*(int *)(param_1 + 0xb0) <= (int)lVar25) {
      iVar23 = *(int *)(param_1 + 0xb0) + -1;
    }
    memcpy(pbVar27,pbVar31,(long)iVar23);
    pbVar27[iVar23] = 0;
  }
  puVar2 = PTR_DAT_04bd1158;
  puVar1 = PTR_DAT_04bb4e50;
  lVar25 = *(long *)PTR_DAT_04bd1158;
  if ((lVar25 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar25 + 8) + 0x18))((long *)(lVar25 + 8));
    FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon=TEXTURE",*(undefined8 *)(lVar25 + 0x10));
    lVar25 = *(long *)puVar2;
    if ((lVar25 != 0) && (*(long *)(*(long *)puVar1 + 0x58) != 0)) {
      (**(code **)(*(long *)(lVar25 + 8) + 0x18))((long *)(lVar25 + 8));
      FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon=FOLDER_BLUE",*(undefined8 *)(lVar25 + 0x10));
    }
  }
  return;
}

