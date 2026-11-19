
void FUN_03c60734(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  FUN_038e31ec(param_1 + 0x200);
  FUN_038e31ec(param_1 + 0x1b0);
  FUN_038e31ec(param_1 + 0x128);
  FUN_038e31ec(param_1 + 0xd8);
  (**(code **)**(undefined8 **)(param_1 + 0x78))();
  (**(code **)**(undefined8 **)(param_1 + 0x48))();
  if (*(char *)(param_1 + 0x3e) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))((long *)(param_1 + 0x28));
    __ptr = *(void **)(param_1 + 0x30);
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
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  return;
}

