
uint FUN_01229624(ulong param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar10 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar10 == 0) {
    local_68 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_80 = (undefined *)(lVar6 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    uVar7 = local_68;
    puVar10 = &local_68;
    local_68._7_1_ = SUB81(uVar7,7);
    local_68._0_7_ = (uint7)CONCAT24(5,(undefined4)local_68);
  }
  puVar3 = PTR_DAT_04bb32f0;
  puVar2 = PTR_DAT_04bb2020;
  uVar11 = *puVar10;
  uVar12 = uVar11 >> 0x10;
  uVar14 = *(undefined8 *)PTR_DAT_04bb32f0;
  uVar13 = uVar11 >> 0x18;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  uVar7 = uVar11 & 0xffffffff;
  cVar1 = (char)(uVar11 >> 0x20);
  uVar9 = uVar13 & 0xffffffff;
  uVar8 = uVar12 & 0xffffffff;
  pcStack_78 = "Easter";
  local_70 = uVar11;
  if (cVar1 < '\x05') {
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = lVar6 - 0x15180;
    uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    uVar8 = uVar7 >> 0x10;
    uVar9 = uVar7 >> 0x18;
    local_70 = uVar7;
  }
  uVar4 = local_70;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70._7_1_ = SUB81(uVar4,7);
  local_70._0_7_ = (uint7)(uint6)local_70;
  uVar5 = FUN_0087a8f0(uVar14,&local_80,uVar7,uVar8,uVar9,0);
  if (((uVar5 & 1) == 0) && ((param_1 & 1) != 0)) {
    uVar14 = *(undefined8 *)puVar3;
    local_80 = puVar2 + 0x10;
    pcStack_78 = "Easter";
    local_70 = uVar11;
    if (cVar1 < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = lVar6 - 0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      uVar11 = local_70 & 0xffffffff;
      uVar12 = local_70 >> 0x10;
      uVar13 = local_70 >> 0x18;
    }
    uVar7 = local_70;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70._7_1_ = SUB81(uVar7,7);
    local_70._0_7_ = (uint7)(uint6)local_70;
    uVar5 = FUN_00879dd0(uVar14,&local_80,uVar11 & 0xffffffff,uVar12 & 0xffffffff,
                         uVar13 & 0xffffffff,0);
  }
  return uVar5 & 1;
}

