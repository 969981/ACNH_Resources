
void FUN_0367b084(long param_1)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    if (*(long *)(lVar2 + 0x20) != 0) {
      *(undefined1 *)(*(long *)(lVar2 + 0x20) + 0x10) = 1;
      FUN_03ffb480(*(undefined8 *)(lVar2 + 0x20));
    }
    if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 0x30) + 0x48))();
    }
    __ptr = *(void **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (__ptr != (void *)0x0) {
      FUN_0367a3b4(__ptr);
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
  }
  FUN_0367c540(param_1);
  return;
}

