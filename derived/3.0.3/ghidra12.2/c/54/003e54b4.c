
undefined8 FUN_003e54b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  uVar1 = FUN_003e58d4(param_1 + 0x28,param_2,PTR_FUN_04bd00f0,0,param_3,param_4);
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return uVar1;
}

