
void FUN_00a80f0c(CalendarTime *param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long local_28;
  
  if (*(short *)param_1 != 0) {
    local_28 = nn::time::ToPosixTimeFromUtc(param_1);
    if (param_2 != 0) {
      local_28 = local_28 + ((long)param_2 * 3600000000000) / 1000000000;
    }
    if (param_3 != 0) {
      local_28 = local_28 + ((long)param_3 * 60000000000) / 1000000000;
    }
    local_28 = local_28 + param_4;
    uVar1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    *(undefined8 *)param_1 = uVar1;
  }
  return;
}

