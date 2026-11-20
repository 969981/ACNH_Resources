
void FUN_03ef7140(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined *local_50;
  byte *local_48;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04ba7430;
  param_1[4] = 0;
  puVar4 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = (byte *)0x40f7294;
  FUN_03955370(param_1 + 5,&local_50,0);
  param_1[0x42] = 0;
  uVar1 = crc32b(0xffffffff,0x6d,0x4c11db7);
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x4b] = 0;
  uVar2 = crc32b(uVar1,0x50,0x4c11db7);
  uVar1 = crc32b(uVar1,0x42,0x4c11db7);
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  puVar5 = PTR_DAT_04bd1060;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
  *(undefined4 *)(param_1 + 0x50) = 0;
  puVar7 = PTR_DAT_04bd1080;
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  param_1[0x47] = param_1 + 0x49;
  param_1[0x41] = param_1 + 0x49;
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  *(undefined4 *)(param_1 + 0x48) = 1;
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  *(undefined4 *)(param_1 + 0x42) = 2;
  puVar8 = PTR_DAT_04bd1140;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
  param_1[0x54] = 0;
  uVar1 = crc32b(uVar1,0x4e,0x4c11db7);
  param_1[0x53] = 0;
  puVar6 = PTR_DAT_04bd1070;
  uVar2 = crc32b(uVar2,0x4e,0x4c11db7);
  uVar1 = crc32b(uVar1,0x75,0x4c11db7);
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar13 = crc32b(uVar1,0x6d,0x4c11db7);
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x45] = puVar7 + 0x10;
  param_1[0x49] = puVar7 + 0x10;
  param_1[0x3f] = puVar5 + 0x10;
  param_1[0x40] = param_1 + 0x45;
  lVar9 = *(long *)puVar8;
  uVar11 = crc32b(uVar2,0x6d,0x4c11db7);
  *(uint *)(param_1 + 0x46) = ~uVar13;
  param_1[0x52] = puVar6 + 0x10;
  *(uint *)(param_1 + 0x4a) = ~uVar11;
  puVar5 = PTR_PTR_04bb2238;
  uVar10 = 0;
  if (lVar9 != 0) {
    uVar10 = FUN_03954f70(lVar9,PTR_PTR_04bb2238);
  }
  lVar9 = *(long *)puVar5;
  param_1[0x5a] = uVar10;
  (**(code **)(lVar9 + 0x18))(puVar5);
  pbVar12 = *(byte **)(puVar5 + 8);
  uVar13 = (uint)*pbVar12;
  if (*pbVar12 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar13,0x4c11db7);
      uVar13 = (uint)*pbVar12;
    } while (uVar13 != 0);
    uVar11 = ~uVar11;
  }
  lVar9 = *(long *)puVar8;
  *(uint *)(param_1 + 0x57) = uVar11;
  local_50 = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  local_48 = (byte *)0x40f3f69;
  uVar10 = 0;
  if (lVar9 != 0) {
    uVar10 = FUN_03954f70(lVar9,&local_50);
  }
  param_1[0x44] = uVar10;
  (**(code **)(local_50 + 0x18))(&local_50);
  uVar13 = (uint)*local_48;
  if (*local_48 != 0) {
    uVar11 = 0xffffffff;
    do {
      local_48 = local_48 + 1;
      uVar11 = crc32b(uVar11,uVar13,0x4c11db7);
      uVar13 = (uint)*local_48;
    } while (uVar13 != 0);
    uVar13 = ~uVar11;
  }
  lVar9 = *(long *)puVar8;
  *(uint *)((long)param_1 + 0x214) = uVar13;
  local_50 = puVar4 + 0x10;
  local_48 = &DAT_04064fff;
  plVar3 = param_1 + 6;
  if (param_1[7] != 0) {
    plVar3 = (long *)(param_1[7] + 0x20);
  }
  *plVar3 = (long)(param_1 + 0x3f);
  param_1[7] = param_1 + 0x3f;
  uVar10 = 0;
  if (lVar9 != 0) {
    uVar10 = FUN_03954f70(lVar9,&local_50);
  }
  param_1[0x5a] = uVar10;
  (**(code **)(local_50 + 0x18))(&local_50);
  uVar13 = (uint)*local_48;
  if (*local_48 != 0) {
    uVar11 = 0xffffffff;
    do {
      local_48 = local_48 + 1;
      uVar11 = crc32b(uVar11,uVar13,0x4c11db7);
      uVar13 = (uint)*local_48;
    } while (uVar13 != 0);
    uVar13 = ~uVar11;
  }
  *(uint *)(param_1 + 0x57) = uVar13;
  plVar3 = param_1 + 8;
  if (param_1[9] != 0) {
    plVar3 = (long *)(param_1[9] + 0x30);
  }
  *plVar3 = (long)(param_1 + 0x52);
  param_1[9] = param_1 + 0x52;
  param_1[0x59] = param_1 + 5;
  return;
}

