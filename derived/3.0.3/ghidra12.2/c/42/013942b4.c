
void FUN_013942b4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04993d10;
  FUN_0138de8c(param_1 + 0x21);
  param_1[6] = &PTR_LAB_04993bf0;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01394318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

