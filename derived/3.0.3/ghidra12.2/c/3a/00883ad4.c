
undefined8 FUN_00883ad4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  undefined8 local_60;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb46b0;
  local_48 = local_48 & 0xffffffff00000000;
  lVar7 = FUN_026eec4c(*(undefined8 *)PTR_DAT_04bb46b0,0);
  puVar2 = PTR_DAT_04bb2020;
  if (lVar7 == 0) {
    bVar5 = false;
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    local_58 = puVar1;
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    pcStack_50 = "WHEREAREN_Is1stKKFesDone";
    local_58 = puVar1;
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    bVar5 = iVar6 != 0;
  }
  local_48 = CONCAT44(local_48._4_4_,1);
  lVar7 = FUN_026eec4c(*(undefined8 *)puVar3,1);
  if (lVar7 != 0) {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    if (bVar5) {
      bVar5 = true;
    }
    else {
      local_58 = puVar2 + 0x10;
      pcStack_50 = "WHEREAREN_Is1stKKFesDone";
      iVar6 = FUN_0274ce10(&local_48,&local_58);
      bVar5 = iVar6 != 0;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,2);
  lVar7 = FUN_026eec4c(*(undefined8 *)puVar3,2);
  if (lVar7 != 0) {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    if (bVar5) {
      bVar5 = true;
    }
    else {
      local_58 = puVar2 + 0x10;
      pcStack_50 = "WHEREAREN_Is1stKKFesDone";
      iVar6 = FUN_0274ce10(&local_48,&local_58);
      bVar5 = iVar6 != 0;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,3);
  lVar7 = FUN_026eec4c(*(undefined8 *)puVar3,3);
  if (lVar7 != 0) {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    if (bVar5) {
      bVar5 = true;
    }
    else {
      local_58 = puVar2 + 0x10;
      pcStack_50 = "WHEREAREN_Is1stKKFesDone";
      iVar6 = FUN_0274ce10(&local_48,&local_58);
      bVar5 = iVar6 != 0;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,4);
  lVar7 = FUN_026eec4c(*(undefined8 *)puVar3,4);
  if (lVar7 != 0) {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    if (bVar5) {
      bVar5 = true;
    }
    else {
      local_58 = puVar2 + 0x10;
      pcStack_50 = "WHEREAREN_Is1stKKFesDone";
      iVar6 = FUN_0274ce10(&local_48,&local_58);
      bVar5 = iVar6 != 0;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,5);
  lVar7 = FUN_026eec4c(*(undefined8 *)puVar3,5);
  if (lVar7 != 0) {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    if (bVar5) {
      bVar5 = true;
    }
    else {
      local_58 = puVar2 + 0x10;
      pcStack_50 = "WHEREAREN_Is1stKKFesDone";
      iVar6 = FUN_0274ce10(&local_48,&local_58);
      bVar5 = iVar6 != 0;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,6);
  lVar7 = FUN_026eec4c(*(undefined8 *)puVar3,6);
  if (lVar7 != 0) {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    if (bVar5) {
      bVar5 = true;
    }
    else {
      local_58 = puVar2 + 0x10;
      pcStack_50 = "WHEREAREN_Is1stKKFesDone";
      iVar6 = FUN_0274ce10(&local_48,&local_58);
      bVar5 = iVar6 != 0;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,7);
  lVar7 = FUN_026eec4c(*(undefined8 *)puVar3,7);
  if (lVar7 == 0) {
    if (!bVar5) {
      return 0;
    }
  }
  else {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "WHEREAREN_IsFirstKKFesDay";
    iVar6 = FUN_0274ce10(&local_48,&local_58);
    if (iVar6 != 0) {
      return 1;
    }
    if (!bVar5) {
      local_58 = puVar2 + 0x10;
      pcStack_50 = "WHEREAREN_Is1stKKFesDone";
      iVar6 = FUN_0274ce10(&local_48,&local_58);
      if (iVar6 == 0) {
        return 0;
      }
    }
  }
  psVar9 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar9 == 0) {
    local_48 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_48 >> 0x20) < '\x05') {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_58 = (undefined *)(lVar7 + -0x15180);
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar4 = local_48;
    psVar9 = (short *)&local_48;
    local_48._7_1_ = SUB81(uVar4,7);
    local_48._0_7_ = (uint7)CONCAT24(5,(undefined4)local_48);
  }
  local_60 = *(undefined8 *)psVar9;
  uVar8 = FUN_00883750(param_1,&local_60);
  if ((uVar8 & 1) == 0) {
    FUN_00a80e9c(&local_60,0xffffffff);
    uVar8 = FUN_00883750(param_1,&local_60);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

