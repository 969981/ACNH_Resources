
void FUN_03ea6a7c(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  FUN_03bf3600(*(undefined8 *)(param_1 + 0x30));
  FUN_03bf3600(*(undefined8 *)(param_1 + 0x38));
  FUN_03c56de0(param_1 + 0x40);
  if (*(char *)(param_1 + 0x26) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))((long *)(param_1 + 0x10));
    __ptr = *(void **)(param_1 + 0x18);
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
    }
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  return;
}

