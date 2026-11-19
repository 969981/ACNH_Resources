
void FUN_03984984(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_04b68a90;
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
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_038e1a84(param_1 + 4);
  return;
}

