
uint FUN_011be9f0(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *local_30;
  char *pcStack_28;
  undefined8 local_8;
  
  uVar5 = *(undefined8 *)PTR_DAT_04bb32f0;
  puVar4 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar4 == 0) {
    local_8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_8 >> 0x20) < '\x05') {
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_8);
      local_30 = (undefined *)(lVar2 + -0x15180);
      local_8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_30);
    }
    puVar4 = &local_8;
    uVar3 = local_8 >> 0x30;
    local_8._0_6_ = CONCAT24(5,(undefined4)local_8);
    local_8 = CONCAT26((short)uVar3,(undefined6)local_8) & 0xff00ffffffffffff;
  }
  uVar3 = *puVar4;
  uVar3 = FUN_00879dd0(uVar5,&DAT_050d58c0,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  uVar1 = 0;
  if ((uVar3 & 1) != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "TkkReturn";
    uVar1 = FUN_0273f0a0(&local_30);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

