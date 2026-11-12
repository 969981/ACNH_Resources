
ulong FUN_00a81374(CalendarTime *param_1,CalendarTime *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = nn::time::ToPosixTimeFromUtc(param_1);
  lVar2 = nn::time::ToPosixTimeFromUtc(param_2);
  if (lVar2 < lVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar2 = nn::time::ToPosixTimeFromUtc(param_2);
    uVar3 = (ulong)(lVar2 != lVar1);
  }
  return uVar3;
}

