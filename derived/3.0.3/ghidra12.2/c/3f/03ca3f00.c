
void FUN_03ca3f00(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b89538;
  lVar2 = *(long *)param_1[4];
  plVar1 = (long *)((long)*(int *)(lVar2 + 0x1c) + (long)param_1);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  if (*(char *)((long)param_1 + 0xce) != '\0') {
    (**(code **)(param_1[0x17] + 0x18))(param_1 + 0x17);
    __ptr = (void *)param_1[0x18];
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
    *(undefined1 *)((long)param_1 + 0xce) = 0;
  }
  *param_1 = &PTR_LAB_04b89400;
  FUN_03b26900(param_1 + 8);
  return;
}

