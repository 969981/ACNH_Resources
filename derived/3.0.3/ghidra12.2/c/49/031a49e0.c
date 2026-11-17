
void FUN_031a49e0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  byte bVar13;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  if (param_3 != 0) {
    bVar13 = *(byte *)(param_3 + 0xe);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar13;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  param_1[0x67] = (long)"agl::TextureData";
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b08268;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x10000;
  FUN_03135560(param_1 + 0x69);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(undefined1 *)(param_1 + 0x90) = 0xff;
  puVar2 = PTR_DAT_04bb2120;
  param_1[0x95] = 0;
  *(undefined2 *)((long)param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x91] = (long)puVar1;
  param_1[0x93] = (long)puVar1;
  param_1[0x92] = (long)puVar2;
  param_1[0x94] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x96) = 0x10101;
  param_1[0x98] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x99,0,0x1bf30);
  lVar12 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0x99,0);
    *(undefined4 *)(plVar5 + 0xc4) = 0x40;
    lVar12 = lVar12 + -1;
    plVar5[0xc3] = (long)plVar5 + 0x624;
    *(undefined1 *)((long)plVar5 + 0x663) = 0;
    *(undefined1 *)((long)plVar5 + 0x624) = 0;
    plVar5[0xc2] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0xcd) = 0;
    plVar5 = plVar5 + 0x35;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x3881) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3882) = 0;
  *(undefined4 *)(param_1 + 0x3883) = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x3888) = 0;
  param_1[0x3889] = 0;
  *(undefined2 *)(param_1 + 0x388a) = 0;
  param_1[0x387f] = (long)(puVar1 + 0x10);
  param_1[0x3880] = -1;
  *(undefined8 *)((long)param_1 + 0x1c454) = 0x100000001;
  *(undefined8 *)((long)param_1 + 0x1c45c) = 0x100000001;
  *(undefined8 *)((long)param_1 + 0x1c464) = 0x100000001;
  param_1[0x3884] = (long)(puVar2 + 0x10);
  param_1[0x388e] = 0;
  param_1[0x388f] = 0;
  param_1[0x3890] = 0;
  param_1[0x3891] = 0;
  param_1[0x3892] = 0;
  param_1[0x3893] = 0;
  param_1[0x3894] = 0;
  param_1[0x3895] = 0;
  param_1[0x3896] = 0;
  param_1[0x3897] = 0;
  param_1[0x389e] = (long)(PTR_DAT_04bc5ae8 + 0x10);
  param_1[0x3898] = 0;
  param_1[0x3899] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  param_1[0x389c] = 0;
  *(undefined1 *)(param_1 + 0x389d) = 0;
  param_1[0x389a] = 0;
  param_1[0x389b] = 0;
  puVar2 = PTR_DAT_04bb3350;
  if (lVar12 == 0) {
    puVar4 = malloc(4);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar8 = (undefined8 *)(lVar12 + 8);
    if (lVar3 != 0) {
      puVar8 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined4 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,4,8);
  }
  *puVar4 = 0;
  lVar12 = *(long *)puVar1;
  param_1[0x48] = (long)puVar4;
  if (lVar12 == 0) {
    plVar5 = malloc(0x30);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar5 = (long *)(lVar3 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x30,8);
    }
  }
  *(undefined4 *)(plVar5 + 3) = 0;
  *plVar5 = (long)&PTR_LAB_04b08558;
  lVar12 = *(long *)puVar1;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[4] = 0;
  *(undefined4 *)(plVar5 + 5) = 0;
  *(undefined1 *)((long)plVar5 + 0x2c) = 0xff;
  if (lVar12 == 0) {
    pvVar7 = malloc(0x960);
joined_r0x031a4e68:
    if (pvVar7 != (void *)0x0) {
      plVar5[1] = 0x12c00000000;
      plVar5[2] = (long)pvVar7;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x960,8);
      goto joined_r0x031a4e68;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5);
  param_1[0x4b] = (long)plVar5;
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    puVar8 = malloc(0x90);
joined_r0x031a4e78:
    if (puVar8 != (undefined8 *)0x0) {
      iVar9 = 3;
      *puVar8 = 0;
      puVar8[1] = 0xffffffffffffffff;
      puVar8[2] = 0xffffffffffffffff;
      *(undefined4 *)(puVar8 + 3) = 0;
      puVar8[4] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar8 + 0x1c) = 0;
      *(undefined1 *)(puVar8 + 5) = 0;
      puVar8[8] = 0xffffffffffffffff;
      *(undefined4 *)(puVar8 + 9) = 0;
      puVar8[10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar8 + 0x4c) = 0;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      puVar8[0xe] = 0xffffffffffffffff;
      *(undefined4 *)(puVar8 + 0xf) = 0;
      puVar8[0x10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar8 + 0x7c) = 0;
      *(undefined1 *)(puVar8 + 0x11) = 0;
      puVar8[6] = 0;
      puVar8[7] = 0xffffffffffffffff;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x8d) = 3;
      param_1[0x8e] = (long)puVar8;
      goto LAB_031a4e88;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar5 = (long *)(lVar3 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x90,8);
      goto joined_r0x031a4e78;
    }
  }
  iVar9 = (int)param_1[0x8d];
  if (iVar9 == 0) {
    return;
  }
  puVar8 = (undefined8 *)param_1[0x8e];
LAB_031a4e88:
  iVar10 = 0;
  do {
    puVar11 = puVar8 + (long)iVar10 * 6;
    iVar10 = iVar10 + 1;
    *puVar11 = 0;
    puVar11[1] = 0xffffffffffffffff;
    puVar11[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((long)puVar11 + 0x1c) = 0;
    *(undefined1 *)(puVar11 + 5) = 0;
  } while (iVar9 != iVar10);
  return;
}

