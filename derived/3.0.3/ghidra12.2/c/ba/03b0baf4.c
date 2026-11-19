
void FUN_03b0baf4(long *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  if (param_1[6] != 0) {
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    param_1[3] = 0;
  }
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
    *param_1 = 0;
  }
  __ptr = (void *)param_1[9];
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
    param_1[9] = 0;
  }
  return;
}

