
void FUN_02ad4460(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a9f458;
  FUN_02ad3300(param_1 + 0xa11);
  FUN_02ad3300(param_1 + 0x8cf);
  FUN_02ad3300(param_1 + 0x78d);
  FUN_02ad3300(param_1 + 0x64b);
  FUN_02ad3300(param_1 + 0x509);
  FUN_02ad3300(param_1 + 0x3c7);
  FUN_02ad3300(param_1 + 0x285);
  FUN_02ad3300(param_1 + 0x143);
  FUN_02ad3300(param_1 + 1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02ad4514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

