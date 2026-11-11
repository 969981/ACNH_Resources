
undefined1  [16] FUN_0047a0c0(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  long lVar2;
  undefined1 local_40 [16];
  
  lVar2 = *(long *)(param_1 + 0x90);
  pMVar1 = (MutexType *)(lVar2 + 0x50);
  nn::os::LockMutex(pMVar1);
  FUN_004297c0(local_40,*(ulong *)(*(long *)(lVar2 + 0x40) +
                                  (-(param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                                  (param_2 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
  nn::os::UnlockMutex(pMVar1);
  return local_40;
}

