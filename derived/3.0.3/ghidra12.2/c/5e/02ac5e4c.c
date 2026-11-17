
undefined8 FUN_02ac5e4c(long param_1)

{
  long *plVar1;
  void *__ptr;
  long lVar2;
  
  if (*(long *)(param_1 + 0x2d8) != 0) {
    FUN_03ebae78(*(long *)(param_1 + 0x2d8) + 0x18);
    if (*(long **)(param_1 + 0x2d8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2d8) + 8))();
    }
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x2e0);
  if (lVar2 != 0) {
    FUN_03ebae78(lVar2 + 0x10);
    __ptr = *(void **)(lVar2 + 0xb0);
    if (__ptr != (void *)0x0) {
      *(undefined8 *)(lVar2 + 0xbc) = 0;
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
        }
      }
      *(undefined4 *)(lVar2 + 0xc0) = 0;
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      *(undefined8 *)(lVar2 + 0xb8) = 0;
    }
    if (*(long **)(param_1 + 0x2e0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2e0) + 8))();
    }
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  return 0;
}

