
void FUN_0312ef4c(void *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb2698;
  __ptr = *(void **)((long)param_1 + 0x378);
  if (__ptr != (void *)0x0) {
    FUN_03d4af00(__ptr);
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  FUN_030bb868(param_1);
  lVar2 = *(long *)puVar1;
  if (lVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0312efdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

