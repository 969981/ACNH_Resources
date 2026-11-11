
long thunk_FUN_00445f70(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lStack_28;
  long lStack_18;
  
  uVar3 = nn::time::IsInitialized();
  if ((uVar3 & 1) == 0) {
    nn::time::Initialize();
  }
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&lStack_18);
  iVar2 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&lStack_28);
  if (iVar1 != 0) {
    return lStack_28;
  }
  if (iVar2 != 0) {
    return lStack_18;
  }
  if (lStack_18 <= lStack_28) {
    lStack_18 = lStack_28;
  }
  return lStack_18;
}

