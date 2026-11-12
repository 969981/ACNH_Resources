
void FUN_00693164(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  nn::os::SdkMutexType::Lock();
  lVar2 = *param_2;
  plVar1 = (long *)(param_1 + 0x18);
  *param_2 = *plVar1;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(*plVar1 + 8) = param_2;
  *plVar1 = lVar2;
  if (*(long *)(param_1 + 0x10) != param_1 + 8) {
    nn::os::SignalTimerEvent((TimerEventType *)(param_2 + 2));
  }
  nn::os::SdkMutexType::Unlock();
  return;
}

