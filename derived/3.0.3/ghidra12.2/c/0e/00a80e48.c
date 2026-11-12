
void FUN_00a80e48(CalendarTime *param_1)

{
  undefined8 uVar1;
  long local_8;
  
  if ((char)param_1[4] < '\x05') {
    local_8 = nn::time::ToPosixTimeFromUtc(param_1);
    local_8 = local_8 + -0x15180;
    uVar1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    *(undefined8 *)param_1 = uVar1;
  }
  param_1[6] = (CalendarTime)0x0;
  *(undefined2 *)(param_1 + 4) = 5;
  return;
}

