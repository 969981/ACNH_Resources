
void FUN_03c9b764(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b88d50;
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 0x20))();
  }
  FUN_03ca2064(param_1[0x23],param_1 + 0x14,param_1[0x24]);
  if (*(char *)((long)param_1 + 0x14e) != '\0') {
    (**(code **)(param_1[0x27] + 0x18))(param_1 + 0x27);
    __ptr = (void *)param_1[0x28];
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
    *(undefined1 *)((long)param_1 + 0x14e) = 0;
  }
  FUN_00367b9c(param_1);
  return;
}

