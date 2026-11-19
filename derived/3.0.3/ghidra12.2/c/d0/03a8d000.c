
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03a8d000(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  char cVar16;
  bool bVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined *puVar24;
  long lVar25;
  ulong *puVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined4 *puVar32;
  
  if (0 < (int)param_2) {
    uVar30 = (ulong)param_2 * 0x3b0 | 8;
    lVar29 = *(long *)PTR_DAT_04bb2698;
    if (lVar29 == 0) {
      puVar26 = malloc(uVar30);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar29 + 8);
        if (lVar25 != 0) {
          param_3 = (long *)(lVar25 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_03a8d274;
      }
      puVar26 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,uVar30,8);
    }
    puVar24 = PTR_DAT_04bb2f80;
    if (puVar26 != (ulong *)0x0) {
      puVar2 = PTR_DAT_04bd1198 + 0x10;
      puVar3 = PTR_DAT_04bd11a0 + 0x10;
      puVar4 = PTR_DAT_04bd1178 + 0x10;
      uVar7 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uVar11 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      puVar31 = puVar26 + 1;
      *puVar26 = (ulong)param_2;
      puVar5 = PTR_DAT_04bd0e98 + 0x10;
      uVar8 = *(undefined8 *)(puVar24 + 0x20);
      uVar12 = *(undefined8 *)(puVar24 + 0x28);
      uVar9 = *(undefined8 *)puVar24;
      uVar13 = *(undefined8 *)(puVar24 + 8);
      lVar29 = 0;
      do {
        *(undefined8 *)((long)puVar26 + lVar29 + 0x60) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x68) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x50) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x58) = 0;
        *(undefined4 *)((long)puVar26 + lVar29 + 0x70) = 0xffffffff;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x40) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x48) = 0;
        *(undefined4 *)((long)puVar26 + lVar29 + 0xb8) = 0x10000;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x30) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x38) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x20) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x28) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x78) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x80) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x88) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x90) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x98) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0xa0) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0xa8) = 0;
        *(char **)((long)puVar26 + lVar29 + 0xb0) = "agl::TextureData";
        *(undefined4 *)((long)puVar26 + lVar29 + 0xd0) = 0xff;
        *(undefined **)((long)puVar26 + lVar29 + 0x18) = puVar2;
        *(undefined4 *)((long)puVar26 + lVar29 + 0xd4) = 0;
        *(undefined4 *)((long)puVar26 + lVar29 + 0x150) = 0xffffffff;
        *(undefined4 *)((long)puVar26 + lVar29 + 0x198) = 0x10000;
        *(undefined8 *)((long)puVar26 + lVar29 + 0xe8) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0xf0) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0xd8) = 0x80000000000;
        *(undefined8 *)((long)puVar26 + lVar29 + 0xe0) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x140) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x148) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x130) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x138) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x120) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x128) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x110) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x118) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x100) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x108) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x178) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x180) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x168) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x170) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x158) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x160) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x188) = 0;
        *(char **)((long)puVar26 + lVar29 + 400) = "agl::TextureData";
        *(undefined4 *)((long)puVar26 + lVar29 + 0x1b0) = 0xff;
        *(undefined4 *)((long)puVar26 + lVar29 + 0x1b4) = 0;
        *(undefined **)((long)puVar26 + lVar29 + 0xf8) = puVar3;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x1c8) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x1d0) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x1b8) = 0x80000000000;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x1c0) = 0;
        (**(code **)PTR_DAT_04bcf220)((long)puVar26 + lVar29 + 0x1a0);
        *(undefined8 *)((long)puVar26 + lVar29 + 0x1e8) = 0;
        *(undefined1 **)((long)puVar26 + lVar29 + 0x1f0) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x208) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x210) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x218) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x220) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x228) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x230) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x238) = 0;
        *(undefined **)((long)puVar26 + lVar29 + 0x1d8) = puVar4;
        *(undefined1 **)((long)puVar26 + lVar29 + 0x1e0) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x1f8) = 0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x200) = 0;
        FUN_0390cee0((long)puVar26 + lVar29 + 0x240);
        lVar25 = lVar29 + 0x3b0;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x368) = uVar7;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x370) = uVar11;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x378) = uVar8;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x380) = uVar12;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x358) = uVar9;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x360) = uVar13;
        *(undefined **)((long)puVar26 + lVar29 + 0x350) = puVar5;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x3a8) = uVar8;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x3b0) = uVar12;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x3a0) = uVar11;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x398) = uVar7;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x388) = uVar9;
        *(undefined8 *)((long)puVar26 + lVar29 + 0x390) = uVar13;
        lVar29 = lVar25;
      } while ((ulong)param_2 * 0x3b0 != lVar25);
      *(uint *)(param_1 + 0x1d0) = param_2;
      *(ulong **)(param_1 + 0x1d8) = puVar31;
      uVar30 = _DAT_04102200;
      uVar18 = _UNK_04102208;
      uVar19 = _DAT_041023d0;
      uVar20 = _UNK_041023d8;
      uVar21 = _DAT_04102880;
      uVar22 = _UNK_04102888;
      plVar23 = (long *)PTR_DAT_04bb31c8;
      goto joined_r0x03a8d27c;
    }
  }
