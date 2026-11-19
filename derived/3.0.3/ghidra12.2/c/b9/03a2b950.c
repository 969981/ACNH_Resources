
void FUN_03a2b950(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_e8;
  byte *local_e0;
  
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  uVar1 = crc32b(0xffffffff,0x65,0x4c11db7);
  uVar2 = crc32b(uVar1,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x79,0x4c11db7);
  uVar2 = crc32b(uVar2,0x70,0x4c11db7);
  uVar6 = crc32b(uVar2,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x3d8) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x3d0;
    *(long *)(param_2 + 0x10) = param_1 + 0x3d0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  uVar2 = crc32b(0xffffffff,0x61,0x4c11db7);
  *(undefined8 *)(param_1 + 0x548) = 0;
  uVar2 = crc32b(uVar2,0x73,0x4c11db7);
  uVar2 = crc32b(uVar2,0x70,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar6 = crc32b(uVar2,0x74,0x4c11db7);
  *(uint *)(param_1 + 0x540) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x538;
    *(long *)(param_2 + 0x10) = param_1 + 0x538;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0x3f800000;
  uVar2 = crc32b(0xffffffff,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x68,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x73,0x4c11db7);
  uVar2 = crc32b(uVar2,0x68,0x4c11db7);
  uVar2 = crc32b(uVar2,0x68,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x62,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar6 = crc32b(uVar2,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x418) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x410;
    *(long *)(param_2 + 0x10) = param_1 + 0x410;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined1 **)(param_1 + 0x428) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x430) = &DAT_3f8000003f800000;
  uVar2 = crc32b(0xffffffff,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x62,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar6 = crc32b(uVar2,100,0x4c11db7);
  *(uint *)(param_1 + 0x3f8) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x3f0;
    *(long *)(param_2 + 0x10) = param_1 + 0x3f0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x408) = 2;
  uVar2 = crc32b(uVar1,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x62,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar2,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x70,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x68,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar6 = crc32b(uVar3,0x70,0x4c11db7);
  *(uint *)(param_1 + 0x480) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x478;
    *(long *)(param_2 + 0x10) = param_1 + 0x478;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar3 = crc32b(uVar2,0x6c,0x4c11db7);
  *(undefined1 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x66,0x4c11db7);
  uVar3 = crc32b(uVar3,0x66,0x4c11db7);
  uVar3 = crc32b(uVar3,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar6 = crc32b(uVar3,0x74,0x4c11db7);
  *(uint *)(param_1 + 0x4a0) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x498;
    *(long *)(param_2 + 0x10) = param_1 + 0x498;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar3 = crc32b(uVar2,99,0x4c11db7);
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar3 = crc32b(uVar3,0x70,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar6 = crc32b(uVar3,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x4c0) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x4b8;
    *(long *)(param_2 + 0x10) = param_1 + 0x4b8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar3 = crc32b(0xffffffff,0x6c,0x4c11db7);
  *(undefined1 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar6 = crc32b(uVar3,0x79,0x4c11db7);
  *(uint *)(param_1 + 0x520) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x518;
    *(long *)(param_2 + 0x10) = param_1 + 0x518;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
  uVar3 = crc32b(0xffffffff,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar3 = crc32b(uVar3,0x70,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar6 = crc32b(uVar3,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x560) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x558;
    *(long *)(param_2 + 0x10) = param_1 + 0x558;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x570) = 0x41200000;
  uVar1 = crc32b(uVar1,0x78,0x4c11db7);
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar1,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x79,0x4c11db7);
  uVar3 = crc32b(uVar3,0x70,0x4c11db7);
  uVar6 = crc32b(uVar3,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x440) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x438;
    *(long *)(param_2 + 0x10) = param_1 + 0x438;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x72,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  uVar6 = crc32b(uVar1,0x6e,0x4c11db7);
  *(uint *)(param_1 + 0x460) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x458;
    *(long *)(param_2 + 0x10) = param_1 + 0x458;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x470) = 5;
  uVar1 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,100,0x4c11db7);
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar1 = crc32b(uVar1,99,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar6 = crc32b(uVar1,99,0x4c11db7);
  *(uint *)(param_1 + 0x4e0) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x4d8;
    *(long *)(param_2 + 0x10) = param_1 + 0x4d8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined1 *)(param_1 + 0x4f0) = 1;
  uVar1 = crc32b(0xffffffff,0x71,0x4c11db7);
  uVar1 = crc32b(uVar1,0x75,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  uVar1 = crc32b(uVar1,0x74,0x4c11db7);
  uVar6 = crc32b(uVar1,0x79,0x4c11db7);
  *(uint *)(param_1 + 0x500) = ~uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x4f8;
    *(long *)(param_2 + 0x10) = param_1 + 0x4f8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x510) = 0;
  FUN_0074fda4(&local_e8,"%sthreshhold",&DAT_0407ebb1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 8) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1;
    *(long *)(param_2 + 0x10) = param_1;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x3f400000;
  FUN_0074fda4(&local_e8,"%sthreshold_range",&DAT_0407ebb1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x28) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x20;
    *(long *)(param_2 + 0x10) = param_1 + 0x20;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x3dcccccd;
  FUN_0074fda4(&local_e8,"%sintensity",&DAT_0407ebb1);
  *(undefined8 *)(param_1 + 0x50) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x48) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x40;
    *(long *)(param_2 + 0x10) = param_1 + 0x40;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  FUN_0074fda4(&local_e8,"%sfinalgather",&DAT_0407ebb1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x68) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x60;
    *(long *)(param_2 + 0x10) = param_1 + 0x60;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x78) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x80) = &DAT_3f8000003f800000;
  FUN_0074fda4(&local_e8,"%sexpand",&DAT_0407ebb1);
  *(undefined8 *)(param_1 + 0x98) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x90) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x88;
    *(long *)(param_2 + 0x10) = param_1 + 0x88;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  FUN_0074fda4(&local_e8,"%sthreshhold","shaft_");
  *(undefined8 *)(param_1 + 0xb8) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0xb0) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0xa8;
    *(long *)(param_2 + 0x10) = param_1 + 0xa8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0x3f400000;
  FUN_0074fda4(&local_e8,"%sthreshold_range","shaft_");
  *(undefined8 *)(param_1 + 0xd8) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0xd0) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 200;
    *(long *)(param_2 + 0x10) = param_1 + 200;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0x3dcccccd;
  FUN_0074fda4(&local_e8,"%sintensity","shaft_");
  *(undefined8 *)(param_1 + 0xf8) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0xf0) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0xe8;
    *(long *)(param_2 + 0x10) = param_1 + 0xe8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  FUN_0074fda4(&local_e8,"%sfinalgather","shaft_");
  *(undefined8 *)(param_1 + 0x118) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x110) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x108;
    *(long *)(param_2 + 0x10) = param_1 + 0x108;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x120) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x128) = &DAT_3f8000003f800000;
  FUN_0074fda4(&local_e8,"%sexpand","shaft_");
  *(undefined8 *)(param_1 + 0x140) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x138) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x130;
    *(long *)(param_2 + 0x10) = param_1 + 0x130;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x148) = 0x3f800000;
  FUN_0074fda4(&local_e8,"color%d",1);
  *(undefined8 *)(param_1 + 0x340) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x338) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x330;
    *(long *)(param_2 + 0x10) = param_1 + 0x330;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x348) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x350) = &DAT_3f8000003f800000;
  FUN_0074fda4(&local_e8,"color%d",2);
  *(undefined8 *)(param_1 + 0x368) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x360) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x358;
    *(long *)(param_2 + 0x10) = param_1 + 0x358;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x370) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x378) = &DAT_3f8000003f800000;
  FUN_0074fda4(&local_e8,"color%d",3);
  *(undefined8 *)(param_1 + 0x390) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x388) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x380;
    *(long *)(param_2 + 0x10) = param_1 + 0x380;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x398) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x3a0) = &DAT_3f8000003f800000;
  FUN_0074fda4(&local_e8,"color%d",4);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x3b0) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x3a8;
    *(long *)(param_2 + 0x10) = param_1 + 0x3a8;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x3c0) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0x3f800000;
  FUN_0074fda4(&local_e8,"enable_%s","depth_gain");
  *(undefined8 *)(param_1 + 0x160) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x158) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x150;
    *(long *)(param_2 + 0x10) = param_1 + 0x150;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  fVar9 = DAT_04c4bac0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  FUN_0074fda4(&local_e8,"%s_start","depth_gain");
  *(undefined8 *)(param_1 + 0x180) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x178) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x170;
    *(long *)(param_2 + 0x10) = param_1 + 0x170;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  fVar10 = DAT_04c4bac0;
  *(float *)(param_1 + 0x188) = fVar9 * 0.0;
  FUN_0074fda4(&local_e8,"%s_end","depth_gain");
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x198) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 400;
    *(long *)(param_2 + 0x10) = param_1 + 400;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(float *)(param_1 + 0x1a8) = fVar10 * 100.0;
  FUN_0074fda4(&local_e8,"%s_value","depth_gain");
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x1b8) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x1b0;
    *(long *)(param_2 + 0x10) = param_1 + 0x1b0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
  FUN_0074fda4(&local_e8,"%s_value_start","depth_gain");
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x1d8) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x1d0;
    *(long *)(param_2 + 0x10) = param_1 + 0x1d0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
  FUN_0074fda4(&local_e8,"enable_%s","depth_offset");
  *(undefined8 *)(param_1 + 0x200) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x1f8) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x1f0;
    *(long *)(param_2 + 0x10) = param_1 + 0x1f0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  fVar9 = DAT_04c4bac0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  FUN_0074fda4(&local_e8,"%s_start","depth_offset");
  *(undefined8 *)(param_1 + 0x220) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x218) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x210;
    *(long *)(param_2 + 0x10) = param_1 + 0x210;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  fVar10 = DAT_04c4bac0;
  *(float *)(param_1 + 0x228) = fVar9 * 0.0;
  FUN_0074fda4(&local_e8,"%s_end","depth_offset");
  *(undefined8 *)(param_1 + 0x240) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x238) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x230;
    *(long *)(param_2 + 0x10) = param_1 + 0x230;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(float *)(param_1 + 0x248) = fVar10 * 100.0;
  FUN_0074fda4(&local_e8,"%s_value","depth_offset");
  *(undefined8 *)(param_1 + 0x260) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 600) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x250;
    *(long *)(param_2 + 0x10) = param_1 + 0x250;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x268) = 0x3f800000;
  FUN_0074fda4(&local_e8,"%s_value_start","depth_offset");
  *(undefined8 *)(param_1 + 0x280) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x278) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x270;
    *(long *)(param_2 + 0x10) = param_1 + 0x270;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x288) = 0x3f800000;
  FUN_0074fda4(&local_e8,"enable_%s","shaft_d");
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x298) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x290;
    *(long *)(param_2 + 0x10) = param_1 + 0x290;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  fVar9 = DAT_04c4bac0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  FUN_0074fda4(&local_e8,"%s_start","shaft_d");
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x2b8) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x2b0;
    *(long *)(param_2 + 0x10) = param_1 + 0x2b0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  fVar10 = DAT_04c4bac0;
  *(float *)(param_1 + 0x2c8) = fVar9 * 0.0;
  FUN_0074fda4(&local_e8,"%s_end","shaft_d");
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (*pbVar8 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x2d8) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x2d0;
    *(long *)(param_2 + 0x10) = param_1 + 0x2d0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(float *)(param_1 + 0x2e8) = fVar10 * 100.0;
  FUN_0074fda4(&local_e8,"%s_value","shaft_d");
  *(undefined8 *)(param_1 + 0x300) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_e0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x2f8) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x2f0;
    *(long *)(param_2 + 0x10) = param_1 + 0x2f0;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
  FUN_0074fda4(&local_e8,"%s_value_start","shaft_d");
  *(undefined8 *)(param_1 + 800) = 0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  uVar6 = (uint)*local_e0;
  if (*local_e0 != 0) {
    uVar7 = 0xffffffff;
    do {
      local_e0 = local_e0 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*local_e0;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x318) = uVar6;
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *plVar4 = param_1 + 0x310;
    *(long *)(param_2 + 0x10) = param_1 + 0x310;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  bVar5 = *(int *)(param_1 + 0x578) != 1;
  fVar9 = *(float *)(param_1 + 0x428);
  if (bVar5) {
    fVar9 = 0.298912;
  }
  *(float *)(param_1 + 0x580) = fVar9;
  fVar10 = *(float *)(param_1 + 0x42c);
  if (bVar5) {
    fVar10 = 0.586611;
  }
  *(float *)(param_1 + 0x584) = fVar10;
  fVar11 = *(float *)(param_1 + 0x430);
  if (bVar5) {
    fVar11 = 0.114478;
  }
  *(float *)(param_1 + 0x588) = fVar11;
  fVar12 = fVar9 + fVar10 + fVar11;
  if (0.0 < fVar12) {
    fVar12 = 1.0 / fVar12;
    *(float *)(param_1 + 0x580) = fVar9 * fVar12;
    *(float *)(param_1 + 0x584) = fVar10 * fVar12;
    *(float *)(param_1 + 0x588) = fVar11 * fVar12;
  }
  return;
}

