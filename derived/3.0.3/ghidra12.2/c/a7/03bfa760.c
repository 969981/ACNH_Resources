
void FUN_03bfa760(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)(param_1 + 0x420));
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  return;
}

