
void FUN_03b4810c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b76318;
  param_1[10] = &PTR_LAB_04b778d8;
  FUN_03b5f940();
  FUN_03b46644(param_1 + 1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03b48178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

