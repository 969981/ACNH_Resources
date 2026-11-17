
void FUN_02a5fd18(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04a9b470;
  param_1[0xa1] = PTR_DAT_04bbc1a0 + 0x10;
  FUN_00960e20(param_1 + 0x61);
  param_1[0x50] = &PTR_LAB_04a9bd78;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a5fd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

