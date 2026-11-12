
ulong FUN_00a813c0(CalendarTime *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb32e8;
  lVar1 = nn::time::ToPosixTimeFromUtc(param_1);
  lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar4 + 0x4060));
  if (lVar2 < lVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar4 + 0x4060));
    uVar3 = (ulong)(lVar2 != lVar1);
  }
  return uVar3;
}

