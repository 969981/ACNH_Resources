
void FUN_00691770(undefined8 param_1)

{
  ulong uVar1;
  
  nn::os::SdkMutexType::Lock();
  uVar1 = nn::os::TryWaitLightEvent((LightEventType *)&DAT_04c81248);
  if ((uVar1 & 1) != 0) {
    (*DAT_04c81240)(param_1);
  }
  nn::os::SdkMutexType::Unlock();
  return;
}

