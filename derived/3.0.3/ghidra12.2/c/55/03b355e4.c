
void FUN_03b355e4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b75b10;
  if (param_1[0x20] != 0) {
    FUN_00397a38();
    param_1[0x20] = 0;
  }
  param_1[0x4d] = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x58);
  param_1[0x31] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x3c);
  FUN_003834dc(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03b35678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

