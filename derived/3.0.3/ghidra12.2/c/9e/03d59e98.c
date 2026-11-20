
void FUN_03d59e98(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b8f648;
  FUN_038e31ec(param_1 + 0x2d);
  FUN_038e31ec(param_1 + 0x23);
  FUN_03d5aae0(param_1 + 0xf);
  if (*(char *)((long)param_1 + 0x3e) != '\0') {
    (**(code **)(param_1[5] + 0x18))(param_1 + 5);
    __ptr = (void *)param_1[6];
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
    *(undefined1 *)((long)param_1 + 0x3e) = 0;
  }
  return;
}

