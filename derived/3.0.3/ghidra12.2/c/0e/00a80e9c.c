
void FUN_00a80e9c(CalendarTime *param_1,int param_2)

{
  undefined8 uVar1;
  long local_28;
  
  local_28 = nn::time::ToPosixTimeFromUtc(param_1);
  if (param_2 != 0) {
    local_28 = local_28 + ((long)param_2 * 86400000000000) / 1000000000;
  }
  uVar1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  *(undefined8 *)param_1 = uVar1;
  return;
}

