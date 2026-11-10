
void FUN_002903c4(long *param_1,undefined8 param_2)

{
  FUN_00289f74(param_1,param_2,1);
  *param_1 = (long)(PTR_DAT_04bcdda0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  return;
}

