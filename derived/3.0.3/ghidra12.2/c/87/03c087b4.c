
void FUN_03c087b4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bd4738;
  param_1[4] = 0xffffffff;
  *param_1 = &PTR_LAB_04b7c978;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  plVar6 = param_1 + 1;
  *plVar6 = (long)(puVar1 + 0x10);
  uVar4 = nn::os::GetSystemTick();
  param_1[10] = uVar4;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  FUN_03ebac90(plVar6,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[7];
  puVar5[4] = &LAB_03c089c0;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04b7c998;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cCloneStop";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  *puVar5 = &PTR_LAB_04b7c998;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_03c089c4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cDisconnect";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  *puVar5 = &PTR_LAB_04b7c998;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_03c089d0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cLogOut";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[7] + lVar2);
  *puVar5 = &PTR_LAB_04b7c998;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_03c08c20;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  uVar3 = *(uint *)(param_1 + 4);
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  *(uint *)(param_1 + 2) = uVar3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[7] + (long)(int)uVar3 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

