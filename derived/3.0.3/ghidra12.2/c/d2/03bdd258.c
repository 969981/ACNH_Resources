
void FUN_03bdd258(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b7b7d0;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x135] != 0) {
    __ptr = (void *)(param_1[0x135] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[0x135] = 0;
  }
  if (*(char *)((long)param_1 + 0x989) != '\0') {
    if (DAT_05aec218 != (long *)0x0) {
      (**(code **)(*DAT_05aec218 + 8))();
    }
    DAT_05aec218 = (long *)0x0;
  }
  FUN_03beb51c(param_1);
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03bdd318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

