
void FUN_038f1c48(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[0x10];
  *param_1 = &PTR_LAB_04b65980;
  if (__ptr != (void *)0x0 && *(char *)((long)param_1 + 0x8c) != '\0') {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  FUN_038f1ad0(param_1 + 0x13);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038f1ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

