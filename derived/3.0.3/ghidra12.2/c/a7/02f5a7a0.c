
void FUN_02f5a7a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  if (param_1[0x46] != 0) {
    if (0 < (int)param_1[0x45]) {
      lVar2 = 0;
      plVar1 = (long *)param_1[0x47];
      do {
        plVar3 = *(long **)(param_1[0x46] + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *plVar3 = (long)plVar1;
        param_1[0x47] = (long)plVar3;
        plVar1 = plVar3;
      } while (lVar2 < (int)param_1[0x45]);
    }
    __ptr = (void *)param_1[0x48];
    *(undefined4 *)(param_1 + 0x45) = 0;
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
    *(undefined4 *)((long)param_1 + 0x244) = 0;
    *(undefined8 *)((long)param_1 + 0x23c) = 0;
    *(undefined8 *)((long)param_1 + 0x234) = 0;
    *(undefined8 *)((long)param_1 + 0x22c) = 0;
  }
  FUN_03405260(param_1 + 0x49);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

