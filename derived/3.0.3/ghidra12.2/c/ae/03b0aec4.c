
void FUN_03b0aec4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b730a8;
  param_1[0x55] = PTR_DAT_04bb34f8 + 0x10;
  FUN_038e1c80(param_1 + 0x5a);
  FUN_0034ebc0(param_1 + 0x44);
  FUN_0034ebc0(param_1 + 0x3f);
  FUN_0034ebc0(param_1 + 0x3a);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03b0af44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

