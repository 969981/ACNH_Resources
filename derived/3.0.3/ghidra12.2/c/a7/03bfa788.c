
void FUN_03bfa788(long param_1)

{
  byte bVar1;
  
  bVar1 = nn::nifm::HandleNetworkRequestErrorResult();
  *(byte *)(param_1 + 0xdc) = bVar1 & 1;
  return;
}

