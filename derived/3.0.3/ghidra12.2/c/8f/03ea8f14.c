
void FUN_03ea8f14(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04ba4350;
  (*(code *)**(undefined8 **)param_1[9])();
  *param_1 = &PTR_FUN_04ba4318;
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  if (*(char *)((long)param_1 + 0x36) != '\0') {
    (**(code **)(param_1[4] + 0x18))(param_1 + 4);
    __ptr = (void *)param_1[5];
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
    *(undefined1 *)((long)param_1 + 0x36) = 0;
  }
  return;
}

