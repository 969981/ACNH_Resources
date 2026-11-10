
void FUN_0018edf0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcbc98 + 0x10);
  FUN_00187b50(param_1 + 6);
  FUN_0018885c(param_1 + 1);
  param_1 = param_1 + -2;
  if ((code *)*param_1 == (code *)0x0) {
    free(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018ee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1);
  return;
}

