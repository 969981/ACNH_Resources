
void FUN_0328c890(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b17e10;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[8];
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[7] = 0;
    param_1[8] = 0;
    if ((long *)param_1[2] != (long *)0x0) {
      (**(code **)(*(long *)param_1[2] + 8))();
    }
  }
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0328c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

