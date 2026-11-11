
void FUN_0047db80(MutexType *param_1)

{
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x40));
  nn::os::FinalizeMutex(param_1 + 0x20);
  nn::os::FinalizeMutex(param_1);
  return;
}

