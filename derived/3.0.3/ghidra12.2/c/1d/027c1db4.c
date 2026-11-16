
undefined4 * FUN_027c1db4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 6) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x15);
  uVar4 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)(param_1 + 0x17) = uVar4;
  *(undefined8 *)(param_1 + 0x15) = uVar3;
  uVar1 = param_2[0x1b];
  if (1 < uVar1) {
    uVar1 = 0;
  }
  param_1[0x1b] = uVar1;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
  *(undefined2 *)((long)param_1 + 0x72) = *(undefined2 *)((long)param_2 + 0x72);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar5 = *(undefined8 *)(param_2 + 0x26);
  uVar3 = *(undefined8 *)(param_2 + 0x22);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x22) = uVar3;
  *(undefined8 *)(param_1 + 0x24) = uVar4;
  *(undefined8 *)(param_1 + 0x26) = uVar5;
  memcpy((void *)((long)param_1 + 0xa5),(void *)((long)param_2 + 0xa5),0x800);
  uVar2 = *(undefined1 *)((long)param_2 + 0x8a5);
  *(undefined2 *)((long)param_1 + 0x8a6) = 0;
  *(undefined1 *)((long)param_1 + 0x8a5) = uVar2;
  FUN_027c1b80(param_1);
  return param_1;
}

