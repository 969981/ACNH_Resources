
void FUN_03b02154(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  long lVar3;
  long lVar4;
  
  __ptr = (void *)param_1[0x9b];
  *param_1 = &PTR_FUN_04b72bd0;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[0x9b] = 0;
  }
  param_1[0x9c] = PTR_DAT_04bb34f8 + 0x10;
  FUN_038e1c80(param_1 + 0xa1);
  param_1[0x98] = &PTR_LAB_04b72cb8;
  puVar1 = PTR_DAT_04bb24a8;
  param_1[0x54] = PTR_DAT_04bb24a8 + 0x10;
  FUN_038bbe20(param_1 + 0x54);
  lVar3 = param_1[0x55];
  param_1[0x54] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_03b02280:
    param_1[0x55] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x54));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_03b02280;
  }
  param_1[0x41] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x41);
  lVar3 = param_1[0x42];
  param_1[0x41] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_03b02318:
    param_1[0x42] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x41));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_03b02318;
  }
  param_1[0x2e] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x2e);
  lVar3 = param_1[0x2f];
  param_1[0x2e] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_03b023ac:
    param_1[0x2f] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x2e));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_03b023ac;
  }
  param_1[0x1b] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x1b);
  lVar3 = param_1[0x1c];
  param_1[0x1b] = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_03b02444;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x1b));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[0x1c] = 1;
LAB_03b02444:
  if (*(char *)(param_1 + 0x1a) != '\0') {
    DAT_05aea928 = 0;
  }
  FUN_038bd550(param_1);
  return;
}

