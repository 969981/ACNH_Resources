
void FUN_01d92a88(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a5ac30;
  FUN_038e1a84(param_1 + 0x4d);
  param_1[0x1e] = &PTR_LAB_048fc7e8;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01d92aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

