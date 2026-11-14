
bool FUN_01a122a0(undefined8 param_1,undefined4 param_2,CalendarTime *param_3,CalendarTime *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 local_48;
  long local_28;
  
  lVar2 = nn::time::ToPosixTimeFromUtc(param_3);
  lVar3 = nn::time::ToPosixTimeFromUtc(param_4);
  if (lVar3 < lVar2) {
    bVar5 = false;
  }
  else {
    nn::time::ToPosixTimeFromUtc(param_4);
    local_48 = *(undefined8 *)param_3;
    uVar6 = 0;
    do {
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      lVar3 = nn::time::ToPosixTimeFromUtc(param_4);
      bVar5 = lVar3 < lVar2;
      if (lVar3 < lVar2) {
        return bVar5;
      }
      nn::time::ToPosixTimeFromUtc(param_4);
      uVar4 = FUN_01a11f30(param_1,param_2,&local_48);
      if ((uVar4 & 1) == 0) {
        return bVar5;
      }
      if ((short)local_48 != 0) {
        local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_28 = local_28 + 0xe10;
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      bVar1 = uVar6 < 0x30;
      uVar6 = uVar6 + 1;
    } while (bVar1);
  }
  return bVar5;
}

