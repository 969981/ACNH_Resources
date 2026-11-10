
bool FUN_001edf40(undefined8 param_1)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = nn::nifm::GetCurrentPrimaryIpAddress((in_addr *)&local_14);
  if (iVar1 == 0) {
    FUN_001e18e4(param_1,local_14);
    return true;
  }
  return iVar1 == 0;
}

