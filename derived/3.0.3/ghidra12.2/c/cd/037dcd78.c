
void FUN_037dcd78(undefined8 *param_1)

{
  long *plVar1;
  
  *(undefined4 *)(param_1 + 0x170) = 0;
  *param_1 = &PTR_LAB_04b530a0;
  FUN_03f2d448(param_1 + 0x17b);
  FUN_03f2d448(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x16b) = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  FUN_03f2d448(param_1 + 0x115);
  FUN_03f2d448(param_1 + 0x10e);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  FUN_037bec4c(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x037dce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

