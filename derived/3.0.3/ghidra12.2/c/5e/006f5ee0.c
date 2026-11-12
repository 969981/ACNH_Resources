
void FUN_006f5ee0(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_FUN_048fc868;
  if (param_1[0x1c] != 0) {
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    param_1[4] = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)((long)param_1 + 0x14) = 0;
    *(undefined1 *)param_1[7] = 0;
    *(undefined1 *)param_1[0x12] = 0;
    __ptr = (void *)param_1[0x1c];
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
    param_1[0x1c] = 0;
  }
  *param_1 = &PTR_LAB_048fc7e8;
  return;
}

