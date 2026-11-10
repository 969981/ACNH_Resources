
void FUN_0018c3d4(long *param_1)

{
  undefined8 *__ptr;
  code *UNRECOVERED_JUMPTABLE;
  
  *param_1 = (long)(PTR_DAT_04bcbdf0 + 0x10);
  if (param_1 + 4 == (long *)param_1[1]) {
    return;
  }
  __ptr = (undefined8 *)(param_1[1] + -0x14);
  UNRECOVERED_JUMPTABLE = (code *)*__ptr;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018c400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

