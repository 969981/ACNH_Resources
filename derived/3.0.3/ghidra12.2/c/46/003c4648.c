
void FUN_003c4648(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_04bd0598;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),true,0);
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

