
undefined1 * FUN_01d719fc(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar2 = param_2[0x10];
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x10] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x11);
  uVar4 = *(undefined8 *)(param_2 + 0x19);
  uVar5 = *(undefined8 *)(param_2 + 0x21);
  *(undefined8 *)(param_1 + 0x27) = *(undefined8 *)(param_2 + 0x27);
  *(undefined8 *)(param_1 + 0x21) = uVar5;
  *(undefined8 *)(param_1 + 0x19) = uVar4;
  *(undefined8 *)(param_1 + 0x11) = uVar3;
  param_1[0x30] = param_2[0x30];
  uVar2 = param_2[0x31];
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x67) = 0;
  param_1[0x31] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x32);
  uVar4 = *(undefined8 *)(param_2 + 0x3a);
  uVar5 = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x42) = uVar5;
  *(undefined8 *)(param_1 + 0x3a) = uVar4;
  *(undefined8 *)(param_1 + 0x32) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x52);
  uVar4 = *(undefined8 *)(param_2 + 0x5a);
  uVar5 = *(undefined8 *)(param_2 + 0x62);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined8 *)(param_1 + 0x62) = uVar5;
  *(undefined8 *)(param_1 + 0x5a) = uVar4;
  *(undefined8 *)(param_1 + 0x52) = uVar3;
  param_1[0x6f] = param_2[0x6f];
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  param_1[0x7c] = param_2[0x7c];
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8b) = *(undefined4 *)(param_2 + 0x8b);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  memset(param_1 + 0x98,0,0x400);
  memcpy(param_1 + 0x98,param_2 + 0x98,0x3ff);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  uVar6 = *(uint *)(param_2 + 0x4d8);
  memset(param_1 + 0x4e0,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0x4d8) = (ulong)uVar6;
  memcpy(param_1 + 0x4e0,param_2 + 0x4e0,(ulong)uVar6);
  uVar6 = *(uint *)(param_2 + 0x6e0);
  memset(param_1 + 0x6e8,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0x6e0) = (ulong)uVar6;
  memcpy(param_1 + 0x6e8,param_2 + 0x6e8,(ulong)uVar6);
  uVar6 = *(uint *)(param_2 + 0x8e8);
  memset(param_1 + 0x8f0,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0x8e8) = (ulong)uVar6;
  memcpy(param_1 + 0x8f0,param_2 + 0x8f0,(ulong)uVar6);
  uVar6 = *(uint *)(param_2 + 0xaf0);
  memset(param_1 + 0xaf8,0,0x200);
  if (0x1ff < uVar6) {
    uVar6 = 0x200;
  }
  *(ulong *)(param_1 + 0xaf0) = (ulong)uVar6;
  memcpy(param_1 + 0xaf8,param_2 + 0xaf8,(ulong)uVar6);
  *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_2 + 0xcf8);
  uVar3 = *(undefined8 *)(param_2 + 0xcfc);
  *(undefined4 *)(param_1 + 0xd04) = *(undefined4 *)(param_2 + 0xd04);
  *(undefined8 *)(param_1 + 0xcfc) = uVar3;
  param_1[0xd08] = param_2[0xd08];
  param_1[0xd09] = param_2[0xd09];
  *param_1 = *param_2;
  return param_1;
}

