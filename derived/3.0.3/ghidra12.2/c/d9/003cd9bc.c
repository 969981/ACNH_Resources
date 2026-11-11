
void FUN_003cd9bc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd04e0 + 0x10);
  FUN_003caf80(param_1 + 1);
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3f),true,0);
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((long)param_1 + 0x219) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 1;
  return;
}

