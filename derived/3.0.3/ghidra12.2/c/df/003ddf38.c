
void FUN_003ddf38(long param_1,byte param_2)

{
  long lVar1;
  
  *(byte *)(param_1 + 0x31) = param_2;
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  lVar1 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar1 + 0x960));
  nn::audio::SetAuxEnabled((AuxType *)(param_1 + 0x18),(bool)(param_2 & 1));
  lVar1 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar1 + 0x960));
  return;
}

