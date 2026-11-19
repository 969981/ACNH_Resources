
void FUN_038b7e38(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04bd0cb0 + 0x10);
  plVar1 = (long *)param_1[0x11];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
    if ((long *)param_1[0x11] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x11] + 8))();
    }
  }
  FUN_038ba610(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038b7ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

