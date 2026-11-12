
void FUN_006931d0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  nn::os::SdkMutexType::Lock();
  plVar1 = *(long **)(param_1 + 0x20);
  while( true ) {
    if (plVar1 == (long *)(param_1 + 0x18)) {
      nn::os::SdkMutexType::Unlock();
      return;
    }
    if (plVar1 == param_2) break;
    plVar1 = (long *)plVar1[1];
  }
  plVar1 = (long *)param_2[1];
  lVar2 = *plVar1;
  *(long **)(*param_2 + 8) = plVar1;
  *plVar1 = *param_2;
  *(long **)(lVar2 + 8) = param_2;
  *param_2 = lVar2;
  nn::os::SdkMutexType::Unlock();
  return;
}

