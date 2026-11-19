
void FUN_03916960(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined *local_50;
  byte *local_48;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_48 = (byte *)0x4098cda;
  local_50 = puVar1;
  FUN_03955370(param_1,&local_50,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *param_1 = &PTR_FUN_04b66080;
  param_1[0x3a] = &PTR_LAB_04b66170;
  param_1[0x3b] = 0;
  puVar2 = param_1 + 0x42;
  param_1[0x44] = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x23c) = 0xffffffff;
  param_1[0x54] = 0x80;
  param_1[0x55] = 0x100000000;
  param_1[0x41] = 0;
  param_1[0x43] = puVar2;
  param_1[0x42] = puVar2;
  param_1[0x56] = 0x2b00000033;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x46] = param_1 + 0x45;
  param_1[0x45] = param_1 + 0x45;
  param_1[0x57] = 0xf0000002b;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x53] = 0;
  param_1[0x61] = (long)param_1 + 0x314;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x104;
  *(undefined1 *)((long)param_1 + 0x417) = 0;
  *(undefined1 *)((long)param_1 + 0x314) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x60] = PTR_DAT_04bbd6c8 + 0x10;
  param_1[0x84] = &DAT_100000003;
  param_1[0x83] = 0;
  param_1[0x85] = 0x3f80000041800000;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  FUN_0390e190(param_1 + 0x8b);
  FUN_03941294(param_1 + 199);
  FUN_038e18e4(param_1 + 0x10e);
  FUN_038e18e4(param_1 + 0x116);
  *(undefined4 *)((long)param_1 + 0x224) = 0x150;
  *(undefined4 *)((long)param_1 + 0x23c) = 0x160;
  puVar4 = (undefined8 *)param_1[0x43];
  while (puVar4 != puVar2) {
    puVar8 = (undefined8 *)puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar8;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x43] = puVar2;
  param_1[0x42] = puVar2;
  local_48 = (byte *)0x40a85f0;
  uVar5 = 0;
  local_50 = puVar1;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar5 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_50);
  }
  param_1[0x3f] = uVar5;
  (**(code **)(local_50 + 0x18))(&local_50);
  uVar6 = (uint)*local_48;
  if (*local_48 != 0) {
    uVar7 = 0xffffffff;
    pbVar9 = local_48;
    do {
      pbVar9 = pbVar9 + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar9;
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)((long)param_1 + 0x1ec) = uVar6;
  plVar3 = param_1 + 1;
  if (param_1[2] != 0) {
    plVar3 = (long *)(param_1[2] + 0x20);
  }
  *plVar3 = (long)(param_1 + 0x3a);
  param_1[2] = param_1 + 0x3a;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if ((undefined8 *)param_1[0x43] != puVar2) {
    lVar11 = (long)*(int *)((long)param_1 + 0x224);
    lVar10 = (long)param_1[0x43] - lVar11;
    do {
      FUN_03912954(lVar10);
      lVar10 = *(long *)(lVar10 + lVar11 + 8) - lVar11;
    } while (lVar10 != (long)puVar2 - lVar11);
  }
  *(uint *)(param_1 + 0x8a) = *(uint *)(param_1 + 0x8a) | 1;
  return;
}

