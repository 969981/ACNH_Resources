
void FUN_039bc8fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[0x5b];
  *param_1 = (long)&PTR_FUN_04b6a878;
  param_1[0x1e] = (long)&PTR_LAB_04b6a8b8;
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
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
  }
  if ((long *)param_1[0x5c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5c] + 8))();
    param_1[0x5c] = 0;
  }
  if ((long *)param_1[0x5d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5d] + 8))();
    param_1[0x5d] = 0;
  }
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0xb1] = (long)puVar1;
  param_1[0xad] = (long)puVar1;
  param_1[0xa9] = (long)puVar1;
  param_1[0xa5] = (long)puVar1;
  param_1[0xa0] = (long)puVar1;
  param_1[0x9c] = (long)puVar1;
  param_1[0x98] = (long)puVar1;
  param_1[0x94] = (long)puVar1;
  puVar2 = PTR_DAT_04bd1068;
  param_1[0x90] = (long)puVar1;
  param_1[0x8c] = (long)puVar1;
  param_1[0x86] = (long)(puVar2 + 0x10);
  param_1[0x1e] = (long)(PTR_DAT_04bd1070 + 0x10);
  *param_1 = (long)(PTR_DAT_04bd10a0 + 0x10);
  FUN_0390d560(param_1 + 0xf);
  param_1[0xf] = (long)(PTR_DAT_04bd11b8 + 0x10);
  FUN_0390d560(param_1 + 0xf);
  return;
}

