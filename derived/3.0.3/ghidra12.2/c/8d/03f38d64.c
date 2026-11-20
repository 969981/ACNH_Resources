
void FUN_03f38d64(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  if ((*(char *)*param_1 != '\0') && (__ptr = *(void **)param_1[1], __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    *(undefined8 *)param_1[1] = 0;
  }
  return;
}

