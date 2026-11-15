
bool FUN_021de700(void)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = PTR_DAT_04bb32e8;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  uVar5 = *(undefined8 *)PTR_DAT_04bb32f0;
  pcStack_38 = "Halloween";
  puVar4 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar4 == 0) {
    local_30 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    puVar4 = &local_30;
    uVar3 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar3,(undefined6)local_30) & 0xff00ffffffffffff;
  }
  uVar3 = *puVar4;
  uVar3 = FUN_00879dd0(uVar5,&local_40,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  bVar2 = false;
  if ((uVar3 & 1) != 0) {
    bVar2 = '\x10' < *(char *)(*(long *)puVar1 + 0x4064);
  }
  return bVar2;
}

