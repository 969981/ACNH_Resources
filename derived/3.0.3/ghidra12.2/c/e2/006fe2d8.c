
void FUN_006fe2d8(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  
  *param_1 = &PTR_FUN_048fd6f8;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x2b] = &PTR_FUN_048fd860;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x31]);
  puVar1 = PTR_DAT_04bb2698;
  if (((uVar2 & 1) != 0) && (__ptr = (void *)param_1[0x31], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      lVar4 = *(long *)puVar1;
      goto joined_r0x006fe3a8;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
    }
  }
  lVar4 = *(long *)puVar1;
joined_r0x006fe3a8:
  if (lVar4 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar4,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006fe388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

