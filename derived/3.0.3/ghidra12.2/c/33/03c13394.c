
void FUN_03c13394(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)param_1[0x48];
  lVar4 = param_1[0x47];
  *param_1 = &PTR_FUN_04b7d250;
  param_1[0x2d] = &PTR_FUN_04b7d318;
  param_1[0x43] = &PTR_LAB_04b7d338;
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x4a], lVar2 != 0)) {
    param_1[0x4a] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[0x48];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[0x47];
    }
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x44];
  param_1[0x43] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_03c13498:
    param_1[0x44] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x218);
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
    goto LAB_03c13498;
  }
  lVar4 = param_1[0x3b];
  puVar3 = (undefined8 *)param_1[0x3c];
  param_1[0x37] = &PTR_FUN_04b6c268;
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x3e], lVar2 != 0)) {
    param_1[0x3e] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[0x3c];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[0x3b];
    }
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x38];
  param_1[0x37] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_03c13578;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x1b8);
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
  param_1[0x38] = 1;
LAB_03c13578:
  FUN_038ba020(param_1);
  return;
}

