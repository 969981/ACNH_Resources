
undefined8 FUN_028d4718(void)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bb32e8;
  puVar12 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar12 == 0) {
    local_68 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_80 = (undefined *)(lVar8 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    uVar9 = local_68;
    puVar12 = &local_68;
    local_68._7_1_ = SUB81(uVar9,7);
    local_68._0_7_ = (uint7)CONCAT24(5,(undefined4)local_68);
  }
  puVar5 = PTR_DAT_04bb32f0;
  puVar3 = PTR_DAT_04bb2020;
  uVar13 = *puVar12;
  uVar14 = uVar13 >> 0x10;
  uVar16 = *(undefined8 *)PTR_DAT_04bb32f0;
  uVar15 = uVar13 >> 0x18;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  uVar9 = uVar13 & 0xffffffff;
  cVar2 = (char)(uVar13 >> 0x20);
  uVar11 = uVar15 & 0xffffffff;
  uVar10 = uVar14 & 0xffffffff;
  pcStack_78 = "FirstLive";
  local_70 = uVar13;
  if (cVar2 < '\x05') {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = lVar8 - 0x15180;
    uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    uVar10 = uVar9 >> 0x10;
    uVar11 = uVar9 >> 0x18;
    local_70 = uVar9;
  }
  uVar6 = local_70;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70._7_1_ = SUB81(uVar6,7);
  local_70._0_7_ = (uint7)(uint6)local_70;
  uVar9 = FUN_00879dd0(uVar16,&local_80,uVar9,uVar10,uVar11,0);
  if ((uVar9 & 1) == 0) {
    uVar16 = *(undefined8 *)puVar5;
    local_80 = puVar3 + 0x10;
    uVar11 = uVar15 & 0xffffffff;
    uVar10 = uVar14 & 0xffffffff;
    uVar9 = uVar13 & 0xffffffff;
    pcStack_78 = "NormalLive";
    local_70 = uVar13;
    if (cVar2 < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = lVar8 - 0x15180;
      uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      uVar10 = uVar9 >> 0x10;
      uVar11 = uVar9 >> 0x18;
      local_70 = uVar9;
    }
    uVar6 = local_70;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70._7_1_ = SUB81(uVar6,7);
    local_70._0_7_ = (uint7)(uint6)local_70;
    uVar9 = FUN_00879dd0(uVar16,&local_80,uVar9,uVar10,uVar11,0);
    if ((uVar9 & 1) == 0) {
      uVar16 = *(undefined8 *)puVar5;
      local_80 = puVar3 + 0x10;
      uVar11 = uVar15 & 0xffffffff;
      uVar10 = uVar14 & 0xffffffff;
      uVar9 = uVar13 & 0xffffffff;
      pcStack_78 = "BirthdayLive";
      local_70 = uVar13;
      if (cVar2 < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = lVar8 - 0x15180;
        uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        uVar10 = uVar9 >> 0x10;
        uVar11 = uVar9 >> 0x18;
        local_70 = uVar9;
      }
      uVar6 = local_70;
      local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
      local_70._7_1_ = SUB81(uVar6,7);
      local_70._0_7_ = (uint7)(uint6)local_70;
      uVar9 = FUN_00879dd0(uVar16,&local_80,uVar9,uVar10,uVar11,0);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
    }
  }
  uVar9 = FUN_00a8117c(*(long *)puVar4 + 0x4060);
  if (((uVar9 & 1) != 0) || (bVar1 = *(byte *)(*(long *)puVar4 + 0x4064), bVar1 < 5)) {
    return 3;
  }
  uVar16 = *(undefined8 *)puVar5;
  local_80 = puVar3 + 0x10;
  uVar11 = uVar15 & 0xffffffff;
  uVar10 = uVar14 & 0xffffffff;
  uVar9 = uVar13 & 0xffffffff;
  pcStack_78 = "NormalLive";
  local_70 = uVar13;
  if (cVar2 < '\x05') {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = lVar8 - 0x15180;
    uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    uVar10 = uVar9 >> 0x10;
    uVar11 = uVar9 >> 0x18;
    local_70 = uVar9;
  }
  uVar6 = local_70;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70._7_1_ = SUB81(uVar6,7);
  local_70._0_7_ = (uint7)(uint6)local_70;
  uVar9 = FUN_00879dd0(uVar16,&local_80,uVar9,uVar10,uVar11,0);
  if ((uVar9 & 1) != 0) {
    local_80 = puVar3 + 0x10;
    pcStack_78 = "NormalLive";
    bVar7 = FUN_00884a10(*(undefined8 *)puVar5,&local_80);
    if (bVar1 < bVar7) {
      return 1;
    }
  }
  uVar16 = *(undefined8 *)puVar5;
  local_80 = puVar3 + 0x10;
  pcStack_78 = "BirthdayLive";
  local_70 = uVar13;
  if (cVar2 < '\x05') {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = lVar8 - 0x15180;
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    uVar13 = local_70 & 0xffffffff;
    uVar14 = local_70 >> 0x10;
    uVar15 = local_70 >> 0x18;
  }
  uVar9 = local_70;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70._7_1_ = SUB81(uVar9,7);
  local_70._0_7_ = (uint7)(uint6)local_70;
  uVar9 = FUN_00879dd0(uVar16,&local_80,uVar13 & 0xffffffff,uVar14 & 0xffffffff,uVar15 & 0xffffffff,
                       0);
  if ((uVar9 & 1) != 0) {
    local_80 = puVar3 + 0x10;
    pcStack_78 = "BirthdayLive";
    bVar7 = FUN_00884a10(*(undefined8 *)puVar5,&local_80);
    if (bVar1 < bVar7) {
      return 1;
    }
  }
  return 2;
}

