
bool FUN_0280d718(ushort *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = nn::time::IsValidDate
                    ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    local_28 = FUN_0272eca4(param_1,0);
    local_30 = FUN_0272eca4(param_2,0);
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    if (lVar4 < lVar3) {
      bVar1 = true;
    }
    else {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      bVar1 = lVar4 == lVar3;
    }
  }
  return bVar1;
}

