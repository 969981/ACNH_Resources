
undefined4 FUN_029994ec(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar1 = FUN_02999570(param_1,param_2,param_3,param_4);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x18) + 4);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return uVar2;
}

