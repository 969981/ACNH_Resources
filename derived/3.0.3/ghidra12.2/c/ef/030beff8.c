
void FUN_030beff8(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04afd0b8;
  if ((long *)param_1[99] != (long *)0x0) {
    (**(code **)(*(long *)param_1[99] + 8))();
    param_1[99] = 0;
  }
  __ptr = (void *)param_1[0x6b];
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
    param_1[0x6b] = 0;
    *(undefined4 *)(param_1 + 0x6a) = 0;
  }
  FUN_0340123c(param_1 + 100);
  FUN_0386e0e8(param_1 + 0x59);
  FUN_03d5cd90(param_1);
  return;
}

