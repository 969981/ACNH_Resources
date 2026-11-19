
void FUN_038a91d0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__ptr;
  long lVar6;
  
  *param_1 = &PTR_LAB_04b62790;
  if (param_1[0x1a] != 0) {
    if (0 < *(int *)(param_1 + 0x19)) {
      lVar6 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x1a] + lVar6 * 8);
        FUN_038a8cf0(puVar5);
        lVar6 = lVar6 + 1;
        *puVar5 = param_1[0x1b];
        param_1[0x1b] = puVar5;
      } while (lVar6 < *(int *)(param_1 + 0x19));
    }
    __ptr = (void *)param_1[0x1c];
    *(undefined4 *)(param_1 + 0x19) = 0;
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
    }
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    *(undefined8 *)((long)param_1 + 0xd4) = 0;
    *(undefined8 *)((long)param_1 + 0xcc) = 0;
  }
  FUN_038e1a84(param_1 + 0x25);
  FUN_038e1a84(param_1 + 0x1d);
  puVar1 = PTR_DAT_04bcbba0;
  param_1[0xd] = PTR_DAT_04bcbba0 + 0x10;
  plVar4 = (long *)param_1[0x12];
  plVar2 = param_1 + 0x11;
  lVar6 = *plVar2;
  if ((plVar4 != (long *)0x0 || lVar6 != 0) && (lVar3 = param_1[0x14], lVar3 != 0)) {
    param_1[0x14] = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar4;
      plVar4 = (long *)param_1[0x12];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar2;
    }
    *plVar2 = 0;
    param_1[0x12] = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = param_1[0xe];
  param_1[0xd] = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_038a9384;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0xd));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[0xe] = 1;
LAB_038a9384:
  param_1[1] = puVar1 + 0x10;
  plVar4 = (long *)param_1[6];
  plVar2 = param_1 + 5;
  lVar6 = *plVar2;
  if ((plVar4 != (long *)0x0 || lVar6 != 0) && (lVar3 = param_1[8], lVar3 != 0)) {
    param_1[8] = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar4;
      plVar4 = (long *)param_1[6];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar2;
    }
    *plVar2 = 0;
    param_1[6] = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = param_1[2];
  param_1[1] = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 1));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[2] = 1;
  return;
}

