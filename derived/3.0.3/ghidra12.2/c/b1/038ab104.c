
void FUN_038ab104(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b628c0;
  plVar1 = param_1 + 0x1076;
  (**(code **)(*plVar1 + 0x50))(plVar1,0);
  *plVar1 = (long)&PTR_FUN_04b628f8;
  FUN_038e1a84(param_1 + 0x10c2);
  FUN_038e267c(plVar1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038ab18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

