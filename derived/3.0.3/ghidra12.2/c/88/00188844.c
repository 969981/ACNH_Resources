
void FUN_00188844(long *param_1,bool param_2)

{
  *param_1 = (long)(PTR_DAT_04bcbd38 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),param_2,0);
  return;
}

