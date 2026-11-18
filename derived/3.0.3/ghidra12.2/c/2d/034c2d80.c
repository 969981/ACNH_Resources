
void FUN_034c2d80(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  FUN_02ece77c();
  *param_1 = &PTR_LAB_04b2fa80;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar7 = malloc(0x40);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x40,8);
    }
  }
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  plVar7[5] = 0;
  puVar5 = PTR_DAT_04bc6048;
  plVar7[2] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[3] = (long)plVar7;
  plVar7[4] = 0;
  *(undefined2 *)(plVar7 + 5) = 0xfffe;
  *(undefined1 *)((long)plVar7 + 0x2b) = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  FUN_0277d4ac();
  *(undefined1 *)(plVar7 + 6) = 0;
  *(undefined8 *)((long)plVar7 + 0x34) = 0xfffe;
  FUN_0277d4ac();
  lVar8 = plVar7[4];
  plVar1 = param_1 + 0x44;
  if (lVar8 != 0) {
    plVar7[4] = 0;
    if (plVar7[1] != 0) {
      *(long *)(plVar7[1] + 8) = plVar7[2];
    }
    if ((long *)plVar7[2] != (long *)0x0) {
      *(long *)plVar7[2] = *plVar9;
    }
    *plVar9 = 0;
    plVar7[2] = 0;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  plVar7[4] = (long)plVar1;
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[1] = lVar8;
  plVar7[2] = (long)plVar1;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_04bc7130;
  plVar7[4] = (long)plVar1;
  *plVar7 = (long)(puVar5 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_04bc7198;
  plVar7[4] = (long)plVar1;
  *plVar7 = (long)(puVar5 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x30);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x30,8);
  }
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_04bc7118;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar7[4] = (long)plVar1;
  plVar7[5] = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_04bc7138;
  plVar7[4] = (long)plVar1;
  *plVar7 = (long)(puVar5 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_04bc7168;
  plVar7[4] = (long)plVar1;
  *plVar7 = (long)(puVar5 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_04bc7180;
  plVar7[4] = (long)plVar1;
  *plVar7 = (long)(puVar5 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_04bc71c8;
  plVar7[4] = (long)plVar1;
  *plVar7 = (long)(puVar5 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  lVar8 = *(long *)puVar3;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar8 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar7[2] = 0;
  plVar7[3] = (long)plVar7;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar3 = PTR_DAT_04bc71a8;
  plVar7[4] = (long)plVar1;
  *plVar7 = (long)(puVar3 + 0x10);
  lVar8 = *plVar1;
  *plVar1 = (long)plVar9;
  plVar7[2] = (long)plVar1;
  *plVar9 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  return;
}

