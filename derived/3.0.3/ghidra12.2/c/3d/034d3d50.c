
void FUN_034d3d50(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar3 = param_1[0x46];
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar5 = *plVar4 * 0x38;
      do {
        FUN_0344c1b0(lVar3 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    param_1[0x46] = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  __ptr = (void *)param_1[0x39ca];
  if (__ptr != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    param_1[0x39ca] = 0;
    *(undefined4 *)(param_1 + 0x39c9) = 0;
  }
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

