
void FUN_03221fd0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  
  plVar9 = param_1 + 0x38e6;
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
    bVar11 = *(byte *)(param_3 + 0xe);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar11;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x43) = 0;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b112d8;
  param_1[0x46] = (long)(puVar2 + 0x10);
  param_1[0x4a] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4b,0,0x1bf30);
  lVar15 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar14 = param_1;
  do {
    FUN_03463544(plVar14 + 0x4b,0);
    *(undefined4 *)(plVar14 + 0x76) = 0x40;
    lVar15 = lVar15 + -1;
    plVar14[0x75] = (long)plVar14 + 0x3b4;
    *(undefined1 *)((long)plVar14 + 0x3f3) = 0;
    *(undefined1 *)((long)plVar14 + 0x3b4) = 0;
    plVar14[0x74] = (long)puVar1;
    *(undefined4 *)(plVar14 + 0x7f) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar14 = plVar14 + 0x35;
  } while (lVar15 != 0);
  *(undefined4 *)(param_1 + 0x3833) = 0;
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1cc) = 0xffffffff;
  param_1[0x3831] = (long)(puVar2 + 0x10);
  param_1[0x3832] = -1;
  FUN_03135560(param_1 + 0x383e);
  lVar15 = 0x80;
  *(undefined4 *)(param_1 + 0x3861) = 0;
  param_1[0x3862] = 0;
  *(undefined4 *)(param_1 + 0x3863) = 0;
  param_1[0x3864] = 0;
  param_1[0x3865] = 0;
  plVar14 = param_1 + 0x3866;
  do {
    *plVar14 = 0xfffe;
    FUN_0277d4ac(plVar14);
    lVar15 = lVar15 + -1;
    plVar14 = plVar14 + 1;
  } while (lVar15 != 0);
  *plVar9 = (long)(PTR_DAT_04bc5b58 + 0x10);
  FUN_02c8cfc4(param_1 + 0x38e7);
  piVar7 = (int *)(**(code **)(*plVar9 + 0x10))(plVar9);
  if (0 < *piVar7) {
    lVar15 = 0;
    puVar10 = *(undefined8 **)(piVar7 + 4);
    do {
      puVar12 = *(undefined8 **)(*(long *)(piVar7 + 2) + lVar15 * 8);
      lVar15 = lVar15 + 1;
      *puVar12 = puVar10;
      *(undefined8 **)(piVar7 + 4) = puVar12;
      puVar10 = puVar12;
    } while (lVar15 < *piVar7);
  }
  puVar10 = (undefined8 *)((long)param_1 + 0x1cf74);
  *piVar7 = 0;
  *(undefined4 *)(param_1 + 0x39eb) = 0xffffffff;
  param_1[0x39ed] = (long)puVar10;
  *(undefined4 *)(param_1 + 0x39ee) = 8;
  *(undefined1 *)((long)param_1 + 0x1cf7b) = 0;
  if (puVar10 != &DAT_0407ebb1) {
    *(undefined1 *)puVar10 = 0;
  }
  puVar1 = PTR_DAT_04bb3768;
  *(undefined8 *)((long)param_1 + 0x1c1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1b4) = 0;
  param_1[0x39ec] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined8 *)((long)param_1 + 0x1c1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1c4) = 0;
  param_1[0x383a] = 0;
  param_1[0x383b] = 0;
  uVar6 = *(undefined2 *)puVar1;
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar3 = *(undefined4 *)(puVar1 + 4);
  param_1[0x383c] = 0;
  param_1[0x383d] = 0;
  lVar15 = 0x80;
  puVar13 = (undefined4 *)((long)param_1 + 0x1c334);
  do {
    *(undefined2 *)(puVar13 + -1) = uVar6;
    lVar15 = lVar15 + -1;
    *(undefined1 *)((long)puVar13 + -2) = uVar4;
    *(undefined1 *)((long)puVar13 + -1) = uVar5;
    *puVar13 = uVar3;
    puVar13 = puVar13 + 2;
  } while (lVar15 != 0);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar10 = malloc(0x238);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x238,8);
  }
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 2) = 0xffffffff;
    puVar1 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar10 + 0x6b) = 0;
    *puVar10 = 5;
    *(undefined1 *)((long)puVar10 + 0x2c) = 0;
    *(undefined4 *)(puVar10 + 5) = 0x40;
    puVar1 = puVar1 + 0x10;
    puVar10[1] = puVar1;
    puVar2 = PTR_DAT_04bb2bc0;
    puVar10[0xf] = puVar1;
    puVar10[0x1d] = puVar1;
    *(undefined1 *)((long)puVar10 + 0x9c) = 0;
    puVar10[0x2b] = puVar1;
    puVar2 = puVar2 + 0x10;
    puVar10[0x39] = puVar1;
    *(undefined4 *)(puVar10 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar10 + 0xdb) = 0;
    *(undefined4 *)(puVar10 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar10 + 0x14b) = 0;
    *(undefined1 *)((long)puVar10 + 0x10c) = 0;
    *(undefined4 *)(puVar10 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar10 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar10 + 0x17c) = 0;
    *(undefined4 *)(puVar10 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar10 + 0x22b) = 0;
    *(undefined1 *)((long)puVar10 + 0x1ec) = 0;
    puVar10[0x11] = puVar2;
    puVar10[0x12] = (undefined1 *)((long)puVar10 + 0x9c);
    puVar10[3] = puVar2;
    puVar10[4] = (undefined1 *)((long)puVar10 + 0x2c);
    *(undefined1 *)(puVar10 + 0xe) = 1;
    *(undefined1 *)(puVar10 + 0x1c) = 1;
    *(undefined1 *)(puVar10 + 0x2a) = 1;
    *(undefined1 *)(puVar10 + 0x38) = 1;
    *(undefined1 *)(puVar10 + 0x46) = 1;
    puVar10[0x1f] = puVar2;
    puVar10[0x20] = (long)puVar10 + 0x10c;
    puVar10[0x2d] = puVar2;
    puVar10[0x2e] = (long)puVar10 + 0x17c;
    puVar10[0x3b] = puVar2;
    puVar10[0x3c] = (long)puVar10 + 0x1ec;
    *(undefined4 *)(param_1 + 0x3861) = 5;
    param_1[0x3862] = (long)(puVar10 + 1);
  }
  return;
}

