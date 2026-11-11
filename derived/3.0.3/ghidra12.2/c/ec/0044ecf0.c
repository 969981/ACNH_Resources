
bool FUN_0044ecf0(undefined8 param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = DAT_04c6f8c8;
  pMVar1 = (MutexType *)(DAT_04c6f8c8 + 0xc0);
  nn::os::LockMutex(pMVar1);
  iVar4 = FUN_00450280(lVar3 + 0x38,param_1);
  iVar2 = *(int *)(*(long *)(lVar3 + 0x38) + (long)iVar4 * 0x18 + 0x10);
  FUN_00426fc0(param_1);
  nn::os::UnlockMutex(pMVar1);
  return -1 < iVar4 && iVar2 != 0;
}

