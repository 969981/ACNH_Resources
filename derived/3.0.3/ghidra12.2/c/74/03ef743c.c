
void FUN_03ef743c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  puVar2 = PTR_DAT_04bd1070 + 0x10;
  param_1[0x49] = (long)puVar1;
  param_1[0x45] = (long)puVar1;
  param_1[0x3f] = (long)(PTR_DAT_04bd1068 + 0x10);
  puVar1 = PTR_DAT_04bd0de0;
  param_1[0x52] = (long)puVar2;
  param_1[5] = (long)puVar2;
  *param_1 = (long)(puVar1 + 0x10);
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      return;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03ef74d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      return;
    }
  }
  return;
}

