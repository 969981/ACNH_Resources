
void FUN_032b72dc(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[0xca];
  *param_1 = &PTR_FUN_04b1a4d8;
  param_1[0xcb] = 0;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      plVar1 = (long *)param_1[0xc5];
      goto joined_r0x032b733c;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
    }
  }
  plVar1 = (long *)param_1[0xc5];
joined_r0x032b733c:
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_032b7370(param_1 + 1);
  return;
}

