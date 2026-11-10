
void FUN_001864f8(long param_1)

{
  undefined8 *__ptr;
  
  FUN_0018ac30();
  __ptr = (undefined8 *)(param_1 + -0x10);
  if ((code *)*__ptr == (code *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00186514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*__ptr)(__ptr);
  return;
}

