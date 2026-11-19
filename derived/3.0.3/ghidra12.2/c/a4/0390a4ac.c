
void FUN_0390a4ac(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[0x3c];
  *param_1 = &PTR_FUN_04b65ea0;
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
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  FUN_03908268(param_1 + 0x2d);
  FUN_03908268(param_1 + 0x1f);
  FUN_03908268(param_1 + 0x11);
  FUN_03908268(param_1 + 3);
  return;
}

