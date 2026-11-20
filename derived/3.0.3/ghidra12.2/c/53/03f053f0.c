
void FUN_03f053f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04ba78f0;
  puVar2 = PTR_DAT_04bd1070;
  puVar1 = PTR_DAT_04bd1070 + 0x10;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = puVar1;
  puVar4 = PTR_DAT_04bd1140;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = PTR_PTR_04bb2238;
  lVar5 = *(long *)puVar4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar6 = 0;
  if (lVar5 != 0) {
    uVar6 = FUN_03954f70(lVar5,PTR_PTR_04bb2238);
  }
  lVar5 = *(long *)puVar1;
  param_1[0xe] = uVar6;
  (**(code **)(lVar5 + 0x18))(puVar1);
  pbVar9 = *(byte **)(puVar1 + 8);
  uVar7 = (uint)*pbVar9;
  if (*pbVar9 != 0) {
    uVar8 = 0xffffffff;
    do {
      pbVar9 = pbVar9 + 1;
      uVar8 = crc32b(uVar8,uVar7,0x4c11db7);
      uVar7 = (uint)*pbVar9;
    } while (uVar7 != 0);
    uVar7 = ~uVar8;
  }
  *(uint *)(param_1 + 0xb) = uVar7;
  puVar3 = PTR_DAT_04bd10b8;
  lVar5 = *(long *)puVar4;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = puVar2 + 0x10;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[6] = puVar3 + 0x10;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar6 = 0;
  if (lVar5 != 0) {
    uVar6 = FUN_03954f70(lVar5,PTR_PTR_04bb2238);
  }
  lVar5 = *(long *)puVar1;
  param_1[0x19] = uVar6;
  (**(code **)(lVar5 + 0x18))(puVar1);
  pbVar9 = *(byte **)(puVar1 + 8);
  uVar7 = (uint)*pbVar9;
  if (*pbVar9 != 0) {
    uVar8 = 0xffffffff;
    do {
      pbVar9 = pbVar9 + 1;
      uVar8 = crc32b(uVar8,uVar7,0x4c11db7);
      uVar7 = (uint)*pbVar9;
    } while (uVar7 != 0);
    uVar7 = ~uVar8;
  }
  *(uint *)(param_1 + 0x16) = uVar7;
  param_1[0x11] = puVar3 + 0x10;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}

