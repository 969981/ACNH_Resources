
void FUN_00692bd4(long param_1,undefined8 param_2)

{
  nn::os::SdkMutexType::Lock();
  *(undefined8 *)(param_1 + 0x40) = param_2;
  nn::os::SdkMutexType::Unlock();
  return;
}

