
uint FUN_028d7a38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_68;
  char *pcStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long local_28;
  
  puVar3 = PTR_DAT_04bb32e8;
  puVar9 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar9 == 0) {
    local_68 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_68 >> 0x20) < '\x05') {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_58 = (undefined *)(lVar7 + -0x15180);
      local_68 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar10 = (ulong)local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68 = (undefined *)(CONCAT26((short)uVar10,(undefined6)local_68) & 0xff00ffffffffffff);
    puVar9 = &local_68;
  }
  puVar2 = PTR_DAT_04bb2020;
  uVar10 = *puVar9;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "PynVisitToday";
  local_58 = puVar1;
  iVar5 = FUN_0273ea30(&local_58);
  if (iVar5 == 0) {
    pcStack_60 = "Easter";
    uVar11 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_68 = puVar1;
    local_48 = uVar10;
    if ((char)(uVar10 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = local_28 + -0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar4 = local_48;
    uVar10 = local_48 >> 0x30;
    uVar8 = local_48 & 0xffffffff;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = CONCAT26((short)uVar10,(undefined6)local_48) & 0xff00ffffffffffff;
    uVar10 = FUN_00879dd0(uVar11,&local_68,uVar8,uVar4 >> 0x10,uVar4 >> 0x18,0);
    uVar6 = 0;
    if ((uVar10 & 1) == 0) goto LAB_028d7b80;
  }
  local_58 = puVar2 + 0x10;
  local_68 = *(undefined **)(*(long *)puVar3 + 0x4060);
  pcStack_50 = "pyn";
  uVar6 = FUN_028d4a98(&local_68,&local_58);
LAB_028d7b80:
  return uVar6 & 1;
}

