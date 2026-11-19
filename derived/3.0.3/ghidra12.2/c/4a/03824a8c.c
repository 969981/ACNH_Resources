
void FUN_03824a8c(undefined8 *param_1)

{
  long *plVar1;
  
  FUN_038e1a84(param_1 + 0x1c);
  *param_1 = &PTR_FUN_04a99468;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03824ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

