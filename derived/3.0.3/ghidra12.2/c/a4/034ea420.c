
void FUN_034ea420(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  
  puVar5 = PTR_DAT_04bb2698;
  lVar7 = param_1[0x4a];
  if (lVar7 != 0) {
    plVar10 = (long *)(lVar7 + -8);
    if (*plVar10 != 0) {
      lVar12 = *plVar10 * 0x38;
      do {
        FUN_0344c1b0(lVar7 + -0x38 + lVar12);
        lVar12 = lVar12 + -0x38;
      } while (lVar12 != 0);
    }
    if (*(long *)puVar5 == 0) {
      free(plVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,plVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar10);
      }
    }
    param_1[0x4a] = 0;
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  lVar7 = param_1[0x39c2];
  if (lVar7 != 0) {
    plVar10 = (long *)(lVar7 + -8);
    if (*plVar10 != 0) {
      lVar12 = *plVar10 * 0x38;
      do {
        FUN_03464b44(lVar7 + -0x38 + lVar12);
        lVar12 = lVar12 + -0x38;
      } while (lVar12 != 0);
    }
    if (*(long *)puVar5 == 0) {
      free(plVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,plVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar10);
      }
    }
    param_1[0x39c2] = 0;
    *(undefined4 *)(param_1 + 0x39c1) = 0;
  }
  puVar1 = PTR_DAT_04bc9cc0;
  plVar10 = (long *)param_1[0x39c4];
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[-1];
    plVar6 = plVar10 + -2;
    if (lVar7 != 0) {
      uVar2 = lVar7 * 0x32830 - 0x32830;
      plVar3 = plVar10 + lVar7 * 0x6506;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar2 >> 4;
      plVar9 = plVar3;
      if ((SUB164(auVar4 * ZEXT816(0x1445c417d6079007),8) >> 10 & 1) == 0) {
        *(undefined4 *)(plVar3 + -0x3284) = 0;
        *(undefined4 *)(plVar3 + -2) = 0;
        plVar9 = plVar3 + -0x6506;
        *plVar9 = (long)(puVar1 + 0x10);
        plVar3[-0x6505] = 0;
      }
      if (0x3282f < uVar2) {
        puVar1 = puVar1 + 0x10;
        do {
          *(undefined4 *)(plVar9 + -0x3284) = 0;
          *(undefined4 *)(plVar9 + -2) = 0;
          *(undefined4 *)(plVar9 + -0x978a) = 0;
          plVar3 = plVar9 + -0xca0c;
          *(undefined4 *)(plVar9 + -0x6508) = 0;
          plVar9[-0x6506] = (long)puVar1;
          plVar9[-0x6505] = 0;
          *plVar3 = (long)puVar1;
          plVar9[-0xca0b] = 0;
          plVar9 = plVar3;
        } while (plVar3 != plVar10);
      }
    }
    if (*(long *)puVar5 == 0) {
      free(plVar6);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,plVar6);
      }
    }
    param_1[0x39c4] = 0;
    *(undefined4 *)(param_1 + 0x39c3) = 0;
  }
  pvVar11 = (void *)param_1[0x3a51];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar5,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0x3a51] = 0;
    *(undefined4 *)(param_1 + 0x3a50) = 0;
  }
  pvVar11 = (void *)param_1[0x3a53];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar5,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0x3a53] = 0;
    *(undefined4 *)(param_1 + 0x3a52) = 0;
  }
  plVar10 = param_1 + 0x3a55;
  puVar8 = (undefined8 *)*plVar10;
  if (((puVar8 != (undefined8 *)0x0) && ((long *)*puVar8 != (long *)0x0)) &&
     ((long *)*puVar8 == plVar10)) {
    *plVar10 = 0;
    *puVar8 = 0;
  }
  FUN_031356e0(param_1 + 0x39c8);
  FUN_03465b80(param_1 + 0x383b);
  FUN_034129e0(param_1 + 0x50);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

