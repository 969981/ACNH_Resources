
void FUN_00290500(long *param_1)

{
  FUN_00289f24();
  *param_1 = (long)(PTR_DAT_04bcddb0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  return;
}

