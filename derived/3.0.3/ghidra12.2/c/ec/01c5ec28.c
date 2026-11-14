
bool FUN_01c5ec28(CalendarTime *param_1,CalendarTime *param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  short local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined2 local_3c;
  undefined1 local_3a;
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined2 local_34;
  undefined1 local_32;
  
  local_38 = *(short *)param_1;
  local_34 = 0;
  local_32 = 0;
  local_3c = 0;
  local_3a = 0;
  local_40 = local_38 + 1;
  local_3e = param_3;
  local_3d = param_4;
  local_36 = param_3;
  local_35 = param_4;
  lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  lVar2 = nn::time::ToPosixTimeFromUtc(param_2);
  if (lVar2 < lVar1) {
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    lVar4 = nn::time::ToPosixTimeFromUtc(param_2);
    if (lVar4 < lVar3) {
      return false;
    }
    nn::time::ToPosixTimeFromUtc(param_2);
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    lVar4 = nn::time::ToPosixTimeFromUtc(param_1);
    if (lVar4 < lVar3) {
      return true;
    }
  }
  else {
    param_1 = param_2;
  }
  nn::time::ToPosixTimeFromUtc(param_1);
  return lVar1 <= lVar2;
}

