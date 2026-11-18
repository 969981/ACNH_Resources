
void FUN_0329f73c(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_032b018c();
    __ptr = *(void **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (__ptr != (void *)0x0) {
      FUN_032afbc8(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        return;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0329f79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
        return;
      }
    }
  }
  return;
}

