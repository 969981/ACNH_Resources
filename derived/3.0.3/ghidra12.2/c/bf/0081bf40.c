
undefined8 FUN_0081bf40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x4d));
  (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4d));
  return param_2;
}

