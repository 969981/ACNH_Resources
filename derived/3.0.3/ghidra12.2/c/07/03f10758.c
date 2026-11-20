
void FUN_03f10758(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04ba7d68;
  FUN_03f10620();
  param_1[4] = PTR_DAT_04bdefd0 + 0x10;
  FUN_03f11920();
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03f107c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

