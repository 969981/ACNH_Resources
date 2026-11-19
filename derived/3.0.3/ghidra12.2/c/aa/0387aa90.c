
void FUN_0387aa90(undefined8 param_1)

{
  MutexType *pMVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_14;
  
  if (DAT_04c60f48 != 0) {
    FUN_0387ab40(&local_40);
    pMVar1 = (MutexType *)(DAT_05ae6a60 + 0xd0);
    nn::os::LockMutex(pMVar1);
    FUN_0387ac20(&local_40);
    FUN_0387ac90(&local_40);
    nn::os::UnlockMutex(pMVar1);
  }
  local_40 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_40);
  return;
}

