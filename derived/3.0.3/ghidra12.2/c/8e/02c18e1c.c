
void FUN_02c18e1c(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  byte bVar11;
  long lVar12;
  undefined4 local_d8;
  undefined **local_d0;
  undefined *puStack_c8;
  char *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  
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
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 != 0) {
    bVar11 = *(byte *)(param_3 + 0xe);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar11;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_LAB_04aae098;
  *(undefined2 *)((long)param_1 + 0x244) = 0;
  param_1[0x47] = (long)param_1 + 0x244;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x100;
  puVar1 = PTR_DAT_04bb8a50 + 0x10;
  *(undefined2 *)((long)param_1 + 0x442) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0x100;
  *(undefined2 *)((long)param_1 + 0x45c) = 0;
  param_1[0x8a] = (long)param_1 + 0x45c;
  *(undefined2 *)((long)param_1 + 0x674) = 0;
  param_1[0x46] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x88c) = 0;
  param_1[0x110] = (long)param_1 + 0x88c;
  *(undefined2 *)((long)param_1 + 0x65a) = 0;
  *(undefined2 *)((long)param_1 + 0xaa4) = 0;
  param_1[0x153] = (long)param_1 + 0xaa4;
  param_1[0x89] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0xcbc) = 0;
  param_1[0xcd] = (long)param_1 + 0x674;
  *(undefined4 *)(param_1 + 0xce) = 0x100;
  *(undefined2 *)((long)param_1 + 0x872) = 0;
  param_1[0xcc] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x111) = 0x100;
  *(undefined2 *)((long)param_1 + 0xa8a) = 0;
  param_1[0x10f] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x154) = 0x100;
  *(undefined2 *)((long)param_1 + 0xca2) = 0;
  param_1[0x152] = (long)puVar1;
  param_1[0x196] = (long)param_1 + 0xcbc;
  *(undefined4 *)(param_1 + 0x197) = 0x100;
  *(undefined2 *)((long)param_1 + 0xeba) = 0;
  param_1[0x195] = (long)puVar1;
  param_1[0x1d8] = 0;
  param_1[0x1db] = 0;
  param_1[0x1de] = 0;
  *(undefined1 *)(param_1 + 0x1df) = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e0] = 0;
  *(undefined4 *)((long)param_1 + 0xf24) = 0xffffffff;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = (long)(PTR_DAT_04bbba70 + 0x10);
  *(undefined1 *)(param_1 + 0x1ea) = 0;
  param_1[0x1f1] = 0;
  *(undefined4 *)(param_1 + 0x1f2) = 0;
  *(undefined1 *)((long)param_1 + 0xf94) = 0;
  *(undefined8 *)((long)param_1 + 0xf54) = 0;
  *(undefined8 *)((long)param_1 + 0xf5c) = 0;
  *(undefined8 *)((long)param_1 + 0xf64) = 0;
  *(undefined8 *)((long)param_1 + 0xf6c) = 0;
  *(undefined8 *)((long)param_1 + 0xf74) = 0;
  *(undefined8 *)((long)param_1 + 0xf79) = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  *(undefined1 *)(param_1 + 0x1f5) = 0;
  param_1[500] = 0;
  puVar2 = PTR_DAT_04bb3350;
  param_1[499] = 0;
  if (lVar12 == 0) {
    plVar5 = malloc(0xafca0);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xafca0,8);
    }
  }
  *plVar5 = (long)plVar5 + 0x14;
  plVar5[1] = 90000;
  lVar12 = *(long *)puVar1;
  *(undefined4 *)(plVar5 + 2) = 0;
  plVar5[0x15f93] = 0;
  if (lVar12 == 0) {
    puVar6 = malloc(8);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar9 = (undefined8 *)(lVar12 + 8);
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar6 = (undefined4 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,8,8);
  }
  *puVar6 = 0;
  *(undefined1 *)(puVar6 + 1) = 0;
  plVar5[0x15f93] = (long)puVar6;
  lVar12 = *(long *)puVar1;
  param_1[0x1e3] = (long)plVar5;
  if (lVar12 == 0) {
    puVar7 = malloc(3);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar9 = (undefined8 *)(lVar12 + 8);
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar7 = (undefined2 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,3,8);
  }
  *puVar7 = 0;
  *(undefined1 *)(puVar7 + 1) = 1;
  lVar12 = *(long *)puVar1;
  param_1[0x1eb] = (long)puVar7;
  if (lVar12 == 0) {
    puVar7 = malloc(3);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar9 = (undefined8 *)(lVar12 + 8);
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar7 = (undefined2 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,3,8);
  }
  *puVar7 = 0;
  *(undefined1 *)(puVar7 + 1) = 1;
  lVar12 = *(long *)puVar1;
  param_1[0x1ec] = (long)puVar7;
  if (lVar12 == 0) {
    puVar8 = malloc(0x58);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar9 = (undefined8 *)(lVar12 + 8);
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar8 = (undefined1 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x58,8);
  }
  *puVar8 = 0;
  puVar3 = PTR_DAT_04bdf1d8;
  *(undefined8 *)(puVar8 + 0x40) = 0;
  *(undefined4 *)(puVar8 + 0x48) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined4 *)(puVar8 + 0x38) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  *(undefined **)(puVar8 + 0x10) = puVar3 + 0x10;
  *(undefined8 *)(puVar8 + 0x50) = 0x461c4000461c4000;
  param_1[0x1ed] = (long)puVar8;
  puStack_c8 = PTR_DAT_04bb2020 + 0x10;
  local_60 = PTR_DAT_04bb2120;
  uStack_58 = 0;
  local_70 = PTR_DAT_04bb2120;
  local_b0 = PTR_DAT_04bb2120;
  local_80 = PTR_DAT_04bc9ba0 + 0x10;
  local_a0 = PTR_DAT_04bb2120;
  local_d0 = &local_80;
  local_48 = 0;
  local_d8 = (uint)local_d8._2_2_ << 0x10;
  local_90 = "HandwritingObject";
  uStack_88 = 0;
  local_50 = 1;
  local_c0 = "UI_HandWriting";
  puStack_b8 = puStack_c8;
  puStack_a8 = puStack_c8;
  puStack_98 = puStack_c8;
  puStack_78 = puStack_c8;
  puStack_68 = puStack_c8;
  FUN_038387b8(puVar8,&local_d8);
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar10 = calloc(1,0x10);
    param_1[0x1ee] = (long)pvVar10;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    puVar9 = (undefined8 *)0x0;
    if (plVar5 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
    }
    lVar12 = *(long *)puVar1;
    *puVar9 = 0;
    puVar9[1] = 0;
    param_1[0x1ee] = (long)puVar9;
    if (lVar12 != 0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      puVar9 = (undefined8 *)(lVar12 + 8);
      if (lVar4 != 0) {
        puVar9 = (undefined8 *)(lVar4 + 0xa8);
      }
      puVar6 = (undefined4 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,4,8);
      goto LAB_02c19310;
    }
  }
  puVar6 = malloc(4);
LAB_02c19310:
  *puVar6 = 0;
  param_1[499] = (long)puVar6;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  return;
}

