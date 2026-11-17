
void FUN_02ea94c8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  param_1[4] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  plVar5 = param_1 + 1;
  *plVar5 = (long)(puVar1 + 0x10);
  *param_1 = &PTR_LAB_04adc050;
  FUN_03ebac90(plVar5,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[7];
  puVar4[4] = &LAB_02ea9730;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04adc070;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCheckSolver";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar4[2] = &LAB_02ea9734;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04adc070;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02ea9738;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCheckTerminate";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar4[2] = &LAB_02ea973c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04adc070;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02ea9740;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGoodEnd";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[7] + lVar2);
  puVar4[2] = &LAB_02ea9744;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04adc070;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02ea9748;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cBadEnd";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(4 < *(uint *)(param_1 + 6)) * 0x100);
  puVar4[2] = &LAB_02ea974c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04adc070;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02ea9750;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  uVar3 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  *(uint *)(param_1 + 2) = uVar3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[7] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

