
bool FUN_00a828ac(CalendarTime *param_1,CalendarTime *param_2,CalendarTime *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined2 local_28;
  undefined4 local_26;
  undefined1 local_22;
  
  if ((*(short *)param_1 == 0) ||
     (uVar2 = nn::time::IsValidDate
                        ((int)*(short *)param_1,(int)(char)param_1[2],(int)(char)param_1[3]),
     (uVar2 & 1) == 0)) {
    local_28 = 2000;
    param_1 = (CalendarTime *)&local_28;
    local_26 = 0x101;
    local_22 = 0;
  }
  lVar3 = nn::time::ToPosixTimeFromUtc(param_1);
  if ((*(short *)param_2 == 0) ||
     (uVar2 = nn::time::IsValidDate
                        ((int)*(short *)param_2,(int)(char)param_2[2],(int)(char)param_2[3]),
     (uVar2 & 1) == 0)) {
    local_28 = 2000;
    param_2 = (CalendarTime *)&local_28;
    local_26 = 0x101;
    local_22 = 0;
  }
  lVar4 = nn::time::ToPosixTimeFromUtc(param_2);
  if ((*(short *)param_3 == 0) ||
     (uVar2 = nn::time::IsValidDate
                        ((int)*(short *)param_3,(int)(char)param_3[2],(int)(char)param_3[3]),
     (uVar2 & 1) == 0)) {
    local_28 = 2000;
    param_3 = (CalendarTime *)&local_28;
    local_26 = 0x101;
    local_22 = 0;
  }
  lVar5 = nn::time::ToPosixTimeFromUtc(param_3);
  if (lVar4 < lVar5) {
    bVar1 = lVar4 <= lVar3 && lVar3 < lVar5;
  }
  else {
    bVar1 = lVar3 < lVar5 || lVar4 <= lVar3;
  }
  return bVar1;
}

