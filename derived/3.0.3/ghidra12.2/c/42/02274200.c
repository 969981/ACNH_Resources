
void FUN_02274200(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_04bb2e88 + 0x10);
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar3 = (long)*(int *)((long)param_1 + 0xbc);
    plVar2 = (long *)(param_1[0x16] - lVar3);
    lVar4 = (long)plVar2 + lVar3;
    do {
      plVar1 = (long *)((long)plVar2 + (long)*(int *)((long)param_1 + 0xbc));
      lVar4 = *(long *)(lVar4 + 8);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      (**(code **)(*plVar2 + 0x28))();
      plVar2 = (long *)(lVar4 - lVar3);
    } while (plVar2 != (long *)((long)(param_1 + 0x15) - lVar3));
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x022742dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

