
void FUN_02eac5a0(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  undefined *local_60;
  char *pcStack_58;
  
  puVar1 = PTR_DAT_04bd4738;
  param_1[4] = 0xffffffff;
  *param_1 = &PTR_LAB_04adc380;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar5 = param_1 + 1;
  *plVar5 = (long)(puVar1 + 0x10);
  memset(param_1 + 9,0,0x1d0);
  bVar4 = *PTR_DAT_04bb32e0;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xc9;
  param_1[0xe] = &DAT_04adc3a0;
  param_1[0xf] = (undefined2 *)((long)param_1 + 0x84);
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)((long)param_1 + 0x5c) = bVar4;
  memset(param_1 + 0x43,0,0x1c8);
  *(undefined2 *)((long)param_1 + 0x24c) = 0;
  param_1[0x48] = (undefined2 *)((long)param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x49) = 0xc9;
  param_1[0x47] = &DAT_04adc3a0;
  memset(param_1 + 0x7c,0,0x1c8);
  *(undefined2 *)((long)param_1 + 0x414) = 0;
  param_1[0x81] = (undefined2 *)((long)param_1 + 0x414);
  *(undefined4 *)(param_1 + 0x82) = 0xc9;
  param_1[0x80] = &DAT_04adc3a0;
  memset(param_1 + 0xb5,0,0x1d0);
  *(undefined4 *)(param_1 + 0xbc) = 0xc9;
  *(undefined2 *)((long)param_1 + 0x5e4) = 0;
  param_1[0xbb] = (undefined2 *)((long)param_1 + 0x5e4);
  param_1[0xba] = &DAT_04adc3a0;
  memset(param_1 + 0xef,0,0x1d8);
  *(undefined2 *)((long)param_1 + 0x7bc) = 0;
  param_1[0xf6] = (undefined2 *)((long)param_1 + 0x7bc);
  *(undefined4 *)(param_1 + 0xf7) = 0xc9;
  param_1[0xf5] = &DAT_04adc3a0;
  memset(param_1 + 0x12a,0,0x1c8);
  *(undefined2 *)((long)param_1 + 0x984) = 0;
  param_1[0x12f] = (undefined2 *)((long)param_1 + 0x984);
  *(undefined4 *)(param_1 + 0x130) = 0xc9;
  param_1[0x12e] = &DAT_04adc3a0;
  memset(param_1 + 0x163,0,0x1c0);
  *(undefined2 *)((long)param_1 + 0xb44) = 0;
  param_1[0x167] = (undefined2 *)((long)param_1 + 0xb44);
  *(undefined4 *)(param_1 + 0x168) = 0xc9;
  param_1[0x166] = &DAT_04adc3a0;
  memset(param_1 + 0x19b,0,0x1c0);
  *(undefined2 *)((long)param_1 + 0xd04) = 0;
  param_1[0x19f] = (undefined2 *)((long)param_1 + 0xd04);
  *(undefined4 *)(param_1 + 0x1a0) = 0xc9;
  param_1[0x19e] = &DAT_04adc3a0;
  memset(param_1 + 0x1d3,0,0x1c0);
  *(undefined4 *)(param_1 + 0x1d8) = 0xc9;
  *(undefined2 *)((long)param_1 + 0xec4) = 0;
  param_1[0x1d7] = (undefined2 *)((long)param_1 + 0xec4);
  param_1[0x1d6] = &DAT_04adc3a0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  *(undefined1 *)(param_1 + 0x20d) = 0;
  FUN_03ebac90(plVar5,3,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::cSleep";
  local_60 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_60);
  puVar3 = (undefined8 *)param_1[7];
  puVar3[4] = &LAB_02eac8ec;
  puVar3[5] = 0;
  *puVar3 = &PTR_LAB_04adc3d0;
  puVar3[1] = param_1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_58 = "State::cSend";
  local_60 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_60);
  puVar3 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar3[2] = &LAB_02eac8f0;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04adc3d0;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_02eac8f4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_58 = "State::cSendTest";
  local_60 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_60);
  puVar3 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar3[2] = &LAB_02eaca50;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04adc3d0;
  puVar3[1] = param_1;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = &LAB_02eaca54;
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

