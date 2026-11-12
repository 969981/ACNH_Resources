
void FUN_00a817a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  PosixTime *pPVar3;
  long local_58 [2];
  undefined1 local_48;
  int local_44;
  CalendarTime aCStack_28 [8];
  
  nn::time::Initialize();
  *(undefined2 *)(param_1 + 0x4084) = 0;
  *(undefined1 *)(param_1 + 0x4086) = 0;
  *(undefined1 *)(param_1 + 0x4088) = 0;
  nn::time::AdjustableUserSystemClock::Adjust();
  nn::time::AdjustableUserSystemClock::GetCurrentTime((PosixTime *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x28) = 0;
  pPVar3 = (PosixTime *)(param_1 + 8);
  *(undefined8 *)pPVar3 = *(undefined8 *)(param_1 + 0x10);
  nn::time::GetDeviceLocationName((LocationName *)(param_1 + 0x3c));
  nn::time::LoadTimeZoneRule((TimeZoneRule *)(param_1 + 0x60),(LocationName *)(param_1 + 0x3c));
  nn::time::ToCalendarTime
            (aCStack_28,(CalendarAdditionalInfo *)local_58,pPVar3,(TimeZoneRule *)(param_1 + 0x60));
  lVar2 = *(long *)pPVar3;
  *(int *)(param_1 + 0x38) = local_44;
  *(long *)pPVar3 = lVar2 + local_44;
  *(long *)(param_1 + 0x18) = lVar2 + local_44;
  *(undefined1 *)(param_1 + 0x4087) = local_48;
  FUN_00a818cc(param_1,0);
  *(undefined2 *)(param_1 + 0x408a) = *(undefined2 *)(param_1 + 0x4060);
  *(undefined1 *)(param_1 + 0x408c) = *(undefined1 *)(param_1 + 0x4062);
  *(undefined4 *)(param_1 + 0x408d) = *(undefined4 *)(param_1 + 0x4063);
  *(undefined8 *)(param_1 + 0x4068) = *(undefined8 *)(param_1 + 0x4060);
  if ((char)((ulong)*(undefined8 *)(param_1 + 0x4060) >> 0x20) < '\x05') {
    local_58[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x4068));
    local_58[0] = local_58[0] + -0x15180;
    uVar1 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_58);
    *(undefined8 *)(param_1 + 0x4068) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x406e) = 0;
  *(undefined2 *)(param_1 + 0x406c) = 5;
  *(undefined8 *)(param_1 + 0x4070) = *(undefined8 *)(param_1 + 0x4068);
  return;
}

