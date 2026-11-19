
void FUN_03916c10(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b66080;
  puVar1 = PTR_DAT_04bb2698;
  lVar3 = param_1[0x41];
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar6 = *plVar4 * 0x2a70;
      do {
        FUN_03912ac8(lVar3 + -0x2a70 + lVar6);
        lVar6 = lVar6 + -0x2a70;
      } while (lVar6 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  lVar3 = param_1[0x49];
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar6 = *plVar4 * 0x3a8;
      do {
        FUN_0391b6b8(lVar3 + -0x3a8 + lVar6);
        lVar6 = lVar6 + -0x3a8;
      } while (lVar6 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    param_1[0x49] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  lVar3 = param_1[0x4b];
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar6 = *plVar4 * 0x3a8;
      do {
        FUN_0391b6b8(lVar3 + -0x3a8 + lVar6);
        lVar6 = lVar6 + -0x3a8;
      } while (lVar6 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    param_1[0x4b] = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0;
  }
  if (param_1[0x4d] != 0) {
    if ((long *)param_1[0x4e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x4e] + 8))();
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
  }
  if (param_1[0x51] != 0) {
    if ((long *)param_1[0x52] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x52] + 8))();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
  }
  pvVar5 = (void *)param_1[0x5f];
  if (pvVar5 == (void *)0x0) {
LAB_03916e0c:
    lVar3 = param_1[0x5a];
  }
  else {
    FUN_0391bcc8(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
      goto LAB_03916e0c;
    }
    free(pvVar5);
    lVar3 = param_1[0x5a];
  }
  if (lVar3 != 0) {
    pvVar5 = (void *)(lVar3 + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x5a] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
  }
  if (param_1[0x5d] != 0) {
    pvVar5 = (void *)(param_1[0x5d] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x5d] = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  FUN_038e1a84(param_1 + 0x116);
  FUN_038e1a84(param_1 + 0x10e);
  lVar3 = param_1[200];
  param_1[199] = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_03916f44;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar3 + 0x84) + 0x638);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[200] = 1;
LAB_03916f44:
  FUN_0390e230(param_1 + 0x8b);
  param_1[0x3a] = &PTR_LAB_04b66680;
  *param_1 = &PTR_LAB_04b66628;
  return;
}

