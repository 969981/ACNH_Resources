
void FUN_003c9e9c(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x10),true,0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

