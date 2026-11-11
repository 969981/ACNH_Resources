
void FUN_003c9a08(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  nn::os::ClearEvent((EventType *)(param_2 + 0x18));
  *(undefined4 *)(param_2 + 0x40) = 1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  lVar1 = (ulong)param_3 * 0x10;
  plVar3 = (long *)(param_2 + 8);
  lVar2 = *plVar3;
  *plVar3 = *(long *)(param_1 + lVar1);
  *(long **)(lVar2 + 8) = (long *)(param_1 + lVar1);
  *(long **)(*(long *)(param_1 + lVar1) + 8) = plVar3;
  *(long *)(param_1 + lVar1) = lVar2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  nn::os::TrySendMessageQueue((MessageQueueType *)(param_1 + 0x58),0);
  return;
}

