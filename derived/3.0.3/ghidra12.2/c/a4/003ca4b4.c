
void FUN_003ca4b4(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x348));
  plVar2 = (long *)(param_2 + 8);
  lVar1 = *plVar2;
  *plVar2 = *(long *)(param_1 + 0x388);
  *(long *)(lVar1 + 8) = param_1 + 0x388;
  *(long **)(*(long *)(param_1 + 0x388) + 8) = plVar2;
  *(long *)(param_1 + 0x388) = lVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x348));
  return;
}

