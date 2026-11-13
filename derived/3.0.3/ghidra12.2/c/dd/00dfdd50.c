
void FUN_00dfdd50(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04959fb0;
  FUN_03ebae78(param_1 + 0x17);
  param_1[0x3e] = PTR_DAT_04bb2df8 + 0x10;
  FUN_03f45838(param_1 + 0x29);
  FUN_03f457c4(param_1 + 0x29);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dfddc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

