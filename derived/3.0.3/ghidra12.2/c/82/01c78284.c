
void FUN_01c78284(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = param_2;
  if (__ptr != (void *)0x0) {
    if ((*(long *)((long)__ptr + 8) != 0) && (*(long **)((long)__ptr + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)__ptr + 0x10) + 8))();
    }
    FUN_038fd0e0((long)__ptr + 0x50);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01c782f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      return;
    }
  }
  return;
}

