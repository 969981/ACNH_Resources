
void FUN_0025b308(long param_1,undefined8 *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x548));
  *(undefined8 *)(param_1 + 0x568) = *param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x548));
  return;
}

