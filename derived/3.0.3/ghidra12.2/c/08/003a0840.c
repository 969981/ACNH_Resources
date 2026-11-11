
void FUN_003a0840(long param_1,undefined8 param_2)

{
  ushort uVar1;
  MutexType *pMVar2;
  long lVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x40);
  if ((ulong)uVar1 != 0) {
    pMVar2 = *(MutexType **)(param_1 + 0x30);
    lVar3 = 0;
    do {
      FUN_0039fd50(*(long *)(param_1 + 0x10) + lVar3,param_2);
      if (*(long *)(param_1 + 0x30) != 0) {
        nn::os::FinalizeMutex(pMVar2);
        pMVar2 = pMVar2 + 0x20;
      }
      lVar3 = lVar3 + 0x100;
    } while ((ulong)uVar1 * 0x100 != lVar3);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) & 0xff7f;
  return;
}

