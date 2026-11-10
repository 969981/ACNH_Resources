
bool FUN_001fa640(undefined1 *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *__s2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined **ppuVar12;
  uint *puVar13;
  undefined *local_500;
  uint *local_4f8;
  undefined8 local_4f0;
  uint **local_4e8;
  undefined8 uStack_4e0;
  ulong local_4d8;
  ulong local_4d0;
  uint *local_4c8;
  undefined8 local_4c0;
  undefined ***pppuStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined **local_468;
  undefined8 uStack_460;
  undefined **local_458;
  undefined8 uStack_450;
  long local_448;
  undefined *local_440;
  ulong local_438;
  undefined8 local_430;
  ulong *local_428;
  undefined8 uStack_420;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000001;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  param_1[0x30] = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x30] = 1;
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 8) = uVar10;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x8c);
  local_438 = local_438 & 0xffffffffffffff00;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_428 = &local_438;
  uStack_420 = 0x10;
  local_440 = puVar1;
  FUN_0018b070(&local_440,*(undefined8 *)(param_2 + 0xa8),0xffffffffffffffff);
  lVar8 = FUN_0018b798(&local_440);
  local_440 = puVar1;
  FUN_0018b1a0(&local_440);
  if (lVar8 == 0) {
    return false;
  }
  uStack_460 = 0x10000;
  local_448 = 0;
  local_440 = (undefined *)0x3e8;
  pppuStack_4b8 = &local_468;
  local_478 = 0;
  local_470 = 0;
  local_4f8 = (uint *)((ulong)local_4f8 & 0xffffffffffffff00);
  local_4c0 = 0;
  local_480 = 0x400;
  local_4e8 = &local_4f8;
  uStack_450 = 0;
  local_438 = 0;
  local_430 = 0;
  local_4d0 = 0;
  local_4c8 = (uint *)0x0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_490 = 0;
  uStack_488 = 0;
  uStack_4e0 = 0x10;
  local_500 = puVar1;
  local_468 = &local_440;
  local_458 = &local_440;
  FUN_0018b070(&local_500,*(undefined8 *)(param_2 + 0xa8),0xffffffffffffffff);
  local_4d8 = 0;
  FUN_00189050(&local_500,&local_4d8);
  uVar9 = FUN_0018a77c(&local_4d0,local_4d8);
  FUN_00189128(local_4d8);
  local_500 = puVar1;
  FUN_0018b1a0(&local_500);
  bVar4 = false;
  if ((uVar9 & 1) == 0) goto LAB_001fa92c;
  uVar9 = local_4d0 & 0xffffffff;
  local_4f0 = 0x405000000000000;
  local_4f8 = (uint *)&DAT_040ec790;
  local_500 = (undefined *)0x2;
  puVar11 = local_4c8;
  puVar13 = local_4c8;
  if ((int)local_4d0 == 0) {
    uVar9 = 0;
  }
  else {
    do {
      uVar7 = (uint)local_500;
      if ((local_4f0 & 0x1000000000000000) != 0) {
        uVar7 = 0x15 - local_4f0._5_1_;
      }
      uVar2 = *puVar13;
      if ((*(ushort *)((long)puVar13 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - *(byte *)((long)puVar13 + 0x15);
      }
      if (uVar7 == uVar2) {
        ppuVar12 = (undefined **)local_4f8;
        if ((local_4f0 & 0x1000000000000000) != 0) {
          ppuVar12 = &local_500;
        }
        __s2 = *(uint **)(puVar13 + 2);
        if ((*(ushort *)((long)puVar13 + 0x16) & 0x1000) != 0) {
          __s2 = puVar13;
        }
        if (ppuVar12 == (undefined **)__s2) break;
        iVar6 = memcmp(ppuVar12,__s2,(ulong)uVar7);
        uVar9 = local_4d0 & 0xffffffff;
        puVar11 = local_4c8;
        if (iVar6 == 0) break;
      }
      puVar13 = puVar13 + 0xc;
    } while (puVar13 != puVar11 + uVar9 * 0xc);
  }
  if ((puVar13 == puVar11 + uVar9 * 0xc) || (*(short *)((long)puVar13 + 0x2e) != 3)) {
LAB_001fa920:
    uVar7 = 1;
  }
  else {
    puVar13 = puVar13 + 6;
    local_500 = (undefined *)((ulong)local_500 & 0xffffffff00000000);
    uVar9 = FUN_0018a900(&local_4d0,puVar13,&DAT_040b8b63,&local_500);
    if ((uVar9 & 1) == 0) goto LAB_001fa920;
    local_4d8 = local_4d8 & 0xffffffff00000000;
    *(uint *)(param_1 + 0x2c) = (uint)local_500;
    uVar9 = FUN_0018a900(&local_4d0,puVar13,&DAT_0405a2b1,&local_4d8);
    uVar7 = 1;
    if ((uVar9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = (undefined4)local_4d8;
      uVar7 = FUN_0018a7b0(&local_4d0,puVar13,&DAT_040ae1a1,param_1 + 0x30);
      uVar7 = (uVar7 ^ 0xffffffff) & 1;
    }
  }
  bVar4 = uVar7 == 0;
LAB_001fa92c:
  FUN_001fa9b0(&local_4d0);
  bVar5 = local_468 == local_458;
  while ((bVar3 = bVar5, local_468 != (undefined **)0x0 && (bVar3 = true, !bVar5))) {
    ppuVar12 = (undefined **)local_468[2];
    FUN_00187e4c(local_468);
    local_468 = ppuVar12;
    bVar5 = ppuVar12 == local_458;
  }
  if ((local_468 != (undefined **)0x0) && (bVar3)) {
    local_468[1] = (undefined *)0x0;
  }
  if (local_448 != 0) {
    FUN_00187e4c();
  }
  return bVar4;
}