LAB_03a8d274:
  param_2 = *(uint *)(param_1 + 0x1d0);
  puVar31 = *(ulong **)(param_1 + 0x1d8);
  uVar30 = _DAT_04102200;
  uVar18 = _UNK_04102208;
  uVar19 = _DAT_041023d0;
  uVar20 = _UNK_041023d8;
  uVar21 = _DAT_04102880;
  uVar22 = _UNK_04102888;
  plVar23 = (long *)PTR_DAT_04bb31c8;
joined_r0x03a8d27c:
  _DAT_04102200 = uVar30;
  _UNK_04102208 = uVar18;
  _DAT_041023d0 = uVar19;
  _UNK_041023d8 = uVar20;
  _DAT_04102880 = uVar21;
  _UNK_04102888 = uVar22;
  PTR_DAT_04bb31c8 = (undefined *)plVar23;
  if (param_2 != 0) {
    uVar28 = 0;
    do {
      puVar26 = puVar31 + (long)(int)uVar28 * 0x76;
      *puVar26 = 0;
      puVar26[1] = 0;
      puVar26[0x3e] = (ulong)(puVar26 + 2);
      puVar32 = *(undefined4 **)(*plVar23 + 0x40);
      *(undefined4 *)(puVar26 + 0x47) = *puVar32;
      *(undefined4 *)((long)puVar26 + 0x23c) = puVar32[1];
      puVar26[0x48] = *(ulong *)(puVar32 + 2);
      puVar26[0x49] = *(ulong *)(puVar32 + 4);
      *(undefined4 *)(puVar26 + 0x4a) = puVar32[6];
      *(undefined4 *)((long)puVar26 + 0x254) = puVar32[7];
      puVar26[0x4b] = *(ulong *)(puVar32 + 8);
      puVar26[0x4c] = *(ulong *)(puVar32 + 10);
      uVar10 = *(ulong *)(puVar32 + 0xc);
      uVar14 = *(ulong *)(puVar32 + 0xe);
      uVar27 = *(ulong *)(puVar32 + 0x10);
      *(undefined8 *)((long)puVar26 + 0x27f) = *(undefined8 *)((long)puVar32 + 0x47);
      puVar26[0x4f] = uVar27;
      puVar26[0x4e] = uVar14;
      puVar26[0x4d] = uVar10;
      FUN_038fd1e0(puVar26 + 0x51);
      FUN_038fd2f0(puVar26 + 0x51,puVar32 + 0x14);
      uVar15 = puVar32[0x26];
      puVar26[0x59] = *(ulong *)(puVar32 + 0x24);
      puVar6 = (uint *)((long)puVar26 + 0x30c);
      *(undefined4 *)(puVar26 + 0x5a) = uVar15;
      do {
        cVar16 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar17) {
          *puVar6 = *puVar6 | 1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      puVar31[(long)(int)uVar28 * 0x76 + 0x68] = uVar20;
      puVar31[(long)(int)uVar28 * 0x76 + 0x67] = uVar19;
      puVar31[(long)(int)uVar28 * 0x76 + 0x75] = uVar20;
      puVar31[(long)(int)uVar28 * 0x76 + 0x74] = uVar19;
      puVar31[(long)(int)uVar28 * 0x76 + 100] = uVar18;
      puVar31[(long)(int)uVar28 * 0x76 + 99] = uVar30;
      puVar31[(long)(int)uVar28 * 0x76 + 0x66] = uVar22;
      puVar31[(long)(int)uVar28 * 0x76 + 0x65] = uVar21;
      uVar1 = uVar28 + 1;
      puVar31[(long)(int)uVar28 * 0x76 + 0x71] = uVar18;
      puVar31[(long)(int)uVar28 * 0x76 + 0x70] = uVar30;
      puVar31[(long)(int)uVar28 * 0x76 + 0x73] = uVar22;
      puVar31[(long)(int)uVar28 * 0x76 + 0x72] = uVar21;
      uVar28 = uVar1;
    } while (param_2 != uVar1);
  }
  return;
}

