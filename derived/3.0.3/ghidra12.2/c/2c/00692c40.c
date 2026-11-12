
void FUN_00692c40(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  nn::os::SdkMutexType::Lock();
  *(uint *)(param_1 + 9) = uVar1;
  if (((uVar1 & 0x3fffff) != 0x52db) && (param_1[8] != 0)) {
    FUN_006915a0(param_1[8],uVar1,*(undefined4 *)((long)param_1 + 0x4c));
    param_1[8] = 0;
  }
  nn::os::SdkMutexType::Unlock();
  return;
}

