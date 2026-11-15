
void FUN_02259310(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*param_1 != 0) {
    return;
  }
  local_48 = param_1[2];
  puVar8 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar8 == 0) {
    local_70 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_70 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_60 = (undefined *)(lVar5 + -0x15180);
      local_70 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    }
    uVar7 = (ulong)local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = (undefined *)(CONCAT26((short)uVar7,(undefined6)local_70) & 0xff00ffffffffffff);
    puVar8 = &local_70;
  }
  local_50 = *puVar8;
  if ((local_50 & 0xffff) != 0) {
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
    if ((lVar5 <= lVar6) &&
       (lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50), puVar2 = PTR_DAT_04bb32f0,
       puVar1 = PTR_DAT_04bb2020, lVar6 == lVar5)) {
      uVar9 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_38 = local_48;
      pcStack_58 = "NormalLive";
      if ((char)(local_48 >> 0x20) < '\x05') {
        lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_70 = (undefined *)(lVar5 + -0x15180);
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
      }
      uVar3 = local_38;
      uVar7 = local_38 >> 0x30;
      local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
      local_38 = CONCAT26((short)uVar7,(undefined6)local_38) & 0xff00ffffffffffff;
      uVar7 = FUN_00879dd0(uVar9,&local_60,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
      if ((uVar7 & 1) == 0) {
        local_70 = puVar1 + 0x10;
        uVar9 = *(undefined8 *)puVar2;
        local_40 = local_48;
        pcStack_68 = "BirthdayLive";
        if ((char)(local_48 >> 0x20) < '\x05') {
          lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_38 = lVar5 - 0x15180;
          local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        uVar7 = local_40;
        local_40._7_1_ = SUB81(uVar7,7);
        local_40._0_7_ = (uint7)CONCAT24(5,(undefined4)local_40);
        uVar7 = FUN_00879dd0(uVar9,&local_70,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      puVar1 = puVar1 + 0x10;
      pcStack_58 = "IsFirstKKFesDay";
      local_60 = puVar1;
      iVar4 = FUN_02758850(&local_60);
      if (iVar4 != 0) {
        pcStack_58 = "IsFirstKKFesForceEnd";
        local_60 = puVar1;
        FUN_02758bb8(&local_60,1);
      }
    }
  }
  return;
}

