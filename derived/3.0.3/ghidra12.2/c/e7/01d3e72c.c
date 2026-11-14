
void FUN_01d3e72c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = &PTR_LAB_04a555b8;
  FUN_01d3c31c(param_1 + 1);
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  FUN_038e18e4(param_1 + 0x97);
  *(undefined2 *)(param_1 + 0x9f) = 0;
  *(undefined8 *)((long)param_1 + 0x494) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x49c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4a4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4ac) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bd4738;
  puVar6 = param_1 + 0xa0;
  param_1[0xa1] = 0xffffffff;
  param_1[0xa2] = 0xffffffff;
  param_1[0xa3] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  param_1[0xa0] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xab] = 0xff00000000;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xaa] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((long)param_1 + 0x546) = 0;
  DAT_0536c718 = 0;
  DAT_0536c710 = &LAB_01d3ea78;
  DAT_0536c708 = param_1;
  FUN_03ebac90(puVar6,7,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cInvalid";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[0xa6];
  puVar5[2] = 0x10;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04a556a0;
  puVar5[1] = param_1;
  puVar5[4] = 0x18;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cStartup";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0xa6] + (ulong)(1 < *(uint *)(param_1 + 0xa5)) * 0x40);
  puVar5[2] = 0x20;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04a556a0;
  puVar5[1] = param_1;
  puVar5[4] = 0x28;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReady";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[0xa6] + (ulong)(2 < *(uint *)(param_1 + 0xa5)) * 0x80);
  puVar5[2] = 0x30;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04a556a0;
  puVar5[1] = param_1;
  puVar5[4] = 0x38;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cMatching";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0xa5) < 4) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0xa6] + lVar2);
  puVar5[2] = 0x40;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04a556a0;
  puVar5[1] = param_1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0x48;
  puVar5[5] = 1;
  pcStack_48 = "State::cActive";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,4,&local_50);
  puVar5 = (undefined8 *)(param_1[0xa6] + (ulong)(4 < *(uint *)(param_1 + 0xa5)) * 0x100);
  puVar5[2] = 0x50;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04a556a0;
  puVar5[1] = param_1;
  puVar5[4] = 0x58;
  puVar5[5] = 1;
  puVar5[6] = 0x60;
  puVar5[7] = 1;
  pcStack_48 = "State::cLeave";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 0xa5) < 6) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0xa6] + lVar2);
  puVar5[2] = 0x68;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04a556a0;
  puVar5[1] = param_1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0x70;
  puVar5[5] = 1;
  pcStack_48 = "State::cCleanup";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 0xa5) < 7) {
    lVar2 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0xa6] + lVar2);
  puVar6[2] = 0x78;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_04a556a0;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = 0x80;
  puVar6[5] = 1;
  *(undefined1 *)((long)param_1 + 0x521) = 1;
  uVar3 = *(uint *)(param_1 + 0xa3);
  *(undefined4 *)(param_1 + 0xa2) = *(undefined4 *)(param_1 + 0xa1);
  uVar4 = *(undefined4 *)((long)param_1 + 0x50c);
  *(uint *)(param_1 + 0xa1) = uVar3;
  *(undefined4 *)((long)param_1 + 0x50c) = 0;
  *(undefined4 *)((long)param_1 + 0x514) = uVar4;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xa5) <= uVar3) {
      uVar3 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[0xa6] + (long)(int)uVar3 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

