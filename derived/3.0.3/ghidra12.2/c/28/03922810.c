
void FUN_03922810(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 auStack_458 [1048];
  
  param_1[4] = 0;
  puVar1 = PTR_DAT_04bd1200;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = 0;
  param_1[7] = (long)&PTR_LAB_04b66bc8;
  puVar3 = PTR_DAT_04bd1070;
  puVar1 = PTR_DAT_04bd1070 + 0x10;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = (long)puVar1;
  param_1[9] = 0;
  puVar4 = PTR_DAT_04bd1140;
  param_1[0xc] = 0;
  puVar1 = PTR_PTR_04bb2238;
  lVar6 = *(long *)puVar4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_03954f70(lVar6,PTR_PTR_04bb2238);
  }
  lVar6 = *(long *)puVar1;
  param_1[0x10] = lVar7;
  (**(code **)(lVar6 + 0x18))(puVar1);
  pbVar10 = *(byte **)(puVar1 + 8);
  uVar8 = (uint)*pbVar10;
  if (*pbVar10 != 0) {
    uVar9 = 0xffffffff;
    do {
      pbVar10 = pbVar10 + 1;
      uVar9 = crc32b(uVar9,uVar8,0x4c11db7);
      uVar8 = (uint)*pbVar10;
    } while (uVar8 != 0);
    uVar8 = ~uVar9;
  }
  *(uint *)(param_1 + 0xd) = uVar8;
  uVar2 = crc32b(0xffffffff,100,0x4c11db7);
  *(undefined4 *)(param_1 + 0x16) = 0x20;
  *(undefined1 *)((long)param_1 + 0xd3) = 0;
  param_1[0x1b] = (long)(puVar3 + 0x10);
  param_1[0x1c] = 0;
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  *param_1 = (long)&PTR_FUN_04b66aa0;
  puVar5 = PTR_DAT_04bd11d0;
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  param_1[0x15] = (long)param_1 + 0xb4;
  puVar3 = PTR_DAT_04bb2028;
  param_1[7] = (long)&PTR_LAB_04b66af8;
  param_1[8] = (long)&PTR_LAB_04b66b18;
  lVar6 = *(long *)puVar4;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar8 = crc32b(uVar2,0x74,0x4c11db7);
  param_1[0x11] = (long)(puVar5 + 0x10);
  *(uint *)(param_1 + 0x12) = ~uVar8;
  param_1[0x13] = 0;
  param_1[0x14] = (long)(puVar3 + 0x10);
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_03954f70(lVar6,PTR_PTR_04bb2238);
  }
  lVar6 = *(long *)puVar1;
  param_1[0x23] = lVar7;
  (**(code **)(lVar6 + 0x18))(puVar1);
  pbVar10 = *(byte **)(puVar1 + 8);
  uVar8 = (uint)*pbVar10;
  if (*pbVar10 != 0) {
    uVar9 = 0xffffffff;
    do {
      pbVar10 = pbVar10 + 1;
      uVar9 = crc32b(uVar9,uVar8,0x4c11db7);
      uVar8 = (uint)*pbVar10;
    } while (uVar8 != 0);
    uVar8 = ~uVar9;
  }
  *(uint *)(param_1 + 0x20) = uVar8;
  param_1[0x1b] = (long)&PTR_LAB_04b66be8;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar1 = PTR_DAT_04bd1060 + 0x10;
  param_1[0x2a] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = (long)puVar1;
  lVar7 = *(long *)PTR_DAT_04bd1158;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  if ((lVar7 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar7 + 8) + 0x18))((long *)(lVar7 + 8));
    FUN_006e9454(auStack_458,&DAT_0406a3d7,"Icon=CIRCLE_GREEN",*(undefined8 *)(lVar7 + 0x10));
  }
  return;
}

