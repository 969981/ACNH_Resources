
ulong FUN_0289c060(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
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
  puVar4 = PTR_DAT_04bb32f0;
  puVar3 = PTR_DAT_04bb2020;
  uVar11 = *puVar10;
  uVar12 = uVar11 >> 0x10;
  uVar14 = *(undefined8 *)PTR_DAT_04bb32f0;
  uVar13 = uVar11 >> 0x18;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  uVar7 = uVar11 & 0xffffffff;
  cVar2 = (char)(uVar11 >> 0x20);
  uVar9 = uVar13 & 0xffffffff;
  uVar8 = uVar12 & 0xffffffff;
  pcStack_78 = "XmasEve";
  local_70 = uVar11;
  if (cVar2 < '\x05') {
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = lVar6 - 0x15180;
    uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    uVar8 = uVar7 >> 0x10;
    uVar9 = uVar7 >> 0x18;
    local_70 = uVar7;
  }
  uVar5 = local_70;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70._7_1_ = SUB81(uVar5,7);
  local_70._0_7_ = (uint7)(uint6)local_70;
  uVar7 = FUN_00879dd0(uVar14,&local_80,uVar7,uVar8,uVar9,0);
  if (((uVar7 & 1) == 0) || (uVar7 = FUN_0289c320(uVar7,1,param_2), (int)uVar7 < 0)) {
    uVar14 = *(undefined8 *)puVar4;
    local_80 = puVar3 + 0x10;
    pcStack_78 = "Carnival";
    local_70 = uVar11;
    if (cVar2 < '\x05') {
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
    uVar7 = FUN_00879dd0(uVar14,&local_80,uVar11 & 0xffffffff,uVar12 & 0xffffffff,
                         uVar13 & 0xffffffff,0);
    if (((uVar7 & 1) == 0) || (uVar7 = FUN_0289c320(uVar7,2,param_2), (int)uVar7 < 0)) {
      uVar1 = 0;
      if (param_2 < 2) {
        uVar1 = param_2;
      }
      uVar7 = (ulong)*(uint *)(param_1 + (ulong)uVar1 * 4 + 0x12bc);
    }
  }
  return uVar7;
}

