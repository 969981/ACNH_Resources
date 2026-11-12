
void FUN_00a829b0(float param_1,undefined8 param_2,CalendarTime *param_3,CalendarTime *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  if ((*(short *)param_3 == 0) ||
     (uVar1 = nn::time::IsValidDate
                        ((int)*(short *)param_3,(int)(char)param_3[2],(int)(char)param_3[3]),
     (uVar1 & 1) == 0)) {
    param_3 = (CalendarTime *)&local_38;
    local_38 = CONCAT17(local_38._7_1_,0x10107d0);
  }
  lVar2 = nn::time::ToPosixTimeFromUtc(param_3);
  if ((*(short *)param_4 == 0) ||
     (uVar1 = nn::time::IsValidDate
                        ((int)*(short *)param_4,(int)(char)param_4[2],(int)(char)param_4[3]),
     (uVar1 & 1) == 0)) {
    param_4 = (CalendarTime *)&local_38;
    local_38 = CONCAT17(local_38._7_1_,0x10107d0);
  }
  lVar3 = nn::time::ToPosixTimeFromUtc(param_4);
  local_38 = lVar2 + (int)((float)(((lVar3 - lVar2) * 1000000000) / 1000000000) * param_1);
  nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  return;
}

