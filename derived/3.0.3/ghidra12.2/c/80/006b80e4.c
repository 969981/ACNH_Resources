
void FUN_006b80e4(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
    *param_1 = 0;
    nn::os::SdkMutexType::Lock();
    FUN_006b8430(param_1 + 1,0);
    nn::os::SdkMutexType::Unlock();
  }
  param_1[1] = (long)&PTR_LAB_048f9010;
  nn::os::SdkMutexType::Lock();
  FUN_006b8430(param_1 + 1,0);
  nn::os::SdkMutexType::Unlock();
  return;
}

