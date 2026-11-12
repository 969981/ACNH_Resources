
void FUN_0081a520(long *param_1)

{
  long *plVar1;
  void *__ptr;
  
  param_1[0x10] = (long)(PTR_DAT_04bd0de0 + 0x10);
  if (((*(byte *)(param_1 + 0x13) & 1) != 0) &&
     (__ptr = (void *)param_1[0x11], __ptr != (void *)0x0)) {
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
  *param_1 = (long)(PTR_DAT_04bdf0e0 + 0x10);
  FUN_038d92c4(param_1);
  return;
}

