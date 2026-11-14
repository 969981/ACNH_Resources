
undefined1 * FUN_01d6f348(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x10] = uVar2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  uVar4 = *(undefined8 *)((long)param_2 + 0x11);
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)(param_1 + 0x27) = *(undefined8 *)((long)param_2 + 0x1f);
  *(undefined8 *)(param_1 + 0x21) = uVar5;
  *(undefined8 *)(param_1 + 0x19) = uVar4;
  *(undefined8 *)(param_1 + 0x11) = uVar3;
  param_1[0x30] = *(undefined1 *)(param_2 + 10);
  uVar2 = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x67) = 0;
  param_1[0x31] = uVar2;
  uVar3 = *(undefined8 *)((long)param_2 + 0x2a);
  uVar4 = *(undefined8 *)((long)param_2 + 0x32);
  uVar5 = *(undefined8 *)((long)param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)((long)param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x42) = uVar5;
  *(undefined8 *)(param_1 + 0x3a) = uVar4;
  *(undefined8 *)(param_1 + 0x32) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x4a);
  uVar4 = *(undefined8 *)((long)param_2 + 0x52);
  uVar5 = *(undefined8 *)((long)param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)((long)param_2 + 0x62);
  *(undefined8 *)(param_1 + 0x62) = uVar5;
  *(undefined8 *)(param_1 + 0x5a) = uVar4;
  *(undefined8 *)(param_1 + 0x52) = uVar3;
  param_1[0x6f] = *(undefined1 *)((long)param_2 + 0x67);
  uVar3 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x78) = param_2[0x1c];
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  param_1[0x7c] = *(undefined1 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar1 = param_2[0x20];
  *(undefined4 *)(param_1 + 0x8b) = *(undefined4 *)((long)param_2 + 0x83);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x22);
  memset(param_1 + 0x98,0,0x400);
  memcpy(param_1 + 0x98,param_2 + 0x24,0x3ff);
  *(undefined4 *)(param_1 + 0x498) = param_2[0x124];
  *(undefined4 *)(param_1 + 0x49c) = param_2[0x125];
  *(undefined4 *)(param_1 + 0x4a0) = param_2[0x126];
  *(undefined4 *)(param_1 + 0x4a4) = param_2[0x127];
  *(undefined4 *)(param_1 + 0x4a8) = param_2[0x128];
  *(undefined4 *)(param_1 + 0x4ac) = param_2[0x129];
  *(undefined4 *)(param_1 + 0x4b0) = param_2[0x12a];
  *(undefined4 *)(param_1 + 0x4b4) = param_2[299];
  *(undefined4 *)(param_1 + 0x4b8) = param_2[300];
  *(undefined4 *)(param_1 + 0x4bc) = param_2[0x12d];
  *(undefined4 *)(param_1 + 0x4c0) = param_2[0x12e];
  *(undefined4 *)(param_1 + 0x4c4) = param_2[0x12f];
  *(undefined4 *)(param_1 + 0x4c8) = param_2[0x130];
  *(undefined4 *)(param_1 + 0x4cc) = param_2[0x131];
  *(undefined4 *)(param_1 + 0x4d0) = param_2[0x132];
  uVar6 = param_2[0x134];
  memset(param_1 + 0x4e0,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0x4d8) = (ulong)uVar6;
  memcpy(param_1 + 0x4e0,param_2 + 0x136,(ulong)uVar6);
  uVar6 = param_2[0x1b6];
  memset(param_1 + 0x6e8,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0x6e0) = (ulong)uVar6;
  memcpy(param_1 + 0x6e8,param_2 + 0x1b8,(ulong)uVar6);
  uVar6 = param_2[0x238];
  memset(param_1 + 0x8f0,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0x8e8) = (ulong)uVar6;
  memcpy(param_1 + 0x8f0,param_2 + 0x23a,(ulong)uVar6);
  uVar6 = param_2[0x2ba];
  memset(param_1 + 0xaf8,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0xaf0) = (ulong)uVar6;
  memcpy(param_1 + 0xaf8,param_2 + 700,(ulong)uVar6);
  *(undefined4 *)(param_1 + 0xcf8) = param_2[0x33c];
  uVar3 = *(undefined8 *)(param_2 + 0x33d);
  *(undefined4 *)(param_1 + 0xd04) = param_2[0x33f];
  *(undefined8 *)(param_1 + 0xcfc) = uVar3;
  param_1[0xd08] = *(undefined1 *)(param_2 + 0x340);
  param_1[0xd09] = *(undefined1 *)((long)param_2 + 0xd01);
  *param_1 = 1;
  return param_1;
}

