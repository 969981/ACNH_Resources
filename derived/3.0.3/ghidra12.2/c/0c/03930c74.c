
void FUN_03930c74(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long *plVar11;
  undefined *local_70;
  char *pcStack_68;
  
  *(undefined8 *)(param_1 + 0x230) = 0;
  uVar2 = crc32b(0xffffffff,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x76,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar3 = crc32b(uVar2,0x6c,0x4c11db7);
  *(uint *)(param_1 + 0x228) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x220;
    *(long *)(param_2 + 0x10) = param_1 + 0x220;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  uVar2 = crc32b(0xffffffff,0x73,0x4c11db7);
  *(undefined4 *)(param_1 + 0x238) = 0x40000000;
  uVar4 = crc32b(uVar2,0x74,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar3 = crc32b(uVar4,0x74,0x4c11db7);
  *(uint *)(param_1 + 0x1a8) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x1a0;
    *(long *)(param_2 + 0x10) = param_1 + 0x1a0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x42c80000;
  uVar4 = crc32b(0xffffffff,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar4,100,0x4c11db7);
  *(uint *)(param_1 + 0x1c8) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x1c0;
    *(long *)(param_2 + 0x10) = param_1 + 0x1c0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0x43480000;
  uVar5 = crc32b(0xffffffff,0x6e,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar5 = crc32b(uVar5,0x62,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar5,0x65,0x4c11db7);
  *(uint *)(param_1 + 8) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1;
    *(long *)(param_2 + 0x10) = param_1;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar5 = crc32b(0xffffffff,0x66,0x4c11db7);
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar5,0x65,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
  uVar7 = crc32b(uVar6,0x61,0x4c11db7);
  uVar7 = crc32b(uVar7,0x62,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar7,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x28) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x20;
    *(long *)(param_2 + 0x10) = param_1 + 0x20;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar7 = crc32b(0xffffffff,100,0x4c11db7);
  uVar8 = crc32b(uVar7,0x65,0x4c11db7);
  uVar8 = crc32b(uVar8,0x70,0x4c11db7);
  uVar8 = crc32b(uVar8,0x74,0x4c11db7);
  uVar8 = crc32b(uVar8,0x68,0x4c11db7);
  uVar8 = crc32b(uVar8,0x5f,0x4c11db7);
  uVar8 = crc32b(uVar8,0x62,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar8,0x75,0x4c11db7);
  uVar3 = crc32b(uVar8,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x48) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x40;
    *(long *)(param_2 + 0x10) = param_1 + 0x40;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar4 = crc32b(uVar4,0x62,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar8 = crc32b(uVar4,0x76,0x4c11db7);
  uVar8 = crc32b(uVar8,0x69,0x4c11db7);
  uVar8 = crc32b(uVar8,0x67,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6e,0x4c11db7);
  uVar8 = crc32b(uVar8,0x65,0x4c11db7);
  uVar8 = crc32b(uVar8,0x74,0x4c11db7);
  uVar8 = crc32b(uVar8,0x74,0x4c11db7);
  uVar8 = crc32b(uVar8,0x69,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6e,0x4c11db7);
  uVar8 = crc32b(uVar8,0x67,0x4c11db7);
  uVar8 = crc32b(uVar8,0x5f,0x4c11db7);
  uVar9 = crc32b(uVar8,99,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6f,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6f,0x4c11db7);
  uVar10 = crc32b(uVar9,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x68) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x60;
    *(long *)(param_2 + 0x10) = param_1 + 0x60;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar9 = crc32b(uVar8,0x62,0x4c11db7);
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar9 = crc32b(uVar9,0x75,0x4c11db7);
  uVar10 = crc32b(uVar9,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x88) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x80;
    *(long *)(param_2 + 0x10) = param_1 + 0x80;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  uVar8 = crc32b(uVar8,0x32,0x4c11db7);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar8 = crc32b(uVar8,0x5f,0x4c11db7);
  uVar8 = crc32b(uVar8,0x73,0x4c11db7);
  uVar8 = crc32b(uVar8,0x68,0x4c11db7);
  uVar8 = crc32b(uVar8,0x61,0x4c11db7);
  uVar8 = crc32b(uVar8,0x70,0x4c11db7);
  uVar10 = crc32b(uVar8,0x65,0x4c11db7);
  *(uint *)(param_1 + 0xa8) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0xa0;
    *(long *)(param_2 + 0x10) = param_1 + 0xa0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar8 = crc32b(uVar4,99,0x4c11db7);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar8 = crc32b(uVar8,0x6f,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6f,0x4c11db7);
  uVar8 = crc32b(uVar8,0x72,0x4c11db7);
  uVar8 = crc32b(uVar8,0x5f,0x4c11db7);
  uVar9 = crc32b(uVar8,99,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6f,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6e,0x4c11db7);
  uVar9 = crc32b(uVar9,0x74,0x4c11db7);
  uVar9 = crc32b(uVar9,0x72,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6f,0x4c11db7);
  uVar10 = crc32b(uVar9,0x6c,0x4c11db7);
  *(uint *)(param_1 + 200) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0xc0;
    *(long *)(param_2 + 0x10) = param_1 + 0xc0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar8 = crc32b(uVar8,0x72,0x4c11db7);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar8 = crc32b(uVar8,0x65,0x4c11db7);
  uVar8 = crc32b(uVar8,0x76,0x4c11db7);
  uVar8 = crc32b(uVar8,0x65,0x4c11db7);
  uVar8 = crc32b(uVar8,0x72,0x4c11db7);
  uVar8 = crc32b(uVar8,0x73,0x4c11db7);
  uVar10 = crc32b(uVar8,0x65,0x4c11db7);
  *(uint *)(param_1 + 0xe8) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0xe0;
    *(long *)(param_2 + 0x10) = param_1 + 0xe0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  uVar8 = crc32b(0xffffffff,0x69,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6e,0x4c11db7);
  uVar8 = crc32b(uVar8,100,0x4c11db7);
  uVar8 = crc32b(uVar8,0x69,0x4c11db7);
  uVar8 = crc32b(uVar8,0x72,0x4c11db7);
  uVar8 = crc32b(uVar8,0x65,0x4c11db7);
  uVar8 = crc32b(uVar8,99,0x4c11db7);
  uVar8 = crc32b(uVar8,0x74,0x4c11db7);
  uVar8 = crc32b(uVar8,0x5f,0x4c11db7);
  uVar9 = crc32b(uVar8,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6e,0x4c11db7);
  uVar9 = crc32b(uVar9,0x61,0x4c11db7);
  uVar9 = crc32b(uVar9,0x62,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar10 = crc32b(uVar9,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x108) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x100;
    *(long *)(param_2 + 0x10) = param_1 + 0x100;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar9 = crc32b(uVar8,100,0x4c11db7);
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  uVar9 = crc32b(uVar9,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,0x70,0x4c11db7);
  uVar9 = crc32b(uVar9,0x74,0x4c11db7);
  uVar9 = crc32b(uVar9,0x68,0x4c11db7);
  uVar9 = crc32b(uVar9,0x5f,0x4c11db7);
  uVar9 = crc32b(uVar9,99,0x4c11db7);
  uVar9 = crc32b(uVar9,0x61,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6e,0x4c11db7);
  uVar9 = crc32b(uVar9,99,0x4c11db7);
  uVar9 = crc32b(uVar9,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar9 = crc32b(uVar9,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6e,0x4c11db7);
  uVar9 = crc32b(uVar9,0x61,0x4c11db7);
  uVar9 = crc32b(uVar9,0x62,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar10 = crc32b(uVar9,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x128) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x120;
    *(long *)(param_2 + 0x10) = param_1 + 0x120;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar9 = crc32b(uVar4,0x72,0x4c11db7);
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  uVar9 = crc32b(uVar9,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,100,0x4c11db7);
  uVar9 = crc32b(uVar9,0x75,0x4c11db7);
  uVar9 = crc32b(uVar9,99,0x4c11db7);
  uVar9 = crc32b(uVar9,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,0x5f,0x4c11db7);
  uVar9 = crc32b(uVar9,100,0x4c11db7);
  uVar9 = crc32b(uVar9,0x72,0x4c11db7);
  uVar9 = crc32b(uVar9,0x61,0x4c11db7);
  uVar10 = crc32b(uVar9,0x77,0x4c11db7);
  *(uint *)(param_1 + 0x148) = ~uVar10;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x140;
    *(long *)(param_2 + 0x10) = param_1 + 0x140;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar9 = crc32b(uVar5,0x73,0x4c11db7);
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  uVar9 = crc32b(uVar9,0x74,0x4c11db7);
  uVar9 = crc32b(uVar9,0x61,0x4c11db7);
  uVar9 = crc32b(uVar9,0x72,0x4c11db7);
  uVar10 = crc32b(uVar9,0x74,0x4c11db7);
  *(uint *)(param_1 + 0x1e8) = ~uVar10;
  if (param_2 == 0) {
    uVar10 = crc32b(uVar6,100,0x4c11db7);
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0x42f00000;
    *(uint *)(param_1 + 0x208) = ~uVar10;
  }
  else {
    uVar10 = crc32b(uVar6,100,0x4c11db7);
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x1e0;
    *(long *)(param_2 + 0x10) = param_1 + 0x1e0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(uint *)(param_1 + 0x208) = ~uVar10;
    *(undefined4 *)(param_1 + 0x1f8) = 0x42f00000;
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x200;
    *(long *)(param_2 + 0x10) = param_1 + 0x200;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar6 = crc32b(uVar3,0x5f,0x4c11db7);
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,100,0x4c11db7);
  uVar3 = crc32b(uVar6,100,0x4c11db7);
  *(uint *)(param_1 + 0x248) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x240;
    *(long *)(param_2 + 0x10) = param_1 + 0x240;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar3 = crc32b(uVar2,0x6e,0x4c11db7);
  *(uint *)(param_1 + 0x288) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x280;
    *(long *)(param_2 + 0x10) = param_1 + 0x280;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0x3f800000;
  uVar2 = crc32b(0xffffffff,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x70,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar3 = crc32b(uVar2,0x68,0x4c11db7);
  *(uint *)(param_1 + 0x2a8) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x2a0;
    *(long *)(param_2 + 0x10) = param_1 + 0x2a0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0x44fa0000447a0000;
  *(undefined8 *)(param_1 + 0x2c0) = 0x457a0000453b8000;
  uVar2 = crc32b(uVar8,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x78,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar2,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x72,0x4c11db7);
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar6,0x73,0x4c11db7);
  *(uint *)(param_1 + 0x2d0) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x2c8;
    *(long *)(param_2 + 0x10) = param_1 + 0x2c8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar6 = crc32b(uVar2,0x72,0x4c11db7);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar3 = crc32b(uVar6,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x310) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x308;
    *(long *)(param_2 + 0x10) = param_1 + 0x308;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar2 = crc32b(uVar2,0x73,0x4c11db7);
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar2,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x2f0) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x2e8;
    *(long *)(param_2 + 0x10) = param_1 + 0x2e8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar2 = crc32b(uVar8,0x73,0x4c11db7);
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined1 **)(param_1 + 0x300) = &DAT_3f8000003f800000;
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar2,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x330) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x328;
    *(long *)(param_2 + 0x10) = param_1 + 0x328;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar2 = crc32b(0xffffffff,0x76,0x4c11db7);
  *(undefined4 *)(param_1 + 0x340) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x358) = 0;
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x67,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x67,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar2,0x62,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar6,0x75,0x4c11db7);
  uVar3 = crc32b(uVar8,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x350) = ~uVar3;
  if (param_2 == 0) {
    uVar6 = crc32b(uVar6,0x65,0x4c11db7);
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
    uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
    uVar3 = crc32b(uVar6,100,0x4c11db7);
    *(uint *)(param_1 + 0x370) = ~uVar3;
  }
  else {
    uVar6 = crc32b(uVar6,0x65,0x4c11db7);
    uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x348;
    *(long *)(param_2 + 0x10) = param_1 + 0x348;
    uVar3 = crc32b(uVar6,100,0x4c11db7);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(uint *)(param_1 + 0x370) = ~uVar3;
    *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x368;
    *(long *)(param_2 + 0x10) = param_1 + 0x368;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar2,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x390) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x388;
    *(long *)(param_2 + 0x10) = param_1 + 0x388;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0x3f40000000000000;
  uVar2 = crc32b(uVar5,0x6d,0x4c11db7);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar2,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x4b8) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x4b0;
    *(long *)(param_2 + 0x10) = param_1 + 0x4b0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x4c8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x4d0) = &DAT_3f8000003f800000;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "vignetting_shape_0";
  local_70 = puVar1;
  FUN_039319f0(param_1 + 0x3b0,&local_70,param_2);
  pcStack_68 = "vignetting_shape_1";
  local_70 = puVar1;
  FUN_039319f0(param_1 + 0x430,&local_70,param_2);
  *(undefined8 *)(param_1 + 0x170) = 0;
  uVar2 = crc32b(uVar4,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar3 = crc32b(uVar2,0x78,0x4c11db7);
  *(uint *)(param_1 + 0x168) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x160;
    *(long *)(param_2 + 0x10) = param_1 + 0x160;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  uVar2 = crc32b(uVar7,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar3 = crc32b(uVar2,0x78,0x4c11db7);
  *(uint *)(param_1 + 0x268) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x260;
    *(long *)(param_2 + 0x10) = param_1 + 0x260;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0x43480000;
  uVar2 = crc32b(uVar4,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar2,0x6c,0x4c11db7);
  *(uint *)(param_1 + 0x188) = ~uVar3;
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar11 = param_1 + 0x180;
    *(long *)(param_2 + 0x10) = param_1 + 0x180;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}

