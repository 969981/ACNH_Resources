
void FUN_003d560c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0480 + 0x78;
  *param_1 = (long)(PTR_DAT_04bd0480 + 0x10);
  param_1[0x18] = (long)puVar1;
  FUN_003d5de0();
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2341));
  *param_1 = (long)(PTR_DAT_04bd02a8 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 1));
  return;
}

