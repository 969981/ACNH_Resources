
void FUN_017b15a0(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_049c3c70;
  lVar2 = DAT_05290150;
  if ((param_1[2] != 0 || param_1[1] != 0) && (DAT_05290150 != 0)) {
    pMVar1 = (MutexType *)(DAT_05290150 + 0x28);
    nn::os::LockMutex(pMVar1);
    plVar3 = (long *)((long)*(int *)(lVar2 + 0x5c) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + -1;
    nn::os::UnlockMutex(pMVar1);
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017b1658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

