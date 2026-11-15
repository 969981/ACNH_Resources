
bool FUN_01df8000(int *param_1,PosixTime *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TimeZoneRule aTStack_4058 [16388];
  short local_54;
  char local_52;
  char local_51;
  char local_50;
  char local_4f;
  char local_4e;
  
  nn::time::GetDeviceLocationName((LocationName *)&local_54);
  iVar3 = nn::time::LoadTimeZoneRule(aTStack_4058,(LocationName *)&local_54);
  if (iVar3 == 0) {
    iVar3 = nn::time::ToCalendarTime
                      ((CalendarTime *)&local_54,(CalendarAdditionalInfo *)0x0,param_2,aTStack_4058)
    ;
    bVar2 = iVar3 == 0;
    if (iVar3 == 0) {
      iVar4 = (int)local_52;
      *param_1 = (int)local_54;
      param_1[1] = iVar4;
      iVar3 = iVar4 + 0xc;
      if ('\x02' < local_52) {
        iVar3 = iVar4;
      }
      iVar1 = (int)local_54 - (uint)(local_52 < '\x03');
      iVar4 = (iVar3 * 0x1a + 0x10) * 0x6667;
      iVar3 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar5 = (int)((ulong)((long)iVar1 * -0x51eb851f) >> 0x20);
      param_1[4] = (int)local_50;
      param_1[5] = (int)local_4f;
      param_1[6] = (int)local_4e;
      param_1[2] = (int)local_51;
      param_1[3] = (iVar1 + local_51 + (iVar3 >> 2) + ((iVar5 >> 5) - (iVar5 >> 0x1f)) + iVar1 / 400
                   + ((iVar4 >> 0x12) - (iVar4 >> 0x1f))) % 7;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

