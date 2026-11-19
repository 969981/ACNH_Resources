
void FUN_03ba5bd4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b79fd8;
  param_1[10] = &PTR_FUN_04b7a0d0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((long *)param_1[0x34] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x34] + 8))();
      param_1[0x34] = 0;
    }
    FUN_03ba217c(param_1);
  }
  FUN_038e1a84(param_1 + 0x38);
  FUN_03ba1dc8(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03ba5c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

