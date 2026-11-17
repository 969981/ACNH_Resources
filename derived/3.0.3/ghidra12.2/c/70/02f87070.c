
void FUN_02f87070(long *param_1)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  
  lVar2 = param_1[0x5b];
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 8) != 0 && *(long **)(lVar2 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 8))();
    }
    param_1[0x5b] = 0;
  }
  if ((long *)param_1[0x5c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5c] + 0x58))();
    (**(code **)(*(long *)param_1[0x5c] + 0x20))();
    param_1[0x5c] = 0;
  }
  lVar2 = param_1[0x61];
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 8) != 0) && (*(long **)(lVar2 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 8))();
    }
    param_1[0x61] = 0;
  }
  if ((long *)param_1[0x62] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x62] + 0x58))();
    (**(code **)(*(long *)param_1[0x62] + 0x20))();
    param_1[0x62] = 0;
  }
  lVar2 = param_1[0x67];
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 8) != 0) && (*(long **)(lVar2 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 8))();
    }
    param_1[0x67] = 0;
  }
  if ((long *)param_1[0x68] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x68] + 0x58))();
    (**(code **)(*(long *)param_1[0x68] + 0x20))();
    param_1[0x68] = 0;
  }
  lVar2 = param_1[0x6d];
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 8) != 0) && (*(long **)(lVar2 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 8))();
    }
    param_1[0x6d] = 0;
  }
  if ((long *)param_1[0x6e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6e] + 0x58))();
    (**(code **)(*(long *)param_1[0x6e] + 0x20))();
    param_1[0x6e] = 0;
  }
  __ptr = (void *)param_1[0x79];
  param_1[0x73] = 0;
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
    param_1[0x79] = 0;
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

