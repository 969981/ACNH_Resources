
void FUN_027acc54(undefined1 *param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4,
                 undefined2 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined *local_660;
  undefined *puStack_658;
  undefined *local_650;
  undefined *puStack_648;
  undefined *local_640;
  char *pcStack_638;
  undefined1 auStack_630 [32];
  undefined1 *local_610;
  undefined1 *puStack_608;
  undefined1 *local_600;
  undefined1 auStack_5b8 [320];
  undefined1 auStack_478 [704];
  undefined1 auStack_1b8 [320];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  memset(param_1,0,0x3c8);
  param_1[0xc3] = 0;
  puVar6 = (undefined2 *)(param_1 + 0xc0);
  *puVar6 = 0xfffe;
  FUN_0277d4ac(puVar6);
  memset(param_1,0,0x3b4);
  *puVar6 = 0xfffe;
  FUN_0277d4ac(puVar6);
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(param_1 + 0xce,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  *param_1 = 1;
  param_1[0x5c] = 0;
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar5 = param_2[1];
  param_1[0x1c] = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1c);
  uVar5 = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar1 = *(uint *)((long)param_2 + 0x34);
  param_1[0xb8] = 1;
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  param_1[0x60] = *param_3;
  param_1[0x61] = param_3[1];
  uVar2 = FUN_020fd7d8(param_3);
  param_1[0x62] = uVar2;
  uVar2 = *(undefined1 *)(param_4 + 3);
  uVar3 = param_4[1];
  uVar5 = param_4[2];
  uVar4 = *param_4;
  param_1[0xcc] = 1;
  *(undefined2 *)(param_1 + 0x36e) = param_5;
  *(undefined8 *)(param_1 + 100) = uVar4;
  param_1[0x7c] = uVar2;
  *(undefined8 *)(param_1 + 0x74) = uVar5;
  *(undefined8 *)(param_1 + 0x6c) = uVar3;
  FUN_01bdde78(auStack_630);
  local_70 = param_1 + 0x12e;
  local_68 = param_1 + 0x30e;
  local_610 = auStack_5b8;
  puStack_608 = auStack_478;
  local_600 = auStack_1b8;
  local_660 = PTR_DAT_04bb2020 + 0x10;
  pcStack_638 = "MAIL_PlayerDefault";
  puStack_648 = &DAT_040962e2;
  puStack_658 = &DAT_040cfd58;
  local_650 = local_660;
  local_640 = local_660;
  local_78 = param_1 + 0xce;
  FUN_01bdcd2c(auStack_630,&local_640,&local_650,&local_660,param_2,param_3);
  return;
}

