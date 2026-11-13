
void FUN_01340048(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04990b38;
  param_1[0x1d] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = &PTR_LAB_04928140;
  param_1[0x11] = 0;
  param_1[0x12] = &PTR_LAB_04903138;
  param_1[6] = PTR_DAT_04bb6048 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = &PTR_LAB_04903138;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013400cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

