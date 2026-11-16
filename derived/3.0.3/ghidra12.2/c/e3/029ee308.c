
void FUN_029ee308(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1318));
  uVar1 = *(undefined1 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x1338) = *param_3;
  *(undefined1 *)(param_1 + 0x1340) = uVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1318));
  return;
}

