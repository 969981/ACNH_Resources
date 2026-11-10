
void FUN_0018d854(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((int)param_1[1] != 4) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + -0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free((undefined8 *)(*param_1 + -0x14));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018d86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

