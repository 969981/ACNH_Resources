
void FUN_039a2490(long *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  undefined *local_50;
  byte *local_48;
  
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = (long)param_1;
  param_1[0xc] = 0;
  puVar5 = PTR_DAT_04bd1070;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  puVar7 = PTR_DAT_04bd1140;
  param_1[4] = 0;
  puVar5 = PTR_PTR_04bb2238;
  lVar8 = *(long *)puVar7;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar5;
  param_1[8] = lVar9;
  (**(code **)(lVar8 + 0x18))(puVar5);
  puVar6 = PTR_DAT_04bd1068;
  pbVar12 = *(byte **)(puVar5 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar11 = ~uVar11;
  }
  uVar1 = crc32b(0xffffffff,0x73,0x4c11db7);
  *(uint *)(param_1 + 5) = uVar11;
  param_1[0x10] = 0;
  puVar5 = PTR_DAT_04bd1088;
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  plVar14 = param_1 + 0xd;
  *plVar14 = (long)(puVar6 + 0x10);
  uVar1 = crc32b(uVar1,0x76,0x4c11db7);
  *(undefined4 *)(param_1 + 0x10) = 3;
  *param_1 = (long)&PTR_LAB_04b69ca8;
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  param_1[0x16] = (long)(puVar5 + 0x10);
  param_1[0x1a] = (long)(puVar5 + 0x10);
  puVar5 = PTR_DAT_04bd1080;
  uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
  uVar2 = crc32b(0xffffffff,0x65,0x4c11db7);
  uVar3 = crc32b(0xffffffff,0x61,0x4c11db7);
  *(int *)(param_1 + 0x15) = param_2;
  *(uint *)((long)param_1 + 0xac) = param_2 * 0x100 + 0x100U | param_3 + 1U;
  param_1[0x18] = (long)(param_1 + 0x1a);
  uVar1 = crc32b(uVar1,0x69,0x4c11db7);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x20] = 0;
  plVar13 = param_1 + 0x1e;
  *plVar13 = (long)(puVar5 + 0x10);
  uVar3 = crc32b(uVar3,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  param_1[0x1c] = (long)plVar13;
  local_50 = PTR_DAT_04bb2020;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x62,0x4c11db7);
  uVar3 = crc32b(uVar3,0x69,0x4c11db7);
  uVar1 = crc32b(uVar1,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x76,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  lVar8 = *(long *)puVar7;
  param_1[0xe] = (long)(param_1 + 0x16);
  param_1[0xf] = (long)plVar13;
  uVar10 = crc32b(uVar2,0x65,0x4c11db7);
  uVar11 = crc32b(uVar3,0x65,0x4c11db7);
  uVar4 = crc32b(uVar1,0x78,0x4c11db7);
  local_50 = local_50 + 0x10;
  *(uint *)(param_1 + 0x17) = ~uVar10;
  local_48 = (byte *)0x40dc3fe;
  *(uint *)(param_1 + 0x1b) = ~uVar11;
  *(uint *)(param_1 + 0x1f) = ~uVar4;
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = FUN_03954f70(lVar8,&local_50);
  }
  param_1[0x12] = lVar9;
  (**(code **)(local_50 + 0x18))(&local_50);
  uVar10 = (uint)*local_48;
  if (*local_48 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0xffffffff;
    do {
      local_48 = local_48 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*local_48;
    } while (uVar10 != 0);
    uVar11 = ~uVar11;
  }
  *(uint *)((long)param_1 + 0x84) = uVar11;
  plVar13 = param_1 + 1;
  if (param_1[2] != 0) {
    plVar13 = (long *)(param_1[2] + 0x20);
  }
  *plVar13 = (long)plVar14;
  param_1[2] = (long)plVar14;
  return;
}

