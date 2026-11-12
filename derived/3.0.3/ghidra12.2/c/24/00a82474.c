
undefined4 FUN_00a82474(CalendarTime *param_1,CalendarTime *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined2 local_38;
  undefined4 local_36;
  undefined1 local_32;
  
  if (*(short *)param_1 == 0 || *(short *)param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = nn::time::IsValidDate
                      ((int)*(short *)param_1,(int)(char)param_1[2],(int)(char)param_1[3]);
    if ((uVar2 & 1) == 0) {
      local_38 = 2000;
      param_1 = (CalendarTime *)&local_38;
      local_36 = 0x101;
      local_32 = 0;
    }
    lVar3 = nn::time::ToPosixTimeFromUtc(param_1);
    if ((*(short *)param_2 == 0) ||
       (uVar2 = nn::time::IsValidDate
                          ((int)*(short *)param_2,(int)(char)param_2[2],(int)(char)param_2[3]),
       (uVar2 & 1) == 0)) {
      local_38 = 2000;
      param_2 = (CalendarTime *)&local_38;
      local_36 = 0x101;
      local_32 = 0;
    }
    lVar4 = nn::time::ToPosixTimeFromUtc(param_2);
    uVar1 = (undefined4)(((lVar3 - lVar4) * 1000000000) / 86400000000000);
  }
  return uVar1;
}

