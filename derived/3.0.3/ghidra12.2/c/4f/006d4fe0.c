
void FUN_006d4fe0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_048fa978;
  FUN_038e1c80(param_1 + 0x3a);
  FUN_006915fc(param_1 + 0x2f);
  FUN_038e1a84(param_1 + 0x27);
  FUN_038e1c80(param_1 + 0x21);
  FUN_038e267c(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d5054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

