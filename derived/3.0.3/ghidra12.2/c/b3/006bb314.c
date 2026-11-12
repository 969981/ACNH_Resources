
void FUN_006bb314(long *param_1)

{
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bb324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}

