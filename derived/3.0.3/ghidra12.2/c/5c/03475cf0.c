
void FUN_03475cf0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  void *__ptr;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x47];
  if (pvVar5 != (void *)0x0) {
    __ptr = *(void **)((long)pvVar5 + 0x10);
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
      *(undefined8 *)((long)pvVar5 + 8) = 0;
      *(undefined8 *)((long)pvVar5 + 0x10) = 0;
    }
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x47] = 0;
  }
  if (param_1[0x6e] != 0) {
    pvVar5 = (void *)(param_1[0x6e] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x6e] = 0;
    *(undefined4 *)(param_1 + 0x6d) = 0;
  }
  plVar2 = (long *)param_1[0x46];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    pvVar5 = (void *)plVar2[2];
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      plVar2[1] = 0;
      plVar2[2] = 0;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  lVar4 = param_1[0x39ed];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar6 = *plVar2 * 0x38;
      do {
        FUN_0344c1b0(lVar4 + -0x38 + lVar6);
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
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
    param_1[0x39ed] = 0;
    *(undefined4 *)(param_1 + 0x39ec) = 0;
  }
  lVar4 = param_1[0x39ef];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar6 = *plVar2 * 0x38;
      do {
        FUN_0344c1b0(lVar4 + -0x38 + lVar6);
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
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
    param_1[0x39ef] = 0;
    *(undefined4 *)(param_1 + 0x39ee) = 0;
  }
  lVar4 = param_1[0x39f1];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar6 = *plVar2 * 0x38;
      do {
        FUN_03464b44(lVar4 + -0x38 + lVar6);
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
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
    param_1[0x39f1] = 0;
    *(undefined4 *)(param_1 + 0x39f0) = 0;
  }
  lVar4 = param_1[0x39f3];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar6 = *plVar2 * 0x38;
      do {
        FUN_03464b44(lVar4 + -0x38 + lVar6);
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
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
    param_1[0x39f3] = 0;
    *(undefined4 *)(param_1 + 0x39f2) = 0;
  }
  pvVar5 = (void *)param_1[0x39f6];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x39f6] = 0;
    *(undefined4 *)(param_1 + 0x39f5) = 0;
  }
  FUN_03515820(param_1 + 0x39ff);
  FUN_03465b80(param_1 + 0x385c);
  FUN_034129e0(param_1 + 0x71);
  FUN_031356e0(param_1 + 0x4a);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

