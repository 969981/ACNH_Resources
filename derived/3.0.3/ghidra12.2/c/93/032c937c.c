
void FUN_032c937c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b1b120;
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 8))();
  }
  plVar1 = (long *)param_1[0x23];
  param_1[0x23] = 0;
  param_1[2] = &PTR_LAB_04b1bc20;
  if ((plVar1 != (long *)0x0) && (DAT_05ae76e0 != 0)) {
    (**(code **)(*plVar1 + 0x18))();
    if (((long *)param_1[0x23] != (long *)0x0) && (DAT_05ae76e0 != 0)) {
      (**(code **)(*(long *)param_1[0x23] + 0x18))();
    }
  }
  param_1[0xe] = PTR_DAT_04bc9600 + 0x10;
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
  }
  FUN_032e25f0(param_1 + 0xe);
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032c945c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 8))();
  return;
}

