
void FUN_02cacc20(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  void *pvVar13;
  byte bVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar10 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x35] = (long)(puVar10 + 0x10);
  param_1[0x36] = 0xffffffff;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (param_3 != 0) {
    bVar14 = *(byte *)(param_3 + 0xe);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar14;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ab5780;
  memset(param_1 + 0x42,0,0x1c30);
  lVar21 = -0x301 - (long)param_1;
  uVar16 = (long)param_1 + 0x382;
  lVar24 = -0x469 - (long)param_1;
  uVar20 = (long)param_1 + 0x302;
  uVar22 = (long)param_1 + 0x4ea;
  uVar23 = (long)param_1 + 0x46a;
  lVar19 = 9;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  lVar18 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar18 + 0x230) = 0x41;
    uVar5 = uVar16;
    if (uVar16 <= uVar20) {
      uVar5 = uVar20;
    }
    *(undefined8 *)((long)param_1 + lVar18 + 0x238) = 0xffffffff;
    pvVar13 = (void *)((long)param_1 + lVar18 + 0x300);
    *(undefined4 *)((long)param_1 + lVar18 + 0x248) = 0xffffffff;
    *(undefined1 *)((long)param_1 + lVar18 + 0x234) = 0;
    *(undefined1 *)((long)param_1 + lVar18 + 0x2a3) = 0;
    *(undefined1 *)((long)param_1 + lVar18 + 0x264) = 0;
    uVar6 = uVar22;
    if (uVar22 <= uVar23) {
      uVar6 = uVar23;
    }
    *(void **)((long)param_1 + lVar18 + 0x228) = pvVar13;
    *(undefined4 *)((long)param_1 + lVar18 + 0x260) = 0x40;
    *(undefined **)((long)param_1 + lVar18 + 0x250) = puVar1;
    *(undefined4 *)((long)param_1 + lVar18 + 0x2b8) = 0x40;
    *(undefined1 *)((long)param_1 + lVar18 + 0x2fb) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x240) = 0xffffffff00000000;
    *(undefined1 *)((long)param_1 + lVar18 + 700) = 0;
    *(long *)((long)param_1 + lVar18 + 600) = (long)param_1 + lVar18 + 0x264;
    *(undefined **)((long)param_1 + lVar18 + 0x2a8) = puVar1;
    *(long *)((long)param_1 + lVar18 + 0x2b0) = (long)param_1 + lVar18 + 700;
    *(undefined **)((long)param_1 + lVar18 + 0x220) = &DAT_04ab5998;
    *(undefined2 *)((long)param_1 + lVar18 + 0x380) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x378) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x370) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x368) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x360) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x358) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x350) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x348) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x340) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x338) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x330) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x328) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 800) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x318) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x310) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x308) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x300) = 0;
    memset(pvVar13,0,(uVar5 + lVar21 & 0xfffffffffffffffe) + 2);
    pvVar13 = (void *)((long)param_1 + lVar18 + 0x468);
    *(undefined1 *)((long)param_1 + lVar18 + 0x39c) = 0;
    *(undefined4 *)((long)param_1 + lVar18 + 0x398) = 0x41;
    *(undefined8 *)((long)param_1 + lVar18 + 0x3a0) = 0xffffffff;
    *(undefined8 *)((long)param_1 + lVar18 + 0x3a8) = 0xffffffff00000000;
    *(void **)((long)param_1 + lVar18 + 0x390) = pvVar13;
    *(undefined4 *)((long)param_1 + lVar18 + 0x3b0) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar18 + 0x3c8) = 0x40;
    *(long *)((long)param_1 + lVar18 + 0x3c0) = (long)param_1 + lVar18 + 0x3cc;
    *(undefined1 *)((long)param_1 + lVar18 + 0x40b) = 0;
    *(long *)((long)param_1 + lVar18 + 0x418) = (long)param_1 + lVar18 + 0x424;
    *(undefined **)((long)param_1 + lVar18 + 0x388) = &DAT_04ab5998;
    *(undefined1 *)((long)param_1 + lVar18 + 0x3cc) = 0;
    *(undefined **)((long)param_1 + lVar18 + 0x3b8) = puVar1;
    *(undefined4 *)((long)param_1 + lVar18 + 0x420) = 0x40;
    *(undefined1 *)((long)param_1 + lVar18 + 0x463) = 0;
    *(undefined1 *)((long)param_1 + lVar18 + 0x424) = 0;
    *(undefined **)((long)param_1 + lVar18 + 0x410) = puVar1;
    *(undefined8 *)((long)param_1 + lVar18 + 0x468) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x470) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x478) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x480) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x488) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x490) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x498) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4a0) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4a8) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4b0) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4b8) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4c0) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4c8) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4d0) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4d8) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x4e0) = 0;
    *(undefined2 *)((long)param_1 + lVar18 + 0x4e8) = 0;
    memset(pvVar13,0,(uVar6 + lVar24 & 0xfffffffffffffffe) + 2);
    *(undefined8 *)((long)param_1 + lVar18 + 0x4f0) = 0;
    *(undefined8 *)((long)param_1 + lVar18 + 0x508) = 0x7fc000007fc00000;
    *(undefined4 *)((long)param_1 + lVar18 + 0x510) = 0x7fc00000;
    lVar19 = lVar19 + -1;
    *(undefined1 *)((long)param_1 + lVar18 + 0x514) = 0xff;
    uVar16 = uVar16 + 800;
    *(undefined4 *)((long)param_1 + lVar18 + 0x520) = 1;
    uVar20 = uVar20 + 800;
    lVar21 = lVar21 + -800;
    *(undefined8 *)((long)param_1 + lVar18 + 0x500) = 0;
    uVar22 = uVar22 + 800;
    uVar23 = uVar23 + 800;
    *(undefined4 *)((long)param_1 + lVar18 + 0x518) = 0;
    lVar24 = lVar24 + -800;
    *(undefined8 *)((long)param_1 + lVar18 + 0x52c) = 0xffffffff00000000;
    *(undefined4 *)((long)param_1 + lVar18 + 0x534) = 0xffffffff;
    lVar18 = lVar18 + 800;
  } while (lVar19 != 0);
  param_1[0x3c9] = 0;
  puVar1 = PTR_DAT_04bdf1d8;
  *(undefined1 *)(param_1 + 0x3ca) = 0;
  param_1[0x3c8] = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  param_1[0x3d5] = 0;
  *(undefined4 *)(param_1 + 0x3d6) = 0;
  param_1[0x3d7] = 0;
  param_1[0x3d0] = 0;
  param_1[0x3cb] = (long)&PTR_LAB_04ab6008;
  param_1[0x3d1] = 0;
  param_1[0x3d2] = 0;
  *(undefined8 *)((long)param_1 + 0x1e96) = 0;
  param_1[0x3cf] = (long)(puVar1 + 0x10);
  DAT_056658d0 = param_1;
  param_1[0x3cc] = (long)param_1;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x3cd] = (long)FUN_02cad280;
  param_1[0x3ce] = 0;
  puVar10 = PTR_DAT_04bb3350;
  lVar18 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x3d3) = 0;
  if (lVar18 == 0) {
    puVar12 = malloc(0x270);
joined_r0x02cad020:
    if (puVar12 != (undefined1 *)0x0) {
      *puVar12 = 0;
      puVar12[0x10] = 0;
      puVar12[0x20] = 0;
      puVar12[0x30] = 0;
      puVar12[0x40] = 0;
      puVar12[0x50] = 0;
      puVar12[0x60] = 0;
      puVar12[0x70] = 0;
      puVar12[0x80] = 0;
      puVar12[0x90] = 0;
      puVar12[0xa0] = 0;
      puVar12[0xb0] = 0;
      puVar12[0xc0] = 0;
      puVar12[0xd0] = 0;
      puVar12[0xe0] = 0;
      puVar12[0xf0] = 0;
      puVar12[0x100] = 0;
      puVar12[0x110] = 0;
      puVar12[0x120] = 0;
      puVar12[0x130] = 0;
      puVar12[0x140] = 0;
      puVar12[0x150] = 0;
      puVar12[0x160] = 0;
      puVar12[0x170] = 0;
      puVar12[0x180] = 0;
      puVar12[400] = 0;
      puVar12[0x1a0] = 0;
      puVar12[0x1b0] = 0;
      puVar12[0x1c0] = 0;
      puVar12[0x1d0] = 0;
      puVar12[0x1e0] = 0;
      puVar12[0x1f0] = 0;
      puVar12[0x200] = 0;
      puVar12[0x210] = 0;
      puVar12[0x220] = 0;
      puVar12[0x230] = 0;
      puVar12[0x240] = 0;
      puVar12[0x250] = 0;
      puVar12[0x260] = 0;
      *(undefined4 *)(param_1 + 0x3d4) = 0x27;
      param_1[0x3d5] = (long)puVar12;
    }
  }
  else {
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar10 + 0x68));
    plVar11 = (long *)(lVar18 + 8);
    if (lVar19 != 0) {
      plVar11 = (long *)(lVar19 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined1 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x270,8);
      goto joined_r0x02cad020;
    }
  }
  lVar18 = *(long *)puVar1;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x40);
