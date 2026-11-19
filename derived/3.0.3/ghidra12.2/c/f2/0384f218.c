
void FUN_0384f218(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b5e5b8;
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
    param_1[0xf] = 0;
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
    param_1[0xe] = 0;
  }
  if (param_1[0x11] != 0) {
    __ptr = (void *)(param_1[0x11] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

