
void FUN_02ba1e5c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04aa6758;
  FUN_02baea14(param_1 + 0x19e);
  FUN_02bacf04(param_1 + 0x163);
  FUN_02bab3f4(param_1 + 0x128);
  FUN_02ba98e4(param_1 + 0xed);
  FUN_02ba7dd4(param_1 + 0xb2);
  FUN_02ba62c4(param_1 + 0x77);
  FUN_02ba47ac(param_1 + 0x3c);
  FUN_02ba215c(param_1 + 1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02ba1eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

