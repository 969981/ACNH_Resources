
undefined8 FUN_00691700(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  nn::os::SdkMutexType::Lock();
  uVar1 = nn::os::TryWaitLightEvent((LightEventType *)&DAT_04c81248);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*DAT_04c81238)(param_1);
  }
  nn::os::SdkMutexType::Unlock();
  return uVar2;
}

