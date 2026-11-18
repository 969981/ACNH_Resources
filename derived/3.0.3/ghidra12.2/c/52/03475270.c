
void FUN_03475270(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  byte bVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar16 = *(byte *)(param_3 + 0xe);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar16;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b2ce50;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x49) = 0;
  FUN_03135560(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  param_1[0x71] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x72,0,0x1bf30);
  lVar22 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar14 = param_1;
  do {
    FUN_03463544(plVar14 + 0x72,0);
    *(undefined4 *)(plVar14 + 0x9d) = 0x40;
    lVar22 = lVar22 + -1;
    plVar14[0x9c] = (long)plVar14 + 0x4ec;
    *(undefined1 *)((long)plVar14 + 0x52b) = 0;
    *(undefined1 *)((long)plVar14 + 0x4ec) = 0;
    plVar14[0x9b] = (long)puVar1;
    *(undefined4 *)(plVar14 + 0xa6) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar14 = plVar14 + 0x35;
  } while (lVar22 != 0);
  *(undefined4 *)(param_1 + 0x385a) = 0;
  *(undefined4 *)(param_1 + 0x385b) = 0;
  param_1[0x385c] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  param_1[0x3858] = (long)(puVar2 + 0x10);
  param_1[0x3859] = -1;
  memset(param_1 + 0x385d,0,0xc00);
  lVar22 = 0x40;
  plVar14 = param_1 + 0x3862;
  do {
    *(undefined4 *)(plVar14 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar14 + -0x24) = 0;
    plVar14[-4] = 0;
    plVar14[-3] = 0;
    iVar6 = FUN_015d3550(0);
    *(undefined4 *)(plVar14 + -1) = 0xffffffff;
    iVar3 = 0;
    if (iVar6 != -1) {
      iVar3 = iVar6;
    }
    *(undefined1 *)((long)plVar14 + -4) = 0;
    lVar22 = lVar22 + -1;
    *(int *)(plVar14 + -2) = iVar3;
    *(undefined4 *)plVar14 = 0;
    plVar14 = plVar14 + 6;
  } while (lVar22 != 0);
  *(undefined4 *)(param_1 + 0x39df) = 0;
  param_1[0x39dd] = (long)(puVar2 + 0x10);
  param_1[0x39de] = -1;
  *(undefined4 *)(param_1 + 0x39e0) = 0;
  plVar14 = param_1 + 0x39e2;
  *(undefined4 *)plVar14 = 0;
  *(undefined1 *)(param_1 + 0x39e1) = 0;
  plVar15 = param_1 + 0x39e7;
  *(undefined4 *)plVar15 = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x39ed] = 0;
  param_1[0x39ef] = 0;
  plVar20 = param_1 + 0x39ec;
  *(undefined4 *)plVar20 = 0;
  param_1[0x39f1] = 0;
  plVar21 = param_1 + 0x39ee;
  *(undefined4 *)plVar21 = 0;
  param_1[0x39e3] = (long)puVar1;
  param_1[0x39e8] = (long)puVar1;
  plVar17 = param_1 + 0x39f0;
  *(undefined4 *)plVar17 = 0;
  plVar18 = param_1 + 0x39f2;
  *(undefined4 *)plVar18 = 0;
  param_1[0x39f3] = 0;
  *(undefined4 *)(param_1 + 0x39f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39f5) = 0;
  *(undefined4 *)(param_1 + 0x3a01) = 0;
  *(undefined8 *)((long)param_1 + 0x1d01c) = 0;
  param_1[0x3b06] = (long)param_1;
  plVar13 = param_1 + 0x39f6;
  *plVar13 = 0;
  param_1[0x39f7] = 0;
  *(undefined4 *)(param_1 + 0x39fa) = 0;
  *(undefined2 *)((long)param_1 + 0x1cfd4) = 0;
  *(undefined2 *)(param_1 + 0x39fd) = 0;
  *(undefined2 *)(param_1 + 0x3a00) = 0;
  param_1[0x39f8] = 0x200000002;
  param_1[0x39f9] = 0;
  *(undefined8 *)((long)param_1 + 0x1cfec) = 0xffffffff00000000;
  *(undefined2 *)((long)param_1 + 0x1cff4) = 0xffff;
  param_1[0x39fb] = 0;
  param_1[0x39fc] = 0xffffffff;
  plVar19 = param_1 + 0x39ff;
  *plVar19 = 0;
  param_1[0x3a02] = (long)param_1 + 0x1d024;
  *(undefined4 *)(param_1 + 0x3a03) = 0x10;
  param_1[0x3b05] = (long)&PTR_LAB_04b2d1f8;
  param_1[0x3b11] = 0;
  param_1[0x3b10] = 0;
  param_1[0x3b0f] = 0;
  param_1[0x3b0e] = 0;
  param_1[0x3b0d] = 0;
  param_1[0x3b0c] = 0;
  param_1[0x3b0b] = 0;
  param_1[0x3b0a] = 0;
  param_1[0x3b09] = 0;
  puVar1 = PTR_DAT_04bc5ae8 + 0x10;
  param_1[0x3b0a] = (long)puVar1;
  param_1[0x3b0e] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x3b12) = 0;
  *(undefined2 *)(param_1 + 0x3b14) = 0x800;
  *(undefined4 *)((long)param_1 + 0x1d8a4) = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar22 = *(long *)PTR_DAT_04bb2698;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar2 = PTR_DAT_04bb3350;
  param_1[0x44] = 0;
  if (lVar22 == 0) {
    puVar9 = malloc(0x18);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar22 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x18,8);
    }
  }
  puVar9[2] = 0;
  puVar2 = PTR_DAT_04bc5ca0;
  *puVar9 = 0;
  puVar9[1] = 0;
  iVar3 = *(int *)puVar2;
  if (0 < iVar3) {
    lVar22 = *(long *)puVar1;
    if (lVar22 == 0) {
      pvVar10 = malloc((long)iVar3 << 3);
    }
    else {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar22 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_034756b0;
      pvVar10 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)iVar3 << 3,8);
    }
    if (pvVar10 != (void *)0x0) {
      puVar9[2] = pvVar10;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(int *)((long)puVar9 + 0xc) = iVar3;
    }
  }
