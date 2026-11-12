
void FUN_00714860(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x298) < 1) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x2c0));
  if (*(long *)(param_1 + 0x290) != param_1 + 0x288) {
    lVar2 = (long)*(int *)(param_1 + 0x29c);
    lVar1 = *(long *)(param_1 + 0x290) - lVar2;
    do {
      (**(code **)*param_2)(param_2,param_1,lVar1);
      FUN_00714860(lVar1,param_2);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_1 + 0x288) - lVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2c0));
  return;
}

