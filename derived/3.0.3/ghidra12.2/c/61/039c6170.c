
void FUN_039c6170(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined *local_40;
  byte *local_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_38 = (byte *)0x408980b;
  local_40 = puVar1;
  FUN_03955370(param_1,&local_40,0);
  puVar7 = PTR_DAT_04bd1068;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = &PTR_LAB_04b6ad10;
  uVar3 = crc32b(0xffffffff,100,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  puVar2 = PTR_DAT_04bd1088 + 0x10;
  param_1[0x3a] = puVar7 + 0x10;
  param_1[0x3b] = param_1 + 0x40;
  param_1[0x40] = puVar2;
  puVar2 = PTR_DAT_04bd10a8;
  uVar4 = crc32b(0xffffffff,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x66,0x4c11db7);
  *(undefined1 *)(param_1 + 0x43) = 0;
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x44] = puVar2 + 0x10;
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  param_1[0x4b] = 0x100000000;
  param_1[0x42] = param_1 + 0x4d;
  uVar9 = crc32b(uVar3,0x74,0x4c11db7);
  uVar3 = crc32b(uVar4,0x62,0x4c11db7);
  uVar4 = crc32b(0xffffffff,0x69,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
  param_1[0x51] = PTR_DAT_04bd1090 + 0x10;
  uVar10 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar4,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar4 = crc32b(0xffffffff,99,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
  param_1[0x4f] = param_1 + 0x51;
  param_1[0x54] = &DAT_3f8000003f800000;
  param_1[0x55] = &DAT_3f8000003f800000;
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar5 = crc32b(uVar4,0x72,0x4c11db7);
  *(uint *)(param_1 + 0x52) = ~uVar5;
  puVar2 = PTR_DAT_04bd1078;
  *(uint *)(param_1 + 0x41) = ~uVar10;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x58] = 0;
  *(uint *)(param_1 + 0x45) = ~uVar9;
  param_1[0x4d] = puVar2 + 0x10;
  param_1[0x56] = puVar2 + 0x10;
  uVar4 = crc32b(0xffffffff,0x70,0x4c11db7);
  uVar3 = crc32b(uVar3,0x73,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar4 = crc32b(uVar4,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar4 = crc32b(uVar4,100,0x4c11db7);
  param_1[0x53] = param_1 + 0x56;
  param_1[0x3c] = param_1 + 0x56;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 4;
  uVar4 = crc32b(uVar4,0x69,0x4c11db7);
  uVar4 = crc32b(uVar4,0x73,0x4c11db7);
  uVar9 = crc32b(uVar3,0x79,0x4c11db7);
  uVar3 = crc32b(uVar4,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  *(uint *)(param_1 + 0x4e) = ~uVar9;
  uVar3 = crc32b(uVar3,0x68,0x4c11db7);
  uVar3 = crc32b(uVar3,0x72,0x4c11db7);
  uVar9 = crc32b(uVar3,0x65,0x4c11db7);
  *(undefined4 *)(param_1 + 0x59) = 0x40000000;
  *(undefined4 *)(param_1 + 0x5a) = 0x40800000;
  *(uint *)(param_1 + 0x57) = ~uVar9;
  local_38 = &DAT_040d70e6;
  uVar8 = 0;
  local_40 = puVar1;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar8 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_40);
  }
  param_1[0x3f] = uVar8;
  (**(code **)(local_40 + 0x18))(&local_40);
  uVar9 = (uint)*local_38;
  if (*local_38 != 0) {
    uVar10 = 0xffffffff;
    do {
      local_38 = local_38 + 1;
      uVar10 = crc32b(uVar10,uVar9,0x4c11db7);
      uVar9 = (uint)*local_38;
    } while (uVar9 != 0);
    uVar9 = ~uVar10;
  }
  *(uint *)((long)param_1 + 0x1ec) = uVar9;
  plVar6 = param_1 + 1;
  if (param_1[2] != 0) {
    plVar6 = (long *)(param_1[2] + 0x20);
  }
  *plVar6 = (long)(param_1 + 0x3a);
  param_1[2] = param_1 + 0x3a;
  return;
}

