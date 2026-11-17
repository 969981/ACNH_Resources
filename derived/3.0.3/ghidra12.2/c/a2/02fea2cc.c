
void FUN_02fea2cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[0x4e];
  *param_1 = &PTR_LAB_04aeef78;
  puVar2 = PTR_DAT_04bb2698;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
  }
  puVar1 = PTR_DAT_04bc7ae0 + 0x10;
  param_1[0x3b] = puVar1;
  FUN_02fee4f0(param_1 + 0x48);
  FUN_02ff5b7c(param_1 + 0x3e);
  param_1[0x29] = puVar1;
  FUN_02fee4f0(param_1 + 0x36);
  FUN_02ff5b7c(param_1 + 0x2c);
  param_1[0x17] = puVar1;
  FUN_02fee4f0(param_1 + 0x24);
  FUN_02ff5b7c(param_1 + 0x1a);
  param_1[5] = puVar1;
  FUN_02fee4f0(param_1 + 0x12);
  FUN_02ff5b7c(param_1 + 8);
  if (*(long *)puVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)puVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02fea3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

