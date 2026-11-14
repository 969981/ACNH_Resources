
int FUN_01af0560(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined8 local_28;
  
  iVar2 = FUN_01aed730();
  puVar1 = PTR_DAT_04bb2020;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "RegulationType4";
  uVar3 = FUN_0273f0a0(&local_58);
  if ((uVar3 & 1) != 0) {
    iVar2 = (iVar2 * 0xc) / 10;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
  }
  puVar5 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar5 == 0) {
    local_28 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_58 = (undefined *)(lVar4 + -0x15180);
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar3 = local_28;
    puVar5 = &local_28;
    local_28._7_1_ = SUB81(uVar3,7);
    local_28._0_7_ = (uint7)CONCAT24(5,(undefined4)local_28);
  }
  local_48 = *puVar5;
  local_58 = puVar1 + 0x10;
  uVar6 = *(undefined8 *)PTR_DAT_04bb32f0;
  pcStack_50 = "BlackFriday";
  if ((char)(local_48 >> 0x20) < '\x05') {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_28 = lVar4 - 0x15180;
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar3 = local_48;
  local_48._7_1_ = SUB81(uVar3,7);
  local_48._0_7_ = (uint7)CONCAT24(5,(undefined4)local_48);
  uVar3 = FUN_00879dd0(uVar6,&local_58,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  if ((uVar3 & 1) != 0) {
    iVar2 = (iVar2 * 7) / 10;
  }
  return iVar2;
}

