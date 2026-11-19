
void FUN_03aa0f64(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = crc32b(0xffffffff,0x67,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x72,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar1 = crc32b(uVar1,0x79,0x4c11db7);
  uVar1 = crc32b(uVar1,0x70,0x4c11db7);
  uVar2 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x10) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 8;
    *(long *)(param_2 + 0x10) = param_1 + 8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = crc32b(0xffffffff,0x69,0x4c11db7);
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = crc32b(uVar1,0x73,0x4c11db7);
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar1,0x72,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar4 = crc32b(uVar3,0x73,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,100,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
  uVar4 = crc32b(uVar4,100,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar2 = crc32b(uVar4,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x30) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x28;
    *(long *)(param_2 + 0x10) = param_1 + 0x28;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  *(undefined1 *)(param_1 + 0x40) = 1;
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x72,0x4c11db7);
  uVar3 = crc32b(uVar3,0x67,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x62,0x4c11db7);
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar2 = crc32b(uVar3,0x66,0x4c11db7);
  *(uint *)(param_1 + 0x50) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x48;
    *(long *)(param_2 + 0x10) = param_1 + 0x48;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar3 = crc32b(uVar1,100,0x4c11db7);
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x70,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x68,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x31,0x4c11db7);
  uVar2 = crc32b(uVar3,0x36,0x4c11db7);
  *(uint *)(param_1 + 0x70) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x68;
    *(long *)(param_2 + 0x10) = param_1 + 0x68;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar3 = crc32b(0xffffffff,0x6d,0x4c11db7);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x72,0x4c11db7);
  uVar3 = crc32b(uVar3,0x67,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar2 = crc32b(uVar3,0x78,0x4c11db7);
  *(uint *)(param_1 + 0xb0) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0xa8;
    *(long *)(param_2 + 0x10) = param_1 + 0xa8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 1;
  uVar3 = crc32b(0xffffffff,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar2 = crc32b(uVar3,0x78,0x4c11db7);
  *(uint *)(param_1 + 0x90) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x88;
    *(long *)(param_2 + 0x10) = param_1 + 0x88;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x62,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar2 = crc32b(uVar1,0x67,0x4c11db7);
  *(uint *)(param_1 + 0xd0) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 200;
    *(long *)(param_2 + 0x10) = param_1 + 200;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar1 = crc32b(0xffffffff,0x6c,0x4c11db7);
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x67,0x4c11db7);
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar1,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar3,0x70,0x4c11db7);
  *(uint *)(param_1 + 0xf0) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0xe8;
    *(long *)(param_2 + 0x10) = param_1 + 0xe8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0x3f666666;
  uVar1 = crc32b(uVar1,99,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar1,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x110) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x108;
    *(long *)(param_2 + 0x10) = param_1 + 0x108;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar1 = crc32b(0xffffffff,0x61,0x4c11db7);
  *(undefined8 *)(param_1 + 0x120) = 0x3f6666663f800000;
  *(undefined8 *)(param_1 + 0x128) = 0x3f8000003f4ccccd;
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  *(undefined8 *)(param_1 + 0x140) = 0;
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6d,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x72,0x4c11db7);
  uVar1 = crc32b(uVar1,0x70,0x4c11db7);
  uVar1 = crc32b(uVar1,0x68,0x4c11db7);
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  uVar1 = crc32b(uVar1,99,0x4c11db7);
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar1,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x70,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6b,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar2 = crc32b(uVar3,0x78,0x4c11db7);
  *(uint *)(param_1 + 0x138) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x130;
    *(long *)(param_2 + 0x10) = param_1 + 0x130;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x148) = 6;
  uVar1 = crc32b(uVar1,99,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar1,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x158) = ~uVar2;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x150;
    *(long *)(param_2 + 0x10) = param_1 + 0x150;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x168) = 0x3f68f5c33f6e147b;
  *(undefined8 *)(param_1 + 0x170) = 0x3f8000003f75c28f;
  return;
}

