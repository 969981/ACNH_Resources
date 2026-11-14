
void FUN_01dc814c(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04bc1058 + 0x10);
  if (DAT_05353640 != 0) {
    FUN_01c82cb0(DAT_05353640,param_1);
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01dc81b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

