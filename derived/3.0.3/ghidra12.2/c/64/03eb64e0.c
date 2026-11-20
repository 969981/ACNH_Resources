
void FUN_03eb64e0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0xca4) = uVar1;
  return;
}

