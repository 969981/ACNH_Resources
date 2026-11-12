
int FUN_006ae960(void)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)&DAT_04c3fbd0);
  if (DAT_04c81ab0 == 0) {
    iVar1 = FUN_006aeb90(0);
    if (iVar1 != 0) goto LAB_006ae9a4;
    DAT_04c3fbc8._0_4_ = 0;
  }
  iVar1 = 0;
  DAT_04c81ab0 = DAT_04c81ab0 + 1;
LAB_006ae9a4:
  nn::os::UnlockMutex((MutexType *)&DAT_04c3fbd0);
  return iVar1;
}

