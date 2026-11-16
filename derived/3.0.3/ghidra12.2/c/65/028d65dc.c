
uint FUN_028d65dc(void)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  long local_18;
  
  puVar7 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar7 == 0) {
    local_58 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_58 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_48 = (undefined *)(lVar5 + -0x15180);
      local_58 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar8 = (ulong)local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = (undefined *)(CONCAT26((short)uVar8,(undefined6)local_58) & 0xff00ffffffffffff);
    puVar7 = &local_58;
  }
  uVar8 = *puVar7;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "PynVisitToday";
  local_48 = puVar1;
  iVar3 = FUN_0273ea30(&local_48);
  if (iVar3 == 0) {
    pcStack_50 = "Easter";
    uVar9 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_58 = puVar1;
    local_38 = uVar8;
    if ((char)(uVar8 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar2 = local_38;
    uVar8 = local_38 >> 0x30;
    uVar6 = local_38 & 0xffffffff;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar8,(undefined6)local_38) & 0xff00ffffffffffff;
    uVar4 = FUN_00879dd0(uVar9,&local_58,uVar6,uVar2 >> 0x10,uVar2 >> 0x18,0);
  }
  else {
    uVar4 = 1;
  }
  return uVar4 & 1;
}

