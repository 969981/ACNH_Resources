
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03a3b6e0(long param_1,uint *param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  ulong *puVar28;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar29;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  long lVar37;
  long lVar38;
  undefined *puVar39;
  undefined8 uVar40;
  ulong uVar41;
  bool bVar42;
  int *piVar43;
  undefined *puVar44;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  
  uVar24 = *param_2;
  uVar41 = (ulong)uVar24;
  if ((int)uVar24 < 1) {
LAB_03a3bb00:
    uVar24 = *(uint *)(param_1 + 0xa30);
    uVar41 = (ulong)uVar24;
    uVar40 = _DAT_04102200;
    uVar11 = _UNK_04102208;
    uVar12 = DAT_04102210;
    uVar13 = DAT_04102218;
    uVar14 = _DAT_041023d0;
    uVar15 = _UNK_041023d8;
    uVar16 = _DAT_04102880;
    uVar17 = _UNK_04102888;
  }
  else {
    __size = uVar41 * 0xab8 + 8;
    lVar34 = *(long *)PTR_DAT_04bb2698;
    if (lVar34 == 0) {
      puVar28 = malloc(__size);
    }
    else {
      plVar27 = param_3;
      if (param_3 == (long *)0x0) {
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar27 = (long *)(lVar34 + 8);
        if (lVar26 != 0) {
          plVar27 = (long *)(lVar26 + 0xa8);
        }
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) goto LAB_03a3bb00;
      }
      puVar28 = (ulong *)(**(code **)(*plVar27 + 0x30))(plVar27,__size,8);
    }
    if (puVar28 == (ulong *)0x0) goto LAB_03a3bb00;
    *puVar28 = uVar41;
    puVar39 = PTR_DAT_04bd1178 + 0x10;
    puVar36 = PTR_DAT_04bd1198 + 0x10;
    puVar44 = PTR_DAT_04bd11a0 + 0x10;
    puVar1 = PTR_DAT_04bb2cc8 + 0x10;
    puVar2 = PTR_DAT_04bd11b8 + 0x10;
    puVar3 = PTR_DAT_04bd0fb0 + 0x10;
    lVar34 = 0;
    do {
      *(undefined8 *)((long)puVar28 + lVar34 + 0x20) = 0;
      *(undefined1 **)((long)puVar28 + lVar34 + 0x28) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x30) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x38) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x70) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x40) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x48) = 0;
      *(undefined4 *)((long)puVar28 + lVar34 + 0xd0) = 0xffffffff;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x118) = 0x10000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x50) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x58) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x60) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x68) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x80) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x88) = 0;
      *(undefined **)((long)puVar28 + lVar34 + 0x10) = puVar39;
      *(undefined1 **)((long)puVar28 + lVar34 + 0x18) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x90) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x98) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xb0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xb8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xc0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 200) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xd8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xe0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xe8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xf0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xf8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x100) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x108) = 0;
      *(char **)((long)puVar28 + lVar34 + 0x110) = "agl::TextureData";
      *(undefined4 *)((long)puVar28 + lVar34 + 0x130) = 0xff;
      *(undefined **)((long)puVar28 + lVar34 + 0x78) = puVar36;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x134) = 0;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x1b0) = 0xffffffff;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x1f8) = 0x10000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x138) = 0x80000000000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x140) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x148) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x150) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1a0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1a8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 400) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x198) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x180) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x188) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x170) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x178) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x160) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x168) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1d8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1e0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1c8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1d0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1b8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1c0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x1e8) = 0;
      *(char **)((long)puVar28 + lVar34 + 0x1f0) = "agl::TextureData";
      *(undefined4 *)((long)puVar28 + lVar34 + 0x210) = 0xff;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x214) = 0;
      *(undefined **)((long)puVar28 + lVar34 + 0x158) = puVar44;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x218) = 0x80000000000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x230) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x228) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x220) = 0;
      (**(code **)PTR_DAT_04bcf220)((long)puVar28 + lVar34 + 0x200);
      FUN_0390cee0((long)puVar28 + lVar34 + 0x238);
      FUN_0390cee0((long)puVar28 + lVar34 + 0x318);
      FUN_0390cee0((long)puVar28 + lVar34 + 0x3f8);
      *(undefined8 *)((long)puVar28 + lVar34 + 0x520) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x518) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x510) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x508) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x500) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x4f8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x4f0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x4e8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x4e0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x4d8) = 0;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x528) = 0xffffffff;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x530) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x538) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x540) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x548) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x550) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x558) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x560) = 0;
      *(char **)((long)puVar28 + lVar34 + 0x568) = "agl::TextureData";
      *(undefined4 *)((long)puVar28 + lVar34 + 0x570) = 0x10000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x5a8) = 0;
      *(undefined2 *)((long)puVar28 + lVar34 + 0x5a2) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x580) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x588) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x590) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x598) = 0;
      *(undefined1 *)((long)puVar28 + lVar34 + 0x5a0) = 0;
      *(undefined **)((long)puVar28 + lVar34 + 0x578) = puVar1;
      FUN_0390cee0((long)puVar28 + lVar34 + 0x5b8);
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6e0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6d8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6d0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6c8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6c0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6b8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6b0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6a8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6a0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x698) = 0;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x6e8) = 0xffffffff;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6f0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x6f8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x700) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x708) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x710) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x718) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x720) = 0;
      *(char **)((long)puVar28 + lVar34 + 0x728) = "agl::TextureData";
      *(undefined4 *)((long)puVar28 + lVar34 + 0x730) = 0x10000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x768) = 0;
      *(undefined2 *)((long)puVar28 + lVar34 + 0x762) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x740) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x748) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x750) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x758) = 0;
      *(undefined1 *)((long)puVar28 + lVar34 + 0x760) = 0;
      *(undefined **)((long)puVar28 + lVar34 + 0x738) = puVar1;
      FUN_038e4cec((long)puVar28 + lVar34 + 0x868);
      lVar26 = lVar34 + 0xab8;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x938) = 0;
      *(undefined4 *)((long)puVar28 + lVar34 + 0xa00) = 0x10001;
      *(undefined4 *)((long)puVar28 + lVar34 + 0xa78) = 0x10001;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x930) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x928) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x920) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x918) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x910) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x908) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x900) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x8f8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x8f0) = 0;
      *(undefined4 *)((long)puVar28 + lVar34 + 0x940) = 0xffffffff;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x948) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x950) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x958) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x960) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x968) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x970) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x978) = 0;
      *(char **)((long)puVar28 + lVar34 + 0x980) = "agl::TextureData";
      *(undefined4 *)((long)puVar28 + lVar34 + 0x988) = 0x10000;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9c0) = 0;
      *(undefined2 *)((long)puVar28 + lVar34 + 0x9ba) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x998) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9a0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9a8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9b0) = 0;
      *(undefined1 *)((long)puVar28 + lVar34 + 0x9b8) = 0;
      *(undefined **)((long)puVar28 + lVar34 + 0x990) = puVar1;
      *(undefined **)((long)puVar28 + lVar34 + 0x9c8) = puVar2;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9d0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9d8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9e0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9e8) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9f0) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0x9f8) = 0;
      *(undefined1 *)((long)puVar28 + lVar34 + 0xa04) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa38) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa70) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa68) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa60) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa58) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa50) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xa48) = 0;
      *(undefined1 *)((long)puVar28 + lVar34 + 0xa7c) = 0;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xab0) = 0;
      *(undefined **)((long)puVar28 + lVar34 + 0xa40) = puVar3;
      *(undefined8 *)((long)puVar28 + lVar34 + 0xab8) = 0x4000000001;
      lVar34 = lVar26;
    } while ((ulong)uVar24 * 0xab8 != lVar26);
    *(uint *)(param_1 + 0xa30) = uVar24;
    *(ulong **)(param_1 + 0xa38) = puVar28 + 1;
    uVar40 = _DAT_04102200;
    uVar11 = _UNK_04102208;
    uVar12 = DAT_04102210;
    uVar13 = DAT_04102218;
    uVar14 = _DAT_041023d0;
    uVar15 = _UNK_041023d8;
    uVar16 = _DAT_04102880;
    uVar17 = _UNK_04102888;
  }
  _DAT_04102200 = uVar40;
  _UNK_04102208 = uVar11;
  DAT_04102210 = uVar12;
  DAT_04102218 = uVar13;
  _DAT_041023d0 = uVar14;
  _UNK_041023d8 = uVar15;
  _DAT_04102880 = uVar16;
  _UNK_04102888 = uVar17;
  if (0 < (int)uVar24) {
    uVar24 = 0;
    do {
      uVar25 = uVar24;
      if ((uint)uVar41 <= uVar24) {
        uVar25 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8) = 1;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x770) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x774) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      lVar34 = *(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8;
      *(undefined8 *)(lVar34 + 0x788) = uVar11;
      *(undefined8 *)(lVar34 + 0x780) = uVar40;
      *(undefined8 *)(lVar34 + 0x798) = uVar17;
      *(undefined8 *)(lVar34 + 0x790) = uVar16;
      *(undefined8 *)(lVar34 + 0x7a8) = uVar15;
      *(undefined8 *)(lVar34 + 0x7a0) = uVar14;
      *(undefined8 *)(lVar34 + 0x7b8) = uVar13;
      *(undefined8 *)(lVar34 + 0x7b0) = uVar12;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      lVar34 = *(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8;
      *(undefined8 *)(lVar34 + 0x7c8) = uVar11;
      *(undefined8 *)(lVar34 + 0x7c0) = uVar40;
      *(undefined8 *)(lVar34 + 0x7d8) = uVar17;
      *(undefined8 *)(lVar34 + 2000) = uVar16;
      *(undefined8 *)(lVar34 + 0x7e8) = uVar15;
      *(undefined8 *)(lVar34 + 0x7e0) = uVar14;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      lVar34 = *(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8;
      *(undefined8 *)(lVar34 + 0x7f8) = uVar11;
      *(undefined8 *)(lVar34 + 0x7f0) = uVar40;
      *(undefined8 *)(lVar34 + 0x808) = uVar17;
      *(undefined8 *)(lVar34 + 0x800) = uVar16;
      *(undefined8 *)(lVar34 + 0x818) = uVar15;
      *(undefined8 *)(lVar34 + 0x810) = uVar14;
      *(undefined8 *)(lVar34 + 0x828) = uVar13;
      *(undefined8 *)(lVar34 + 0x820) = uVar12;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      lVar34 = *(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8;
      *(undefined8 *)(lVar34 + 0x838) = uVar11;
      *(undefined8 *)(lVar34 + 0x830) = uVar40;
      *(undefined8 *)(lVar34 + 0x848) = uVar17;
      *(undefined8 *)(lVar34 + 0x840) = uVar16;
      *(undefined8 *)(lVar34 + 0x858) = uVar15;
      *(undefined8 *)(lVar34 + 0x850) = uVar14;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x862) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x8c4) = 8;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x864) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined2 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x860) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x87c) = 0xf;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x8c5) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x8d4) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x8d8) = 0;
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8 + 0x8dc) = 0;
      lVar34 = *(long *)(param_1 + 0xa38);
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      lVar26 = lVar34 + (ulong)uVar25 * 0xab8;
      FUN_0390a734((int *)(lVar26 + 0x8e8),0,0x12,1,1,1,1,0,0,1);
      FUN_038f8f90(lVar26 + 0x918,&local_e8);
      uVar19 = (**(code **)PTR_DAT_04bcf770)(&local_e8);
      *(undefined2 *)(lVar26 + 0x930) = uVar19;
      uVar20 = (**(code **)PTR_DAT_04bcf740)(&local_e8);
      *(undefined4 *)(lVar26 + 0x928) = uVar20;
      uVar20 = (**(code **)PTR_DAT_04bcf0b0)(&local_e8);
      *(undefined4 *)(lVar26 + 0x924) = uVar20;
      uVar29 = extraout_x1;
      if ((*(byte *)(*(long *)PTR_DAT_04bc1010 + 800) & 1) != 0) {
        (**(code **)PTR_DAT_04bcf780)(&local_e8);
        uVar29 = extraout_x1_00;
      }
      lVar37 = lVar34 + (ulong)uVar25 * 0xab8;
      iVar23 = *(int *)(lVar37 + 0x928);
      uVar20 = *(undefined4 *)(lVar37 + 0x924);
      plVar27 = param_3;
      if (param_3 == (long *)0x0) {
        lVar38 = *(long *)PTR_DAT_04bb2698;
        lVar37 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar29,0);
        plVar27 = (long *)(lVar38 + 8);
        if (lVar37 != 0) {
          plVar27 = (long *)(lVar37 + 0xa8);
        }
        plVar27 = (long *)*plVar27;
      }
      lVar37 = lVar26 + 0x988;
      piVar43 = (int *)(lVar26 + 0x990);
      piVar43[0] = 0;
      piVar43[1] = 0;
      *(undefined8 *)(lVar26 + 0x9b8) = 0;
      *(undefined8 *)(lVar26 + 0x9a8) = 0;
      *(undefined8 *)(lVar26 + 0x998) = 0;
      *(undefined8 *)(lVar26 + 0x9a0) = 0;
      *(undefined2 *)(lVar26 + 0x9b2) = 0;
      *(byte *)(lVar26 + 0x9b0) = *(byte *)(lVar26 + 0x9b0) & 0xfe;
      if (iVar23 == 0) {
        local_e8._0_4_ = 0;
        local_e0 = (undefined *)0x0;
        local_e8._4_4_ = 0;
        *(undefined2 *)(lVar26 + 0x9b2) = 4;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar37,plVar27,iVar23,uVar20,4);
        local_e0 = *(undefined **)(lVar26 + 0x9a0);
        *(undefined2 *)(lVar26 + 0x9b2) = 4;
        if (*(long *)(lVar26 + 0x9a8) == 0) {
          local_e8._0_4_ = 0;
          if (local_e0 != (undefined *)0x0) goto LAB_03a3bedc;
          local_e8._4_4_ = 0;
        }
        else {
          local_e8._0_4_ = *piVar43 - *(int *)(*(long *)(lVar26 + 0x9a8) + 0x10);
          if (local_e0 == (undefined *)0x0) {
            local_e8._4_4_ = 0;
          }
          else {
LAB_03a3bedc:
            local_e8._4_4_ = *(uint *)((long)local_e0 + 0x104);
          }
        }
      }
      *(int *)(lVar26 + 0x8e8) = (int)local_e8;
      *(uint *)(lVar26 + 0x8ec) = local_e8._4_4_;
      bVar8 = *(byte *)(lVar34 + (ulong)uVar25 * 0xab8 + 0x936);
      *(undefined **)(lVar26 + 0x8f0) = local_e0;
      *(long *)(lVar26 + 0x8f8) = lVar37;
      if ((bVar8 >> 1 & 1) == 0) {
        bVar42 = false;
      }
      else {
        uVar33 = (uint)*(ushort *)(lVar34 + (ulong)uVar25 * 0xab8 + 0x980);
        bVar42 = 0x11 < uVar33 && uVar33 - 0x59 < 0xffffffd6;
      }
      lVar34 = lVar34 + (ulong)uVar25 * 0xab8;
      local_d8 = (undefined *)lVar37;
      FUN_038fd3e0(lVar34 + 0x938,&local_e8,lVar26 + 0x918,0,*(undefined8 *)(lVar34 + 0x978),bVar42,
                   1);
      *(char **)(lVar34 + 0x978) = "SMAAEdgeCounter";
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      lVar34 = *(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8;
      FUN_0390d714(lVar34 + 0x9c0,6,param_3);
      piVar43 = (int *)(**(long **)(lVar34 + 0x9c8) +
                       (ulong)*(ushort *)((long)*(long **)(lVar34 + 0x9c8) + 10) * 0xc);
      *(undefined1 *)(piVar43 + 2) = 6;
      *piVar43 = 1;
      *(undefined2 *)((long)piVar43 + 6) = 4;
      uVar25 = *(int *)(lVar34 + 0x9f0) + 0xfU & 0xfffffff0;
      *(uint *)(lVar34 + 0x9f0) = uVar25;
      *(short *)(piVar43 + 1) = (short)uVar25;
      *(uint *)(lVar34 + 0x9f0) =
           *(int *)(lVar34 + 0x9f0) + (uint)*(ushort *)((long)piVar43 + 6) * *piVar43 * 4;
      *(short *)(*(long *)(lVar34 + 0x9c8) + 10) = *(short *)(*(long *)(lVar34 + 0x9c8) + 10) + 1;
      plVar27 = *(long **)(lVar34 + 0x9c8);
      uVar9 = *(ushort *)((long)plVar27 + 10);
      if (uVar9 == *(ushort *)(plVar27 + 1)) {
        *(uint *)(lVar34 + 0x9f0) = *(int *)(lVar34 + 0x9f0) + 0x1fU & 0xffffffe0;
        uVar9 = *(ushort *)((long)plVar27 + 10);
      }
      piVar43 = (int *)(*plVar27 + (ulong)uVar9 * 0xc);
      *(undefined1 *)(piVar43 + 2) = 6;
      *piVar43 = 1;
      *(undefined2 *)((long)piVar43 + 6) = 4;
      uVar25 = *(int *)(lVar34 + 0x9f0) + 0xfU & 0xfffffff0;
      *(uint *)(lVar34 + 0x9f0) = uVar25;
      *(short *)(piVar43 + 1) = (short)uVar25;
      *(uint *)(lVar34 + 0x9f0) =
           *(int *)(lVar34 + 0x9f0) + (uint)*(ushort *)((long)piVar43 + 6) * *piVar43 * 4;
      *(short *)(*(long *)(lVar34 + 0x9c8) + 10) = *(short *)(*(long *)(lVar34 + 0x9c8) + 10) + 1;
      plVar27 = *(long **)(lVar34 + 0x9c8);
      uVar9 = *(ushort *)((long)plVar27 + 10);
      if (uVar9 == *(ushort *)(plVar27 + 1)) {
        *(uint *)(lVar34 + 0x9f0) = *(int *)(lVar34 + 0x9f0) + 0x1fU & 0xffffffe0;
        uVar9 = *(ushort *)((long)plVar27 + 10);
      }
      piVar43 = (int *)(*plVar27 + (ulong)uVar9 * 0xc);
      *(undefined1 *)(piVar43 + 2) = 6;
      *piVar43 = 1;
      *(undefined2 *)((long)piVar43 + 6) = 4;
      uVar25 = *(int *)(lVar34 + 0x9f0) + 0xfU & 0xfffffff0;
      *(uint *)(lVar34 + 0x9f0) = uVar25;
      *(short *)(piVar43 + 1) = (short)uVar25;
      *(uint *)(lVar34 + 0x9f0) =
           *(int *)(lVar34 + 0x9f0) + (uint)*(ushort *)((long)piVar43 + 6) * *piVar43 * 4;
      *(short *)(*(long *)(lVar34 + 0x9c8) + 10) = *(short *)(*(long *)(lVar34 + 0x9c8) + 10) + 1;
      plVar27 = *(long **)(lVar34 + 0x9c8);
      uVar9 = *(ushort *)((long)plVar27 + 10);
      if (uVar9 == *(ushort *)(plVar27 + 1)) {
        *(uint *)(lVar34 + 0x9f0) = *(int *)(lVar34 + 0x9f0) + 0x1fU & 0xffffffe0;
        uVar9 = *(ushort *)((long)plVar27 + 10);
      }
      piVar43 = (int *)(*plVar27 + (ulong)uVar9 * 0xc);
      *(undefined1 *)(piVar43 + 2) = 6;
      *piVar43 = 1;
      *(undefined2 *)((long)piVar43 + 6) = 4;
      uVar25 = *(int *)(lVar34 + 0x9f0) + 0xfU & 0xfffffff0;
      *(uint *)(lVar34 + 0x9f0) = uVar25;
      *(short *)(piVar43 + 1) = (short)uVar25;
      *(uint *)(lVar34 + 0x9f0) =
           *(int *)(lVar34 + 0x9f0) + (uint)*(ushort *)((long)piVar43 + 6) * *piVar43 * 4;
      *(short *)(*(long *)(lVar34 + 0x9c8) + 10) = *(short *)(*(long *)(lVar34 + 0x9c8) + 10) + 1;
      plVar27 = *(long **)(lVar34 + 0x9c8);
      uVar9 = *(ushort *)((long)plVar27 + 10);
      if (uVar9 == *(ushort *)(plVar27 + 1)) {
        *(uint *)(lVar34 + 0x9f0) = *(int *)(lVar34 + 0x9f0) + 0x1fU & 0xffffffe0;
        uVar9 = *(ushort *)((long)plVar27 + 10);
      }
      piVar43 = (int *)(*plVar27 + (ulong)uVar9 * 0xc);
      *(undefined1 *)(piVar43 + 2) = 6;
      *piVar43 = 1;
      *(undefined2 *)((long)piVar43 + 6) = 4;
      uVar25 = *(int *)(lVar34 + 0x9f0) + 0xfU & 0xfffffff0;
      *(uint *)(lVar34 + 0x9f0) = uVar25;
      *(short *)(piVar43 + 1) = (short)uVar25;
      *(uint *)(lVar34 + 0x9f0) =
           *(int *)(lVar34 + 0x9f0) + (uint)*(ushort *)((long)piVar43 + 6) * *piVar43 * 4;
      *(short *)(*(long *)(lVar34 + 0x9c8) + 10) = *(short *)(*(long *)(lVar34 + 0x9c8) + 10) + 1;
      plVar27 = *(long **)(lVar34 + 0x9c8);
      uVar9 = *(ushort *)((long)plVar27 + 10);
      if (uVar9 == *(ushort *)(plVar27 + 1)) {
        *(uint *)(lVar34 + 0x9f0) = *(int *)(lVar34 + 0x9f0) + 0x1fU & 0xffffffe0;
        uVar9 = *(ushort *)((long)plVar27 + 10);
      }
      piVar43 = (int *)(*plVar27 + (ulong)uVar9 * 0xc);
      *(undefined1 *)(piVar43 + 2) = 6;
      *piVar43 = 1;
      *(undefined2 *)((long)piVar43 + 6) = 4;
      uVar25 = *(int *)(lVar34 + 0x9f0) + 0xfU & 0xfffffff0;
      *(uint *)(lVar34 + 0x9f0) = uVar25;
      *(short *)(piVar43 + 1) = (short)uVar25;
      *(uint *)(lVar34 + 0x9f0) =
           *(int *)(lVar34 + 0x9f0) + (uint)*(ushort *)((long)piVar43 + 6) * *piVar43 * 4;
      *(short *)(*(long *)(lVar34 + 0x9c8) + 10) = *(short *)(*(long *)(lVar34 + 0x9c8) + 10) + 1;
      if (*(short *)(*(long *)(lVar34 + 0x9c8) + 10) == *(short *)(*(long *)(lVar34 + 0x9c8) + 8)) {
        *(uint *)(lVar34 + 0x9f0) = *(int *)(lVar34 + 0x9f0) + 0x1fU & 0xffffffe0;
      }
      FUN_0390d990(lVar34 + 0x9c0,param_3,3,1);
      uVar25 = uVar24;
      if (*(uint *)(param_1 + 0xa30) <= uVar24) {
        uVar25 = 0;
      }
      lVar34 = *(long *)(param_1 + 0xa38) + (ulong)uVar25 * 0xab8;
      plVar27 = (long *)(lVar34 + 0xa38);
      FUN_0390d714(plVar27,1,param_3);
      piVar43 = (int *)(**(long **)(lVar34 + 0xa40) +
                       (ulong)*(ushort *)((long)*(long **)(lVar34 + 0xa40) + 10) * 0xc);
      *(undefined1 *)(piVar43 + 2) = 2;
      *piVar43 = 3;
      uVar25 = (**(code **)(*(long *)(lVar34 + 0xa38) + 0x18))(plVar27,2);
      *(ushort *)((long)piVar43 + 6) = (ushort)uVar25 & 0xff;
      uVar25 = ((uVar25 & 0xff) * 4 + *(int *)(lVar34 + 0xa68)) - 1 & (uVar25 & 0xff) * -4;
      *(uint *)(lVar34 + 0xa68) = uVar25;
      *(short *)(piVar43 + 1) = (short)uVar25;
      *(uint *)(lVar34 + 0xa68) =
           *(int *)(lVar34 + 0xa68) + (uint)*(ushort *)((long)piVar43 + 6) * *piVar43 * 4;
      *(short *)(*(long *)(lVar34 + 0xa40) + 10) = *(short *)(*(long *)(lVar34 + 0xa40) + 10) + 1;
      if (*(short *)(*(long *)(lVar34 + 0xa40) + 10) == *(short *)(*(long *)(lVar34 + 0xa40) + 8)) {
        *(uint *)(lVar34 + 0xa68) = *(int *)(lVar34 + 0xa68) + 0x1fU & 0xffffffe0;
      }
      FUN_0390d990(plVar27,param_3,1,1);
      lVar26 = *(long *)(lVar34 + 0xa48);
      (**(code **)(*plVar27 + 0x20))(plVar27);
      (**(code **)(*plVar27 + 0x20))(plVar27);
      local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
      lVar37 = **(long **)(lVar34 + 0xa40);
      bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar37 + 8) * 4];
      (**(code **)(*plVar27 + 0x18))(plVar27);
      if ((ulong)bVar8 != 0) {
        memcpy((void *)(lVar26 + (ulong)*(ushort *)(lVar37 + 4)),&local_e8,(ulong)bVar8 << 2);
      }
      lVar26 = *(long *)(lVar34 + 0xa48);
      (**(code **)(*plVar27 + 0x20))(plVar27);
      (**(code **)(*plVar27 + 0x20))(plVar27);
      local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
      lVar37 = **(long **)(lVar34 + 0xa40);
      bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar37 + 8) * 4];
      bVar18 = (**(code **)(*plVar27 + 0x18))(plVar27);
      if ((ulong)bVar8 != 0) {
        memcpy((void *)(lVar26 + (ulong)*(ushort *)(lVar37 + 4) + (ulong)bVar18 * 4),&local_e8,
               (ulong)bVar8 << 2);
      }
      lVar26 = *(long *)(lVar34 + 0xa48);
      (**(code **)(*plVar27 + 0x20))(plVar27);
      (**(code **)(*plVar27 + 0x20))(plVar27);
      local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
      lVar37 = **(long **)(lVar34 + 0xa40);
      bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar37 + 8) * 4];
      bVar18 = (**(code **)(*plVar27 + 0x18))(plVar27);
      if ((ulong)bVar8 != 0) {
        memcpy((void *)(lVar26 + (ulong)*(ushort *)(lVar37 + 4) + (ulong)bVar18 * 8),&local_e8,
               (ulong)bVar8 << 2);
      }
      bVar8 = *(byte *)(lVar34 + 0xa71);
      uVar9 = *(ushort *)(lVar34 + 0xa72);
      iVar23 = *(int *)(lVar34 + 0xa68);
      iVar21 = (**(code **)(*plVar27 + 0x20))(plVar27);
      iVar22 = (**(code **)(*plVar27 + 0x20))(plVar27);
      lVar26 = *(long *)(lVar34 + 0xa58);
      if (lVar26 != 0) {
        uVar20 = *(undefined4 *)(lVar34 + 0xa68);
        iVar7 = *(int *)(lVar34 + 0xa50);
        uVar25 = (**(code **)PTR_DAT_04bcf030)(lVar26);
        if ((uVar25 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_04bcf350)
                    (lVar26,iVar7 + (uint)uVar9 * (uint)bVar8 * ((iVar23 + iVar21) - 1U & -iVar22),
                     uVar20);
        }
      }
      uVar24 = uVar24 + 1;
      uVar41 = (ulong)*(uint *)(param_1 + 0xa30);
    } while ((int)uVar24 < (int)*(uint *)(param_1 + 0xa30));
  }
  puVar39 = PTR_DAT_04bd0fa8;
  uVar24 = param_2[1];
  if (uVar24 != 0) {
    uVar25 = param_2[2];
    if ((uVar25 != 0) && (0 < (int)uVar41)) {
      uVar33 = 0;
      do {
        uVar6 = uVar33;
        if ((uint)uVar41 <= uVar33) {
          uVar6 = 0;
        }
        lVar34 = *(long *)(param_1 + 0xa38);
        plVar27 = param_3;
        if (param_3 == (long *)0x0) {
          lVar37 = *(long *)PTR_DAT_04bb2698;
          lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar27 = (long *)(lVar37 + 8);
          if (lVar26 != 0) {
            plVar27 = (long *)(lVar26 + 0xa8);
          }
          plVar27 = (long *)*plVar27;
        }
        lVar26 = lVar34 + (ulong)uVar6 * 0xab8;
        *(undefined8 *)(lVar26 + 0x5a0) = 0;
        *(undefined2 *)(lVar26 + 0x59a) = 0;
        *(undefined8 *)(lVar26 + 0x578) = 0;
        *(undefined8 *)(lVar26 + 0x580) = 0;
        *(undefined8 *)(lVar26 + 0x588) = 0;
        *(undefined8 *)(lVar26 + 0x590) = 0;
        *(byte *)(lVar26 + 0x598) = *(byte *)(lVar26 + 0x598) & 0xfe;
        FUN_038f8590(*(undefined8 *)puVar39,lVar26 + 0x570,plVar27,uVar24,0x2000,0);
        *(undefined2 *)(lVar26 + 0x59a) = 0;
        *(undefined1 *)(lVar26 + 0x5a8) = 0;
        if (uVar25 != 1) {
          plVar27 = param_3;
          if (param_3 == (long *)0x0) {
            lVar38 = *(long *)PTR_DAT_04bb2698;
            lVar37 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),
                                         extraout_x1_01,0);
            plVar27 = (long *)(lVar38 + 8);
            if (lVar37 != 0) {
              plVar27 = (long *)(lVar37 + 0xa8);
            }
            plVar27 = (long *)*plVar27;
          }
          *(undefined8 *)(lVar26 + 0x760) = 0;
          *(undefined8 *)(lVar26 + 0x738) = 0;
          *(undefined8 *)(lVar26 + 0x740) = 0;
          *(undefined8 *)(lVar26 + 0x748) = 0;
          *(undefined8 *)(lVar26 + 0x750) = 0;
          *(undefined2 *)(lVar26 + 0x75a) = 0;
          *(byte *)(lVar26 + 0x758) = *(byte *)(lVar26 + 0x758) & 0xfe;
          FUN_038f8590(*(undefined8 *)puVar39,lVar26 + 0x730,plVar27,uVar24,0x2000,0);
          *(undefined2 *)(lVar26 + 0x75a) = 0;
          *(undefined1 *)(lVar26 + 0x768) = 0;
          if (uVar25 != 2) {
            uVar40 = extraout_x1_02;
            lVar37 = (ulong)uVar25 - 2;
            do {
              plVar27 = param_3;
              if (param_3 == (long *)0x0) {
                lVar35 = *(long *)PTR_DAT_04bb2698;
                lVar38 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),
                                             uVar40,0);
                plVar27 = (long *)(lVar35 + 8);
                if (lVar38 != 0) {
                  plVar27 = (long *)(lVar38 + 0xa8);
                }
                plVar27 = (long *)*plVar27;
              }
              *(undefined8 *)(lVar26 + 0x5a0) = 0;
              *(undefined2 *)(lVar26 + 0x59a) = 0;
              *(undefined8 *)(lVar26 + 0x578) = 0;
              *(undefined8 *)(lVar26 + 0x580) = 0;
              *(undefined8 *)(lVar26 + 0x588) = 0;
              *(undefined8 *)(lVar26 + 0x590) = 0;
              *(byte *)(lVar26 + 0x598) = *(byte *)(lVar26 + 0x598) & 0xfe;
              FUN_038f8590(*(undefined8 *)puVar39,lVar26 + 0x570,plVar27,uVar24,0x2000,0);
              lVar37 = lVar37 + -1;
              *(undefined2 *)(lVar26 + 0x59a) = 0;
              *(undefined1 *)(lVar26 + 0x5a8) = 0;
              uVar40 = extraout_x1_03;
            } while (lVar37 != 0);
          }
        }
        uVar33 = uVar33 + 1;
        lVar34 = lVar34 + (ulong)uVar6 * 0xab8;
        *(uint *)(lVar34 + 0x770) = uVar25;
        *(undefined4 *)(lVar34 + 0x774) = 0;
        uVar41 = (ulong)*(uint *)(param_1 + 0xa30);
      } while ((int)uVar33 < (int)*(uint *)(param_1 + 0xa30));
    }
  }
  puVar39 = PTR_DAT_04bbdd18;
  local_e8 = "FETCH_TYPE";
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x52) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x288);
  }
  local_108 = &DAT_040d3199;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x1d0) = lVar26;
  local_108 = &DAT_0405b40b;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar34 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar34 = *(long *)(lVar34 + 0x18);
  }
  else {
    if (*(uint *)(lVar34 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar34 = *(long *)(lVar34 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x1d8) = lVar34;
  local_e8 = PTR_s_FXAA_TYPE_04b6d998;
  local_e0 = PTR_s_ENABLE_ALPHA_OUT_04b6d9a0;
  local_d8 = PTR_s_FETCH_TYPE_04b6d9a8;
  if (*(uint *)(*(long *)puVar39 + 8) < 0x51) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)puVar39 + 0x10) + 0x280);
  }
  lVar26 = 0;
  bVar42 = true;
  do {
    bVar32 = bVar42;
    puVar39 = (&PTR_DAT_04b6d9e8)[lVar26];
    lVar37 = 0;
    bVar42 = true;
    do {
      bVar30 = bVar42;
      puVar36 = (&PTR_DAT_04b6d9e8)[lVar37];
      local_f8 = &DAT_040d3199;
      local_108 = puVar39;
      puStack_100 = puVar36;
      iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                            *(undefined2 *)(lVar34 + 0x1e));
      lVar38 = *(long *)(lVar34 + 8);
      uVar24 = iVar23 - 1;
      if (iVar23 < 1) {
        lVar38 = *(long *)(lVar38 + 0x18);
      }
      else {
        if (*(uint *)(lVar38 + 0x20) <= uVar24) {
          uVar24 = 0;
        }
        lVar38 = *(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x150;
      }
      plVar27 = (long *)(param_1 + 0x1e0 + lVar26 * 0x70 + lVar37 * 0x38);
      *plVar27 = lVar38;
      local_f8 = &DAT_040b3e5e;
      local_108 = puVar39;
      puStack_100 = puVar36;
      iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                            *(undefined2 *)(lVar34 + 0x1e));
      lVar37 = *(long *)(lVar34 + 8);
      uVar24 = iVar23 - 1;
      if (iVar23 < 1) {
        lVar37 = *(long *)(lVar37 + 0x18);
      }
      else {
        if (*(uint *)(lVar37 + 0x20) <= uVar24) {
          uVar24 = 0;
        }
        lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
      }
      plVar27[1] = lVar37;
      local_f8 = &DAT_04074a4d;
      local_108 = puVar39;
      puStack_100 = puVar36;
      iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                            *(undefined2 *)(lVar34 + 0x1e));
      lVar37 = *(long *)(lVar34 + 8);
      uVar24 = iVar23 - 1;
      if (iVar23 < 1) {
        lVar37 = *(long *)(lVar37 + 0x18);
      }
      else {
        if (*(uint *)(lVar37 + 0x20) <= uVar24) {
          uVar24 = 0;
        }
        lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
      }
      plVar27[2] = lVar37;
      local_f8 = &DAT_040aa133;
      local_108 = puVar39;
      puStack_100 = puVar36;
      iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                            *(undefined2 *)(lVar34 + 0x1e));
      lVar37 = *(long *)(lVar34 + 8);
      uVar24 = iVar23 - 1;
      if (iVar23 < 1) {
        lVar37 = *(long *)(lVar37 + 0x18);
      }
      else {
        if (*(uint *)(lVar37 + 0x20) <= uVar24) {
          uVar24 = 0;
        }
        lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
      }
      plVar27[3] = lVar37;
      local_f8 = &DAT_040aa135;
      local_108 = puVar39;
      puStack_100 = puVar36;
      iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                            *(undefined2 *)(lVar34 + 0x1e));
      lVar37 = *(long *)(lVar34 + 8);
      uVar24 = iVar23 - 1;
      if (iVar23 < 1) {
        lVar37 = *(long *)(lVar37 + 0x18);
      }
      else {
        if (*(uint *)(lVar37 + 0x20) <= uVar24) {
          uVar24 = 0;
        }
        lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
      }
      plVar27[4] = lVar37;
      local_f8 = &DAT_0405b40b;
      local_108 = puVar39;
      puStack_100 = puVar36;
      iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                            *(undefined2 *)(lVar34 + 0x1e));
      lVar37 = *(long *)(lVar34 + 8);
      uVar24 = iVar23 - 1;
      if (iVar23 < 1) {
        lVar37 = *(long *)(lVar37 + 0x18);
      }
      else {
        if (*(uint *)(lVar37 + 0x20) <= uVar24) {
          uVar24 = 0;
        }
        lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
      }
      plVar27[5] = lVar37;
      local_f8 = &DAT_0409a9a5;
      local_108 = puVar39;
      puStack_100 = puVar36;
      iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                            *(undefined2 *)(lVar34 + 0x1e));
      lVar37 = *(long *)(lVar34 + 8);
      uVar24 = iVar23 - 1;
      if (iVar23 < 1) {
        lVar37 = *(long *)(lVar37 + 0x18);
      }
      else {
        if (*(uint *)(lVar37 + 0x20) <= uVar24) {
          uVar24 = 0;
        }
        lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
      }
      plVar27[6] = lVar37;
      lVar37 = 1;
      bVar42 = false;
    } while (bVar30);
    lVar26 = 1;
    bVar42 = false;
  } while (bVar32);
  local_d8 = PTR_s_ENABLE_ALPHA_OUT_04b6d9c0;
  puStack_d0 = PTR_s_FETCH_TYPE_04b6d9c8;
  local_e8 = PTR_s_FXAA_TYPE_04b6d9b0;
  local_e0 = PTR_s_USE_NORMALIZED_LINEAR_DEPTH_04b6d9b8;
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x53) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x290);
  }
  lVar26 = 0;
  bVar42 = true;
  do {
    bVar32 = bVar42;
    puVar39 = (&PTR_DAT_04b6d9e8)[lVar26];
    lVar37 = 0;
    bVar42 = true;
    do {
      bVar30 = bVar42;
      puVar36 = (&PTR_DAT_04b6d9e8)[lVar37];
      lVar38 = 0;
      bVar42 = true;
      do {
        bVar31 = bVar42;
        puVar44 = (&PTR_DAT_04b6d9e8)[lVar38];
        puStack_f0 = &DAT_040d3199;
        local_108 = puVar39;
        puStack_100 = puVar36;
        local_f8 = puVar44;
        iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,4,&local_e8,&local_108,
                              *(undefined2 *)(lVar34 + 0x1e));
        lVar35 = *(long *)(lVar34 + 8);
        uVar24 = iVar23 - 1;
        if (iVar23 < 1) {
          lVar35 = *(long *)(lVar35 + 0x18);
        }
        else {
          if (*(uint *)(lVar35 + 0x20) <= uVar24) {
            uVar24 = 0;
          }
          lVar35 = *(long *)(lVar35 + 0x28) + (ulong)uVar24 * 0x150;
        }
        plVar27 = (long *)(param_1 + 0x2c0 + lVar26 * 0xe0 + lVar37 * 0x70 + lVar38 * 0x38);
        *plVar27 = lVar35;
        puStack_f0 = &DAT_040b3e5e;
        local_108 = puVar39;
        puStack_100 = puVar36;
        local_f8 = puVar44;
        iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,4,&local_e8,&local_108,
                              *(undefined2 *)(lVar34 + 0x1e));
        lVar38 = *(long *)(lVar34 + 8);
        uVar24 = iVar23 - 1;
        if (iVar23 < 1) {
          lVar38 = *(long *)(lVar38 + 0x18);
        }
        else {
          if (*(uint *)(lVar38 + 0x20) <= uVar24) {
            uVar24 = 0;
          }
          lVar38 = *(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x150;
        }
        plVar27[1] = lVar38;
        puStack_f0 = &DAT_04074a4d;
        local_108 = puVar39;
        puStack_100 = puVar36;
        local_f8 = puVar44;
        iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,4,&local_e8,&local_108,
                              *(undefined2 *)(lVar34 + 0x1e));
        lVar38 = *(long *)(lVar34 + 8);
        uVar24 = iVar23 - 1;
        if (iVar23 < 1) {
          lVar38 = *(long *)(lVar38 + 0x18);
        }
        else {
          if (*(uint *)(lVar38 + 0x20) <= uVar24) {
            uVar24 = 0;
          }
          lVar38 = *(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x150;
        }
        plVar27[2] = lVar38;
        puStack_f0 = &DAT_040aa133;
        local_108 = puVar39;
        puStack_100 = puVar36;
        local_f8 = puVar44;
        iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,4,&local_e8,&local_108,
                              *(undefined2 *)(lVar34 + 0x1e));
        lVar38 = *(long *)(lVar34 + 8);
        uVar24 = iVar23 - 1;
        if (iVar23 < 1) {
          lVar38 = *(long *)(lVar38 + 0x18);
        }
        else {
          if (*(uint *)(lVar38 + 0x20) <= uVar24) {
            uVar24 = 0;
          }
          lVar38 = *(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x150;
        }
        plVar27[3] = lVar38;
        puStack_f0 = &DAT_040aa135;
        local_108 = puVar39;
        puStack_100 = puVar36;
        local_f8 = puVar44;
        iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,4,&local_e8,&local_108,
                              *(undefined2 *)(lVar34 + 0x1e));
        lVar38 = *(long *)(lVar34 + 8);
        uVar24 = iVar23 - 1;
        if (iVar23 < 1) {
          lVar38 = *(long *)(lVar38 + 0x18);
        }
        else {
          if (*(uint *)(lVar38 + 0x20) <= uVar24) {
            uVar24 = 0;
          }
          lVar38 = *(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x150;
        }
        plVar27[4] = lVar38;
        puStack_f0 = &DAT_0405b40b;
        local_108 = puVar39;
        puStack_100 = puVar36;
        local_f8 = puVar44;
        iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,4,&local_e8,&local_108,
                              *(undefined2 *)(lVar34 + 0x1e));
        lVar38 = *(long *)(lVar34 + 8);
        uVar24 = iVar23 - 1;
        if (iVar23 < 1) {
          lVar38 = *(long *)(lVar38 + 0x18);
        }
        else {
          if (*(uint *)(lVar38 + 0x20) <= uVar24) {
            uVar24 = 0;
          }
          lVar38 = *(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x150;
        }
        plVar27[5] = lVar38;
        puStack_f0 = &DAT_0409a9a5;
        local_108 = puVar39;
        puStack_100 = puVar36;
        local_f8 = puVar44;
        iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,4,&local_e8,&local_108,
                              *(undefined2 *)(lVar34 + 0x1e));
        lVar38 = *(long *)(lVar34 + 8);
        uVar24 = iVar23 - 1;
        if (iVar23 < 1) {
          lVar38 = *(long *)(lVar38 + 0x18);
        }
        else {
          if (*(uint *)(lVar38 + 0x20) <= uVar24) {
            uVar24 = 0;
          }
          lVar38 = *(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x150;
        }
        plVar27[6] = lVar38;
        puVar44 = PTR_DAT_04bbdd18;
        lVar38 = 1;
        bVar42 = false;
      } while (bVar31);
      lVar37 = 1;
      bVar42 = false;
    } while (bVar30);
    lVar26 = 1;
    bVar42 = false;
  } while (bVar32);
  local_e0 = PTR_s_FETCH_TYPE_04b6d9d8;
  local_d8 = PTR_s_DEBUG_NO_04b6d9e0;
  local_e8 = PTR_s_FXAA_TYPE_04b6d9d0;
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x54) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x298);
  }
  lVar26 = 0;
  plVar27 = (long *)(param_1 + 0x490);
  do {
    uVar40 = *(undefined8 *)((long)&PTR_DAT_04b6d9e8 + lVar26);
    local_108 = &DAT_040d3199;
    local_f8 = &DAT_040b3e5e;
    puStack_100 = (undefined *)uVar40;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar37 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar37 = *(long *)(lVar37 + 0x18);
    }
    else {
      if (*(uint *)(lVar37 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[-2] = lVar37;
    local_108 = &DAT_040d3199;
    local_f8 = &DAT_04074a4d;
    puStack_100 = (undefined *)uVar40;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar37 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar37 = *(long *)(lVar37 + 0x18);
    }
    else {
      if (*(uint *)(lVar37 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[-1] = lVar37;
    local_108 = &DAT_040d3199;
    local_f8 = &DAT_040aa133;
    puStack_100 = (undefined *)uVar40;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar37 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar37 = *(long *)(lVar37 + 0x18);
    }
    else {
      if (*(uint *)(lVar37 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
    }
    lVar26 = lVar26 + 8;
    *plVar27 = lVar37;
    plVar27 = plVar27 + 3;
  } while (lVar26 != 0x38);
  lVar26 = 0;
  plVar27 = (long *)(param_1 + 0x538);
  do {
    uVar40 = *(undefined8 *)((long)&PTR_DAT_04b6d9e8 + lVar26);
    local_f8 = &DAT_040b3e5e;
    local_108 = &DAT_040b3e5e;
    puStack_100 = (undefined *)uVar40;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar37 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar37 = *(long *)(lVar37 + 0x18);
    }
    else {
      if (*(uint *)(lVar37 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[-2] = lVar37;
    local_108 = &DAT_040b3e5e;
    local_f8 = &DAT_04074a4d;
    puStack_100 = (undefined *)uVar40;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar37 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar37 = *(long *)(lVar37 + 0x18);
    }
    else {
      if (*(uint *)(lVar37 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[-1] = lVar37;
    local_108 = &DAT_040b3e5e;
    local_f8 = &DAT_040aa133;
    puStack_100 = (undefined *)uVar40;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar37 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar37 = *(long *)(lVar37 + 0x18);
    }
    else {
      if (*(uint *)(lVar37 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
    }
    lVar26 = lVar26 + 8;
    *plVar27 = lVar37;
    plVar27 = plVar27 + 3;
  } while (lVar26 != 0x38);
  local_e8 = PTR_s_IS_EDGE_DETECTION_DISCARDABLE_04b6da20;
  local_e0 = PTR_s_IS_EDGE_DETECTION_OUTPUT_DEPTH_04b6da28;
  if (*(uint *)(*(long *)puVar44 + 8) < 0x57) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)puVar44 + 0x10) + 0x2b0);
  }
  local_108 = &DAT_040d3199;
  puStack_100 = &DAT_040d3199;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x5d0) = lVar26;
  local_108 = &DAT_040d3199;
  puStack_100 = &DAT_040b3e5e;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x5d8) = lVar26;
  local_108 = &DAT_040b3e5e;
  puStack_100 = &DAT_040d3199;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x5e0) = lVar26;
  local_108 = &DAT_040b3e5e;
  puStack_100 = &DAT_040b3e5e;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar34 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar34 = *(long *)(lVar34 + 0x18);
  }
  else {
    if (*(uint *)(lVar34 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar34 = *(long *)(lVar34 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x5e8) = lVar34;
  local_e8 = PTR_s_IS_WEIGHT_CALCULATION_TINY_AREA_04b6da30;
  local_e0 = PTR_s_WEIGHT_CALCULATION_QUALITY_04b6da38;
  if (*(uint *)(*(long *)puVar44 + 8) < 0x58) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)puVar44 + 0x10) + 0x2b8);
  }
  local_108 = &DAT_040d3199;
  puStack_100 = &DAT_040d3199;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x5f0) = lVar26;
  local_108 = &DAT_040d3199;
  puStack_100 = &DAT_040b3e5e;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x5f8) = lVar26;
  local_108 = &DAT_040d3199;
  puStack_100 = &DAT_04074a4d;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x600) = lVar26;
  local_108 = &DAT_040d3199;
  puStack_100 = &DAT_040aa133;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x608) = lVar26;
  local_108 = &DAT_040b3e5e;
  puStack_100 = &DAT_040d3199;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x610) = lVar26;
  local_108 = &DAT_040b3e5e;
  puStack_100 = &DAT_040b3e5e;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x618) = lVar26;
  local_108 = &DAT_040b3e5e;
  puStack_100 = &DAT_04074a4d;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x620) = lVar26;
  local_108 = &DAT_040b3e5e;
  puStack_100 = &DAT_040aa133;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,2,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar34 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar34 = *(long *)(lVar34 + 0x18);
  }
  else {
    if (*(uint *)(lVar34 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar34 = *(long *)(lVar34 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x628) = lVar34;
  lVar34 = *(long *)puVar44;
  if (*(uint *)(lVar34 + 8) < 0x59) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(undefined8 *)(*(long *)(lVar34 + 0x10) + 0x2c0);
  }
  *(undefined8 *)(param_1 + 0x630) = uVar40;
  local_e8 = "IS_REPROJECTION";
  if (*(uint *)(lVar34 + 8) < 0x5a) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + 0x2c8);
  }
  local_108 = &DAT_040d3199;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x638) = lVar26;
  local_108 = &DAT_040b3e5e;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar34 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar34 = *(long *)(lVar34 + 0x18);
  }
  else {
    if (*(uint *)(lVar34 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar34 = *(long *)(lVar34 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x640) = lVar34;
  local_e8 = "IS_ENCODE_POS_STORAGE";
  if (*(uint *)(*(long *)puVar44 + 8) < 0x5b) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)puVar44 + 0x10) + 0x2d0);
  }
  local_108 = &DAT_040d3199;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x648) = lVar26;
  local_108 = &DAT_040b3e5e;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar34 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar34 = *(long *)(lVar34 + 0x18);
  }
  else {
    if (*(uint *)(lVar34 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar34 = *(long *)(lVar34 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x650) = lVar34;
  local_e8 = PTR_s_IS_WEIGHT_CALCULATION_TINY_AREA_04b6da40;
  local_e0 = PTR_s_WEIGHT_CALCULATION_QUALITY_04b6da48;
  local_d8 = PTR_s_IS_ENCODE_POS_STORAGE_04b6da50;
  if (*(uint *)(*(long *)puVar44 + 8) < 0x5c) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)puVar44 + 0x10) + 0x2d8);
  }
  lVar26 = 0;
  bVar42 = true;
  do {
    bVar32 = bVar42;
    puVar39 = (&PTR_DAT_04b6d9e8)[lVar26];
    local_f8 = &DAT_040d3199;
    puStack_100 = &DAT_040d3199;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar37 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar37 = *(long *)(lVar37 + 0x18);
    }
    else {
      if (*(uint *)(lVar37 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar37 = *(long *)(lVar37 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27 = (long *)(param_1 + 0x658 + lVar26 * 0x40);
    *plVar27 = lVar37;
    puStack_100 = &DAT_040d3199;
    local_f8 = &DAT_040b3e5e;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar26 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar26 = *(long *)(lVar26 + 0x18);
    }
    else {
      if (*(uint *)(lVar26 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[1] = lVar26;
    puStack_100 = &DAT_040b3e5e;
    local_f8 = &DAT_040d3199;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar26 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar26 = *(long *)(lVar26 + 0x18);
    }
    else {
      if (*(uint *)(lVar26 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[2] = lVar26;
    puStack_100 = &DAT_040b3e5e;
    local_f8 = &DAT_040b3e5e;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar26 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar26 = *(long *)(lVar26 + 0x18);
    }
    else {
      if (*(uint *)(lVar26 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[3] = lVar26;
    puStack_100 = &DAT_04074a4d;
    local_f8 = &DAT_040d3199;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar26 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar26 = *(long *)(lVar26 + 0x18);
    }
    else {
      if (*(uint *)(lVar26 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[4] = lVar26;
    puStack_100 = &DAT_04074a4d;
    local_f8 = &DAT_040b3e5e;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar26 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar26 = *(long *)(lVar26 + 0x18);
    }
    else {
      if (*(uint *)(lVar26 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[5] = lVar26;
    puStack_100 = &DAT_040aa133;
    local_f8 = &DAT_040d3199;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar26 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar26 = *(long *)(lVar26 + 0x18);
    }
    else {
      if (*(uint *)(lVar26 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[6] = lVar26;
    puStack_100 = &DAT_040aa133;
    local_f8 = &DAT_040b3e5e;
    local_108 = puVar39;
    iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,3,&local_e8,&local_108,
                          *(undefined2 *)(lVar34 + 0x1e));
    lVar26 = *(long *)(lVar34 + 8);
    uVar24 = iVar23 - 1;
    if (iVar23 < 1) {
      lVar26 = *(long *)(lVar26 + 0x18);
    }
    else {
      if (*(uint *)(lVar26 + 0x20) <= uVar24) {
        uVar24 = 0;
      }
      lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
    }
    plVar27[7] = lVar26;
    lVar26 = 1;
    bVar42 = false;
  } while (bVar32);
  local_e8 = &DAT_040ad984;
  if (*(uint *)(*(long *)puVar44 + 8) < 0x5d) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(*(long *)puVar44 + 0x10) + 0x2e0);
  }
  local_108 = &DAT_04074a4d;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar26 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar26 = *(long *)(lVar26 + 0x18);
  }
  else {
    if (*(uint *)(lVar26 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x6d8) = lVar26;
  local_108 = &DAT_040aa135;
  iVar23 = FUN_03907ef0(*(long *)(lVar34 + 8) + 0x10,1,&local_e8,&local_108,
                        *(undefined2 *)(lVar34 + 0x1e));
  lVar34 = *(long *)(lVar34 + 8);
  uVar24 = iVar23 - 1;
  if (iVar23 < 1) {
    lVar34 = *(long *)(lVar34 + 0x18);
  }
  else {
    if (*(uint *)(lVar34 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar34 = *(long *)(lVar34 + 0x28) + (ulong)uVar24 * 0x150;
  }
  *(long *)(param_1 + 0x6e0) = lVar34;
  if ((char)param_2[3] == '\0') {
    return;
  }
  uVar24 = FUN_0390c400(1,10,0xa0,0x230,1,1,2);
  uVar25 = FUN_0390c400(1,10,0xa0,0x230,1,1,0);
  if (uVar24 <= uVar25) {
    uVar24 = uVar25;
  }
  plVar27 = param_3;
  if (param_3 == (long *)0x0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_04,0)
    ;
    plVar27 = (long *)(lVar26 + 8);
    if (lVar34 != 0) {
      plVar27 = (long *)(lVar34 + 0xa8);
    }
    plVar27 = (long *)*plVar27;
  }
  *(undefined8 *)(param_1 + 0xda8) = 0;
  *(undefined8 *)(param_1 + 0xd80) = 0;
  *(undefined8 *)(param_1 + 0xd88) = 0;
  *(undefined8 *)(param_1 + 0xd90) = 0;
  *(undefined8 *)(param_1 + 0xd98) = 0;
  *(undefined2 *)(param_1 + 0xda2) = 0;
  *(byte *)(param_1 + 0xda0) = *(byte *)(param_1 + 0xda0) & 0xfe;
  if (uVar24 == 0) {
    uVar24 = 0;
    *(undefined2 *)(param_1 + 0xda2) = 8;
    lVar34 = 0;
LAB_03a3dd70:
    uVar20 = 0;
    bVar42 = true;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0xd78,plVar27,uVar24,0x2000,8);
    *(undefined2 *)(param_1 + 0xda2) = 8;
    lVar34 = *(long *)(param_1 + 0xd90);
    if (*(long *)(param_1 + 0xd98) == 0) {
      uVar24 = 0;
      if (lVar34 == 0) {
        bVar42 = true;
        uVar20 = 0;
        goto LAB_03a3dd8c;
      }
    }
    else {
      uVar24 = *(int *)(param_1 + 0xd80) - *(int *)(*(long *)(param_1 + 0xd98) + 0x10);
      if (lVar34 == 0) goto LAB_03a3dd70;
    }
    uVar20 = *(undefined4 *)(lVar34 + 0x104);
    bVar42 = false;
  }
LAB_03a3dd8c:
  iVar23 = *(int *)(param_1 + 0xd88);
  FUN_0390c400(1,10,0xa0,0x230,1,1,0);
  if (bVar42) {
    lVar26 = 0;
  }
  else {
    lVar26 = (**(code **)PTR_DAT_04bb2cd8)(lVar34);
  }
  lVar26 = lVar26 + (ulong)uVar24;
  lVar37 = 0;
  lVar38 = 0x41b4273;
  do {
    lVar35 = 0;
    do {
      *(undefined4 *)(lVar26 + lVar35) = *(undefined4 *)(lVar38 + lVar35 + -3);
      lVar35 = lVar35 + 4;
    } while (lVar35 != 0x140);
    lVar37 = lVar37 + 1;
    lVar26 = lVar26 + 0x140;
    lVar38 = lVar38 + 0x140;
  } while (lVar37 != 0x230);
  local_e8 = (char *)CONCAT44(uVar20,uVar24);
  local_e0 = (undefined *)lVar34;
  local_d8 = (undefined *)(param_1 + 0xd78);
  FUN_0390c314(param_1 + 0xae0,&local_e8,(long)iVar23,10,0xa0,0x230,0);
  uVar24 = FUN_0390c400(1,1,0x40,0x10,1,1,2);
  uVar25 = FUN_0390c400(1,1,0x40,0x10,1,1,0);
  if (uVar24 <= uVar25) {
    uVar24 = uVar25;
  }
  plVar27 = param_3;
  if (param_3 == (long *)0x0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    lVar34 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_05,0)
    ;
    plVar27 = (long *)(lVar26 + 8);
    if (lVar34 != 0) {
      plVar27 = (long *)(lVar34 + 0xa8);
    }
    plVar27 = (long *)*plVar27;
  }
  *(undefined8 *)(param_1 + 0xd70) = 0;
  *(undefined8 *)(param_1 + 0xd48) = 0;
  *(undefined8 *)(param_1 + 0xd50) = 0;
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined2 *)(param_1 + 0xd6a) = 0;
  *(byte *)(param_1 + 0xd68) = *(byte *)(param_1 + 0xd68) & 0xfe;
  if (uVar24 == 0) {
    uVar20 = 0;
    iVar23 = 0;
    *(undefined2 *)(param_1 + 0xd6a) = 8;
    local_e0 = (undefined *)0x0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0xd40,plVar27,uVar24,0x2000,8);
    *(undefined2 *)(param_1 + 0xd6a) = 8;
    local_e0 = *(undefined **)(param_1 + 0xd58);
    if (*(long *)(param_1 + 0xd60) == 0) {
      iVar23 = 0;
    }
    else {
      iVar23 = *(int *)(param_1 + 0xd48) - *(int *)(*(long *)(param_1 + 0xd60) + 0x10);
    }
    uVar20 = 0;
    if (local_e0 != (undefined *)0x0) {
      uVar20 = *(undefined4 *)((long)local_e0 + 0x104);
    }
  }
  local_e8 = (char *)CONCAT44(uVar20,iVar23);
  local_d8 = (undefined *)(param_1 + 0xd40);
  FUN_03a46800(param_1 + 0xa40,&local_e8,(long)*(int *)(param_1 + 0xd50),param_3);
  *(undefined4 *)(param_1 + 0xc60) = *(undefined4 *)(param_1 + 0xae0);
  *(undefined8 *)(param_1 + 0xc88) = *(undefined8 *)(param_1 + 0xb08);
  *(undefined4 *)(param_1 + 0xc64) = *(undefined4 *)(param_1 + 0xae4);
  *(undefined8 *)(param_1 + 0xc68) = *(undefined8 *)(param_1 + 0xae8);
  *(undefined8 *)(param_1 + 0xc70) = *(undefined8 *)(param_1 + 0xaf0);
  *(undefined4 *)(param_1 + 0xc78) = *(undefined4 *)(param_1 + 0xaf8);
  *(undefined4 *)(param_1 + 0xc7c) = *(undefined4 *)(param_1 + 0xafc);
  *(undefined8 *)(param_1 + 0xc80) = *(undefined8 *)(param_1 + 0xb00);
  *(undefined8 *)(param_1 + 0xca7) = *(undefined8 *)(param_1 + 0xb27);
  *(undefined8 *)(param_1 + 0xca0) = *(undefined8 *)(param_1 + 0xb20);
  *(undefined8 *)(param_1 + 0xc98) = *(undefined8 *)(param_1 + 0xb18);
  *(undefined8 *)(param_1 + 0xc90) = *(undefined8 *)(param_1 + 0xb10);
  FUN_038fd1e0(param_1 + 0xcb0);
  FUN_038fd2f0(param_1 + 0xcb0,param_1 + 0xb30);
  puVar4 = (uint *)(param_1 + 0xd34);
  *(undefined8 *)(param_1 + 0xcf0) = *(undefined8 *)(param_1 + 0xb70);
  *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_1 + 0xb78);
  do {
    cVar10 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar42) {
      *puVar4 = *puVar4 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(param_1 + 0xa40);
  *(undefined8 *)(param_1 + 0xba8) = *(undefined8 *)(param_1 + 0xa68);
  *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(param_1 + 0xa44);
  *(undefined8 *)(param_1 + 0xb88) = *(undefined8 *)(param_1 + 0xa48);
  *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(param_1 + 0xa50);
  *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(param_1 + 0xa58);
  *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(param_1 + 0xa5c);
  *(undefined8 *)(param_1 + 0xba0) = *(undefined8 *)(param_1 + 0xa60);
  *(undefined8 *)(param_1 + 0xbc7) = *(undefined8 *)(param_1 + 0xa87);
  *(undefined8 *)(param_1 + 0xbc0) = *(undefined8 *)(param_1 + 0xa80);
  *(undefined8 *)(param_1 + 3000) = *(undefined8 *)(param_1 + 0xa78);
  *(undefined8 *)(param_1 + 0xbb0) = *(undefined8 *)(param_1 + 0xa70);
  FUN_038fd1e0(param_1 + 0xbd0);
  FUN_038fd2f0(param_1 + 0xbd0,param_1 + 0xa90);
  puVar5 = (uint *)(param_1 + 0xc54);
  *(undefined8 *)(param_1 + 0xc10) = *(undefined8 *)(param_1 + 0xad0);
  *(undefined4 *)(param_1 + 0xc18) = *(undefined4 *)(param_1 + 0xad8);
  do {
    cVar10 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar42) {
      *puVar5 = *puVar5 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_1 + 0xc44) = 0;
  *(undefined1 *)(param_1 + 0xc46) = 0;
  do {
    cVar10 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar42) {
      *puVar5 = *puVar5 | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  do {
    uVar24 = *puVar4;
    cVar10 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar42) {
      *puVar4 = uVar24 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar24 & 0x7fffffff) != 0) {
    if ((int)uVar24 < 0) {
      if ((int)*puVar4 < 0) {
        lVar34 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar34 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar4 < 0);
      }
    }
    else {
      FUN_0390d37c(param_1 + 0xc60);
    }
  }
  do {
    cVar10 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar42) {
      *puVar4 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  do {
    uVar24 = *puVar5;
    cVar10 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar42) {
      *puVar5 = uVar24 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar24 & 0x7fffffff) != 0) {
    if ((int)uVar24 < 0) {
      if ((int)*puVar5 < 0) {
        lVar34 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar34 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar5 < 0);
      }
    }
    else {
      FUN_0390d37c(param_1 + 0xb80);
    }
  }
  do {
    cVar10 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar42) {
      *puVar5 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  return;
}

