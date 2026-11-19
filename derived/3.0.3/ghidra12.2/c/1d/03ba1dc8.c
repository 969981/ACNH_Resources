
void FUN_03ba1dc8(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b79d00;
  param_1[10] = &PTR_LAB_04b79df8;
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (param_1[0x11] != 0) {
      *(undefined1 *)(param_1[0x11] + 8) = 0;
      if ((long *)param_1[0x11] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x11] + 8))();
      }
      param_1[0x11] = 0;
    }
    __ptr = (void *)param_1[0x28];
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
      param_1[0x28] = 0;
    }
    param_1[0x27] = 0;
    if (param_1[0x2c] != 0) {
      *(undefined1 *)(param_1[0x2c] + 8) = 0;
      if ((long *)param_1[0x2c] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x2c] + 8))();
      }
      param_1[0x2c] = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  FUN_03b41e80(param_1 + 0x1d);
  FUN_03b41e80(param_1 + 0x13);
  return;
}

