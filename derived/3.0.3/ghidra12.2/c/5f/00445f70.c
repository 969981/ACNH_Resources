
long FUN_00445f70(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long local_28;
  long local_18;
  
  uVar3 = nn::time::IsInitialized();
  if ((uVar3 & 1) == 0) {
    nn::time::Initialize();
  }
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_18);
  iVar2 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_28);
  if (iVar1 != 0) {
    return local_28;
  }
  if (iVar2 != 0) {
    return local_18;
  }
  if (local_18 <= local_28) {
    local_18 = local_28;
  }
  return local_18;
}

