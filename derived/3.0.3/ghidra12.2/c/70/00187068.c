
void FUN_00187068(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_20;
  PosixTime aPStack_18 [8];
  
  iVar1 = nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_18);
  if (iVar1 == 0) {
    FUN_001865bc(&local_20,aPStack_18);
    *param_1 = local_20;
    return;
  }
  *param_1 = *DAT_04c57e48;
  return;
}

