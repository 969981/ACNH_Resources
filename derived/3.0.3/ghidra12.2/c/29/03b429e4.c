
void FUN_03b429e4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b762a0;
  FUN_03b428a8();
  FUN_03b41e80(param_1 + 0x11);
  FUN_03b41e80(param_1 + 7);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03b42a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

