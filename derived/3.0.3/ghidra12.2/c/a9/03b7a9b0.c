
void FUN_03b7a9b0(long param_1)

{
  int iVar1;
  long *plVar2;
  void *__ptr;
  
  FUN_03b7aaf0(param_1,0);
  FUN_03b7b2b0(param_1);
  if (((*(uint *)(param_1 + 8) >> 2 & 1) != 0) &&
     (*(uint *)(param_1 + 8) == 0 || *(int *)(param_1 + 0x10) != 0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2a8));
    iVar1 = *(int *)(param_1 + 0x1d0);
    if (*(int *)(param_1 + 0x124) < iVar1) {
      do {
        if (0 < iVar1) {
          plVar2 = *(long **)(param_1 + 0x1c0);
          if (*plVar2 != 0) {
            *(long *)(*plVar2 + 8) = plVar2[1];
          }
          if ((long *)plVar2[1] != (long *)0x0) {
            *(long *)plVar2[1] = *plVar2;
          }
          *plVar2 = 0;
          plVar2[1] = 0;
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
          if ((plVar2 != (long *)0x0) &&
             (__ptr = (void *)((long)plVar2 - (long)*(int *)(param_1 + 0x1d4)), __ptr != (void *)0x0
             )) {
            if (DAT_05ae7600 == 0) {
              free(__ptr);
            }
            else {
              plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
              }
            }
          }
        }
        iVar1 = *(int *)(param_1 + 0x1d0);
      } while (*(int *)(param_1 + 0x124) < iVar1);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2a8));
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_03b7ce90();
  }
  if (*(long *)(param_1 + 0x200) == 0) {
    return;
  }
  FUN_03b7e040();
  return;
}

