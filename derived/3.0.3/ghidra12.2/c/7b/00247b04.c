
void FUN_00247b04(int *param_1,long param_2)

{
  MutexType *pMVar1;
  long lVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  if (DAT_04c61168 != 0) {
    lVar2 = FUN_002ba574();
    if (lVar2 != 0) {
      FUN_0022be38(lVar2 + 0x10);
    }
    lVar2 = FUN_002ba58c(DAT_04c61168);
    if (lVar2 != 0) {
      FUN_0022be38(lVar2 + 0x10);
    }
  }
  pMVar1 = (MutexType *)(param_2 + 0x1778);
  nn::os::LockMutex(pMVar1);
  if (((*(long *)(param_2 + 6000) == 0) || (*(int *)(*(long *)(param_2 + 6000) + 4) < 1)) ||
     (FUN_002269b8(param_1), *param_1 == 0)) {
    local_44 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    FUN_002296c4(param_1,&local_44);
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

