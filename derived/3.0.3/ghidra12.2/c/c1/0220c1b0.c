
bool FUN_0220c1b0(void)

{
  uint *puVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 local_54;
  byte local_4c [4];
  undefined8 local_48;
  char *pcStack_40;
  undefined2 local_34 [2];
  
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) ||
     (lVar11 = *(long *)PTR_DAT_04bb39b0, *(int *)(lVar11 + 0x15c) != 0)) {
    return false;
  }
  pbVar10 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar11 + 0x15c) != 0) {
    pbVar10 = (byte *)(lVar11 + 0x158);
  }
  local_4c[0] = *pbVar10;
  if ((7 < local_4c[0]) &&
     (((*(int *)(lVar11 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
      (local_4c[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < local_4c[0])))) {
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    local_4c[0] = *pbVar10;
    if (local_4c[0] < 8) goto LAB_0220c2bc;
    local_4c[0] = *PTR_DAT_04bb5038;
  }
  if (7 < local_4c[0]) {
    return false;
  }
LAB_0220c2bc:
  local_54 = 0xfffe;
  FUN_0277d4ac(&local_54);
  puVar4 = PTR_DAT_04bb2020;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "HighPriceTradeOrderBonusItemRecipeID";
  uVar8 = FUN_0274bce0(local_4c,&local_48);
  lVar11 = *(long *)PTR_DAT_04bb46f0;
  if (lVar11 == 0) {
    local_48._2_1_ = PTR_DAT_04bb37e0[2];
    local_48._3_1_ = PTR_DAT_04bb37e0[3];
    puVar9 = (undefined8 *)PTR_DAT_04bb37e0;
  }
  else {
    if ((((uint)uVar8 & 0xffff) < 0x800) &&
       (local_34[0] = 0x4c7b,
       (1 << (ulong)((uint)uVar8 & 7) &
       (uint)*(byte *)(lVar11 + ((uVar8 & 0xffffffff) >> 3 & 0x1fff) + 0xe99e0)) != 0)) {
      local_34[0] = (short)uVar8;
      FUN_026126cc(&local_48,local_34);
    }
    else {
      FUN_0262eb00(&local_48,lVar11,uVar8 & 0xffffffff,lVar11 + 0xe98e0);
    }
    puVar9 = &local_48;
  }
  uVar3 = CONCAT11(local_48._3_1_,local_48._2_1_);
  local_48 = puVar4 + 0x10;
  local_54 = CONCAT62(CONCAT42(*(undefined4 *)((long)puVar9 + 4),uVar3),*(undefined2 *)puVar9);
  pcStack_40 = "HighPriceTradeOrderBonusItemLapsedDays";
  iVar6 = FUN_0274bce0(local_4c,&local_48);
  puVar5 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_54);
  if (*(long *)puVar5 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (uVar7 < *(uint *)(lVar11 + 0x1d8)) {
      if (iVar6 == 0) {
        return false;
      }
      if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
        return false;
      }
      local_48 = puVar4 + 0x10;
      pcStack_40 = "HighPriceTradeOrderBonusOccurCount";
      iVar6 = FUN_0274bce0(local_4c,&local_48);
      return iVar6 == 0;
    }
  }
  return false;
}

