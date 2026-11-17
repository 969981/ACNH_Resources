
void FUN_02fafbf4(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined2 local_e8 [4];
  undefined **local_e0;
  undefined *puStack_d8;
  char *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar4 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar5 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar5 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar10 = *(byte *)(param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04aeab70;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar8 = malloc(0x60);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
    }
  }
  puVar6 = PTR_DAT_04bd0d40;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)puVar1;
  plVar8[1] = 0;
  if (*(long *)puVar4 != 0) {
    lVar13 = FUN_038cb610(*(long *)puVar4,plVar8);
    plVar8[1] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar12 = (long *)(lVar13 + 0x70);
      lVar11 = *plVar12;
      plVar2 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)plVar8);
      *plVar12 = (long)plVar2;
      *plVar2 = lVar11;
      plVar2[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar2;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[8] = (long)(PTR_DAT_04bb5710 + 0x10);
  plVar8[6] = (long)plVar8;
  plVar8[7] = 0;
  *plVar8 = (long)(PTR_DAT_04bb5708 + 0x10);
  param_1[0x42] = (long)plVar8;
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
    plVar8 = malloc(0x60);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
    }
  }
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)(puVar6 + 0x10);
  plVar8[1] = 0;
  if (*(long *)puVar4 != 0) {
    lVar13 = FUN_038cb610(*(long *)puVar4,plVar8);
    plVar8[1] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar12 = (long *)(lVar13 + 0x70);
      lVar11 = *plVar12;
      plVar2 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)plVar8);
      *plVar12 = (long)plVar2;
      *plVar2 = lVar11;
      plVar2[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar2;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[8] = (long)(PTR_DAT_04bb5720 + 0x10);
  plVar8[6] = (long)plVar8;
  plVar8[7] = 0;
  *plVar8 = (long)(PTR_DAT_04bb5718 + 0x10);
  param_1[0x43] = (long)plVar8;
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
    plVar8 = malloc(0x60);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
    }
  }
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)(puVar6 + 0x10);
  plVar8[1] = 0;
  if (*(long *)puVar4 != 0) {
    lVar13 = FUN_038cb610(*(long *)puVar4,plVar8);
    plVar8[1] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar12 = (long *)(lVar13 + 0x70);
      lVar11 = *plVar12;
      plVar2 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)plVar8);
      *plVar12 = (long)plVar2;
      *plVar2 = lVar11;
      plVar2[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar2;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  plVar8[8] = (long)(PTR_DAT_04bb5738 + 0x10);
  puVar1 = PTR_DAT_04bb5728;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = (long)plVar8;
  plVar8[7] = 0;
  *plVar8 = (long)(puVar1 + 0x10);
  param_1[0x44] = (long)plVar8;
  param_1[0x46] = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((long)param_1 + 0x244) = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  param_1[0x45] = 0;
  lVar13 = *(long *)puVar4;
  *(undefined4 *)((long)param_1 + 0x237) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = (long)&PTR_LAB_04aeaef8;
  if (lVar13 == 0) {
    puVar9 = malloc(0x30);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar13 + 8);
    if (lVar7 != 0) {
      puVar3 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar9 = (undefined1 *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x30,8);
  }
  *puVar9 = 0;
  puVar4 = PTR_DAT_04bdf1d8;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  puStack_d8 = PTR_DAT_04bb2020;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  local_80 = PTR_DAT_04bb2120;
  puStack_d8 = puStack_d8 + 0x10;
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined **)(puVar9 + 0x10) = puVar4 + 0x10;
  param_1[0x4f] = (long)puVar9;
  local_70 = local_80;
  uStack_68 = 0;
  local_90 = PTR_DAT_04bc78e0 + 0x10;
  local_c0 = local_80;
  local_58 = 0;
  local_e8[0] = 0;
  local_b0 = local_80;
  local_a0 = "MiniGameObject";
  uStack_98 = 0;
  local_60 = 2;
  local_e0 = &local_90;
  local_d0 = "UI_MiniGame";
  puStack_c8 = puStack_d8;
  puStack_b8 = puStack_d8;
  puStack_a8 = puStack_d8;
  puStack_88 = puStack_d8;
  puStack_78 = puStack_d8;
  FUN_038387b8(puVar9,local_e8);
  lVar13 = param_1[0x42];
  *(undefined **)(lVar13 + 0x40) = &DAT_04aeaf20;
  *(long **)(lVar13 + 0x48) = param_1;
  *(code **)(lVar13 + 0x50) = FUN_02fb0130;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  lVar13 = param_1[0x43];
  *(undefined **)(lVar13 + 0x40) = &DAT_04aeaf48;
  *(long **)(lVar13 + 0x48) = param_1;
  *(code **)(lVar13 + 0x50) = FUN_02fb0338;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  lVar13 = param_1[0x44];
  *(undefined **)(lVar13 + 0x40) = &DAT_04aeaf70;
  *(long **)(lVar13 + 0x48) = param_1;
  *(code **)(lVar13 + 0x50) = FUN_02fb05d0;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  return;
}

