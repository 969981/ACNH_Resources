
void FUN_01c7373c(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  if ((*(char *)(param_1 + 0x140) != '\0') &&
     (FUN_01c7e010(*(undefined8 *)(param_1 + 0x138)), *(char *)(param_1 + 0x140) != '\0')) {
    __ptr = (void *)**(undefined8 **)(param_1 + 0x138);
    **(undefined8 **)(param_1 + 0x138) = 0;
    if (__ptr != (void *)0x0) {
      FUN_027c10a4((long)__ptr + 0x56954);
      FUN_027c10a4((long)__ptr + 0x568f0);
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
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  return;
}

