
bool FUN_0206fb94(long param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte local_58 [4];
  int local_54;
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb2020;
  if (DAT_04c487d4 == -1) {
    return true;
  }
  puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar5 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar5 >> 7 & 1) == 0) {
    return true;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "NpcInteriorCoordinate";
  local_50 = puVar1;
  iVar10 = FUN_02743000(&local_50);
  if (iVar10 == 0) {
    return true;
  }
  pcStack_48 = "NpcInteriorCoordinateDone";
  local_50 = puVar1;
  iVar10 = FUN_02743000(&local_50);
  if (iVar10 == 0) {
    uVar11 = FUN_0290d828();
    if ((uVar11 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x2690) = 0;
      *(undefined8 *)(param_1 + 0x2688) = 0;
      *(undefined8 *)(param_1 + 0x269c) = 0;
      *(undefined8 *)(param_1 + 0x26a4) = 0;
      *(undefined4 *)(param_1 + 0x2698) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x26ac) = 0;
      *(undefined8 *)(param_1 + 0x26b0) = 0x1ffffffff;
      return true;
    }
    uVar7 = *(ushort *)(param_1 + 8);
    uVar12 = uVar7 | 0x10;
    *(short *)(param_1 + 8) = (short)uVar12;
    uVar7 = uVar7 & 2;
  }
  else {
    uVar12 = (uint)*(ushort *)(param_1 + 8);
    uVar7 = *(ushort *)(param_1 + 8) >> 1 & 1;
  }
  if (uVar7 == 0) {
    uVar14 = 0;
    *(undefined8 *)(param_1 + 0x2690) = 0;
    *(undefined8 *)(param_1 + 0x2688) = 0;
    *(undefined8 *)(param_1 + 0x269c) = 0;
    *(undefined8 *)(param_1 + 0x26a4) = 0;
    *(undefined4 *)(param_1 + 0x2698) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x26ac) = 0;
    *(undefined8 *)(param_1 + 0x26b0) = 0x1ffffffff;
    lVar8 = DAT_055a0ff0;
    if ((uVar12 >> 2 & 1) != 0) goto LAB_0206fe20;
    pMVar2 = (MutexType *)(DAT_055a0ff0 + 0x20);
    nn::os::LockMutex(pMVar2);
    iVar10 = *(int *)(lVar8 + 0x50);
    iVar6 = *(int *)(lVar8 + 0x48);
    if (iVar10 < iVar6) {
      iVar4 = *(int *)(lVar8 + 0x4c) + iVar10;
      *(int *)(lVar8 + 0x50) = iVar10 + 1;
      iVar10 = 0;
      if (iVar6 <= iVar4) {
        iVar10 = iVar6;
      }
      puVar13 = (undefined4 *)(*(long *)(lVar8 + 0x40) + (long)(iVar4 - iVar10) * 0x38);
      *(long *)(puVar13 + 2) = param_1 + 0xa0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *puVar13 = 1;
      *(undefined **)(puVar13 + 0xc) = &DAT_040ff586;
      *(undefined8 *)(puVar13 + 6) = 0;
      *(undefined8 *)(puVar13 + 8) = 0;
    }
    nn::os::UnlockMutex(pMVar2);
    local_54 = -1;
    local_58[0] = 0;
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 4;
    uVar12 = FUN_021eed40(param_1 + 0x1560,param_1 + 0x1568,param_1 + 0x1578,&local_54,0,0,1,0);
    uVar11 = FUN_021eed40(param_1 + 0x1560,param_1 + 0x1568,param_1 + 0x1578,&local_54,1,0,1,
                          local_58);
    if (local_54 != -1) {
      puVar3 = puVar3 + 0x10;
      pcStack_48 = "ReserveDIYStatus";
      uVar14 = uVar12 & 1 | 2;
      if ((uVar11 & 1) == 0) {
        uVar14 = uVar12 & 1;
      }
      local_50 = puVar3;
      FUN_027494ac(local_54,&local_50,uVar14);
      pcStack_48 = "IslandKitchenStandPos";
      local_50 = puVar3;
      bVar9 = FUN_027490f0(local_54,&local_50);
      pcStack_48 = "IslandKitchenStandPos";
      local_50 = puVar3;
      FUN_027494ac(local_54,&local_50,bVar9 & 2 | local_58[0]);
    }
    uVar12 = (uint)*(ushort *)(param_1 + 8);
  }
  uVar14 = uVar12 & 2;
LAB_0206fe20:
  return uVar14 != 0;
}