LAB_034756b0:
  param_1[0x47] = (long)puVar9;
  *(undefined4 *)((long)puVar9 + 4) = 2;
  plVar8 = (long *)PTR_DAT_04bb3350;
  lVar22 = *(long *)puVar1;
  if (lVar22 == 0) {
    puVar9 = malloc(0xe8);
    plVar8 = (long *)PTR_DAT_04bb3350;
joined_r0x034757d0:
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 2) = 0xffffffff;
      puVar5 = PTR_DAT_04bc4ee8;
      *(undefined1 *)((long)puVar9 + 0x6b) = 0;
      *puVar9 = 2;
      *(undefined1 *)((long)puVar9 + 0x2c) = 0;
      *(undefined4 *)(puVar9 + 5) = 0x40;
      puVar9[1] = puVar5 + 0x10;
      puVar2 = PTR_DAT_04bb2bc0;
      puVar9[0xf] = puVar5 + 0x10;
      *(undefined4 *)(puVar9 + 0x10) = 0xffffffff;
      *(undefined4 *)(puVar9 + 0x13) = 0x40;
      *(undefined1 *)((long)puVar9 + 0x9c) = 0;
      *(undefined1 *)((long)puVar9 + 0xdb) = 0;
      puVar9[3] = puVar2 + 0x10;
      puVar9[4] = (undefined1 *)((long)puVar9 + 0x2c);
      *(undefined1 *)(puVar9 + 0xe) = 1;
      *(undefined1 *)(puVar9 + 0x1c) = 1;
      puVar9[0x11] = puVar2 + 0x10;
      puVar9[0x12] = (undefined1 *)((long)puVar9 + 0x9c);
      *(undefined4 *)(param_1 + 0x6d) = 2;
      param_1[0x6e] = (long)(puVar9 + 1);
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar22 + 8);
    if (lVar7 != 0) {
      plVar11 = (long *)(lVar7 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0xe8,8);
      goto joined_r0x034757d0;
    }
  }
  lVar22 = *(long *)puVar1;
  if (lVar22 == 0) {
    plVar11 = malloc(0x38);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*plVar8 + 0x68));
    plVar11 = (long *)(lVar22 + 8);
    if (lVar7 != 0) {
      plVar11 = (long *)(lVar7 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x38,8);
    }
  }
  plVar11[2] = 0;
  plVar11[3] = 0;
  puVar2 = PTR_DAT_04bc5ca8 + 0x10;
  *(undefined4 *)(plVar11 + 4) = 0;
  plVar11[5] = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  *plVar11 = (long)puVar2;
  plVar11[1] = 0;
  lVar22 = *(long *)puVar1;
  if (lVar22 == 0) {
    pvVar10 = malloc(4000);
joined_r0x034758cc:
    if (pvVar10 != (void *)0x0) {
      plVar11[1] = 0x1f400000000;
      plVar11[2] = (long)pvVar10;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*plVar8 + 0x68));
    plVar12 = (long *)(lVar22 + 8);
    if (lVar7 != 0) {
      plVar12 = (long *)(lVar7 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,4000,8);
      goto joined_r0x034758cc;
    }
  }
  (**(code **)(*plVar11 + 0x18))(plVar11);
  uVar4 = *(uint *)(param_1 + 0x6d);
  param_1[0x46] = (long)plVar11;
  if (0 < (int)uVar4) {
    lVar22 = *(long *)puVar1;
    if (lVar22 == 0) {
      pvVar10 = malloc((ulong)uVar4 << 3);
    }
    else {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*plVar8 + 0x68));
      plVar11 = (long *)(lVar22 + 8);
      if (lVar7 != 0) {
        plVar11 = (long *)(lVar7 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_034758e8;
      pvVar10 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,(ulong)uVar4 << 3,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(uint *)(param_1 + 0x39f5) = uVar4;
      param_1[0x39f6] = (long)pvVar10;
    }
  }
