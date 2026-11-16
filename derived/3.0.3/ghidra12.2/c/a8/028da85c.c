
void FUN_028da85c(CalendarTime *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  long local_28;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x148) == 0x34) {
      return;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x148) = 0x34;
    FUN_028deee0(param_1);
    FUN_028db6f0(param_1);
    FUN_028dcb50(param_1);
    FUN_028dd9d0(param_1);
    FUN_028de590(param_1);
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  *(undefined8 *)param_1 = uVar2;
  if ((char)((ulong)uVar2 >> 0x20) < '\x05') {
    local_28 = nn::time::ToPosixTimeFromUtc(param_1);
    local_28 = local_28 + -0x15180;
    uVar2 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    *(undefined8 *)param_1 = uVar2;
  }
  param_1[6] = (CalendarTime)0x0;
  *(undefined2 *)(param_1 + 4) = 5;
  if (param_2 < 3) {
    if (param_2 == 1) {
      local_48 = *(undefined8 *)param_1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = local_28 + 0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      goto LAB_028daa38;
    }
    local_48 = *(undefined8 *)param_1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    local_48 = *(undefined8 *)param_1;
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_28 = local_28 + -0x15180;
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    uVar1 = FUN_028da340(param_1,&local_48,param_3 & 1);
    local_28 = CONCAT44(local_28._4_4_,uVar1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_28 = local_28 + 0x15180;
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar1 = FUN_028da340(param_1,&local_48,param_3 & 1);
  local_28 = CONCAT44(local_28._4_4_,uVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
  local_28 = local_28 + 0x15180;
  local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
LAB_028daa38:
  uVar1 = FUN_028da340(param_1,&local_48,param_3 & 1);
  local_28 = CONCAT44(local_28._4_4_,uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (*(int *)(param_1 + 0x148) != 0x34) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x148) = 0x34;
  }
  FUN_028deee0(param_1);
  FUN_028db6f0(param_1);
  FUN_028dcb50(param_1);
  FUN_028dd9d0(param_1);
  FUN_028de590(param_1);
  return;
}

