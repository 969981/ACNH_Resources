
void FUN_0079b8dc(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)&PTR_LAB_0490f4e8;
  FUN_03838610(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x0079b948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

