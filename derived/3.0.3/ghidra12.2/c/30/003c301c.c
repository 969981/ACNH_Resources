
void FUN_003c301c(long *param_1)

{
  undefined *puVar1;
  
  FUN_003c4648();
  puVar1 = PTR_DAT_04bd05a0;
  param_1[8] = (long)(param_1 + 8);
  param_1[9] = (long)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_003c3008(param_1 + 0xf);
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x16),true,0);
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x1a),true,0);
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf2) = 0;
  return;
}

