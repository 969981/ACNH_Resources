
void FUN_038a1aec(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__ptr;
  undefined **local_60;
  long *plStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  __ptr = (void *)param_1[2];
  *param_1 = &PTR_FUN_04b62328;
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
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  puVar3 = (undefined8 *)param_1[0x270];
  lVar4 = param_1[0x26f];
  param_1[0x26b] = &PTR_FUN_04b61b00;
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x272], lVar2 != 0)) {
    param_1[0x272] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[0x270];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[0x26f];
    }
    param_1[0x26f] = 0;
    param_1[0x270] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x26c];
  param_1[0x26b] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_038a1c40:
    param_1[0x26c] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x1358);
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
    goto LAB_038a1c40;
  }
  puVar3 = (undefined8 *)param_1[0x264];
  param_1[0x25f] = &PTR_FUN_04b61b00;
  lVar4 = param_1[0x263];
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x266], lVar2 != 0)) {
    param_1[0x266] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[0x264];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[0x263];
    }
    param_1[0x263] = 0;
    param_1[0x264] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x260];
  param_1[0x25f] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_038a1d1c:
    param_1[0x260] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x12f8);
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
    goto LAB_038a1d1c;
  }
  puVar3 = (undefined8 *)param_1[600];
  param_1[0x253] = &PTR_FUN_04b61b00;
  lVar4 = param_1[599];
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x25a], lVar2 != 0)) {
    param_1[0x25a] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[600];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[599];
    }
    param_1[599] = 0;
    param_1[600] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x254];
  param_1[0x253] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_038a1df8:
    param_1[0x254] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x1298);
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
    goto LAB_038a1df8;
  }
  puVar3 = (undefined8 *)param_1[0x24c];
  param_1[0x247] = &PTR_FUN_04b61b00;
  lVar4 = param_1[0x24b];
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) && (lVar2 = param_1[0x24e], lVar2 != 0)) {
    param_1[0x24e] = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = (undefined8 *)param_1[0x24c];
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1[0x24b];
    }
    param_1[0x24b] = 0;
    param_1[0x24c] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[0x248];
  param_1[0x247] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_038a1edc;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x1238);
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
  param_1[0x248] = 1;
LAB_038a1edc:
  plStack_58 = param_1 + 0x1d3;
  local_50 = &LAB_038a36a4;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04b62360;
  if (param_1[0x1d3] != 0) {
    FUN_038a36b0(param_1[0x1d3],&local_60);
  }
  plStack_58 = param_1 + 0x15f;
  local_50 = &LAB_038a36a4;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04b62360;
  if (param_1[0x15f] != 0) {
    FUN_038a36b0(param_1[0x15f],&local_60);
  }
  plStack_58 = param_1 + 0xeb;
  local_50 = &LAB_038a36a4;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04b62360;
  if (param_1[0xeb] != 0) {
    FUN_038a36b0(param_1[0xeb],&local_60);
  }
  plStack_58 = param_1 + 0x77;
  local_50 = &LAB_038a36a4;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04b62360;
  if (param_1[0x77] != 0) {
    FUN_038a36b0(param_1[0x77],&local_60);
  }
  lVar4 = param_1[3];
  local_50 = &LAB_038a36a4;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04b62360;
  if (lVar4 != 0) {
    plStack_58 = param_1 + 3;
    FUN_038a36b0(lVar4,&local_60);
  }
  return;
}

