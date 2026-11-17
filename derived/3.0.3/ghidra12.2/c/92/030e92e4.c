
void FUN_030e92e4(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  void *pvVar10;
  byte bVar11;
  long lVar12;
  undefined *local_d8;
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
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04aff7b8;
  memset(param_1 + 0x45,0,0x120);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_030e91e8(param_1 + 0x45);
  FUN_030e91e8(param_1 + 0x4b);
  FUN_030e91e8(param_1 + 0x51);
  FUN_030e91e8(param_1 + 0x57);
  FUN_030e91e8(param_1 + 0x5d);
  FUN_030e91e8(param_1 + 99);
  param_1[0x6d] = 0;
  param_1[0x6c] = 0x2000000000;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6b] = (long)(param_1 + 0x6a);
  param_1[0x6a] = (long)(param_1 + 0x6a);
  puVar1 = PTR_DAT_04bb2020;
  *(undefined2 *)((long)param_1 + 0x34c) = 0;
  if (param_3 != 0) {
    param_1[0x42] = *(long *)(param_3 + 0x18);
    local_d8 = puVar1 + 0x10;
    local_d0 = (undefined **)0x40fb5ad;
    puVar5 = (undefined8 *)FUN_0386e6b0(*(undefined8 *)(param_3 + 0x18),&local_d8);
    puVar2 = PTR_DAT_04bc4d18;
    if (((*PTR_DAT_04bc4d18 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d18);
    }
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar6 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4d10);
      if ((uVar6 & 1) == 0) {
        puVar5 = (undefined8 *)0x0;
      }
    }
    param_1[0x6e] = (long)puVar5;
    local_d8 = puVar1 + 0x10;
    local_d0 = (undefined **)0x40eb4ea;
    puVar5 = (undefined8 *)FUN_0386e6b0(*(undefined8 *)(param_3 + 0x18),&local_d8);
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d18);
    }
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar6 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4d10);
      if ((uVar6 & 1) == 0) {
        puVar5 = (undefined8 *)0x0;
      }
    }
    param_1[0x6f] = (long)puVar5;
    local_d8 = puVar1 + 0x10;
    local_d0 = (undefined **)0x407de1e;
    puVar5 = (undefined8 *)FUN_0386e6b0(*(undefined8 *)(param_3 + 0x18),&local_d8);
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d18);
    }
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar6 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4d10);
      if ((uVar6 & 1) == 0) {
        puVar5 = (undefined8 *)0x0;
      }
    }
    param_1[0x70] = (long)puVar5;
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar10 = malloc(1);
    param_1[0x43] = (long)pvVar10;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    lVar12 = 0;
    if (plVar8 != (long *)0x0) {
      lVar12 = (**(code **)(*plVar8 + 0x30))(plVar8,1,8);
    }
    lVar7 = *(long *)puVar2;
    param_1[0x43] = lVar12;
    if (lVar7 != 0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      puVar5 = (undefined8 *)(lVar7 + 8);
      if (lVar12 != 0) {
        puVar5 = (undefined8 *)(lVar12 + 0xa8);
      }
      puVar9 = (undefined1 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x30,8);
      goto LAB_030e95cc;
    }
  }
  puVar9 = malloc(0x30);
LAB_030e95cc:
  puVar2 = PTR_DAT_04bdf1d8;
  puStack_c8 = puVar1 + 0x10;
  *puVar9 = 0;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined **)(puVar9 + 0x10) = puVar2 + 0x10;
  local_70 = PTR_DAT_04bb2120;
  param_1[0x6d] = (long)puVar9;
  local_60 = local_70;
  uStack_58 = 0;
  local_b0 = local_70;
  local_80 = PTR_DAT_04bc78e0 + 0x10;
  local_a0 = local_70;
  local_d0 = &local_80;
  local_48 = 0;
  local_d8 = (undefined *)((ulong)local_d8 & 0xffffffffffff0000);
  local_c0 = "UI_MiniGame";
  local_50 = 1;
  local_90 = "MiniGameObject";
  uStack_88 = 0;
  puStack_b8 = puStack_c8;
  puStack_a8 = puStack_c8;
  puStack_98 = puStack_c8;
  puStack_78 = puStack_c8;
  puStack_68 = puStack_c8;
  FUN_038387b8(puVar9,&local_d8);
  return;
}

