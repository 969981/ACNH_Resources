
void FUN_03858c9c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b5ebd0;
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03858d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

