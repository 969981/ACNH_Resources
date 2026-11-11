
void FUN_003ca50c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x348));
  if (param_2 + 8 != param_1 + 0x388) {
    plVar1 = *(long **)(param_2 + 0x10);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 8) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 8);
    *(long *)(lVar2 + 8) = param_2 + 8;
    *(long *)(param_2 + 8) = lVar2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x348));
  return;
}

