
void FUN_00692c10(long param_1)

{
  nn::os::SdkMutexType::Lock();
  *(undefined8 *)(param_1 + 0x40) = 0;
  nn::os::SdkMutexType::Unlock();
  return;
}

