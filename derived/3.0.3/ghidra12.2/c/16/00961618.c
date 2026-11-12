
void FUN_00961618(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_04bb5c98 + 0x10);
  lVar2 = DAT_04cfae30;
  if ((param_1[2] != 0 || param_1[1] != 0) && (DAT_04cfae30 != 0)) {
    pMVar1 = (MutexType *)(DAT_04cfae30 + 0x50);
    nn::os::LockMutex(pMVar1);
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
    nn::os::UnlockMutex(pMVar1);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009616e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

