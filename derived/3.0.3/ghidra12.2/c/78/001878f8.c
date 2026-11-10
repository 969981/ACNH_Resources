
void FUN_001878f8(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04bcbcc0 + 0x10);
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)&DAT_04c58ac8 && plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[1];
  if ((plVar1 != (long *)&DAT_04c58a68) && (plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))();
  }
  if ((long *)param_1[3] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 8))();
  return;
}

