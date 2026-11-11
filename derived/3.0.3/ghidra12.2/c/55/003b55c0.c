
void FUN_003b55c0(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  int local_4;
  
  if (((param_2 & 1) == 0) && (*(int *)(param_1 + 0xa60) != 2)) {
    return;
  }
  lVar1 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar1 + 0x960));
  uVar2 = 6;
  if (*(char *)(param_1 + 0x954) != '\0') {
    uVar2 = 2;
  }
  local_4 = nn::audio::AddCircularBufferSink
                      (param_1 + 0x18,param_1 + 0xa40,param_1 + 0x598,"",uVar2,
                       *(undefined8 *)(param_1 + 0xa50),*(undefined8 *)(param_1 + 0xa58),2);
  if (local_4 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_4);
  }
  lVar1 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar1 + 0x960));
  *(undefined4 *)(param_1 + 0xa60) = 1;
  return;
}

