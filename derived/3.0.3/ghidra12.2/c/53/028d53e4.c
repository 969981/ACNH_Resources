
uint FUN_028d53e4(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  undefined *local_28;
  char *pcStack_20;
  undefined8 local_18;
  
  psVar5 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar5 == 0) {
    local_18 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_18 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
      local_28 = (undefined *)(lVar4 + -0x15180);
      param_1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      local_18 = param_1;
    }
    psVar5 = (short *)&local_18;
    uVar1 = local_18 >> 0x30;
    local_18._0_6_ = CONCAT24(5,(undefined4)local_18);
    local_18 = CONCAT26((short)uVar1,(undefined6)local_18) & 0xff00ffffffffffff;
  }
  local_28 = *(undefined **)psVar5;
  iVar2 = FUN_028d4550(param_1,&local_28);
  uVar3 = 0;
  if (iVar2 != 0) {
    local_28 = PTR_DAT_04bb2020 + 0x10;
    pcStack_20 = "TkkReturn";
    uVar3 = FUN_0273f0a0(&local_28);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}

