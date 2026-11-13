
uint FUN_01229524(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  undefined **local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar5 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar5 == 0) {
    local_28 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_40 = (undefined **)(lVar4 + -0x15180);
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
    }
    uVar2 = local_28;
    puVar5 = &local_28;
    local_28._7_1_ = SUB81(uVar2,7);
    local_28._0_7_ = (uint7)CONCAT24(5,(undefined4)local_28);
  }
  uVar1 = DAT_04cea100;
  local_30 = *puVar5;
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "Easter";
  if ((char)(local_30 >> 0x20) < '\x05') {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = lVar4 - 0x15180;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar2 = local_30;
  local_30._7_1_ = SUB81(uVar2,7);
  local_30._0_7_ = (uint7)CONCAT24(5,(undefined4)local_30);
  uVar3 = FUN_00879dd0(uVar1,&local_40,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
  return uVar3 & 1;
}

