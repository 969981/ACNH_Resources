
void FUN_03f3dcc8(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(PTR_DAT_04bdf140 + 0x20);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    plVar3 = (long *)(lVar2 + 0x10);
    lVar2 = FUN_03f3be90(plVar3,*plVar3,param_1 + 0x2b0);
    *plVar3 = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = 1;
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

