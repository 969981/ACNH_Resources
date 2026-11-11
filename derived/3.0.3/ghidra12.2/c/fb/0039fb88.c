
void FUN_0039fb88(long param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  MutexType *pMVar2;
  
  if ((*(ushort *)(param_1 + 0x34) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    pMVar2 = *(MutexType **)(lVar1 + 0xb0);
    if (pMVar2 != (MutexType *)0x0) {
      nn::os::LockMutex(pMVar2);
      if (((*(ushort *)(param_1 + 0x34) & 1) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x98) + 0x28),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(param_2,lVar1,(ulong)(param_1 - *(long *)(lVar1 + 0x88)) >> 6);
      }
      nn::os::UnlockMutex(pMVar2);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x98) + 0x28);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039fc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,lVar1,(ulong)(param_1 - *(long *)(lVar1 + 0x88)) >> 6);
      return;
    }
  }
  return;
}

