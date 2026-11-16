
void FUN_027ad234(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  memset(param_1,0,0x3c8);
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  puVar6 = param_1 + 0x18;
  *(undefined2 *)puVar6 = 0xfffe;
  FUN_0277d4ac(puVar6);
  memset(param_1,0,0x3b4);
  *(undefined2 *)puVar6 = 0xfffe;
  FUN_0277d4ac(puVar6);
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  memset((void *)((long)param_1 + 0xce),0,0x2a2);
  *(undefined2 *)(param_1 + 0x6e) = 0xfffe;
  *puVar6 = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)puVar6 = 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_0277d4ac(puVar6);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar5 = param_2[1];
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)((long)param_1 + 0x14) = uVar4;
  *(undefined8 *)((long)param_1 + 0xc) = uVar5;
  *(undefined8 *)((long)param_1 + 4) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1c);
  uVar5 = *(undefined8 *)((long)param_2 + 0x2c);
  param_1[5] = *(undefined8 *)((long)param_2 + 0x24);
  param_1[6] = uVar5;
  param_1[4] = uVar3;
  uVar1 = *(uint *)((long)param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 7) = uVar1;
  uVar4 = param_3[2];
  uVar3 = *param_3;
  uVar5 = param_3[1];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_3 + 3);
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0xc] = uVar3;
  uVar3 = *(undefined8 *)((long)param_3 + 0x1c);
  uVar5 = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x84) = uVar5;
  *(undefined8 *)((long)param_1 + 0x7c) = uVar3;
  uVar1 = *(uint *)((long)param_3 + 0x34);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x94) = uVar1;
  *(undefined2 *)puVar6 = *param_4;
  *(undefined1 *)((long)param_1 + 0xc2) = *(undefined1 *)(param_4 + 1);
  *(undefined1 *)((long)param_1 + 0xc3) = *(undefined1 *)((long)param_4 + 3);
  uVar2 = *(undefined4 *)(param_4 + 2);
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = uVar2;
  return;
}

