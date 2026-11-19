
void FUN_038f8448(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[10];
  *param_1 = &PTR_FUN_04b65ad0;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_038e1a84(param_1 + 1);
  return;
}

