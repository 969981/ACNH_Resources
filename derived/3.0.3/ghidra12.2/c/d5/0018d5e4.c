
void FUN_0018d5e4(long param_1)

{
  undefined8 *__ptr;
  
  FUN_001878f8();
  __ptr = (undefined8 *)(param_1 + -0x10);
  if ((code *)*__ptr == (code *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018d600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*__ptr)(__ptr);
  return;
}

