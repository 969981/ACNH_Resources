
void FUN_039e8e20(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 auStack_448 [1048];
  
  puVar4 = PTR_DAT_04bd1070;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0;
  puVar4 = PTR_PTR_04bb2238;
  lVar5 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    lVar5 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,PTR_PTR_04bb2238);
  }
  lVar7 = *(long *)puVar4;
  param_1[8] = lVar5;
  (**(code **)(lVar7 + 0x18))(puVar4);
  pbVar10 = *(byte **)(puVar4 + 8);
  uVar6 = (uint)*pbVar10;
  if (*pbVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0xffffffff;
    do {
      pbVar10 = pbVar10 + 1;
      uVar9 = crc32b(uVar9,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar10;
    } while (uVar6 != 0);
    uVar9 = ~uVar9;
  }
  *(uint *)(param_1 + 5) = uVar9;
  uVar1 = crc32b(0xffffffff,100,0x4c11db7);
  uVar8 = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  param_1[0x13] = (long)param_1 + 0xa4;
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  *(undefined4 *)(param_1 + 0x14) = 0x20;
  uVar1 = crc32b(uVar1,0x66,0x4c11db7);
  *param_1 = (long)&PTR_FUN_04b6b5e8;
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  param_1[9] = (long)(PTR_DAT_04bd1060 + 0x10);
  param_1[10] = 0;
  uVar1 = crc32b(uVar1,0x75,0x4c11db7);
  param_1[0xf] = (long)(PTR_DAT_04bd11d0 + 0x10);
  puVar4 = PTR_DAT_04bb2028;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = (long)(puVar4 + 0x10);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar6 = crc32b(uVar1,0x74,0x4c11db7);
  *(uint *)(param_1 + 0x10) = ~uVar6;
  puVar4 = PTR_DAT_04bd11f8;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x19] = (long)(puVar4 + 0x10);
  do {
    uVar2 = uVar8 << 2;
    uVar3 = uVar8 >> 0x1f;
    uVar6 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar6;
    *(undefined4 *)((long)param_1 + (-uVar3 & 0xfffffffc00000000 | uVar2) + 0xd0) = 0;
  } while (uVar6 != 0x80);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  lVar5 = *(long *)PTR_DAT_04bd1158;
  if ((lVar5 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar5 + 8) + 0x18))((long *)(lVar5 + 8));
    FUN_006e9454(auStack_448,&DAT_0406a3d7,"Icon=FOLDER_GREEN",*(undefined8 *)(lVar5 + 0x10));
  }
  return;
}

