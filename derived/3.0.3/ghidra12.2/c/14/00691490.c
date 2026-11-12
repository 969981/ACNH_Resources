
void thunk_FUN_006916a0(undefined8 param_1,undefined8 param_2)

{
  nn::os::SdkMutexType::Lock();
  DAT_04c81230 = 0;
  DAT_04c81238 = param_1;
  DAT_04c81240 = param_2;
  nn::os::SignalLightEvent((LightEventType *)&DAT_04c81248);
  nn::os::SdkMutexType::Unlock();
  return;
}

