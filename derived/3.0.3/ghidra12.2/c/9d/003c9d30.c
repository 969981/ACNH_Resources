
void FUN_003c9d30(long param_1)

{
  MutexType *pMVar1;
  ulong local_28;
  
  pMVar1 = (MutexType *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x30) = 0;
  while (nn::os::LockMutex(pMVar1), *(long *)(param_1 + 0x28) == param_1 + 0x20) {
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) break;
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    if (*(long *)(param_1 + 8) != param_1) break;
    nn::os::UnlockMutex(pMVar1);
    if ((*(char *)(param_1 + 0x30) != '\0') ||
       (nn::os::ReceiveMessageQueue(&local_28,(MessageQueueType *)(param_1 + 0x58)), local_28 == 0))
    {
      return;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

