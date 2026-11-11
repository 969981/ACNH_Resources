
void FUN_003e4908(long *param_1)

{
  FUN_003b82d4();
  *param_1 = (long)(PTR_DAT_04bd0070 + 0x10);
  FUN_003b999c(param_1 + 0x54);
  FUN_003dc2bc(param_1 + 0x5d);
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)((long)param_1 + 0x36c) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined8 *)((long)param_1 + 0x5f4) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xbe),true,0);
  return;
}

