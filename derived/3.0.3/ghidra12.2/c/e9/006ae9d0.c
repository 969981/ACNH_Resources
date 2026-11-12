
void FUN_006ae9d0(void)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)&DAT_04c3fbd0);
  iVar1 = DAT_04c81ab0 + -1;
  if ((DAT_04c81ab0 < 1) || (DAT_04c81ab0 = iVar1, iVar1 != 0)) {
    nn::os::UnlockMutex((MutexType *)&DAT_04c3fbd0);
    return;
  }
  FUN_006aef50((undefined4)DAT_04c3fbc8);
  DAT_04c3fbc8._0_4_ = 0x7f;
  nn::os::UnlockMutex((MutexType *)&DAT_04c3fbd0);
  return;
}

