
void FUN_0389ac58(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = param_1[0x29];
  puVar4 = (undefined8 *)param_1[0x2a];
  *param_1 = &PTR_LAB_04b61a38;
  param_1[0x25] = &PTR_FUN_04b61b00;
  if ((puVar4 != (undefined8 *)0x0 || lVar6 != 0) && (lVar2 = param_1[0x2c], lVar2 != 0)) {
    param_1[0x2c] = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar4;
      puVar4 = (undefined8 *)param_1[0x2a];
    }
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = param_1[0x29];
    }
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar6 = param_1[0x26];
  param_1[0x25] = &PTR_FUN_04b64428;
  if (lVar6 == 0) {
LAB_0389ad50:
    param_1[0x26] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x128);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
    goto LAB_0389ad50;
  }
  param_1[0x19] = &PTR_FUN_04b61b00;
  plVar5 = (long *)param_1[0x1e];
  plVar3 = param_1 + 0x1d;
  lVar6 = *plVar3;
  if ((plVar5 != (long *)0x0 || lVar6 != 0) && (lVar2 = param_1[0x20], lVar2 != 0)) {
    param_1[0x20] = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
      plVar5 = (long *)param_1[0x1e];
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar3;
    }
    *plVar3 = 0;
    param_1[0x1e] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar6 = param_1[0x1a];
  param_1[0x19] = &PTR_FUN_04b64428;
  if (lVar6 == 0) {
LAB_0389ae20:
    param_1[0x1a] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x19));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
    goto LAB_0389ae20;
  }
  puVar1 = PTR_DAT_04bc1068;
  param_1[0xd] = PTR_DAT_04bc1068 + 0x10;
  plVar5 = (long *)param_1[0x12];
  plVar3 = param_1 + 0x11;
  lVar6 = *plVar3;
  if ((plVar5 != (long *)0x0 || lVar6 != 0) && (lVar2 = param_1[0x14], lVar2 != 0)) {
    param_1[0x14] = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
      plVar5 = (long *)param_1[0x12];
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar3;
    }
    *plVar3 = 0;
    param_1[0x12] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar6 = param_1[0xe];
  param_1[0xd] = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_0389af04;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0xd));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
  }
  param_1[0xe] = 1;
LAB_0389af04:
  param_1[1] = puVar1 + 0x10;
  plVar5 = (long *)param_1[6];
  plVar3 = param_1 + 5;
  lVar6 = *plVar3;
  if ((plVar5 != (long *)0x0 || lVar6 != 0) && (lVar2 = param_1[8], lVar2 != 0)) {
    param_1[8] = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
      plVar5 = (long *)param_1[6];
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar3;
    }
    *plVar3 = 0;
    param_1[6] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar6 = param_1[2];
  param_1[1] = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 1));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
  }
  param_1[2] = 1;
  return;
}

