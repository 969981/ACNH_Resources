
undefined8 FUN_0073a900(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  if (*(long **)(param_1 + 0x1138) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1138) + 0x18))();
    *(undefined8 *)(param_1 + 0x1138) = 0;
  }
  if (*(long **)(param_1 + 0x1148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1148) + 0x38))();
    *(undefined8 *)(param_1 + 0x1148) = 0;
  }
  __ptr = *(void **)(param_1 + 0x1198);
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
    *(undefined8 *)(param_1 + 0x1198) = 0;
  }
  if (*(long **)(param_1 + 0x1150) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1150) + 8))();
    *(undefined8 *)(param_1 + 0x1150) = 0;
  }
  return 0;
}

