
void FUN_013358b0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *__ptr;
  long lVar3;
  long lVar4;
  
  param_1[-4] = &PTR_LAB_0498fca0;
  *param_1 = &PTR_LAB_0498fd28;
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)param_1[5];
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[8] != 0) {
    if (0 < *(int *)(param_1 + 7)) {
      lVar3 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[8] + lVar3 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar3 = lVar3 + 1;
        *puVar2 = param_1[9];
        param_1[9] = puVar2;
      } while (lVar3 < *(int *)(param_1 + 7));
    }
    __ptr = (void *)param_1[10];
    *(undefined4 *)(param_1 + 7) = 0;
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
    }
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    *(undefined8 *)((long)param_1 + 0x4c) = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    *(undefined8 *)((long)param_1 + 0x3c) = 0;
  }
  lVar3 = param_1[-3];
  param_1[-4] = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      return;
    }
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + -4));
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[-3] = 1;
  return;
}

