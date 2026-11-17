
void FUN_02c24440(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[0x384c];
  if (pvVar4 != (void *)0x0) {
    FUN_0340f290(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x384c] = 0;
  }
  pvVar4 = (void *)param_1[0x3838];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x3838] = 0;
    *(undefined4 *)(param_1 + 0x3837) = 0;
  }
  pvVar4 = (void *)param_1[0x384a];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x384a] = 0;
    *(undefined4 *)(param_1 + 0x3849) = 0;
  }
  lVar5 = param_1[0x44];
  lVar7 = param_1[0x43];
  if ((int)lVar7 != 0) {
    iVar6 = 0;
    do {
      FUN_03ebae78(lVar5 + (long)iVar6 * 0x90 + 0x30);
      iVar6 = iVar6 + 1;
    } while ((int)lVar7 != iVar6);
    lVar5 = param_1[0x44];
  }
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + -8);
    if (*plVar2 != 0) {
      lVar7 = *plVar2 * 0x90;
      do {
        *(undefined ***)(lVar5 + lVar7 + -0x90) = &PTR_LAB_04b29d78;
        FUN_03ebae78(lVar5 + lVar7 + -0x60);
        lVar7 = lVar7 + -0x90;
      } while (lVar7 != 0);
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
    param_1[0x44] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
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

