
void FUN_028da1e0(CalendarTime *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  long local_18;
  
  uVar2 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  *(undefined8 *)param_1 = uVar2;
  if ((char)((ulong)uVar2 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc(param_1);
    local_18 = local_18 + -0x15180;
    uVar2 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    *(undefined8 *)param_1 = uVar2;
  }
  param_1[6] = (CalendarTime)0x0;
  *(undefined2 *)(param_1 + 4) = 5;
  local_38 = *(undefined8 *)param_1;
  local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
  local_18 = local_18 + -0x15180;
  local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  param_2 = param_2 & 1;
  uVar1 = FUN_028da340(param_1,&local_38,param_2);
  local_18 = CONCAT44(local_18._4_4_,uVar1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
  local_18 = local_18 + 0x15180;
  local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  uVar1 = FUN_028da340(param_1,&local_38,param_2);
  local_18 = CONCAT44(local_18._4_4_,uVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
  local_18 = local_18 + 0x15180;
  local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  uVar1 = FUN_028da340(param_1,&local_38,param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (*(int *)(param_1 + 0x148) != 0x34) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x148) = 0x34;
  }
  return;
}

