
void FUN_03368b04(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 *__ptr;
  long *plVar3;
  void *__ptr_00;
  
  puVar2 = DAT_05734e98;
  if (DAT_05734e98 != (undefined8 *)0x0) {
    DAT_05734e98 = (undefined8 *)0x0;
    (**(code **)*puVar2)();
    __ptr = DAT_05734ea0;
    puVar1 = PTR_DAT_04bb2698;
    if (DAT_05734ea0 != (undefined4 *)0x0) {
      __ptr_00 = *(void **)(DAT_05734ea0 + 2);
      if (__ptr_00 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr_00);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,__ptr_00);
          }
        }
        *(undefined8 *)(__ptr + 2) = 0;
        *__ptr = 0;
      }
      if (*(long *)puVar1 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
    }
    DAT_05734ea0 = (undefined4 *)0x0;
  }
  return;
}

