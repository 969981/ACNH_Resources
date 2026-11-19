
void FUN_03939c24(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar1 = crc32b(0xffffffff,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar1,0x45,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x62,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x4e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x43,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar2,99,0x4c11db7);
  *(uint *)(param_1 + 0xd8) = ~uVar3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0xd0;
    *(long *)(param_3 + 0x10) = param_1 + 0xd0;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  uVar1 = crc32b(uVar1,0x51,0x4c11db7);
  uVar1 = crc32b(uVar1,0x75,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar3 = crc32b(uVar1,0x79,0x4c11db7);
  *(uint *)(param_1 + 0xb0) = ~uVar3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0xa8;
    *(long *)(param_3 + 0x10) = param_1 + 0xa8;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = crc32b(0xffffffff,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar1,0x46,0x4c11db7);
  uVar4 = crc32b(uVar2,0x4e,0x4c11db7);
  uVar4 = crc32b(uVar4,0x75,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6d,0x4c11db7);
  uVar4 = crc32b(uVar4,0x62,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar3 = crc32b(uVar4,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x10) = ~uVar3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 8;
    *(long *)(param_3 + 0x10) = param_1 + 8;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x41800000;
  uVar4 = crc32b(uVar1,0x41,0x4c11db7);
  uVar4 = crc32b(uVar4,0x70,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar4 = crc32b(uVar4,0x74,0x4c11db7);
  uVar4 = crc32b(uVar4,0x75,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar3 = crc32b(uVar4,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x30) = ~uVar3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x28;
    *(long *)(param_3 + 0x10) = param_1 + 0x28;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x43160000;
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar2,0x44,0x4c11db7);
  uVar4 = crc32b(uVar4,0x69,0x4c11db7);
  uVar4 = crc32b(uVar4,0x73,0x4c11db7);
  uVar4 = crc32b(uVar4,0x74,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
  uVar4 = crc32b(uVar4,99,0x4c11db7);
  uVar3 = crc32b(uVar4,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x50) = ~uVar3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x48;
    *(long *)(param_3 + 0x10) = param_1 + 0x48;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar2 = crc32b(uVar2,0x52,0x4c11db7);
  *(undefined4 *)(param_1 + 0x60) = 0x42480000;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x67,0x4c11db7);
  uVar3 = crc32b(uVar2,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x70) = ~uVar3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x68;
    *(long *)(param_3 + 0x10) = param_1 + 0x68;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x80) = 0x42480000;
  uVar1 = crc32b(uVar1,0x4d,0x4c11db7);
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x78,0x4c11db7);
  uVar1 = crc32b(uVar1,0x43,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x43,0x4c11db7);
  uVar1 = crc32b(uVar1,0x53,0x4c11db7);
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  uVar1 = crc32b(uVar1,0x7a,0x4c11db7);
  uVar3 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x90) = ~uVar3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar5 = param_1 + 0x88;
    *(long *)(param_3 + 0x10) = param_1 + 0x88;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0x41200000;
  return;
}

