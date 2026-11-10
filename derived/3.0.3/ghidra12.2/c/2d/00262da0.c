
void FUN_00262da0(long param_1,long param_2)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0x8d78);
  uVar2 = nn::os::LockMutex(pMVar1);
  lVar3 = *(long *)(param_1 + 0x438);
  while( true ) {
    if (lVar3 == param_1 + 0x430) {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    if (*(long *)(lVar3 + 0x440) == param_2) break;
    lVar3 = *(long *)(lVar3 + 8);
  }
  *(undefined8 *)(lVar3 + 0x440) = 0;
  FUN_00261af8(uVar2,lVar3 + 0x10);
  nn::os::UnlockMutex(pMVar1);
  return;
}

