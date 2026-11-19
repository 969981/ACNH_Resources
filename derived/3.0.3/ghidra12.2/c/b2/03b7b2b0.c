
void FUN_03b7b2b0(long param_1)

{
  void *__ptr;
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  if (((*(uint *)(param_1 + 8) & 1) == 0) ||
     (*(uint *)(param_1 + 8) != 0 && *(int *)(param_1 + 0x10) == 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x228));
  FUN_03b7b3d0(param_1);
  uVar1 = *(uint *)(param_1 + 0x178);
  while (1000 < uVar1) {
    plVar3 = *(long **)(param_1 + 0x170);
    plVar2 = plVar3;
    if ((int)uVar1 < 1) {
      plVar2 = (long *)0x0;
    }
    __ptr = (void *)0x0;
    if (plVar2 != (long *)0x0) {
      __ptr = (void *)((long)plVar2 - (long)*(int *)(param_1 + 0x17c));
    }
    if (0 < (int)uVar1) {
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
    }
    if (*(long **)((long)__ptr + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 0x30) + 8))();
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x178);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x228));
  return;
}

