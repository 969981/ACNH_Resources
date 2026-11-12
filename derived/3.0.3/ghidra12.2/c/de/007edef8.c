
void FUN_007edef8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_04cb54e8 == param_1) {
    DAT_04cb54e8 = (undefined8 *)0x0;
    DAT_04cb54f0 = 0;
  }
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) goto LAB_007edfb0;
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
LAB_007edfb0:
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007edfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

