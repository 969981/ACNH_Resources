
void FUN_00692f38(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  nn::os::SdkMutexType::Lock();
  plVar3 = (long *)(param_2 + 8);
  lVar1 = *plVar3;
  plVar2 = (long *)(param_1 + 8);
  *plVar3 = *plVar2;
  *(long **)(lVar1 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar3;
  *plVar2 = lVar1;
  FUN_00692d70(param_1);
  nn::os::SdkMutexType::Unlock();
  return;
}

