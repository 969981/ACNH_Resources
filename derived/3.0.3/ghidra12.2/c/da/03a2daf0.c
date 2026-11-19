
void FUN_03a2daf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_30;
  byte *local_28;
  
  FUN_03a2dcc0(param_1,param_2,0,param_3);
  lVar6 = *(long *)(param_1 + 0x28);
  uVar1 = crc32b(0xffffffff,0x65,0x4c11db7);
  *(undefined8 *)(param_1 + 2000) = 0;
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x62,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar5 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x7c8) = ~uVar5;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    plVar2 = (long *)(lVar6 + 8);
    if (*(long *)(lVar6 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
    }
    *plVar2 = param_1 + 0x7c0;
    *(long *)(lVar6 + 0x10) = param_1 + 0x7c0;
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    lVar6 = *(long *)(param_1 + 0x28);
  }
  local_30 = PTR_DAT_04bb2020;
  *(undefined1 *)(param_1 + 0x7d8) = 1;
  local_30 = local_30 + 0x10;
  local_28 = (byte *)0x405f21a;
  uVar4 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar4 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_30);
  }
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  (**(code **)(local_30 + 0x18))(&local_30);
  uVar5 = (uint)*local_28;
  if (*local_28 != 0) {
    uVar7 = 0xffffffff;
    pbVar8 = local_28;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar8;
    } while (uVar5 != 0);
    uVar5 = ~uVar7;
  }
  *(uint *)(lVar6 + 0x1c) = uVar5;
  plVar2 = (long *)(param_1 + 0x5f8);
  if (*(long *)(param_1 + 0x600) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x600) + 0x20);
  }
  *plVar2 = lVar6;
  *(long *)(param_1 + 0x600) = lVar6;
  FUN_0393da40(param_1,0);
  bVar3 = *(int *)(param_1 + 0x5a8) != 1;
  fVar9 = *(float *)(param_1 + 0x458);
  if (bVar3) {
    fVar9 = 0.298912;
  }
  *(float *)(param_1 + 0x5b0) = fVar9;
  fVar10 = *(float *)(param_1 + 0x45c);
  if (bVar3) {
    fVar10 = 0.586611;
  }
  *(float *)(param_1 + 0x5b4) = fVar10;
  fVar11 = *(float *)(param_1 + 0x460);
  if (bVar3) {
    fVar11 = 0.114478;
  }
  *(float *)(param_1 + 0x5b8) = fVar11;
  fVar12 = fVar9 + fVar10 + fVar11;
  if (0.0 < fVar12) {
    fVar12 = 1.0 / fVar12;
    *(float *)(param_1 + 0x5b0) = fVar9 * fVar12;
    *(float *)(param_1 + 0x5b4) = fVar10 * fVar12;
    *(float *)(param_1 + 0x5b8) = fVar11 * fVar12;
  }
  return;
}

