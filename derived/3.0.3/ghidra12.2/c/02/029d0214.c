
void FUN_029d0214(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x58) = *param_3;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}

