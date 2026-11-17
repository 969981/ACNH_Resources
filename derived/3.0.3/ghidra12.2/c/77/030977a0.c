
void FUN_030977a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *__ptr;
  
  plVar1 = param_1 + 0x3877;
  if (0 < (int)*plVar1) {
    lVar2 = 0;
    plVar3 = (long *)param_1[0x3879];
    do {
      plVar4 = *(long **)(param_1[0x3878] + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *plVar4 = (long)plVar3;
      param_1[0x3879] = (long)plVar4;
      plVar3 = plVar4;
    } while (lVar2 < (int)*plVar1);
  }
  *(undefined4 *)plVar1 = 0;
  if (param_1[0x46] != 0) {
    __ptr = (void *)(param_1[0x46] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x46] = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  FUN_031356e0(param_1 + 0x3841);
  FUN_034129e0(param_1 + 0x4c);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

