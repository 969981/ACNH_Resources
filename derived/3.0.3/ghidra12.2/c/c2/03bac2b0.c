
void FUN_03bac2b0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char *__ptr;
  void *__ptr_00;
  
  *param_1 = &PTR_LAB_04b7a4e8;
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
    param_1[5] = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (char *)param_1[6];
  if (__ptr != (char *)0x0) {
    if (*__ptr != '\0') {
      __ptr_00 = *(void **)(__ptr + 8);
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
        __ptr[8] = '\0';
        __ptr[9] = '\0';
        __ptr[10] = '\0';
        __ptr[0xb] = '\0';
        __ptr[0xc] = '\0';
        __ptr[0xd] = '\0';
        __ptr[0xe] = '\0';
        __ptr[0xf] = '\0';
      }
      *__ptr = '\0';
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
    param_1[6] = 0;
  }
  *param_1 = &PTR_LAB_04b7a498;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
    param_1[3] = 0;
  }
  return;
}

