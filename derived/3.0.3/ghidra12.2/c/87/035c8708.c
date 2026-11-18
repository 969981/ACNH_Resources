
void FUN_035c8708(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = *(MutexType **)(param_1 + 0x40);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*(long *)(pMVar1 + 0x50) + 0x40))(pMVar1 + 0x50,param_1);
  nn::os::UnlockMutex(pMVar1);
  return;
}