LAB_034758e8:
  iVar3 = DAT_0575d8d8;
  lVar22 = *(long *)puVar1;
  if (lVar22 == 0) {
    puVar9 = malloc(0x68);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*plVar8 + 0x68));
    plVar8 = (long *)(lVar22 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    puVar9 = (undefined8 *)0x0;
    if (plVar8 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x68,8);
    }
  }
  if (iVar3 == 0x75) {
    *puVar9 = &PTR_LAB_04b2d0a8;
    *(undefined4 *)(puVar9 + 1) = 1;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = &DAT_04c4a4f4;
    *(undefined4 *)(puVar9 + 4) = 2;
    puVar9[5] = &DAT_04c4a4f8;
    *(undefined4 *)(puVar9 + 6) = 1;
    puVar9[7] = &DAT_0575da28;
    *(undefined4 *)(puVar9 + 8) = 2;
    puVar9[9] = &DAT_0575d9d0;
    *(undefined8 **)*plVar13 = puVar9;
    (**(code **)(**(long **)*plVar13 + 0x68))(*(long **)*plVar13,plVar21);
    (**(code **)(**(long **)*plVar13 + 0x78))(*(long **)*plVar13,plVar18);
    puVar9 = (undefined8 *)*plVar13;
    plVar13 = plVar15;
  }
  else {
    *puVar9 = &PTR_LAB_04b2d150;
    puVar9[3] = &DAT_04c4a4e8;
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    *(undefined4 *)(puVar9 + 4) = 1;
    puVar9[5] = &DAT_04c4a4f0;
    *(undefined4 *)(puVar9 + 6) = 2;
    puVar9[7] = &DAT_04c4a4e0;
    *(undefined4 *)(puVar9 + 8) = 2;
    puVar9[9] = &DAT_0575d9b0;
    *(undefined8 **)*plVar13 = puVar9;
    (**(code **)(**(long **)*plVar13 + 0x68))(*(long **)*plVar13,plVar20);
    (**(code **)(**(long **)*plVar13 + 0x78))(*(long **)*plVar13,plVar17);
    puVar9 = (undefined8 *)*plVar13;
    plVar13 = plVar14;
  }
  (**(code **)(*(long *)*puVar9 + 0x88))((long *)*puVar9,plVar13);
  iVar3 = DAT_0575d948;
  lVar22 = *(long *)puVar1;
  if (lVar22 == 0) {
    puVar9 = malloc(0x68);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar13 = (long *)(lVar22 + 8);
    if (lVar7 != 0) {
      plVar13 = (long *)(lVar7 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    puVar9 = (undefined8 *)0x0;
    if (plVar13 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x68,8);
    }
  }
  if (iVar3 == 0x75) {
    *(undefined4 *)(puVar9 + 1) = 1;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = &DAT_04c4a4f4;
    *(undefined4 *)(puVar9 + 6) = 1;
    *puVar9 = &PTR_LAB_04b2d0a8;
    *(undefined4 *)(puVar9 + 4) = 2;
    puVar9[5] = &DAT_04c4a4f8;
    puVar9[7] = &DAT_0575da28;
    *(undefined4 *)(puVar9 + 8) = 2;
    puVar9[9] = &DAT_0575d9d0;
    *(undefined8 **)(param_1[0x39f6] + (ulong)(1 < *(uint *)(param_1 + 0x39f5)) * 8) = puVar9;
    plVar14 = *(long **)(param_1[0x39f6] + (ulong)(1 < *(uint *)(param_1 + 0x39f5)) * 8);
    (**(code **)(*plVar14 + 0x68))(plVar14,plVar21);
    plVar14 = *(long **)(param_1[0x39f6] + (ulong)(1 < *(uint *)(param_1 + 0x39f5)) * 8);
    (**(code **)(*plVar14 + 0x78))(plVar14,plVar18);
    uVar4 = *(uint *)(param_1 + 0x39f5);
    lVar22 = param_1[0x39f6];
    plVar14 = plVar15;
  }
  else {
    *puVar9 = &PTR_LAB_04b2d150;
    puVar9[3] = &DAT_04c4a4e8;
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    *(undefined4 *)(puVar9 + 4) = 1;
    puVar9[5] = &DAT_04c4a4f0;
    *(undefined4 *)(puVar9 + 6) = 2;
    puVar9[7] = &DAT_04c4a4e0;
    *(undefined4 *)(puVar9 + 8) = 2;
    puVar9[9] = &DAT_0575d9b0;
    *(undefined8 **)(param_1[0x39f6] + (ulong)(1 < *(uint *)(param_1 + 0x39f5)) * 8) = puVar9;
    plVar15 = *(long **)(param_1[0x39f6] + (ulong)(1 < *(uint *)(param_1 + 0x39f5)) * 8);
    (**(code **)(*plVar15 + 0x68))(plVar15,plVar20);
    plVar15 = *(long **)(param_1[0x39f6] + (ulong)(1 < *(uint *)(param_1 + 0x39f5)) * 8);
    (**(code **)(*plVar15 + 0x78))(plVar15,plVar17);
    uVar4 = *(uint *)(param_1 + 0x39f5);
    lVar22 = param_1[0x39f6];
  }
  plVar15 = *(long **)(lVar22 + (ulong)(1 < uVar4) * 8);
  (**(code **)(*plVar15 + 0x88))(plVar15,plVar14);
  FUN_03515944(plVar19);
  *(long **)(param_1[0x46] + 0x18) = plVar19;
  param_1[0x3b13] = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  return;
}

