
void FUN_03a70e70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  undefined *local_448;
  byte *local_440;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_440 = (byte *)0x40d71f5;
  local_448 = puVar1;
  FUN_03955370(param_1,&local_448,0);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *param_1 = &PTR_FUN_04b70688;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  FUN_03941294(param_1 + 0x3d);
  param_1[0x87] = 0;
  uVar2 = crc32b(0xffffffff,0x72,0x4c11db7);
  param_1[0x89] = 0;
  uVar3 = crc32b(0xffffffff,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  uVar3 = crc32b(uVar3,0x73,0x4c11db7);
  param_1[0x88] = 0;
  puVar5 = PTR_DAT_04bd1060;
  uVar2 = crc32b(uVar2,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  param_1[0x90] = 0;
  puVar7 = PTR_DAT_04bd1088;
  param_1[0x85] = param_1 + 0x8a;
  uVar3 = crc32b(uVar3,0x62,0x4c11db7);
  uVar2 = crc32b(uVar2,0x4d,0x4c11db7);
  *(undefined1 *)(param_1 + 0x8d) = 1;
  param_1[0x8c] = param_1 + 0x8e;
  puVar6 = PTR_DAT_04bd1080;
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
  *(undefined4 *)(param_1 + 0x87) = 2;
  param_1[0x86] = param_1 + 0x8e;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x84] = puVar5 + 0x10;
  param_1[0x8a] = puVar7 + 0x10;
  local_440 = (byte *)0x40dc666;
  uVar9 = crc32b(uVar3,0x65,0x4c11db7);
  param_1[0x8e] = puVar6 + 0x10;
  *(uint *)(param_1 + 0x8b) = ~uVar9;
  uVar2 = crc32b(uVar2,100,0x4c11db7);
  uVar9 = crc32b(uVar2,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x8f) = ~uVar9;
  uVar8 = 0;
  local_448 = puVar1;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar8 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_448);
  }
  param_1[0x89] = uVar8;
  (**(code **)(local_448 + 0x18))(&local_448);
  uVar9 = (uint)*local_440;
  if (*local_440 != 0) {
    uVar10 = 0xffffffff;
    pbVar11 = local_440;
    do {
      pbVar11 = pbVar11 + 1;
      uVar10 = crc32b(uVar10,uVar9,0x4c11db7);
      uVar9 = (uint)*pbVar11;
    } while (uVar9 != 0);
    uVar9 = ~uVar10;
  }
  *(uint *)((long)param_1 + 0x43c) = uVar9;
  plVar4 = param_1 + 1;
  if (param_1[2] != 0) {
    plVar4 = (long *)(param_1[2] + 0x20);
  }
  *plVar4 = (long)(param_1 + 0x84);
  param_1[2] = param_1 + 0x84;
  lVar12 = *(long *)PTR_DAT_04bd1158;
  if ((lVar12 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar12 + 8) + 0x18))((long *)(lVar12 + 8));
    FUN_006e9454(&local_448,&DAT_0406a3d7,"Icon=EFFECT",*(undefined8 *)(lVar12 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x8d) = 1;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
  return;
}

