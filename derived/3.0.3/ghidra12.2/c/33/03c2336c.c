
void FUN_03c2336c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b7e390;
  FUN_038e31ec(param_1 + 0x16);
  FUN_038e31ec(param_1 + 0xc);
  FUN_038e1a84(param_1 + 3);
  FUN_03c23400(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03c233d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

