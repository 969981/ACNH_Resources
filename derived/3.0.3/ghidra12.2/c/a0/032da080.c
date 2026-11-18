
void FUN_032da080(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b1bc20;
  plVar1 = (long *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar1 != (long *)0x0 && DAT_05ae76e0 != 0) {
    (**(code **)(*plVar1 + 0x18))();
    if (((long *)param_1[0x21] != (long *)0x0) && (DAT_05ae76e0 != 0)) {
      (**(code **)(*(long *)param_1[0x21] + 0x18))();
    }
  }
  param_1[0xc] = &PTR_FUN_04b1bd20;
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 8))();
  }
  FUN_032e25f0(param_1 + 0xc);
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032da154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

