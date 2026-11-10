
void FUN_0018c280(long *param_1)

{
  undefined8 *__ptr;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 == 0) {
    return;
  }
  __ptr = (undefined8 *)(*param_1 + -0x14);
  UNRECOVERED_JUMPTABLE = (code *)*__ptr;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

