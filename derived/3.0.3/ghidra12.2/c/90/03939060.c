
void FUN_03939060(undefined8 *param_1,long param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  
  uVar1 = crc32b(0xffffffff,0x74,0x4c11db7);
  param_1[10] = &PTR_LAB_04b677d8;
  uVar2 = crc32b(uVar1,0x79,0x4c11db7);
  param_1[8] = param_1 + 10;
  uVar1 = crc32b(uVar1,0x72,0x4c11db7);
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[6] = &PTR_LAB_04b66308;
  uVar2 = crc32b(uVar2,0x70,0x4c11db7);
  uVar3 = crc32b(0xffffffff,0x72,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  *param_1 = &PTR_LAB_04b67680;
  param_1[1] = param_1 + 6;
  uVar5 = crc32b(uVar2,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = crc32b(uVar3,0x6e,0x4c11db7);
  *(uint *)(param_1 + 7) = ~uVar5;
  param_1[0x16] = param_2;
  uVar3 = crc32b(0xffffffff,0x73,0x4c11db7);
  uVar5 = crc32b(uVar1,0x73,0x4c11db7);
  *(undefined4 *)(param_1 + 0x17) = param_3;
  uVar1 = crc32b(uVar2,0x67,0x4c11db7);
  param_1[0xe] = &PTR_LAB_04b677d8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar6 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x13) = ~uVar5;
  puVar8 = param_1 + 0x12;
  *puVar8 = &PTR_LAB_04b677d8;
  param_1[2] = puVar8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 3) = 4;
  *(uint *)(param_1 + 0xb) = ~uVar6;
  uVar1 = crc32b(uVar3,99,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  param_1[0xc] = param_1 + 0xe;
  param_1[0xd] = 0x3f8000003e800000;
  uVar5 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 0xf) = ~uVar5;
  param_1[0x10] = puVar8;
  param_1[0x11] = &DAT_3f8000003f800000;
  uVar4 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar4 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,param_4);
  }
  param_1[5] = uVar4;
  (**(code **)(*param_4 + 0x18))(param_4);
  pbVar7 = (byte *)param_4[1];
  uVar5 = (uint)*pbVar7;
  if (*pbVar7 != 0) {
    uVar6 = 0xffffffff;
    do {
      pbVar7 = pbVar7 + 1;
      uVar6 = crc32b(uVar6,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar7;
    } while (uVar5 != 0);
    uVar5 = ~uVar6;
  }
  *(uint *)((long)param_1 + 0x1c) = uVar5;
  puVar8 = (undefined8 *)(param_2 + 0x5f0);
  if (*(long *)(param_2 + 0x5f8) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x5f8) + 0x20);
  }
  *puVar8 = param_1;
  *(undefined8 **)(param_2 + 0x5f8) = param_1;
  return;
}

