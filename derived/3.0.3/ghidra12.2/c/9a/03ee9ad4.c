
void FUN_03ee9ad4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bd1070 + 0x10;
  param_1[0x8f] = (long)puVar1;
  puVar2 = PTR_DAT_04bbd578;
  param_1[0x80] = (long)puVar1;
  param_1[0x71] = (long)puVar1;
  param_1[0x62] = (long)puVar1;
  param_1[0x53] = (long)puVar1;
  param_1[0x44] = (long)puVar1;
  param_1[0x35] = (long)puVar1;
  param_1[0x26] = (long)puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x8b] = (long)puVar2;
  param_1[0x7c] = (long)puVar2;
  param_1[0x6d] = (long)puVar2;
  param_1[0x5e] = (long)puVar2;
  param_1[0x4f] = (long)puVar2;
  param_1[0x40] = (long)puVar2;
  param_1[0x31] = (long)puVar2;
  param_1[0x22] = (long)puVar2;
  param_1[0x13] = (long)puVar2;
  puVar2 = PTR_DAT_04bd1068 + 0x10;
  param_1[0x17] = (long)puVar1;
  param_1[10] = (long)puVar1;
  param_1[4] = (long)puVar2;
  *param_1 = (long)(PTR_DAT_04bd0de0 + 0x10);
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      return;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03ee9ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      return;
    }
  }
  return;
}

