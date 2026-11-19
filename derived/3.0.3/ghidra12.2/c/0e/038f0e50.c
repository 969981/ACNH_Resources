
void FUN_038f0e50(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_1[2] != 0) {
    FUN_038f0e50(param_1[2] + -8);
  }
  if (param_1[3] != 0) {
    FUN_038f0e50(param_1[3] + -8);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x038f0ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

