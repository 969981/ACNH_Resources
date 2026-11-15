
bool FUN_0203c6f4(void)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  puVar2 = PTR_DAT_04bb32e8;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  uVar6 = *(undefined8 *)PTR_DAT_04bb32f0;
  pcStack_38 = "HarvestFestival";
  puVar5 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar5 == 0) {
    local_30 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    puVar5 = &local_30;
    uVar4 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar4,(undefined6)local_30) & 0xff00ffffffffffff;
  }
  uVar4 = *puVar5;
  uVar4 = FUN_00879dd0(uVar6,&local_40,uVar4,uVar4 >> 0x10,uVar4 >> 0x18,0);
  bVar3 = false;
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(*(long *)puVar2 + 0x4060);
    if ((char)(uVar4 >> 0x20) < '\t') {
      cVar1 = (char)(uVar4 >> 0x28);
      if (((uint)(uVar4 >> 0x20) & 0xff) != 8 || cVar1 < '\x1e') {
        return (uVar4 & 0xff00000000) == 0 && cVar1 < '\x1e';
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

