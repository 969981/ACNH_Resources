
void FUN_0047db20(MutexType *param_1)

{
  nn::os::InitializeMutex(param_1,true,0);
  nn::os::InitializeMutex(param_1 + 0x20,true,0);
  FUN_0047dcc0(param_1 + 0x40,0,1,0);
  param_1[0x70] = (MutexType)0x0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

