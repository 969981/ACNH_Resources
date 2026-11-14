
void FUN_0190c904(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb31d0;
  *param_1 = &PTR_LAB_049d7bd8;
  param_1[0x12] = 0;
  param_1[0xd] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[6] = PTR_DAT_04bb2fe8 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xc]);
  puVar1 = PTR_DAT_04bb2698;
  if (((uVar2 & 1) != 0) && (__ptr = (void *)param_1[0xc], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      lVar4 = *(long *)puVar1;
      goto joined_r0x0190c9ec;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
    }
  }
  lVar4 = *(long *)puVar1;
joined_r0x0190c9ec:
  if (lVar4 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar4,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0190c9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

