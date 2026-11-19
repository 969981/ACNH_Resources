
void FUN_03ba217c(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    if (*(long *)(param_1 + 0x88) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x88) + 8) = 0;
      if (*(long **)(param_1 + 0x88) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x88) + 8))();
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    __ptr = *(void **)(param_1 + 0x140);
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
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(long *)(param_1 + 0x160) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x160) + 8) = 0;
      if (*(long **)(param_1 + 0x160) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x160) + 8))();
      }
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}

