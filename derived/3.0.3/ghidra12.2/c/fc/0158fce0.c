
void FUN_0158fce0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_049ad778;
  param_1[0x3b] = &PTR_FUN_049ae0b8;
  param_1[0x3f] = &PTR_LAB_049ae140;
  plVar1 = (long *)param_1[0x44];
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)param_1[0x44];
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x47] != 0) {
    if (0 < *(int *)(param_1 + 0x46)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[0x47] + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = param_1[0x48];
        param_1[0x48] = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x46));
    }
    pvVar3 = (void *)param_1[0x49];
    *(undefined4 *)(param_1 + 0x46) = 0;
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x24c) = 0;
    *(undefined8 *)((long)param_1 + 0x244) = 0;
    *(undefined8 *)((long)param_1 + 0x23c) = 0;
    *(undefined8 *)((long)param_1 + 0x234) = 0;
  }
  lVar4 = param_1[0x3c];
  param_1[0x3b] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_0158fe68;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x1d8);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[0x3c] = 1;
LAB_0158fe68:
  param_1[0x2b] = &PTR_LAB_049adb00;
  param_1[0x2f] = &PTR_LAB_049adb88;
  plVar1 = (long *)param_1[0x34];
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)param_1[0x34];
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x37] != 0) {
    if (0 < *(int *)(param_1 + 0x36)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[0x37] + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = param_1[0x38];
        param_1[0x38] = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x36));
    }
    pvVar3 = (void *)param_1[0x39];
    *(undefined4 *)(param_1 + 0x36) = 0;
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1cc) = 0;
    *(undefined8 *)((long)param_1 + 0x1c4) = 0;
    *(undefined8 *)((long)param_1 + 0x1bc) = 0;
    *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  }
  lVar4 = param_1[0x2c];
  param_1[0x2b] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      return;
    }
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x158);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[0x2c] = 1;
  return;
}

