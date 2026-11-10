
void FUN_00247aa4(long param_1)

{
  undefined1 auStack_30 [16];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  FUN_00227284(param_1 + 0x60);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  FUN_00247b04(auStack_30,param_1);
  if (*(char *)(param_1 + 0x1768) != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x1740));
  }
  return;
}

