
void FUN_00e3c924(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bd4738;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  plVar6 = param_1 + 4;
  *plVar6 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)param_1 + 0x7c;
  bVar5 = *PTR_DAT_04bb32e0;
  *(undefined4 *)(param_1 + 0xe) = 5;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(param_1 + 0x12) = bVar5;
  FUN_03ebac90(plVar6,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_50);
  pcStack_48 = "State::cWaitAutoSaving";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_50);
  puVar4 = (undefined8 *)(param_1[10] + (ulong)(1 < *(uint *)(param_1 + 9)) * 0x40);
  *puVar4 = &PTR_LAB_04960728;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_00e3d25c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cMailReceivingWaiting";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 9) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[10] + lVar2);
  puVar4[2] = &LAB_00e3d36c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04960728;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_00e3d4b8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitDialogDisappear";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,4,&local_50);
  puVar4 = (undefined8 *)(param_1[10] + (ulong)(4 < *(uint *)(param_1 + 9)) * 0x100);
  *puVar4 = &PTR_LAB_04960728;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_00e3d52c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  uVar3 = *(uint *)(param_1 + 7);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x2c);
  *(uint *)(param_1 + 5) = uVar3;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 9) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[10] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

