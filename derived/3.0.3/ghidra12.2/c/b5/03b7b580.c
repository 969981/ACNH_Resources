
void FUN_03b7b580(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 200));
  puVar1 = PTR_DAT_04bc3ee8;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (plVar3 = *(long **)(param_1 + 0x18), plVar3 != (long *)(param_1 + 0x10))) {
    plVar2 = plVar3 + -0x25;
    do {
      plVar4 = (long *)plVar3[1];
      if ((0.0 < *(float *)(plVar2 + 0x24)) &&
         (fVar5 = *(float *)(plVar2 + 0x24) - *(float *)(*(long *)(*(long *)puVar1 + 0x10) + 0x1c),
         *(float *)(plVar2 + 0x24) = fVar5, fVar5 <= 0.0)) {
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        *plVar2 = *(long *)(param_1 + 0x28);
        *(long **)(param_1 + 0x28) = plVar2;
      }
      plVar2 = plVar4 + -0x25;
      plVar3 = plVar4;
    } while (plVar2 != (long *)(param_1 + -0x118));
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 200));
  return;
}

