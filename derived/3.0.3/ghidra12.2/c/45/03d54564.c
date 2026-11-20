
void FUN_03d54564(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b8f4e8;
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_03c888f0();
  }
  FUN_03b0cf94(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03d545c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

