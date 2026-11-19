
void FUN_03a0d514(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)param_1[6];
  param_1[1] = &PTR_FUN_04b6c268;
  *param_1 = &PTR_FUN_04b6c240;
  plVar1 = param_1 + 5;
  lVar4 = *plVar1;
  if ((plVar3 != (long *)0x0 || lVar4 != 0) && (lVar2 = param_1[8], lVar2 != 0)) {
    param_1[8] = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      plVar3 = (long *)param_1[6];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar1;
    }
    *plVar1 = 0;
    param_1[6] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = param_1[2];
  param_1[1] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_03a0d614;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)(param_1 + 1));
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
  param_1[2] = 1;
LAB_03a0d614:
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03a0d648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

