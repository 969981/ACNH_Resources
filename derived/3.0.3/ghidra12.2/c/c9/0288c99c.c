
void FUN_0288c99c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_2 + 0x10);
  FUN_00a81090(&local_18);
  local_38 = *(undefined8 *)(param_2 + 0x18);
  FUN_00a81090(&local_38);
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "GrowUpAfterPatch2_0";
  uVar1 = FUN_0273f0a0(&local_48);
  if ((uVar1 & 1) != 0) {
    lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
    if ((lVar2 <= lVar3) &&
       (lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18), lVar3 == lVar2)) {
      return;
    }
  }
  FUN_0288ca50(param_1,param_2);
  return;
}

