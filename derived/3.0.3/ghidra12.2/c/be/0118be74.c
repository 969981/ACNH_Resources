
undefined4 FUN_0118be74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  puVar3 = PTR_DAT_04bb32f0;
  puVar2 = PTR_DAT_04bb32e8;
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "XmasReady2";
  uVar8 = *(undefined8 *)PTR_DAT_04bb32f0;
  puVar7 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar7 == 0) {
    local_40 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_40 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_38 = local_38 + -0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    puVar7 = &local_40;
    uVar5 = local_40 >> 0x30;
    local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
    local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
  }
  uVar5 = *puVar7;
  uVar5 = FUN_00879dd0(uVar8,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
  if ((uVar5 & 1) == 0) {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "XmasEve";
    lVar6 = *(long *)puVar2;
    uVar8 = *(undefined8 *)puVar3;
    puVar7 = (ulong *)(lVar6 + 0x4068);
    if (*(short *)puVar7 == 0) {
      local_40 = *(ulong *)(lVar6 + 0x4060);
      if ((char)(local_40 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_38 = local_38 + -0x15180;
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      puVar7 = &local_40;
      uVar5 = local_40 >> 0x30;
      local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
      local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
    }
    uVar5 = *puVar7;
    uVar5 = FUN_00879dd0(uVar8,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    if ((uVar5 & 1) == 0) {
      local_50 = puVar1 + 0x10;
      pcStack_48 = "XmasAfter";
      lVar6 = *(long *)puVar2;
      uVar8 = *(undefined8 *)puVar3;
      puVar7 = (ulong *)(lVar6 + 0x4068);
      if (*(short *)puVar7 == 0) {
        local_40 = *(ulong *)(lVar6 + 0x4060);
        if ((char)(local_40 >> 0x20) < '\x05') {
          local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_38 = local_38 + -0x15180;
          local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        puVar7 = &local_40;
        uVar5 = local_40 >> 0x30;
        local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
        local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
      }
      uVar5 = *puVar7;
      uVar5 = FUN_00879dd0(uVar8,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
      uVar4 = 0x6ba9cced;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0x7e3d1e46;
      }
    }
    else {
      uVar4 = 0x620dbc56;
    }
  }
  else {
    uVar4 = 0xf7f5db69;
  }
  return uVar4;
}

