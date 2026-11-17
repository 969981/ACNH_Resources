
void FUN_02aea250(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bbbd10 + 0x10);
  if (0 < (int)param_1[7]) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(param_1[8] + lVar2 * 8);
      (**(code **)*plVar1)(plVar1);
      lVar2 = lVar2 + 1;
      *plVar1 = param_1[9];
      param_1[9] = (long)plVar1;
    } while (lVar2 < (int)param_1[7]);
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02aea2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

