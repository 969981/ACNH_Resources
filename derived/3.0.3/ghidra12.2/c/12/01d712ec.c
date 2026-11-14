
void FUN_01d712ec(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  
  puVar1 = PTR_DAT_04bb2698;
  __ptr = *(undefined8 **)(param_1 + 8);
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
    __ptr = *(undefined8 **)(param_1 + 8);
    if (__ptr == (undefined8 *)0x0) goto LAB_01d71384;
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
LAB_01d71384:
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

