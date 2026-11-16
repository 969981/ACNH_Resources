
void FUN_027ad074(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined *local_650;
  undefined *puStack_648;
  undefined *local_640;
  undefined *puStack_638;
  undefined *local_630;
  char *pcStack_628;
  undefined1 auStack_620 [32];
  undefined1 *local_600;
  undefined1 *puStack_5f8;
  undefined1 *local_5f0;
  undefined1 auStack_5a8 [320];
  undefined1 auStack_468 [704];
  undefined1 auStack_1a8 [320];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  memset(param_1,0,0x3c8);
  param_1[0xc3] = 0;
  puVar5 = (undefined2 *)(param_1 + 0xc0);
  *puVar5 = 0xfffe;
  FUN_0277d4ac(puVar5);
  memset(param_1,0,0x3b4);
  *puVar5 = 0xfffe;
  FUN_0277d4ac(puVar5);
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(param_1 + 0xce,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  *param_1 = 1;
  param_1[0x5c] = 0;
  uVar3 = param_2[2];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  param_1[0x1c] = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c);
  uVar4 = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(uint *)((long)param_2 + 0x34);
  param_1[0xb8] = 0;
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  uVar3 = *param_3;
  param_1[0x78] = *(undefined1 *)(param_3 + 3);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar2 = *(undefined8 *)((long)param_3 + 0x2c);
  uVar4 = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)((long)param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x84) = uVar4;
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  uVar1 = *(uint *)((long)param_3 + 0x34);
  param_1[0xcc] = 1;
  *(undefined2 *)(param_1 + 0x36e) = param_4;
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x94) = uVar1;
  FUN_01bdde78(auStack_620);
  local_60 = param_1 + 0x12e;
  local_58 = param_1 + 0x30e;
  local_600 = auStack_5a8;
  puStack_5f8 = auStack_468;
  local_5f0 = auStack_1a8;
  local_650 = PTR_DAT_04bb2020 + 0x10;
  pcStack_628 = "BirthdayMessage";
  puStack_638 = &DAT_040d42fe;
  puStack_648 = &DAT_04091fb1;
  local_640 = local_650;
  local_630 = local_650;
  local_68 = param_1 + 0xce;
  FUN_01bdc520(auStack_620,&local_630,&local_640,&local_650,param_2,param_3);
  return;
}

