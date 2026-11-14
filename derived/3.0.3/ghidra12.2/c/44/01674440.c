
void FUN_01674440(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_049baf28;
  FUN_03c56510(param_1 + 7);
  param_1[7] = PTR_DAT_04bd2f30 + 0x10;
  FUN_03c56510(param_1 + 7);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016744b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

