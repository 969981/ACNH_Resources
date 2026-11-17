
void FUN_02fc19a8(long *param_1)

{
  long *plVar1;
  void *__ptr;
  
  if (param_1[0x44] != 0) {
    __ptr = (void *)(param_1[0x44] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x44] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  FUN_034129e0(param_1 + 0x4a);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

