
void FUN_003ca474(long param_1)

{
  FUN_003ca198();
  nn::os::LockMutex((MutexType *)&DAT_04c641b8);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  FUN_003ca198();
  nn::os::UnlockMutex((MutexType *)&DAT_04c641b8);
  return;
}

