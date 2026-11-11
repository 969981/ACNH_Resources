
void FUN_003b56d0(long param_1,MemoryPoolType *param_2,void *param_3,ulong param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  int local_24;
  
  lVar2 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
  nn::audio::AcquireMemoryPool((AudioRendererConfig *)(param_1 + 0x18),param_2,param_3,param_4);
  nn::audio::RequestAttachMemoryPool(param_2);
  lVar2 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
  if ((((param_5 & 1) == 0) || (*(char *)(param_1 + 0x955) == '\0')) ||
     (*(char *)(param_1 + 0xa66) != '\0')) {
    local_24 = FUN_003b57e0(param_1);
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_24);
    }
  }
  else {
    lVar2 = FUN_03b38a74();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
    iVar1 = nn::audio::GetMemoryPoolState(param_2);
    lVar2 = FUN_03b38a74();
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
    while (iVar1 != 1) {
      nn::os::SleepThread(5000000);
      lVar2 = FUN_03b38a74();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
      iVar1 = nn::audio::GetMemoryPoolState(param_2);
      lVar2 = FUN_03b38a74();
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
    }
  }
  return;
}

