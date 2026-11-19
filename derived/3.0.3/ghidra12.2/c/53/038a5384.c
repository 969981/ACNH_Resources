
void FUN_038a5384(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__ptr;
  long lVar4;
  
  __ptr = (void *)param_1[0x4c];
  *param_1 = &PTR_LAB_04b62620;
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
    param_1[0x4c] = 0;
    *(undefined4 *)(param_1 + 0x4b) = 0;
  }
  lVar4 = param_1[0x3e];
  puVar3 = (undefined8 *)param_1[0x3f];
  param_1[0x3a] = &PTR_LAB_04a43dc8;
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x41], lVar2 != 0)) {
    param_1[0x41] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[0x3f];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[0x3e];
    }
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x3b];
  param_1[0x3a] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_038a54c8:
    param_1[0x3b] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x1d0);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
    goto LAB_038a54c8;
  }
  lVar4 = param_1[0x32];
  puVar3 = (undefined8 *)param_1[0x33];
  param_1[0x2e] = &PTR_LAB_04a43dc8;
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x35], lVar2 != 0)) {
    param_1[0x35] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[0x33];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[0x32];
    }
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x2f];
  param_1[0x2e] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_038a55a0;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x170);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
  }
  param_1[0x2f] = 1;
LAB_038a55a0:
  FUN_038a91d0(param_1);
  return;
}

