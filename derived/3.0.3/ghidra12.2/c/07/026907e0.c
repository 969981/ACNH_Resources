
void FUN_026907e0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0x20) != 0 && *(int *)(param_1 + 4) != 0) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0x3c,&local_50,0);
  }
  if ((*(int *)(param_1 + 0x610) != 0) && (*(int *)(param_1 + 0x5f4) != 0)) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0x62c,&local_50,0);
  }
  if ((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0xbe4) != 0)) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0xc1c,&local_50,0);
  }
  if ((*(int *)(param_1 + 0x11f0) != 0) && (*(int *)(param_1 + 0x11d4) != 0)) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0x120c,&local_50,0);
  }
  if ((*(int *)(param_1 + 0x17e0) != 0) && (*(int *)(param_1 + 0x17c4) != 0)) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0x17fc,&local_50,0);
  }
  if ((*(int *)(param_1 + 0x1dd0) != 0) && (*(int *)(param_1 + 0x1db4) != 0)) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0x1dec,&local_50,0);
  }
  if ((*(int *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23a4) != 0)) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0x23dc,&local_50,0);
  }
  if ((*(int *)(param_1 + 0x29b0) != 0) && (*(int *)(param_1 + 0x2994) != 0)) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "InducementAtMovingDay";
    FUN_02747170(param_1 + 0x29cc,&local_50,0);
  }
  lVar5 = 0xa0;
  lVar4 = param_1 + 0x2fbc;
  do {
    if (*(int *)(lVar4 + -0x1c) != 0 && *(int *)(lVar4 + -0x38) != 0) {
      pcStack_48 = "InducementAtMovingDay";
      local_50 = puVar2 + 0x10;
      FUN_02747170(lVar4,&local_50,0);
    }
    lVar5 = lVar5 + -1;
    lVar4 = lVar4 + 0x158;
  } while (lVar5 != 0);
  pcStack_48 = "EquipChristmasWear";
  local_50 = puVar2 + 0x10;
  iVar3 = FUN_02749340(param_1 + 0x1267c,&local_50);
  if (iVar3 != 0) {
    pcStack_48 = "EquipChristmasWear";
    local_50 = puVar2 + 0x10;
    FUN_0274a060(param_1 + 0x1267c,&local_50,0);
    local_58 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_58 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_50 = (undefined *)(lVar4 + -0x15180);
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
    }
    uVar1 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = CONCAT26((short)uVar1,(undefined6)local_58) & 0xff00ffffffffffff;
    FUN_02690a70(param_1,&local_58);
  }
  return;
}

