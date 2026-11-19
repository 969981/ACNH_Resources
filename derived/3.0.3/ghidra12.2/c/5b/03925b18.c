
void FUN_03925b18(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *__ptr;
  
  __ptr = (void *)param_1[0x3e];
  *param_1 = (long)&PTR_FUN_04b67100;
  param_1[6] = (long)&PTR_FUN_04b671c8;
  puVar2 = PTR_DAT_04bb2698;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    param_1[0x3e] = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0;
  }
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x39] = (long)puVar1;
  param_1[0x35] = (long)puVar1;
  param_1[0x31] = (long)puVar1;
  param_1[0x2c] = (long)puVar1;
  param_1[0x27] = (long)puVar1;
  param_1[0x22] = (long)puVar1;
  puVar3 = PTR_DAT_04bd11e8;
  param_1[0x17] = (long)puVar1;
  param_1[0xc] = (long)puVar1;
  param_1[6] = (long)(puVar3 + 0xd8);
  puVar3 = PTR_DAT_04bd1068;
  param_1[8] = (long)puVar1;
  *param_1 = (long)(puVar3 + 0x10);
  if (*(long *)puVar2 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(*(long *)puVar2,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03925c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

