
void FUN_00a80fac(CalendarTime *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  CalendarTime CVar4;
  CalendarTime CVar5;
  int iVar6;
  long local_28;
  
  if ((char)param_1[4] < '\x05') {
    local_28 = nn::time::ToPosixTimeFromUtc(param_1);
    local_28 = local_28 + -0x15180;
    uVar2 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    CVar4 = SUB81(uVar2 >> 0x10,0);
    CVar5 = SUB81(uVar2 >> 0x18,0);
    *(ulong *)param_1 = uVar2;
  }
  else {
    uVar2 = (ulong)*(ushort *)param_1;
    CVar4 = param_1[2];
    CVar5 = param_1[3];
  }
  param_1[6] = (CalendarTime)0x0;
  *(undefined2 *)(param_1 + 4) = 5;
  iVar1 = nn::time::GetDayOfWeek((int)(short)uVar2,(int)(char)CVar4,(int)(char)CVar5);
  local_28 = CONCAT44(local_28._4_4_,iVar1);
  iVar6 = -6;
  if (-1 < iVar1) {
    iVar6 = -iVar1;
  }
  local_28 = nn::time::ToPosixTimeFromUtc(param_1);
  if (iVar6 != 0) {
    local_28 = ((long)iVar6 * 86400000000000) / 1000000000 + local_28;
  }
  uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  *(undefined8 *)param_1 = uVar3;
  return;
}

