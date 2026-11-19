
void FUN_03a72d50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined *local_468;
  byte *local_460;
  
  puVar4 = PTR_DAT_04bb2020;
  local_468 = PTR_DAT_04bb2020 + 0x10;
  local_460 = (byte *)0x40f1b3c;
  FUN_03955370(param_1,&local_468,0);
  *param_1 = &PTR_FUN_04b70700;
  puVar1 = PTR_DAT_04bd1070;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x3a] = puVar1 + 0x10;
  param_1[0x3b] = 0;
  puVar6 = PTR_DAT_04bd1140;
  puVar1 = PTR_PTR_04bb2238;
  lVar7 = *(long *)PTR_DAT_04bd1140;
  param_1[0x41] = 0;
  uVar8 = 0;
  if (lVar7 != 0) {
    uVar8 = FUN_03954f70(lVar7,PTR_PTR_04bb2238);
  }
  lVar7 = *(long *)puVar1;
  param_1[0x42] = uVar8;
  (**(code **)(lVar7 + 0x18))(puVar1);
  puVar5 = PTR_DAT_04bd10b8;
  pbVar11 = *(byte **)(puVar1 + 8);
  uVar9 = (uint)*pbVar11;
  if (*pbVar11 != 0) {
    uVar10 = 0xffffffff;
    do {
      pbVar11 = pbVar11 + 1;
      uVar10 = crc32b(uVar10,uVar9,0x4c11db7);
      uVar9 = (uint)*pbVar11;
    } while (uVar9 != 0);
    uVar9 = ~uVar10;
  }
  *(uint *)(param_1 + 0x3f) = uVar9;
  *(undefined4 *)(param_1 + 0x43) = 2;
  *(undefined1 *)((long)param_1 + 0x21e) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined2 *)((long)param_1 + 0x21c) = 0x100;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x3a] = puVar5 + 0x10;
  FUN_03941294(param_1 + 0x4a);
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x91] = PTR_DAT_04bd1060 + 0x10;
  uVar2 = crc32b(0xffffffff,100,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x66,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar9 = crc32b(uVar2,0x74,0x4c11db7);
  param_1[0x92] = 0;
  uVar9 = ~uVar9;
  *(uint *)(param_1 + 0x98) = uVar9;
  puVar1 = PTR_DAT_04bd1088;
  *(uint *)(param_1 + 0x9c) = uVar9;
  puVar1 = puVar1 + 0x10;
  param_1[0x97] = puVar1;
  puVar5 = PTR_DAT_04bd1080;
  lVar7 = *(long *)puVar6;
  *(uint *)(param_1 + 0xa0) = uVar9;
  *(uint *)(param_1 + 0xa4) = uVar9;
  *(uint *)(param_1 + 0xa8) = uVar9;
  param_1[0x9f] = puVar1;
  param_1[0xa3] = puVar1;
  param_1[0xa7] = puVar1;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  param_1[0x48] = 9;
  local_468 = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x49) = 0x100;
  param_1[0x9b] = puVar5 + 0x10;
  local_460 = (byte *)0x410109a;
  uVar8 = 0;
  if (lVar7 != 0) {
    uVar8 = FUN_03954f70(lVar7,&local_468);
  }
  param_1[0x42] = uVar8;
  (**(code **)(local_468 + 0x18))(&local_468);
  uVar9 = (uint)*local_460;
  if (*local_460 != 0) {
    uVar10 = 0xffffffff;
    pbVar11 = local_460;
    do {
      pbVar11 = pbVar11 + 1;
      uVar10 = crc32b(uVar10,uVar9,0x4c11db7);
      uVar9 = (uint)*pbVar11;
    } while (uVar9 != 0);
    uVar9 = ~uVar10;
  }
  *(uint *)(param_1 + 0x3f) = uVar9;
  plVar3 = param_1 + 3;
  if (param_1[4] != 0) {
    plVar3 = (long *)(param_1[4] + 0x30);
  }
  *plVar3 = (long)(param_1 + 0x3a);
  param_1[4] = param_1 + 0x3a;
  param_1[0x41] = param_1;
  lVar7 = *(long *)PTR_DAT_04bd1158;
  if ((lVar7 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar7 + 8) + 0x18))((long *)(lVar7 + 8));
    FUN_006e9454(&local_468,&DAT_0406a3d7,"Icon=CIRCLE_BLACK",*(undefined8 *)(lVar7 + 0x10));
  }
  return;
}

