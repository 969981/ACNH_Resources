
void FUN_01c781b8(undefined2 *param_1)

{
  char cVar1;
  long *plVar2;
  void *__ptr;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  __ptr = *(void **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (__ptr != (void *)0x0) {
    if ((*(long *)((long)__ptr + 8) != 0) && (*(long **)((long)__ptr + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)__ptr + 0x10) + 8))();
    }
    FUN_038fd0e0((long)__ptr + 0x50);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      cVar1 = *(char *)(param_1 + 0x2c);
      goto joined_r0x01c78234;
    }
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  cVar1 = *(char *)(param_1 + 0x2c);
joined_r0x01c78234:
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  if (*(char *)((long)param_1 + 0x161) != '\0') {
    *(undefined1 *)((long)param_1 + 0x161) = 0;
  }
  *param_1 = 0;
  return;
}

