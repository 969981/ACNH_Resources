
uint FUN_021e6fa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  puVar3 = PTR_DAT_04bb32f0;
  puVar2 = PTR_DAT_04bb32e8;
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  uVar8 = *(undefined8 *)PTR_DAT_04bb32f0;
  pcStack_48 = "Halloween";
  puVar6 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar6 == 0) {
    local_40 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_40 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_38 = local_38 + -0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    puVar6 = &local_40;
    uVar5 = local_40 >> 0x30;
    local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
    local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
  }
  uVar5 = *puVar6;
  uVar5 = FUN_00879dd0(uVar8,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
  lVar7 = *(long *)puVar2;
  if (((uVar5 & 1) == 0) || (*(char *)(lVar7 + 0x4064) < '\x11')) {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "HarvestFestival";
    uVar8 = *(undefined8 *)puVar3;
    puVar6 = (ulong *)(lVar7 + 0x4068);
    if (*(short *)puVar6 == 0) {
      local_40 = *(ulong *)(lVar7 + 0x4060);
      if ((char)(local_40 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_38 = local_38 + -0x15180;
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar5 = local_40 >> 0x30;
      local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
      local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
      puVar6 = &local_40;
    }
    uVar5 = *puVar6;
    uVar5 = FUN_00879dd0(uVar8,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    lVar7 = *(long *)puVar2;
    if (((uVar5 & 1) == 0) || (*(char *)(lVar7 + 0x4064) < '\t')) {
      local_50 = puVar1 + 0x10;
      pcStack_48 = "Carnival";
      uVar8 = *(undefined8 *)puVar3;
      puVar6 = (ulong *)(lVar7 + 0x4068);
      if (*(short *)puVar6 == 0) {
        local_40 = *(ulong *)(lVar7 + 0x4060);
        if ((char)(local_40 >> 0x20) < '\x05') {
          local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_38 = local_38 + -0x15180;
          local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        uVar5 = local_40 >> 0x30;
        local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
        local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
        puVar6 = &local_40;
      }
      uVar5 = *puVar6;
      uVar4 = FUN_00879dd0(uVar8,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
      goto LAB_021e718c;
    }
  }
  uVar4 = 1;
LAB_021e718c:
  return uVar4 & 1;
}

