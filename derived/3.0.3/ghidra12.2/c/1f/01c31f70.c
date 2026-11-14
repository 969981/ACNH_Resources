
void FUN_01c31f70(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a40370;
  FUN_01c323e0();
  FUN_01c32b38(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01c31fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

