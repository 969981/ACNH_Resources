
void FUN_01da5808(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  
  *param_1 = &PTR_FUN_04a5afe0;
  FUN_038e1a84(param_1 + 0x39);
  __ptr = (undefined8 *)param_1[4];
  param_1[3] = &PTR_FUN_04a5b000;
  puVar1 = PTR_DAT_04bb2698;
  if (__ptr == (undefined8 *)0x0) {
    return;
  }
  __ptr_00 = (void *)__ptr[1];
  if (__ptr_00 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr_00);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr_00);
      }
    }
    *__ptr = 0;
    __ptr[1] = 0;
    __ptr = (undefined8 *)param_1[4];
    if (__ptr == (undefined8 *)0x0) goto LAB_01da58c0;
  }
  if (*(long *)puVar1 == 0) {
    free(__ptr);
  }
  else {
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
LAB_01da58c0:
  param_1[4] = 0;
  return;
}

