
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f6a9f0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  void *pvVar12;
  byte bVar13;
  long lVar14;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar5 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar6 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 != 0) {
    bVar13 = *(byte *)(param_3 + 0xe);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar13;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ae5c18;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  if (lVar14 == 0) {
    puVar8 = malloc(8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    puVar8 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,8,8);
  }
  *puVar8 = &PTR_LAB_04ae5e30;
  param_1[0x47] = (long)puVar8;
  lVar14 = *(long *)puVar5;
  if (lVar14 == 0) {
    puVar9 = malloc(8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,8,8);
  }
  *puVar9 = &PTR_LAB_04ae5e68;
  param_1[0x48] = (long)puVar9;
  param_1[0x49] = (long)puVar8;
  lVar14 = *(long *)puVar5;
  param_1[0x4a] = (long)(PTR_DAT_04bc5ae8 + 0x10);
  if (lVar14 == 0) {
    plVar10 = malloc(0x15f8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x15f8,8);
    }
  }
  plVar10[2] = 0;
  *plVar10 = (long)(PTR_DAT_04bc9c48 + 0x10);
  plVar10[1] = 0;
  memset(plVar10 + 3,0,0x15e0);
  plVar11 = plVar10 + 5;
  lVar14 = 100;
  puVar1 = PTR_DAT_04bc9c40 + 0x10;
  puVar2 = PTR_DAT_04bb2ab0 + 0x10;
  do {
    puVar3 = (undefined2 *)((long)plVar11 + 0xc);
    plVar11[-2] = (long)puVar1;
    *plVar11 = (long)puVar3;
    *(undefined4 *)(plVar11 + 1) = 0x10;
    *(undefined1 *)((long)plVar11 + 0x1b) = 0;
    uVar4 = _DAT_04066e12;
    if (puVar3 != (undefined2 *)&DAT_04066e12) {
      *(undefined1 *)((long)plVar11 + 0xf) = 0;
      *puVar3 = uVar4;
      *(undefined1 *)((long)plVar11 + 0xe) = DAT_04066e14;
    }
    plVar11[-1] = (long)puVar2;
    lVar14 = lVar14 + -1;
    *(undefined2 *)(plVar11 + 4) = 0;
    *(undefined1 *)((long)plVar11 + 0x22) = 0;
    plVar11 = plVar11 + 7;
  } while (lVar14 != 0);
  lVar14 = *(long *)puVar5;
  param_1[0x45] = (long)plVar10;
  if (lVar14 == 0) {
    pvVar12 = malloc(800);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar11 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar11 = (long *)(lVar7 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) goto LAB_02f6accc;
    pvVar12 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,800,8);
  }
  if (pvVar12 != (void *)0x0) {
    plVar10[1] = 0x6400000000;
    plVar10[2] = (long)pvVar12;
  }
LAB_02f6accc:
  (**(code **)(*plVar10 + 0x18))(plVar10);
  param_1[0x44] = param_1[0x45];
  return;
}

