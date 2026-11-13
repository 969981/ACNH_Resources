
void FUN_011b7114(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04986310;
  FUN_011b705c(param_1 + 0x16);
  FUN_009391e0(param_1 + 1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011b7174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

