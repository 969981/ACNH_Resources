
void FUN_007c2d44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_04bb2418;
  *param_1 = &PTR_FUN_04912710;
  puVar5 = (undefined8 *)param_1[0xaf];
  lVar6 = param_1[0xae];
  param_1[0xaa] = puVar1 + 0x10;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar4 = param_1[0xb1], lVar4 != 0)) {
    param_1[0xb1] = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = (undefined8 *)param_1[0xaf];
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_1[0xae];
    }
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  puVar1 = PTR_DAT_04bd0d40;
  lVar6 = param_1[0xab];
  param_1[0xaa] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 == 0) {
LAB_007c2e48:
    param_1[0xab] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x550);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_007c2e48;
  }
  puVar2 = PTR_DAT_04bb24a8;
  param_1[0x8e] = PTR_DAT_04bb24a8 + 0x10;
  FUN_038bbe20(param_1 + 0x8e);
  lVar6 = param_1[0x8f];
  param_1[0x8e] = puVar1 + 0x10;
  if (lVar6 == 0) {
LAB_007c2ee4:
    param_1[0x8f] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x8e));
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_007c2ee4;
  }
  param_1[0x7b] = puVar2 + 0x10;
  FUN_038bbe20(param_1 + 0x7b);
  lVar6 = param_1[0x7c];
  param_1[0x7b] = puVar1 + 0x10;
  if (lVar6 == 0) {
LAB_007c2f78:
    param_1[0x7c] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x7b));
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_007c2f78;
  }
  param_1[0x68] = puVar2 + 0x10;
  FUN_038bbe20(param_1 + 0x68);
  lVar6 = param_1[0x69];
  param_1[0x68] = puVar1 + 0x10;
  if (lVar6 == 0) {
LAB_007c300c:
    param_1[0x69] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x68));
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_007c300c;
  }
  param_1[0x55] = puVar2 + 0x10;
  FUN_038bbe20(param_1 + 0x55);
  lVar6 = param_1[0x56];
  param_1[0x55] = puVar1 + 0x10;
  if (lVar6 == 0) {
LAB_007c30a0:
    param_1[0x56] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x55));
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_007c30a0;
  }
  puVar3 = PTR_DAT_04bdf1b8;
  param_1[0x3e] = PTR_DAT_04bdf1b8 + 0x10;
  if (*(int *)(param_1 + 0x46) != 7) {
    if (param_1[0x42] != 0) {
      FUN_03f42ca4(param_1[0x42],param_1 + 0x3e,1);
    }
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x46) = 7;
  }
  FUN_038e1c80(param_1 + 0x49);
  param_1[0x2b] = puVar2 + 0x10;
  FUN_038bbe20(param_1 + 0x2b);
  lVar6 = param_1[0x2c];
  param_1[0x2b] = puVar1 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_007c318c;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x2b));
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[0x2c] = 1;
LAB_007c318c:
  param_1[0x14] = puVar3 + 0x10;
  if (*(int *)(param_1 + 0x1c) != 7) {
    if (param_1[0x18] != 0) {
      FUN_03f42ca4(param_1[0x18],param_1 + 0x14,1);
    }
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 7;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  FUN_038e1c80(param_1 + 0x1f);
  plVar7 = param_1 + 1;
  *plVar7 = (long)(puVar2 + 0x10);
  FUN_038bbe20(plVar7);
  lVar6 = param_1[2];
  *plVar7 = (long)(puVar1 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar7);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[2] = 1;
  return;
}

