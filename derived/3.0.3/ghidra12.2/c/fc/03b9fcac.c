
void FUN_03b9fcac(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)(param_1 + -0x98);
  FUN_03b9fb70(__ptr);
  if (DAT_05ae7600 == 0) {
    free(__ptr);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03b9fcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
  return;
}

