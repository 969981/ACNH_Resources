
void FUN_00187e4c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + -0x10);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free((undefined8 *)(param_1 + -0x10));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00187e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

