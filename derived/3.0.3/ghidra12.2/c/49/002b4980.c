
void FUN_002b4980(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bce158 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x27));
  param_1[0x21] = (long)(PTR_DAT_04bcba18 + 0x10);
  FUN_0021f584(param_1 + 0x22);
  FUN_002b4104(param_1 + 0x11);
  FUN_002b4104(param_1 + 1);
  return;
}

