
void FUN_03925a50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[0x38];
  param_1[-6] = (long)&PTR_FUN_04b67100;
  *param_1 = (long)&PTR_FUN_04b671c8;
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
    param_1[0x38] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
  }
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x33] = (long)puVar1;
  param_1[0x2f] = (long)puVar1;
  puVar2 = PTR_DAT_04bd11e8;
  param_1[0x2b] = (long)puVar1;
  param_1[0x26] = (long)puVar1;
  param_1[0x21] = (long)puVar1;
  param_1[0x1c] = (long)puVar1;
  param_1[0x11] = (long)puVar1;
  param_1[6] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0xd8);
  puVar2 = PTR_DAT_04bd1068;
  param_1[2] = (long)puVar1;
  param_1[-6] = (long)(puVar2 + 0x10);
  return;
}

