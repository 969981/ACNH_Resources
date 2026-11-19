
void FUN_03b2c508(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[0x1e];
  *param_1 = &PTR_FUN_04b75138;
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
    param_1[0x1e] = 0;
  }
  if ((long *)param_1[0x1f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1f] + 8))();
    param_1[0x1f] = 0;
  }
  param_1[0x31] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x3c);
  FUN_0037bb6c(param_1);
  return;
}

