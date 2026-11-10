
void FUN_00185d70(long param_1)

{
  undefined8 *__ptr;
  
  FUN_00185c50();
  __ptr = (undefined8 *)(param_1 + -0x10);
  if ((code *)*__ptr == (code *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00185d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*__ptr)(__ptr);
  return;
}

