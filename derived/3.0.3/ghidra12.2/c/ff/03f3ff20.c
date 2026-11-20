
bool FUN_03f3ff20(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar3 = PTR_DAT_04bdf140;
  nn::os::LockMutex((MutexType *)(PTR_DAT_04bdf140 + 0x20));
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 < 1) {
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      pMVar1 = (MutexType *)(puVar3 + 0x20);
      nn::os::LockMutex(pMVar1);
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        plVar5 = (long *)(lVar4 + 0x10);
        lVar4 = FUN_03f3be90(plVar5,*plVar5,param_1 + 0x2b0);
        *plVar5 = lVar4;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x18) = 1;
        }
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
      }
      nn::os::UnlockMutex(pMVar1);
    }
    nn::os::UnlockMutex((MutexType *)(puVar3 + 0x20));
  }
  return iVar2 < 1;
}

