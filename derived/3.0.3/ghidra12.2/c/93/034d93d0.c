
void FUN_034d93d0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  
  puVar5 = PTR_DAT_04bb2698;
  lVar7 = param_1[0x47];
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + -8);
    if (*plVar9 != 0) {
      lVar11 = *plVar9 * 0x38;
      do {
        FUN_0344c1b0(lVar7 + -0x38 + lVar11);
        lVar11 = lVar11 + -0x38;
      } while (lVar11 != 0);
    }
    if (*(long *)puVar5 == 0) {
      free(plVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,plVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar9);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  lVar7 = param_1[0x39bf];
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + -8);
    if (*plVar9 != 0) {
      lVar11 = *plVar9 * 0x38;
      do {
        FUN_03464b44(lVar7 + -0x38 + lVar11);
        lVar11 = lVar11 + -0x38;
      } while (lVar11 != 0);
    }
    if (*(long *)puVar5 == 0) {
      free(plVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,plVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar9);
      }
    }
    param_1[0x39bf] = 0;
    *(undefined4 *)(param_1 + 0x39be) = 0;
  }
  puVar1 = PTR_DAT_04bc9cc0;
  plVar9 = (long *)param_1[0x39c1];
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[-1];
    plVar6 = plVar9 + -2;
    if (lVar7 != 0) {
      uVar2 = lVar7 * 0x32830 - 0x32830;
      plVar3 = plVar9 + lVar7 * 0x6506;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar2 >> 4;
      plVar8 = plVar3;
      if ((SUB164(auVar4 * ZEXT816(0x1445c417d6079007),8) >> 10 & 1) == 0) {
        *(undefined4 *)(plVar3 + -0x3284) = 0;
        *(undefined4 *)(plVar3 + -2) = 0;
        plVar8 = plVar3 + -0x6506;
        *plVar8 = (long)(puVar1 + 0x10);
        plVar3[-0x6505] = 0;
      }
      if (0x3282f < uVar2) {
        puVar1 = puVar1 + 0x10;
        do {
          *(undefined4 *)(plVar8 + -0x3284) = 0;
          *(undefined4 *)(plVar8 + -2) = 0;
          *(undefined4 *)(plVar8 + -0x978a) = 0;
          plVar3 = plVar8 + -0xca0c;
          *(undefined4 *)(plVar8 + -0x6508) = 0;
          plVar8[-0x6506] = (long)puVar1;
          plVar8[-0x6505] = 0;
          *plVar3 = (long)puVar1;
          plVar8[-0xca0b] = 0;
          plVar8 = plVar3;
        } while (plVar3 != plVar9);
      }
    }
    if (*(long *)puVar5 == 0) {
      free(plVar6);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar6);
      }
    }
    param_1[0x39c1] = 0;
    *(undefined4 *)(param_1 + 0x39c0) = 0;
  }
  pvVar10 = (void *)param_1[0x39ca];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar10);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar5,pvVar10);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar10);
      }
    }
    param_1[0x39ca] = 0;
    *(undefined4 *)(param_1 + 0x39c9) = 0;
  }
  pvVar10 = (void *)param_1[0x39cc];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar10);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar5,pvVar10);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar10);
      }
    }
    param_1[0x39cc] = 0;
    *(undefined4 *)(param_1 + 0x39cb) = 0;
  }
  FUN_03515820(param_1 + 0x39c7);
  FUN_03465b80(param_1 + 0x3838);
  FUN_034129e0(param_1 + 0x4d);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

