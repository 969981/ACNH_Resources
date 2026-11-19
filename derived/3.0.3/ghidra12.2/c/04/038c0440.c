
void FUN_038c0440(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0xb0) + 0x20);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0xd0) == 1) {
    FUN_038beec0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_038beb3c(*(undefined8 *)(param_1 + 0xb0),param_1 + 0xe0,param_1 + 0x1a0);
  nn::os::UnlockMutex(pMVar1);
  return;
}

