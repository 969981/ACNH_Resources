
void FUN_03bc4ba0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *__ptr;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 400));
  plVar3 = *(long **)(param_1 + 0x98);
  while (plVar1 = plVar3, plVar1 != (long *)(param_1 + 0x90)) {
    plVar3 = (long *)plVar1[1];
    if (plVar1[3] != 0) {
      plVar1[3] = 0;
      plVar2 = plVar3;
      if (*plVar1 != 0) {
        *(long **)(*plVar1 + 8) = plVar3;
        plVar2 = (long *)plVar1[1];
      }
      if (plVar2 != (long *)0x0) {
        *plVar2 = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 400));
  plVar3 = *(long **)(param_1 + 0xb0);
  if (plVar3 != (long *)0x0) {
    if (DAT_05aebb78 == 0) {
      lVar4 = 0;
      plVar1 = plRam0000000000000138;
    }
    else {
      lVar4 = *(long *)(DAT_05aebb78 + 8);
      plVar1 = *(long **)(lVar4 + 0x138);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar3);
    }
    nn::os::LockMutex((MutexType *)(lVar4 + 0x108));
    FUN_03b3cf2c(plVar3);
    (**(code **)(*plVar3 + 8))(plVar3);
    *(int *)(lVar4 + 0x148) = *(int *)(lVar4 + 0x148) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x108));
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  __ptr = *(void **)(param_1 + 0xc0);
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}

