
void FUN_003b553c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int local_4;
  
  lVar1 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar1 + 0x960));
  uVar2 = 6;
  if (*(char *)(param_1 + 0x954) != '\0') {
    uVar2 = 2;
  }
  local_4 = nn::audio::AddCircularBufferSink
                      (param_1 + 0x18,param_1 + 0xa00,param_1 + 0x598,"",uVar2,
                       *(undefined8 *)(param_1 + 0xa18),*(undefined8 *)(param_1 + 0xa30),2);
  if (local_4 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_4);
  }
  lVar1 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar1 + 0x960));
  *(undefined4 *)(param_1 + 0xa08) = 1;
  return;
}

