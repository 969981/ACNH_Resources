
void FUN_02864514(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_2 + 0x10);
  FUN_00a81090(&local_28);
  local_30 = *(undefined8 *)(param_2 + 0x18);
  FUN_00a81090(&local_30);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "GrowUpAfterPatch2_0";
  uVar1 = FUN_0273f0a0(&local_40);
  if ((uVar1 & 1) != 0) {
    lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    if ((lVar2 <= lVar3) &&
       (lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28), lVar3 == lVar2)) {
      return;
    }
  }
  FUN_028645c0(param_1);
  return;
}

