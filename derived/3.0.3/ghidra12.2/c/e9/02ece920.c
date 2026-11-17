
void FUN_02ece920(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  long *plVar4;
  
  __ptr = (void *)param_1[0x4d];
  *param_1 = (long)&PTR_LAB_04add410;
  if (__ptr != (void *)0x0) {
    FUN_0340cc60(__ptr);
    FUN_03ebae78((long)__ptr + 0x1a8);
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
  plVar1 = (long *)param_1[0x45];
  while (plVar1 != param_1 + 0x44) {
    plVar4 = (long *)plVar1[1];
    lVar2 = plVar1[3];
    if (lVar2 != 0) {
      plVar1[3] = 0;
      plVar3 = plVar4;
      if (*plVar1 != 0) {
        *(long **)(*plVar1 + 8) = plVar4;
        plVar3 = (long *)plVar1[1];
      }
      if (plVar3 != (long *)0x0) {
        *plVar3 = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
    }
    plVar3 = plVar1 + 2;
    plVar1 = plVar4;
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 0x18))();
    }
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

