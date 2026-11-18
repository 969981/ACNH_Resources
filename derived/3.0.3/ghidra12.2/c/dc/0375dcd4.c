
void FUN_0375dcd4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b46a28;
  FUN_00960e20(param_1 + 0x143);
  FUN_00960e20(param_1 + 0x105);
  FUN_00960e20(param_1 + 199);
  FUN_00960e20(param_1 + 0x89);
  FUN_00960e20(param_1 + 0x4b);
  FUN_00960e20(param_1 + 0xd);
  param_1[8] = &PTR_FUN_0498d548;
  param_1[3] = &PTR_FUN_0498d548;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0375dd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

