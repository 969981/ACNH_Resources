
void FUN_01daf7f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *__ptr;
  
  plVar2 = *(long **)(*(long *)PTR_DAT_04bb47c8 + 8);
  if (plVar2 != (long *)0x0) {
    if (*param_1 != 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(*param_1 + 0x88));
      (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)*param_1);
      __ptr = (void *)*param_1;
      if (__ptr != (void *)0x0) {
        FUN_038e1a84((long)__ptr + 0xb0);
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
      *param_1 = 0;
    }
    if (param_1[1] != 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
      param_1[1] = 0;
    }
  }
  param_1[4] = -1;
  param_1[5] = -1;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[2] = -1;
  param_1[3] = -1;
  FUN_038e1a84(param_1 + 7);
  return;
}