joined_r0x02cad128:
    if (pvVar13 != (void *)0x0) {
      uVar17 = 8;
      param_1[0x3d7] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0x3d6) = 8;
      goto LAB_02cad138;
    }
  }
  else {
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar10 + 0x68));
    plVar11 = (long *)(lVar18 + 8);
    if (lVar19 != 0) {
      plVar11 = (long *)(lVar19 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x40,8);
      goto joined_r0x02cad128;
    }
  }
  uVar17 = *(uint *)(param_1 + 0x3d6);
  if (uVar17 == 0) {
    return;
  }
  pvVar13 = (void *)param_1[0x3d7];
LAB_02cad138:
  puVar1 = PTR_DAT_04bb2e10;
  lVar18 = 0;
  uVar16 = 0;
  iVar15 = -2;
  do {
    iVar7 = *(int *)(puVar1 + 0xc);
    if ((int)uVar16 != -1) {
      fVar25 = SQRT((float)((int)uVar16 + 2));
      uVar17 = (uint)fVar25;
      if (fVar25 != (float)(int)fVar25) {
        uVar17 = uVar17 + 1;
      }
      uVar3 = uVar17 & 0xfffffffe;
      uVar8 = uVar17 >> 1;
      iVar15 = iVar15 + (uVar17 | 1) * (uVar17 | 1);
      if (uVar17 < 2) {
        uVar3 = 1;
      }
      iVar7 = 0;
      if (uVar3 != 0) {
        iVar7 = iVar15 / (int)uVar3;
      }
      uVar17 = uVar8;
      if ((int)(uVar3 * 4) <= iVar15) {
        uVar17 = 0;
      }
      iVar7 = iVar15 - iVar7 * uVar3;
      uVar9 = iVar7 - uVar8;
      uVar4 = uVar9;
      if ((int)(uVar3 * 4) <= iVar15) {
        uVar4 = 0;
      }
      if (iVar15 < (int)(uVar3 * 3)) {
        uVar4 = -uVar8;
        uVar17 = uVar9;
      }
      if (iVar15 < (int)(uVar3 * 2)) {
        uVar17 = -uVar8;
        uVar4 = uVar8 - iVar7;
      }
      if (iVar15 < (int)uVar3) {
        uVar4 = uVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x02cad244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_02cad164 + (ulong)DAT_04180208 * 4))(pvVar13,uVar4,0,uVar8,uVar17);
      return;
    }
    iVar15 = iVar15 + -1;
    uVar16 = uVar16 + 1;
    pfVar2 = (float *)((long)pvVar13 + (lVar18 >> 0x1d));
    lVar18 = lVar18 + 0x100000000;
    *pfVar2 = (float)(*(int *)(puVar1 + 8) * 0x18 + -1);
    pfVar2[1] = (float)(iVar7 * 0x18 + -1);
  } while (uVar17 != uVar16);
  return;
}

