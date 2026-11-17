
void FUN_030b1bb8(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)param_1[5];
  *param_1 = &PTR_FUN_04afc160;
  param_1[4] = &PTR_LAB_04afc1e0;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[5] = 0;
  }
  if ((param_1[8] != 0) && ((long *)param_1[9] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[9] + 8))();
  }
  if ((param_1[0x1c] != 0) && ((long *)param_1[0x1d] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x1d] + 8))();
  }
  FUN_038fd0e0(param_1 + 0x25);
  FUN_038fd0e0(param_1 + 0x11);
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

