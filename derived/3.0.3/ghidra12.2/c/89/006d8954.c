
void FUN_006d8954(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  uVar4 = *param_2;
  puVar6 = param_1 + 3;
  *param_1 = uVar4;
  param_1[2] = uVar4;
  FUN_03ebac90(puVar6,6,1,uVar4,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[9];
  puVar5[4] = &LAB_006d8bdc;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_048fad00;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[9] + (ulong)(1 < *(uint *)(param_1 + 8)) * 0x40);
  puVar5[2] = &LAB_006d8be0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_048fad00;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_006d8be4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cIssueUrl";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[9] + (ulong)(2 < *(uint *)(param_1 + 8)) * 0x80);
  puVar5[2] = &LAB_006d8be8;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_048fad00;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_006d8c84;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cUploadBody";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 8) < 4) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[9] + lVar2);
  puVar5[2] = &LAB_006d8d4c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_048fad00;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_006d8e3c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cUpdate";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,4,&local_50);
  puVar5 = (undefined8 *)(param_1[9] + (ulong)(4 < *(uint *)(param_1 + 8)) * 0x100);
  puVar5[2] = &LAB_006d8ef0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_048fad00;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_006d9084;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cUpdateMeta";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 8) < 6) {
    lVar2 = 0;
  }
  puVar6 = (undefined8 *)(param_1[9] + lVar2);
  puVar6[2] = &LAB_006d9120;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_048fad00;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_006d91c4;
  puVar6[5] = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 1;
  uVar3 = *(uint *)(param_1 + 6);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar3;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 8) <= uVar3) {
      uVar3 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[9] + (long)(int)uVar3 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

