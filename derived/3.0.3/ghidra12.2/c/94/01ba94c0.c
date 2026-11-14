
void FUN_01ba94c0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a3a408;
  if (DAT_0533a030 != (long *)0x0) {
    (**(code **)(*DAT_0533a030 + 0x20))();
    DAT_0533a030 = (long *)0x0;
  }
  FUN_03b0dca0(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01ba9530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

