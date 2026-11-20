
void FUN_03ee5d8c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x73] = (long)puVar1;
  param_1[0x6f] = (long)puVar1;
  param_1[0x6b] = (long)puVar1;
  param_1[0x67] = (long)puVar1;
  param_1[99] = (long)puVar1;
  param_1[0x5f] = (long)puVar1;
  param_1[0x5b] = (long)puVar1;
  param_1[0x57] = (long)puVar1;
  puVar2 = PTR_DAT_04bd1068 + 0x10;
  param_1[0x52] = (long)puVar1;
  param_1[0x45] = (long)puVar1;
  puVar3 = PTR_DAT_04bd1070;
  param_1[0x4c] = (long)puVar2;
  param_1[0x3f] = (long)puVar2;
  puVar1 = PTR_DAT_04bd0de0;
  param_1[5] = (long)(puVar3 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2698;
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      lVar5 = *(long *)puVar1;
      goto joined_r0x03ee5e90;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
    }
  }
  lVar5 = *(long *)puVar1;
joined_r0x03ee5e90:
  if (lVar5 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar5,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03ee5e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

