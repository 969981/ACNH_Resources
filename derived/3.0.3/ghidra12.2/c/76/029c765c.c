
void FUN_029c765c(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x1a0);
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
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  *(undefined1 *)(param_1 + 0x180) = 0;
  FUN_03ba0d98(param_1 + -0x98);
  return;
}

