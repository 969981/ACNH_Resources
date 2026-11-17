
void FUN_031e2038(long *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[0xaf];
  *param_1 = (long)(PTR_DAT_04bc87a8 + 0x10);
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
    param_1[0xaf] = 0;
    *(undefined4 *)(param_1 + 0xae) = 0;
  }
  FUN_038596b8(param_1);
  return;
}

