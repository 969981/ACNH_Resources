
void FUN_03b41e80(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 *__ptr;
  void *__ptr_00;
  
  __ptr = (undefined4 *)param_1[8];
  *param_1 = &PTR_FUN_04b76280;
  puVar1 = PTR_DAT_04bb2698;
  if (__ptr == (undefined4 *)0x0) {
    return;
  }
  __ptr_00 = *(void **)(__ptr + 2);
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
    *(undefined8 *)(__ptr + 2) = 0;
    *__ptr = 0;
    __ptr = (undefined4 *)param_1[8];
    if (__ptr == (undefined4 *)0x0) goto LAB_03b41f28;
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
LAB_03b41f28:
  param_1[8] = 0;
  return;
}

