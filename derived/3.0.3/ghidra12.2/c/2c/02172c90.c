
undefined4 FUN_02172c90(void)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  short *psVar10;
  uint uVar11;
  undefined8 local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  short local_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_04bb2020;
  iVar5 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar5 == -0x6d41fcf3) {
    sVar4 = *(short *)PTR_DAT_04bbdeb0;
    if (sVar4 != -1) {
      local_48 = (undefined *)CONCAT44(local_48._4_4_,0x19);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) goto LAB_02172d64;
    }
  }
  else {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_48 = (undefined *)CONCAT44(local_48._4_4_,0x19);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
LAB_02172d64:
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_40 = "IsParty";
        local_48 = puVar1;
        iVar5 = FUN_02758850(&local_48);
        if (iVar5 == 0) {
          uVar8 = FUN_03772080();
          uVar9 = 0x2d;
          if ((uVar8 & 1) == 0) {
            uVar9 = 0x1d;
          }
          return uVar9;
        }
        pcStack_40 = "SeqParty1Done";
        local_48 = puVar1;
        iVar5 = FUN_02758850(&local_48);
        if (iVar5 == 0) {
          return 0x36;
        }
        local_58 = puVar3 + 0x10;
        pcStack_50 = "SeqParty2Done";
        iVar5 = FUN_02758850(&local_58);
        uVar9 = 0x36;
        if (iVar5 != 0) {
          uVar9 = 0x37;
        }
        return uVar9;
      }
    }
    if (iVar5 == 0x11889761) {
      return 0x1d;
    }
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    uVar11 = 0;
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x21);
    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    uVar11 = *(uint *)(puVar3 + 4) >> 1 & 1;
  }
  uVar9 = 0x1d;
  if (((iVar5 != -0x78855454) &&
      (iVar5 != -0x6d41fcf3 || *(int *)(PTR_DAT_04bc3a78 + 0x38) != 0x3ee08254)) && (uVar11 == 0)) {
    psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*psVar10 == 0) {
      local_58 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_58 >> 0x20) < '\x05') {
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_48 = (undefined *)(lVar6 + -0x15180);
        local_58 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      psVar10 = (short *)&local_58;
      uVar8 = (ulong)local_58 >> 0x30;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58 = (undefined *)(CONCAT26((short)uVar8,(undefined6)local_58) & 0xff00ffffffffffff);
    }
    local_48 = *(undefined **)psVar10;
    local_58._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
    local_58._0_2_ = (short)local_48;
    local_58._0_4_ = CONCAT22(0x1303,(short)local_58);
    _local_38 = CONCAT44(local_58._4_4_,CONCAT22(0x130a,(short)local_58));
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    if (lVar7 < lVar6) {
      uVar11 = 0xffffffff;
    }
    else {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      uVar11 = (uint)(lVar7 != lVar6);
    }
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    if (lVar6 <= lVar7) {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    }
    uVar9 = 0x1d;
    if (((int)uVar11 < 0 && lVar6 <= lVar7) == (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1))
    {
      uVar9 = 0x2d;
    }
  }
  return uVar9;
}

