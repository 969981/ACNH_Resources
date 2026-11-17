
void FUN_02be26e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  
  plVar1 = param_1 + 0x3839;
  if (*(long *)(*(long *)PTR_DAT_04bb2718 + 0x428) != 0) {
    *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x428) + 0x20) = 0;
  }
  if (param_1[0x44] != 0) {
    __ptr = (void *)(param_1[0x44] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[0x44] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  if (0 < (int)*plVar1) {
    lVar3 = 0;
    plVar2 = (long *)param_1[0x383b];
    do {
      plVar4 = *(long **)(param_1[0x383a] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *plVar4 = (long)plVar2;
      param_1[0x383b] = (long)plVar4;
      plVar2 = plVar4;
    } while (lVar3 < (int)*plVar1);
  }
  *(undefined4 *)plVar1 = 0;
  FUN_034129e0(param_1 + 0x4a);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

