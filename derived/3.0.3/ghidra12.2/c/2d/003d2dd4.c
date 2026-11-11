
void FUN_003d2dd4(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd04d0;
  param_1[2] = (long)(param_1 + 1);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  nn::os::InitializeEvent((EventType *)(param_1 + 3),0,0);
  param_1[8] = 0;
  nn::os::SignalEvent((EventType *)(param_1 + 3));
  return;
}

