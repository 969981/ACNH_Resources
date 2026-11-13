
void FUN_0130f8f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 8;
  FUN_03ebac90(lVar1,4,0,*param_2,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cWait";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  puVar4[2] = &LAB_0130faf8;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0130fafc;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_0498dbf8;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0130fb00;
  puVar4[7] = 0;
  pcStack_48 = "State::cMakeRemoveRoad";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(1 < *(uint *)(param_1 + 0x30)) * 0x40)
  ;
  puVar4[4] = &LAB_0130fbf4;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_0498dbf8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0130fb10;
  puVar4[3] = 0;
  puVar4[6] = &LAB_0130fccc;
  puVar4[7] = 0;
  pcStack_48 = "State::cMakeRemoveRoadWait";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(2 < *(uint *)(param_1 + 0x30)) * 0x80)
  ;
  puVar4[4] = &LAB_0130fcd4;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_0498dbf8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0130fcd0;
  puVar4[3] = 0;
  puVar4[6] = &LAB_0130fd64;
  puVar4[7] = 0;
  pcStack_48 = "State::cRemoveEnd";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x30) < 4) {
    lVar1 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar1);
  puVar4[2] = &LAB_0130fd70;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_0498dbf8;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_013101a0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_01310188;
  puVar4[5] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar3 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x30) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

