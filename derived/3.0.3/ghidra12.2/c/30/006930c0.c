
long * FUN_006930c0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  nn::os::SdkMutexType::Lock();
  plVar3 = *(long **)(param_1 + 0x10);
  do {
    plVar1 = plVar3;
    if (plVar1 == (long *)(param_1 + 8)) {
      plVar4 = (long *)0x0;
      goto LAB_00693144;
    }
    plVar4 = plVar1 + -1;
    lVar2 = FUN_00692bc4(plVar4);
    plVar3 = (long *)plVar1[1];
  } while (lVar2 != *param_2);
  lVar2 = *plVar3;
  *(long **)(*plVar1 + 8) = plVar3;
  *plVar3 = *plVar1;
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  FUN_00692d70(param_1);
LAB_00693144:
  nn::os::SdkMutexType::Unlock();
  return plVar4;
}

