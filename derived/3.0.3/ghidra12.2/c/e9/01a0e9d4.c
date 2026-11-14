
void FUN_01a0e9d4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_049f90a8;
  FUN_01a0c010(param_1 + 0xc);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a0ea24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

