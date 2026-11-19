
void FUN_03c137e4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)param_1[0x1b];
  param_1[-0x2d] = &PTR_FUN_04b7d250;
  *param_1 = &PTR_FUN_04b7d318;
  param_1[0x16] = &PTR_LAB_04b7d338;
  plVar1 = param_1 + 0x1a;
  lVar4 = *plVar1;
  if ((plVar3 != (long *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x1d], lVar2 != 0)) {
    param_1[0x1d] = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      plVar3 = (long *)param_1[0x1b];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar1;
    }
    *plVar1 = 0;
    param_1[0x1b] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x17];
  param_1[0x16] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_03c138ec:
    param_1[0x17] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)(param_1 + 0x16));
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
    goto LAB_03c138ec;
  }
  param_1[10] = PTR_DAT_04bd0f20 + 0x10;
  plVar3 = (long *)param_1[0xf];
  plVar1 = param_1 + 0xe;
  lVar4 = *plVar1;
  if ((plVar3 != (long *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x11], lVar2 != 0)) {
    param_1[0x11] = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      plVar3 = (long *)param_1[0xf];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar1;
    }
    *plVar1 = 0;
    param_1[0xf] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0xb];
  param_1[10] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_03c139d0;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)(param_1 + 10));
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
  param_1[0xb] = 1;
LAB_03c139d0:
  FUN_038ba020(param_1 + -0x2d);
  return;
}

