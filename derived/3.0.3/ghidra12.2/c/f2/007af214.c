
void FUN_007af214(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)&PTR_LAB_04911f78;
  FUN_03838610(param_1 + 0x5b);
  *param_1 = (long)(PTR_DAT_04bb39e0 + 0x10);
  FUN_03838610(param_1 + 0x55);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007af280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

