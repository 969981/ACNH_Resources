
void FUN_007b55e8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  
  *param_1 = (long)(PTR_DAT_04bd0de0 + 0x10);
  puVar1 = PTR_DAT_04bb2698;
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      lVar3 = *(long *)puVar1;
      goto joined_r0x007b5694;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  lVar3 = *(long *)puVar1;
joined_r0x007b5694:
  if (lVar3 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(lVar3,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007b5674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

