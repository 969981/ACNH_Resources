
void FUN_0047b600(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((int)param_1[1] < 0) {
    return;
  }
  lVar2 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x188));
  *(undefined8 *)(*(long *)(*param_1 + 0x1a8) + (long)(int)param_1[1] * 0x10) = 0;
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_004435c0();
  }
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x188));
  return;
}

