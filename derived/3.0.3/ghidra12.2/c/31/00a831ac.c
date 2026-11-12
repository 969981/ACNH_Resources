
undefined4 FUN_00a831ac(undefined8 param_1,short param_2,byte param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  short local_38;
  byte local_36;
  undefined4 local_35;
  int local_2c;
  long local_28;
  
  local_35 = 1;
  local_38 = param_2;
  local_36 = param_3;
  local_2c = param_4;
  iVar2 = nn::time::GetDayOfWeek((int)param_2,(int)(char)param_3,1);
  local_28 = CONCAT44(local_28._4_4_,iVar2);
  iVar1 = (local_2c - iVar2) + 7;
  if (iVar2 <= local_2c) {
    iVar1 = local_2c - iVar2;
  }
  iVar1 = iVar1 + param_5 * 7 + -7;
  local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
  if (iVar1 != 0) {
    local_28 = ((long)iVar1 * 86400000000000) / 1000000000 + local_28;
  }
  uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  uVar4 = (undefined4)((ulong)uVar3 >> 0x18);
  if (((int)uVar3 << 8) >> 0x18 != (uint)param_3) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

