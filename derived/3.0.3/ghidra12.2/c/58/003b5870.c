
void FUN_003b5870(long param_1,MemoryPoolType *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  int local_34;
  
  lVar2 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
  nn::audio::RequestDetachMemoryPool(param_2);
  lVar2 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
  if ((((param_3 & 1) == 0) || (*(char *)(param_1 + 0x955) == '\0')) ||
     (*(char *)(param_1 + 0xa66) != '\0')) {
    if (*(char *)(param_1 + 0xa66) == '\0') {
      lVar2 = FUN_03b38a74();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
      iVar1 = nn::audio::GetMemoryPoolState(param_2);
      lVar2 = FUN_03b38a74();
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
      if (iVar1 != 3) {
        do {
          local_34 = FUN_003b57e0(param_1);
          if (local_34 != 0) goto LAB_003b5acc;
          nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x90));
          lVar2 = FUN_03b38a74();
          nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
          iVar1 = nn::audio::GetMemoryPoolState(param_2);
          lVar2 = FUN_03b38a74();
          nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
        } while (iVar1 != 3);
      }
    }
    else {
      lVar2 = FUN_003ca198();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x348));
      lVar2 = FUN_03b38a74();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
      lVar2 = FUN_03b38a74();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
      iVar1 = nn::audio::GetMemoryPoolState(param_2);
      lVar2 = FUN_03b38a74();
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
      if (iVar1 != 3) {
        do {
          local_34 = FUN_003b57e0(param_1);
          if ((local_34 != 0) ||
             (local_34 = nn::audio::ExecuteAudioRendererRendering
                                   (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)),
             local_34 != 0)) goto LAB_003b5acc;
          nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x90));
          lVar2 = FUN_03b38a74();
          nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
          iVar1 = nn::audio::GetMemoryPoolState(param_2);
          lVar2 = FUN_03b38a74();
          nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
        } while (iVar1 != 3);
      }
      lVar2 = FUN_03b38a74();
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
      lVar2 = FUN_003ca198();
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x348));
    }
  }
  else {
    lVar2 = FUN_03b38a74();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
    iVar1 = nn::audio::GetMemoryPoolState(param_2);
    lVar2 = FUN_03b38a74();
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
    while (iVar1 != 3) {
      nn::os::SleepThread(5000000);
      lVar2 = FUN_03b38a74();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
      iVar1 = nn::audio::GetMemoryPoolState(param_2);
      lVar2 = FUN_03b38a74();
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
    }
  }
  lVar2 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
  nn::audio::ReleaseMemoryPool((AudioRendererConfig *)(param_1 + 0x18),param_2);
  if (*(char *)(param_1 + 0xa66) != '\0') {
    lVar2 = FUN_003ca198();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x348));
    local_34 = nn::audio::ExecuteAudioRendererRendering
                         (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (local_34 != 0) {
LAB_003b5acc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_34);
    }
    lVar2 = FUN_003ca198();
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x348));
  }
  lVar2 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
  return;
}

