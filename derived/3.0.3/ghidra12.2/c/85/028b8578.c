
void FUN_028b8578(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bd4738;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  plVar4 = param_1 + 1;
  *plVar4 = (long)(puVar1 + 0x10);
  param_1[0x12] = &PTR_LAB_04a92058;
  param_1[9] = 0;
  param_1[10] = &PTR_LAB_04a92058;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xe] = &PTR_LAB_04a92058;
  param_1[0xf] = 0;
  DAT_055b0ee0 = &PTR_LAB_04a92110;
  DAT_055b0ef0 = FUN_028b8754;
  DAT_055b0ef8 = 0;
  DAT_055b0ee8 = param_1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  DAT_055b0f10 = &PTR_LAB_04a92138;
  DAT_055b0f20 = &LAB_028b8830;
  DAT_055b0f28 = 0;
  DAT_055b0f18 = param_1;
  FUN_03ebac90(plVar4,2,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(plVar4,0,&local_40);
  puVar3 = (undefined8 *)param_1[7];
  puVar3[2] = &LAB_028b8868;
  puVar3[3] = 0;
  puVar3[4] = &LAB_028b886c;
  puVar3[5] = 0;
  *puVar3 = &PTR_LAB_04a92160;
  puVar3[1] = param_1;
  puVar3[6] = &LAB_028b8870;
  puVar3[7] = 0;
  pcStack_38 = "State::cWaitResponse";
  local_40 = puVar1;
  FUN_03ebaf40(plVar4,1,&local_40);
  puVar3 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar3[2] = &LAB_028b8874;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a92160;
  puVar3[1] = param_1;
  puVar3[6] = &LAB_028b8da4;
  puVar3[7] = 0;
  puVar3[4] = &LAB_028b8878;
  puVar3[5] = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  uVar2 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  *(uint *)(param_1 + 2) = uVar2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar2) {
      uVar2 = 0;
    }
    puVar3 = *(undefined8 **)(param_1[7] + (long)(int)uVar2 * 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)*puVar3)();
    }
  }
  return;
}

