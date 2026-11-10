
void FUN_001d64e4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcc760 + 0x10);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if ((long *)param_1[2] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001d6524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 8))();
  return;
}

