
uint FUN_0284f400(long param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  ulong local_18;
  
  if ((((*(char *)(param_1 + 0x19b) == '\x02') && (*param_2 == (int)*(char *)(param_1 + 0x198))) ||
      ((*(char *)(param_1 + 0x73) == '\x02' && (*param_2 == (int)*(char *)(param_1 + 0x70))))) ||
     (((*(char *)(param_1 + 0x163) == '\x02' && (*param_2 == (int)*(char *)(param_1 + 0x160))) &&
      (uVar2 = FUN_0284a8e4(param_1 + 0x134), (uVar2 & 1) != 0)))) {
    uVar1 = 1;
    goto LAB_0284f574;
  }
  if (*(char *)(param_1 + 299) == '\x02') {
    uVar1 = 0;
    if ((*param_2 != (int)*(char *)(param_1 + 0x128)) || (*(char *)(param_1 + 0x12a) != '\x02'))
    goto LAB_0284f574;
    local_18 = *(ulong *)(param_1 + 0x120);
    if ((local_18 & 0xffff) != 0) {
      lVar5 = *(long *)PTR_DAT_04bb32e8;
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar5 + 0x4060));
      if ((lVar3 <= lVar4) &&
         (lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar5 + 0x4060)), lVar4 != lVar3))
      goto LAB_0284f570;
    }
    local_38 = *(undefined8 *)(param_1 + 0x118);
    if ((char)(local_38 >> 0x20) < '\x05') {
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = lVar3 - 0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar2 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar2,(undefined6)local_38) & 0xff00ffffffffffff;
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = lVar3 + 0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    uVar1 = FUN_00a80d84(&local_38,1);
  }
  else {
LAB_0284f570:
    uVar1 = 0;
  }
LAB_0284f574:
  return uVar1 & 1;
}

