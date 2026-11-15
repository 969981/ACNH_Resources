
void FUN_01dfccb4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d0) = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x658));
  FUN_03ebb160(param_1 + 8,2);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
  return;
}

