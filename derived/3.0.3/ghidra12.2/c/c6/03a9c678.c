
void FUN_03a9c678(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = crc32b(0xffffffff,0x49,0x4c11db7);
  uVar1 = crc32b(uVar1,0x73,0x4c11db7);
  uVar1 = crc32b(uVar1,0x45,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x62,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 8) = ~uVar2;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1;
    *(long *)(param_2 + 0x10) = param_1;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar1 = crc32b(0xffffffff,0x42,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  uVar1 = crc32b(uVar1,100,0x4c11db7);
  uVar1 = crc32b(uVar1,0x52,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar3 = crc32b(uVar1,0x55,0x4c11db7);
  uVar2 = crc32b(uVar3,0x70,0x4c11db7);
  *(uint *)(param_1 + 0x28) = ~uVar2;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x20;
    *(long *)(param_2 + 0x10) = param_1 + 0x20;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3e19999a;
  uVar1 = crc32b(uVar1,0x44,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x77,0x4c11db7);
  uVar2 = crc32b(uVar1,0x6e,0x4c11db7);
  *(uint *)(param_1 + 0x48) = ~uVar2;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x40;
    *(long *)(param_2 + 0x10) = param_1 + 0x40;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar1 = crc32b(0xffffffff,0x45,0x4c11db7);
  *(undefined4 *)(param_1 + 0x58) = 0x3ccccccd;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar1 = crc32b(uVar1,0x78,0x4c11db7);
  uVar1 = crc32b(uVar1,0x70,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x73,0x4c11db7);
  uVar1 = crc32b(uVar1,0x75,0x4c11db7);
  uVar1 = crc32b(uVar1,0x72,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x4d,0x4c11db7);
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  uVar2 = crc32b(uVar1,100,0x4c11db7);
  *(uint *)(param_1 + 0x68) = ~uVar2;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x60;
    *(long *)(param_2 + 0x10) = param_1 + 0x60;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar1 = crc32b(0xffffffff,0x52,0x4c11db7);
  *(undefined4 *)(param_1 + 0x78) = 0x3e3851ec;
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  uVar1 = crc32b(uVar1,0x67,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x4d,0x4c11db7);
  uVar3 = crc32b(uVar1,0x69,0x4c11db7);
  uVar2 = crc32b(uVar3,0x6e,0x4c11db7);
  *(uint *)(param_1 + 0x88) = ~uVar2;
  if (param_2 == 0) {
    uVar1 = crc32b(uVar1,0x61,0x4c11db7);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    uVar2 = crc32b(uVar1,0x78,0x4c11db7);
    *(uint *)(param_1 + 0xa8) = ~uVar2;
  }
  else {
    uVar1 = crc32b(uVar1,0x61,0x4c11db7);
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x80;
    *(long *)(param_2 + 0x10) = param_1 + 0x80;
    uVar2 = crc32b(uVar1,0x78,0x4c11db7);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(uint *)(param_1 + 0xa8) = ~uVar2;
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0xa0;
    *(long *)(param_2 + 0x10) = param_1 + 0xa0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x41200000;
  uVar1 = crc32b(0xffffffff,0x56,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x72,0x4c11db7);
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x78,0x4c11db7);
  uVar3 = crc32b(uVar1,0x53,0x4c11db7);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar2 = crc32b(uVar3,0x58,0x4c11db7);
  *(uint *)(param_1 + 0x108) = ~uVar2;
  if (param_2 == 0) {
    uVar2 = crc32b(uVar3,0x59,0x4c11db7);
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
    *(uint *)(param_1 + 0x128) = ~uVar2;
  }
  else {
    uVar2 = crc32b(uVar3,0x59,0x4c11db7);
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x100;
    *(long *)(param_2 + 0x10) = param_1 + 0x100;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(uint *)(param_1 + 0x128) = ~uVar2;
    *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x120;
    *(long *)(param_2 + 0x10) = param_1 + 0x120;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
  uVar1 = crc32b(uVar1,0x4f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x66,0x4c11db7);
  uVar1 = crc32b(uVar1,0x66,0x4c11db7);
  uVar1 = crc32b(uVar1,0x73,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar2 = crc32b(uVar1,0x58,0x4c11db7);
  *(uint *)(param_1 + 200) = ~uVar2;
  if (param_2 == 0) {
    uVar2 = crc32b(uVar1,0x59,0x4c11db7);
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(uint *)(param_1 + 0xe8) = ~uVar2;
  }
  else {
    uVar2 = crc32b(uVar1,0x59,0x4c11db7);
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0xc0;
    *(long *)(param_2 + 0x10) = param_1 + 0xc0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(uint *)(param_1 + 0xe8) = ~uVar2;
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0xe0;
    *(long *)(param_2 + 0x10) = param_1 + 0xe0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0x3f80000040000000;
  *(undefined8 *)(param_1 + 0x148) = 0x41200000;
  return;
}

