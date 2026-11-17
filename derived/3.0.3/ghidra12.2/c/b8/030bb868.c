
void FUN_030bb868(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04afca48;
  if ((long *)param_1[0x4a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4a] + 8))();
    param_1[0x4a] = 0;
  }
  FUN_0386e0e8(param_1 + 0x41);
  *param_1 = &PTR_FUN_04b90648;
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x18))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x18))();
  }
  __ptr = (void *)param_1[0x3b];
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
  }
  FUN_03c5ce30(param_1);
  return;
}

