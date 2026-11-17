
void FUN_031ca6fc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  __ptr = (void *)param_1[0xaf];
  *param_1 = (long)(PTR_DAT_04bc87a8 + 0x10);
  puVar1 = PTR_DAT_04bb2698;
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
    param_1[0xaf] = 0;
    *(undefined4 *)(param_1 + 0xae) = 0;
  }
  FUN_038596b8(param_1);
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x031ca79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

