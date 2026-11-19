
void FUN_038caa74(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04bd0d58;
  nn::os::LockMutex((MutexType *)(PTR_DAT_04bd0d58 + 0x20));
  if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + 0x90;
    nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  }
  plVar4 = (long *)(param_1 + 0x48);
  lVar3 = *plVar4;
  plVar1 = (long *)(*(int *)(param_1 + 0x5c) + param_2);
  *plVar4 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)plVar4;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if (lVar5 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
  }
  nn::os::UnlockMutex((MutexType *)(puVar2 + 0x20));
  return;
}

