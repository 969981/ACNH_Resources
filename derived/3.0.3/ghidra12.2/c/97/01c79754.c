
void FUN_01c79754(long param_1)

{
  char cVar1;
  long *plVar2;
  void *__ptr;
  
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(**(long **)(DAT_05354240 + 8) + 0x38))();
  }
  if (*(char *)(param_1 + 0x161) != '\0') {
    *(undefined1 *)(param_1 + 0x161) = 0;
  }
  __ptr = *(void **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (__ptr != (void *)0x0) {
    if ((*(long *)((long)__ptr + 8) != 0) && (*(long **)((long)__ptr + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)__ptr + 0x10) + 8))();
    }
    FUN_038fd0e0((long)__ptr + 0x50);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      cVar1 = *(char *)(param_1 + 0x140);
      goto joined_r0x01c797f4;
    }
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  cVar1 = *(char *)(param_1 + 0x140);
joined_r0x01c797f4:
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}

