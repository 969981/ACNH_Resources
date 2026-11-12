
void FUN_007b1f94(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04912410;
  FUN_007b24e0();
  __ptr = (void *)param_1[7];
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
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_007b1510(param_1);
  return;
}

