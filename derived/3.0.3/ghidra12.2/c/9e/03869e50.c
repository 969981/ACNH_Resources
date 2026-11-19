
void FUN_03869e50(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  (**(code **)*param_3)(param_3,param_1);
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(long *)(param_2 + 0x58) != param_2 + 0x50) {
    lVar2 = (long)*(int *)(param_2 + 100);
    lVar1 = *(long *)(param_2 + 0x58) - lVar2;
    do {
      FUN_03869e50(lVar1,lVar1,param_3);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_2 + 0x50) - lVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}

