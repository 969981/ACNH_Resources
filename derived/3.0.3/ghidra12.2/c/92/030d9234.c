
void FUN_030d9234(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03d5cc04();
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  *param_1 = &PTR_LAB_04afe438;
  puVar6 = param_1 + 0x61;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x61] = PTR_DAT_04bd4738 + 0x10;
  param_1[0x62] = 0xffffffff;
  param_1[99] = 0xffffffff;
  param_1[100] = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0x3f00000040000000;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0x3f733333;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined2 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0x100000000;
  FUN_03ebac90(puVar6,8,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x67];
  puVar5[2] = FUN_030d9634;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04afe588;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_030d969c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cDrag";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x67] + (ulong)(1 < *(uint *)(param_1 + 0x66)) * 0x40);
  puVar5[2] = &LAB_030d96a0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04afe588;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_030d97ac;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cDrop";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[0x67] + (ulong)(2 < *(uint *)(param_1 + 0x66)) * 0x80);
  puVar5[2] = &LAB_030d9858;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04afe588;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_030d98c0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cEndDrop";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0x66) < 4) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x67] + lVar2);
  puVar5[2] = &LAB_030d9a18;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04afe588;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_030d9ac4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cCancel";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,4,&local_50);
  puVar5 = (undefined8 *)(param_1[0x67] + (ulong)(4 < *(uint *)(param_1 + 0x66)) * 0x100);
  puVar5[2] = &LAB_030d9b50;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04afe588;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_030d9bb8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cEndCancel";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 0x66) < 6) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x67] + lVar2);
  puVar5[2] = &LAB_030d9d10;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04afe588;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_030d9d8c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cTargetMove";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 0x66) < 7) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x67] + lVar2);
  puVar5[2] = &LAB_030d9e18;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04afe588;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_030d9f10;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cEndTargetMove";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,7,&local_50);
  lVar2 = 0x1c0;
  if (*(uint *)(param_1 + 0x66) < 8) {
    lVar2 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x67] + lVar2);
  puVar6[2] = &LAB_030da068;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04afe588;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_030da06c;
  puVar6[5] = 0;
  *(undefined1 *)((long)param_1 + 0x329) = 1;
  uVar3 = *(uint *)(param_1 + 100);
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_1 + 0x62);
  uVar4 = *(undefined4 *)((long)param_1 + 0x314);
  *(uint *)(param_1 + 0x62) = uVar3;
  *(undefined4 *)((long)param_1 + 0x314) = 0;
  *(undefined4 *)((long)param_1 + 0x31c) = uVar4;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x66) <= uVar3) {
      uVar3 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[0x67] + (long)(int)uVar3 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

