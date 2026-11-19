
void FUN_03bcd8f0(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b7aff0;
  param_1[3] = &PTR_LAB_04b7b030;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    FUN_003e015c(param_1);
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if ((long *)param_1[0x48] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x48] + 0x18))();
    param_1[0x48] = 0;
  }
  __ptr = (void *)param_1[0x49];
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x49] = 0;
  }
  FUN_003dfff0(param_1);
  return;
}

