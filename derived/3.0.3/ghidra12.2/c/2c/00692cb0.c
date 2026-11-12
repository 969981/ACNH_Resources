
void FUN_00692cb0(long param_1,undefined4 param_2)

{
  nn::os::SdkMutexType::Lock();
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00691594(*(long *)(param_1 + 0x40),param_2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  nn::os::SdkMutexType::Unlock();
  return;
}

