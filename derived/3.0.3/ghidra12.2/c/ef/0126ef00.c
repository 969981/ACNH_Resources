
void FUN_0126ef00(long param_1)

{
  long *plVar1;
  void *__ptr;
  long lVar2;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_01258c6c();
    if (*(long **)(param_1 + 0x98) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x98) + 8))();
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_01381a80();
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    FUN_013835c8(lVar2 + 0x28);
    __ptr = *(void **)(lVar2 + 0x60);
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
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined4 *)(lVar2 + 0x68) = 0;
    }
    *(undefined4 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}

