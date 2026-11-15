
undefined4 FUN_02172960(void)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short *psVar12;
  uint uVar13;
  undefined8 local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  short local_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  puVar3 = PTR_DAT_04bb2020;
  iVar6 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar6 == -0x6d41fcf3) {
    sVar4 = *(short *)PTR_DAT_04bbdeb0;
    if (sVar4 != -1) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x19);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
LAB_02172a34:
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "IsParty";
        local_40 = puVar1;
        iVar6 = FUN_02758850(&local_40);
        if (iVar6 != 0) {
          pcStack_38 = "SeqParty1Done";
          local_40 = puVar1;
          iVar6 = FUN_02758850(&local_40);
          if (iVar6 == 0) {
            return 0x34;
          }
          local_50 = puVar3 + 0x10;
          pcStack_48 = "SeqParty2Done";
          iVar6 = FUN_02758850(&local_50);
          uVar10 = 0x34;
          if (iVar6 != 0) {
            uVar10 = 0x35;
          }
          return uVar10;
        }
        uVar9 = FUN_03772080();
        bVar5 = (uVar9 & 1) == 0;
        uVar11 = 0x1e;
        uVar10 = 0x2e;
        goto LAB_02172c54;
      }
    }
  }
  else {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x19);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) goto LAB_02172a34;
    }
    if (iVar6 == 0x11889761) {
      return 0x1e;
    }
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    uVar13 = 0;
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x21);
    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    uVar13 = *(uint *)(puVar3 + 4) >> 1 & 1;
  }
  if (iVar6 == -0x78855454) {
    return 0x1e;
  }
  if (iVar6 == -0x6d41fcf3 && *(int *)(PTR_DAT_04bc3a78 + 0x38) == 0x3ee08254) {
    return 0x1e;
  }
  if (uVar13 != 0) {
    return 0x1e;
  }
  psVar12 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar12 == 0) {
    local_50 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_50 >> 0x20) < '\x05') {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_40 = (undefined *)(lVar7 + -0x15180);
      local_50 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
    }
    uVar9 = (ulong)local_50 >> 0x30;
    local_50._0_6_ = CONCAT24(5,(undefined4)local_50);
    local_50 = (undefined *)(CONCAT26((short)uVar9,(undefined6)local_50) & 0xff00ffffffffffff);
    psVar12 = (short *)&local_50;
  }
  local_40 = *(undefined **)psVar12;
  local_50._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
  local_50._0_2_ = (short)local_40;
  local_50._0_4_ = CONCAT22(0x1303,(short)local_50);
  _local_18 = CONCAT44(local_50._4_4_,CONCAT22(0x130a,(short)local_50));
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
  if (lVar8 < lVar7) {
    uVar13 = 0xffffffff;
  }
  else {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
    uVar13 = (uint)(lVar8 != lVar7);
  }
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
  if (lVar7 <= lVar8) {
    nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
  }
  bVar5 = ((int)uVar13 < 0 && lVar7 <= lVar8) ==
          (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1);
  uVar10 = 0x1e;
  uVar11 = 0x2e;
LAB_02172c54:
  if (bVar5) {
    uVar10 = uVar11;
  }
  return uVar10;
}

