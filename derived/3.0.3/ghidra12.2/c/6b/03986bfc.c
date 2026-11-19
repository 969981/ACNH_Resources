
void FUN_03986bfc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b68b50;
  FUN_03908790(param_1 + 0x146);
  FUN_03908790(param_1 + 0x135);
  FUN_03908790(param_1 + 0x124);
  FUN_03908790(param_1 + 0x113);
  FUN_03908790(param_1 + 0x102);
  FUN_03908790(param_1 + 0xf1);
  FUN_03908790(param_1 + 0xe0);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03986c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

