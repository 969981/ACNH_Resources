
void FUN_00d65638(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)(lVar2 + 0x1b8));
  *(undefined4 *)(lVar2 + 0x210) = uVar1;
  return;
}

