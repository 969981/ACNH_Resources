
void FUN_03908790(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b65e80;
  FUN_03909bd0();
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -8);
    if (*plVar3 != 0) {
      lVar4 = *plVar3 * 0x150;
      do {
        FUN_039051d8(lVar2 + -0x150 + lVar4);
        lVar4 = lVar4 + -0x150;
      } while (lVar4 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar3);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,plVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,plVar3);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (param_1[4] != 0) {
    (*DAT_04c620d0)(param_1[4] + 0x120);
    (*DAT_04c61fc8)(param_1[4] + 0x20);
    param_1[4] = 0;
  }
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

