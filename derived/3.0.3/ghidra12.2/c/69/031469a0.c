
void FUN_031469a0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  undefined **local_f8;
  undefined **local_f0;
  undefined *puStack_e8;
  char *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  
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
    bVar13 = *(byte *)(param_3 + 0xe);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar13;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  *(undefined4 *)((long)param_1 + 0x22c) = 0;
  *param_1 = (long)&PTR_LAB_04b047f0;
  param_1[0x3e] = -1;
  *(undefined4 *)((long)param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  param_1[0x4a] = -1;
  param_1[0x49] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = -1;
  param_1[0x4d] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  puVar4 = PTR_DAT_04bdf1d8;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((long)param_1 + 0x2bd) = 0;
  param_1[0x54] = (long)puVar1;
  puVar2 = PTR_LAB_04bc98f0;
  param_1[0x5a] = (long)(param_1 + 0x59);
  param_1[0x5c] = 0;
  param_1[0x5b] = (long)puVar2;
  puVar2 = PTR_DAT_04bc9900 + 0x10;
  param_1[0x5d] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)((long)param_1 + 0x364) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x59] = (long)puVar2;
  puVar1 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  puVar2 = PTR_DAT_04bb3350;
  *(undefined4 *)(param_1 + 0x75) = 0xffffffff;
  if (lVar14 == 0) {
    pvVar7 = malloc(0x1f0);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar6 != 0) {
      puVar9 = (undefined8 *)(lVar6 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x1f0,8);
  }
  local_f8 = &PTR_LAB_04b04a40;
  local_f0 = (undefined **)param_1;
  FUN_0340c9e0(pvVar7,&local_f8);
  param_1[0x76] = (long)pvVar7;
  plVar3 = param_1 + 0x78;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0xffffffff00000000;
  puVar5 = PTR_DAT_04bcb4d0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0xb7] = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  param_1[0xb5] = 0;
  param_1[0xb9] = 0;
  param_1[0x78] = (long)(puVar5 + 0x10);
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0x82] = (long)param_1 + 0x424;
  param_1[0x83] = 6;
  lVar14 = *(long *)puVar1;
  param_1[0xb8] = (long)(puVar4 + 0x10);
  if (lVar14 == 0) {
    plVar8 = malloc(0x40);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar6 != 0) {
      puVar9 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x40,8);
  }
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)(PTR_DAT_04bbba78 + 0x10);
  plVar8[1] = 0;
  lVar14 = *(long *)puVar1;
  plVar8[4] = (long)(PTR_DAT_04bbba70 + 0x10);
  param_1[0xbc] = (long)plVar8;
  if (lVar14 == 0) {
    puVar9 = malloc(8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar6 != 0) {
      puVar9 = (undefined8 *)(lVar6 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,8,8);
  }
  *puVar9 = 0;
  param_1[0xbd] = (long)puVar9;
  puVar2 = PTR_DAT_04bb2020;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  puVar5 = PTR_DAT_04bb2120;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0;
  puVar2 = puVar2 + 0x10;
  local_90 = puVar5;
  local_80 = puVar5;
  uStack_78 = 0;
  puVar4 = PTR_DAT_04bb3cd8 + 0x10;
  local_70 = 1;
  local_68 = 0;
  local_f8 = (undefined **)((ulong)local_f8 & 0xffffffffffff0000);
  local_d0 = puVar5;
  local_c0 = puVar5;
  local_b0 = "SimpleObject";
  uStack_a8 = 0;
  local_e0 = "UI_Camera";
  local_f0 = &local_a0;
  puStack_e8 = puVar2;
  puStack_d8 = puVar2;
  puStack_c8 = puVar2;
  puStack_b8 = puVar2;
  local_a0 = puVar4;
  puStack_98 = puVar2;
  puStack_88 = puVar2;
  FUN_038387b8(param_1 + 0x52,&local_f8);
  local_90 = puVar5;
  local_80 = puVar5;
  uStack_78 = 0;
  local_70 = 1;
  local_68 = 0;
  local_f8 = (undefined **)((ulong)local_f8 & 0xffffffffffff0000);
  local_d0 = puVar5;
  local_c0 = puVar5;
  local_b0 = "SimpleObject";
  uStack_a8 = 0;
  local_e0 = "System";
  local_f0 = &local_a0;
  puStack_e8 = puVar2;
  puStack_d8 = puVar2;
  puStack_c8 = puVar2;
  puStack_b8 = puVar2;
  local_a0 = puVar4;
  puStack_98 = puVar2;
  puStack_88 = puVar2;
  FUN_038387b8(param_1 + 0xb6,&local_f8);
  local_f8 = (undefined **)CONCAT44(local_f8._4_4_,0x14);
  lVar14 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x30);
  if (*(int *)(lVar14 + 0x50) != 0x14) {
    *(undefined4 *)(lVar14 + 0x50) = 0x14;
    *(undefined8 *)(lVar14 + 0x58) = 0;
    *(undefined1 *)(lVar14 + 0x68) = 0;
    uVar10 = (**(code **)(*(long *)(lVar14 + 0x1190) + 0x10))(lVar14 + 0x1190);
    if ((uVar10 & 1) != 0) {
      *(undefined **)(lVar14 + 0x1190) = PTR_DAT_04bb2d80 + 0x10;
      *(undefined4 *)(lVar14 + 0x11b0) = 0xffffffff;
    }
    if ((int)local_f8 == 0x14) {
      if (*(int *)(lVar14 + 0x10) != 2) {
        uVar12 = 2;
        goto LAB_03146e70;
      }
    }
    else if ((int)local_f8 - 0x15U < 0xb) {
      if (*(int *)(lVar14 + 0x10) != 3) {
        uVar12 = 3;
LAB_03146e70:
        FUN_03ebb160(lVar14 + 8,uVar12);
      }
    }
    else if (*(int *)(lVar14 + 0x10) != 1) {
      uVar12 = 1;
      goto LAB_03146e70;
    }
  }
  puVar2 = PTR_DAT_04bb3350;
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x118) != 0) {
    *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x118) + 0xdc) = 1;
  }
  lVar6 = *(long *)puVar1;
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
  lVar15 = *(long *)puVar1;
  puVar9 = (undefined8 *)(lVar6 + 8);
  if (lVar14 != 0) {
    puVar9 = (undefined8 *)(lVar14 + 0xa8);
  }
  plVar8 = (long *)*puVar9;
  if (lVar15 == 0) {
    puVar9 = malloc(0x20);
  }
  else {
    plVar11 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      puVar9 = (undefined8 *)(lVar15 + 8);
      if (lVar14 != 0) {
        puVar9 = (undefined8 *)(lVar14 + 0xa8);
      }
      plVar11 = (long *)*puVar9;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x20,8);
  }
  *puVar9 = 0;
  puVar9[1] = 0xffffffff;
  *(undefined4 *)puVar9 = 100;
  puVar9[2] = 0;
  puVar9[3] = 0;
  param_1[0x61] = (long)puVar9;
  local_f8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_f0 = (undefined **)0x40ad31b;
  lVar14 = FUN_038c6d48(0x100000,&local_f8,plVar8,8,1,0);
  lVar6 = *(long *)puVar1;
  param_1[0x62] = lVar14;
  if (lVar6 == 0) {
    pvVar7 = malloc(0x64000);
    param_1[0x6a] = (long)pvVar7;
LAB_0314700c:
    puVar9 = malloc(0x60);
  }
  else {
    if (plVar8 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      puVar9 = (undefined8 *)(lVar6 + 8);
      if (lVar14 != 0) {
        puVar9 = (undefined8 *)(lVar14 + 0xa8);
      }
      plVar8 = (long *)*puVar9;
      if (plVar8 != (long *)0x0) goto LAB_03146f94;
      lVar14 = 0;
    }
    else {
LAB_03146f94:
      lVar14 = (**(code **)(*plVar8 + 0x30))(plVar8,0x64000,8);
    }
    lVar6 = *(long *)puVar1;
    param_1[0x6a] = lVar14;
    if (lVar6 == 0) goto LAB_0314700c;
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar6 + 8);
    if (lVar14 != 0) {
      plVar8 = (long *)(lVar14 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_03147050;
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
  }
  if (puVar9 != (undefined8 *)0x0) {
    param_1[0x7b] = (long)puVar9;
    puVar9[6] = 0;
    puVar9[4] = puVar9 + 6;
    puVar9[2] = puVar9 + 4;
    *puVar9 = puVar9 + 2;
    param_1[0x7c] = (long)puVar9;
    if (puVar9 + 8 != (undefined8 *)0x0) {
      param_1[0x7a] = (long)(puVar9 + 8);
      param_1[0x79] = 0x400000000;
    }
  }
LAB_03147050:
  FUN_03858260(plVar3,&DAT_056fa180);
  FUN_03858260(plVar3,0x56fa190);
  FUN_03858260(plVar3,0x56fa1a0);
  FUN_03858260(plVar3,0x56fa1b0);
  *(undefined4 *)((long)param_1 + 0x3ec) = 0x3c8efa35;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  if (0 < (int)param_1[0x79]) {
    lVar14 = 0;
    do {
      lVar6 = lVar14 * 8;
      lVar14 = lVar14 + 1;
      *(undefined4 *)(*(long *)(param_1[0x7a] + lVar6) + 0xc) = 0x3f000000;
    } while (lVar14 < (int)param_1[0x79]);
  }
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return;
}

