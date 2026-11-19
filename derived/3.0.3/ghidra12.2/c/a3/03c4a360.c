
void FUN_03c4a360(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x78), plVar4 != (long *)(param_1 + 0x70))) {
    plVar2 = plVar4 + -0x20;
    do {
      plVar3 = (long *)plVar4[1];
      uVar1 = FUN_03c4a4e0(plVar2);
      if ((uVar1 & 1) == 0) {
        FUN_03c4a880(plVar2);
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        (**(code **)*plVar2)(plVar2);
        *plVar2 = *(long *)(param_1 + 0x88);
        *(long **)(param_1 + 0x88) = plVar2;
      }
      plVar2 = plVar3 + -0x20;
      plVar4 = plVar3;
    } while (plVar2 != (long *)(param_1 + -0x90));
  }
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     (plVar4 = *(long **)(param_1 + 0xa8), plVar4 != (long *)(param_1 + 0xa0))) {
    plVar2 = plVar4 + -0x1f;
    do {
      plVar3 = (long *)plVar4[1];
      uVar1 = FUN_03c4a4e0(plVar2);
      if ((uVar1 & 1) == 0) {
        FUN_03c4a880(plVar2);
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        (**(code **)*plVar2)(plVar2);
        *plVar2 = *(long *)(param_1 + 0xb8);
        *(long **)(param_1 + 0xb8) = plVar2;
      }
      plVar2 = plVar3 + -0x1f;
      plVar4 = plVar3;
    } while (plVar2 != (long *)(param_1 + -0x58));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  return;
}

