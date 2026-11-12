
void FUN_0093a878(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x80);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0 || *(long *)(lVar2 + 8) != 0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    plVar1 = (long *)(*(int *)(param_1 + 0x5c) + lVar2);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x20))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}

