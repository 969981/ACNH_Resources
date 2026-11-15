
void FUN_021c8460(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long local_a0 [7];
  int local_64;
  byte local_60 [4];
  undefined4 local_5c;
  undefined8 local_58;
  
  uVar13 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_58 = uVar13;
  uVar8 = FUN_00a8117c(&local_58);
  iVar10 = (int)(char)((ulong)uVar13 >> 0x20);
  iVar7 = iVar10 + 0x18;
  if (iVar10 < 5) {
    local_a0[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_a0[0] = local_a0[0] + -0x15180;
    uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_a0);
    local_58 = uVar9;
  }
  else {
    uVar9 = uVar13;
    iVar7 = iVar10;
  }
  uVar4 = local_58 >> 0x30;
  local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
  local_58 = CONCAT26((short)uVar4,(undefined6)local_58) & 0xff00ffffffffffff;
  local_5c = nn::time::GetDayOfWeek((int)(short)uVar9,((int)uVar9 << 8) >> 0x18,(int)uVar9 >> 0x18);
  puVar6 = PTR_DAT_04bb70a8;
  puVar5 = PTR_DAT_04bb4128;
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_021c8560:
    if (7 < *pbVar11) {
LAB_021c856c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar12 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar11 = (byte *)(lVar12 + 0x471);
          }
        }
        local_60[0] = *pbVar11;
        if (local_60[0] < 8) goto LAB_021c85ec;
      }
      pbVar11 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_021c8560;
      }
      goto LAB_021c856c;
    }
  }
  local_60[0] = *pbVar11;
  if (7 < local_60[0]) {
    local_60[0] = 0xff;
  }
LAB_021c85ec:
  if ((uVar8 & 1) == 0) {
    lVar12 = 0;
    ppuVar14 = &PTR_FUN_04a76628;
    uVar1 = iVar7 * 100 + ((int)((ulong)uVar13 >> 0x10) >> 0x18);
    do {
      local_64 = (int)lVar12;
      FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",*(undefined8 *)(puVar6 + lVar12 * 8 + 0x58)
                  );
      iVar7 = FUN_0273ea30(local_a0);
      if ((iVar7 == 1) &&
         (((uVar1 < *(ushort *)(&DAT_04179b9c + (long)local_64 * 4) ||
           (*(ushort *)(&DAT_04179b9e + (long)local_64 * 4) <= uVar1)) ||
          (uVar8 = (*(code *)*ppuVar14)(param_1,&local_5c,local_60), (uVar8 & 1) == 0)))) {
        FUN_0273f3c4(local_a0,2);
        *(undefined4 *)(*(long *)puVar5 + 0x248) = 0;
      }
      lVar12 = lVar12 + 1;
      ppuVar14 = ppuVar14 + 2;
    } while (lVar12 != 0xe);
  }
  else {
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",PTR_DAT_04bb70a8);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 6);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0xc);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x12);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x18);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x1e);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x24);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x2b);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x31);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x37);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x3d);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x43);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x49);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
    FUN_006d8678(local_a0,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x4f);
    iVar7 = FUN_0273ea30(local_a0);
    if (iVar7 == 1) {
      FUN_0273f3c4(local_a0,2);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
    }
  }
  return;
}

