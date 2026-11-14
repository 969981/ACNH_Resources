
byte FUN_016d5d28(CalendarTime *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_30;
  undefined1 auStack_28 [7];
  byte bStack_21;
  
  auStack_28._0_2_ = SUB82(*(undefined8 *)param_1,0);
  bStack_21 = (byte)((ulong)*(undefined8 *)param_1 >> 0x38);
  auStack_28 = (undefined1  [7])CONCAT16(0,CONCAT42(0x51403,auStack_28._0_2_));
  local_30 = (ulong)bStack_21 << 0x38;
  local_30._0_6_ = CONCAT42(0x5140a,auStack_28._0_2_);
  lVar3 = nn::time::ToPosixTimeFromUtc(param_1);
  lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)auStack_28);
  if (lVar4 < lVar3) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)auStack_28);
    uVar5 = (uint)(lVar4 != lVar3);
  }
  lVar3 = nn::time::ToPosixTimeFromUtc(param_1);
  lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
  if (lVar4 < lVar3) {
    bVar2 = false;
  }
  else {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    bVar2 = lVar4 != lVar3;
  }
  bVar1 = false;
  if ((int)uVar5 < 1) {
    bVar1 = bVar2;
  }
  return bVar1 ^ *(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1;
}

