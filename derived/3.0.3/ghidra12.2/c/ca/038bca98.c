
void FUN_038bca98(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b63b48;
  puVar1 = PTR_DAT_04bb24a8;
  param_1[0x7b] = PTR_DAT_04bb24a8 + 0x10;
  FUN_038bbe20(param_1 + 0x7b);
  lVar3 = param_1[0x7c];
  param_1[0x7b] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_038bcb58:
    param_1[0x7c] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x7b));
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
    goto LAB_038bcb58;
  }
  param_1[0x68] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x68);
  lVar3 = param_1[0x69];
  param_1[0x68] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_038bcbec:
    param_1[0x69] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x68));
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
    goto LAB_038bcbec;
  }
  param_1[0x55] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x55);
  lVar3 = param_1[0x56];
  param_1[0x55] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_038bcc80:
    param_1[0x56] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x55));
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
    goto LAB_038bcc80;
  }
  param_1[0x42] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x42);
  lVar3 = param_1[0x43];
  param_1[0x42] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_038bcd14:
    param_1[0x43] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x42));
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
    goto LAB_038bcd14;
  }
  param_1[0x2f] = puVar1 + 0x10;
  FUN_038bbe20(param_1 + 0x2f);
  lVar3 = param_1[0x30];
  param_1[0x2f] = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_038bcda8:
    param_1[0x30] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x2f));
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
    goto LAB_038bcda8;
  }
  plVar2 = param_1 + 0x1c;
  *plVar2 = (long)(puVar1 + 0x10);
  FUN_038bbe20(plVar2);
  lVar3 = param_1[0x1d];
  *plVar2 = (long)&PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_038bce3c:
    param_1[0x1d] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar2);
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
    goto LAB_038bce3c;
  }
  plVar2 = param_1 + 9;
  *plVar2 = (long)(puVar1 + 0x10);
  FUN_038bbe20(plVar2);
  lVar3 = param_1[10];
  *plVar2 = (long)&PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_038bced8;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar2);
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
  param_1[10] = 1;
LAB_038bced8:
  *param_1 = &PTR_LAB_04b63b98;
  FUN_038e1a84(param_1 + 1);
  return;
}

