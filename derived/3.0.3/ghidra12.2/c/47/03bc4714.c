
void FUN_03bc4714(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b7ac30;
  param_1[1] = &PTR_FUN_04b7aca0;
  FUN_03bc4500();
  FUN_038e1a84(param_1 + 0x2e);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03bc4770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

