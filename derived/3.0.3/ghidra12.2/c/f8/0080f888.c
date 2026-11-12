
void FUN_0080f888(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  plVar1 = (long *)param_1[4];
  *param_1 = &PTR_FUN_049174e0;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((int)plVar1[4] == 0) {
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
  }
  (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_0082c640(param_1 + 3);
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
  }
  param_1[9] = 0;
  FUN_0082c640(param_1 + 3);
  return;
}

