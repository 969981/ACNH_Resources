
void FUN_011b4f30(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  *(short *)(param_1 + 0x284) = (short)*(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x20);
  FUN_011be644(param_1 + 0x288,*(undefined4 *)(param_2 + 0x1c));
  lVar1 = param_1 + 0x2b8;
  FUN_03ebac90(lVar1,2,0,param_3,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cWait";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar5 = *(undefined8 **)(param_1 + 0x2e8);
  puVar5[2] = 0x138;
  puVar5[3] = 1;
  puVar5[4] = 0x140;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_04985ec8;
  puVar5[1] = param_1;
  puVar5[6] = 0x148;
  puVar5[7] = 1;
  pcStack_48 = "State::cTalk";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x2e8) + (ulong)(1 < *(uint *)(param_1 + 0x2e0)) * 0x40);
  puVar5[2] = 0x150;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04985ec8;
  puVar5[1] = param_1;
  puVar5[4] = 0x158;
  puVar5[5] = 1;
  puVar5[6] = 0x160;
  puVar5[7] = 1;
  *(undefined1 *)(param_1 + 0x2d9) = 1;
  uVar3 = *(uint *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2c0);
  uVar4 = *(undefined4 *)(param_1 + 0x2c4);
  *(uint *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = uVar4;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x2e0) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar3 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

