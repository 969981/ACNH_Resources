
void FUN_03487270(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[0x39c4];
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[0x39c4] = 0;
    *(undefined4 *)(param_1 + 0x39c3) = 0;
  }
  lVar4 = param_1[0x45];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar5 = *plVar2 * 0x38;
      do {
        FUN_0344c1b0(lVar4 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  lVar4 = param_1[0x47];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar5 = *plVar2 * 0x38;
      do {
        FUN_0344c1b0(lVar4 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  lVar4 = param_1[0x49];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar5 = *plVar2 * 0x38;
      do {
        FUN_0344c1b0(lVar4 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[0x49] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  lVar4 = param_1[0x4b];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar5 = *plVar2 * 0x38;
      do {
        FUN_03464b44(lVar4 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[0x4b] = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0;
  }
  FUN_03465b80(param_1 + 0x383c);
  FUN_034129e0(param_1 + 0x51);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

