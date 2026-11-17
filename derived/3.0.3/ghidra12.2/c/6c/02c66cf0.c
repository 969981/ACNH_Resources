
void FUN_02c66cf0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  
  plVar2 = param_1 + 0x12f9c;
  plVar4 = param_1 + 0x44b3;
  if (0 < (int)*plVar4) {
    lVar7 = 0;
    plVar5 = (long *)param_1[0x44b5];
    do {
      plVar11 = *(long **)(param_1[0x44b4] + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *plVar11 = (long)plVar5;
      param_1[0x44b5] = (long)plVar11;
      plVar5 = plVar11;
    } while (lVar7 < (int)*plVar4);
  }
  *(undefined4 *)plVar4 = 0;
  puVar3 = PTR_DAT_04bb2698;
  if (param_1[0x47] != 0) {
    pvVar14 = (void *)(param_1[0x47] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar14);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar14);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar14);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  lVar7 = param_1[0x12fb3];
  if (lVar7 != 0) {
    plVar4 = (long *)(lVar7 + -8);
    if (*plVar4 != 0) {
      lVar8 = *plVar4 * 0x70;
      uVar9 = lVar8 - 0x70;
      lVar8 = lVar7 + lVar8;
      uVar1 = (int)(uVar9 / 0x70) + 1;
      if ((uVar1 & 7) != 0) {
        lVar13 = ((ulong)uVar1 & 7) * 0x70;
        lVar12 = lVar8;
        do {
          lVar8 = lVar12 + -0x70;
          *(undefined4 *)(lVar12 + -0x68) = 0;
          lVar13 = lVar13 + -0x70;
          lVar12 = lVar8;
        } while (lVar13 != 0);
      }
      if (0x30f < uVar9) {
        do {
          *(undefined4 *)(lVar8 + -0x68) = 0;
          *(undefined4 *)(lVar8 + -0xd8) = 0;
          *(undefined4 *)(lVar8 + -0x148) = 0;
          *(undefined4 *)(lVar8 + -0x1b8) = 0;
          *(undefined4 *)(lVar8 + -0x228) = 0;
          *(undefined4 *)(lVar8 + -0x298) = 0;
          *(undefined4 *)(lVar8 + -0x308) = 0;
          puVar10 = (undefined4 *)(lVar8 + -0x378);
          lVar8 = lVar8 + -0x380;
          *puVar10 = 0;
        } while (lVar8 != lVar7);
      }
    }
    if (*(long *)puVar3 == 0) {
      free(plVar4);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar4);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar4);
      }
    }
    param_1[0x12fb3] = 0;
    *(undefined4 *)(param_1 + 0x12fb2) = 0;
  }
  if (param_1[0x38c6] != 0) {
    pvVar14 = (void *)(param_1[0x38c6] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar14);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar14);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar14);
      }
    }
    param_1[0x38c6] = 0;
    *(undefined4 *)(param_1 + 0x38c5) = 0;
  }
  if (param_1[0x38c8] != 0) {
    pvVar14 = (void *)(param_1[0x38c8] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar14);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar14);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar14);
      }
    }
    param_1[0x38c8] = 0;
    *(undefined4 *)(param_1 + 0x38c7) = 0;
  }
  if (param_1[0x38ca] != 0) {
    pvVar14 = (void *)(param_1[0x38ca] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar14);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar14);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar14);
      }
    }
    param_1[0x38ca] = 0;
    *(undefined4 *)(param_1 + 0x38c9) = 0;
  }
  if (param_1[0x38cc] != 0) {
    pvVar14 = (void *)(param_1[0x38cc] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar14);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar14);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar14);
      }
    }
    param_1[0x38cc] = 0;
    *(undefined4 *)(param_1 + 0x38cb) = 0;
  }
  puVar6 = (undefined8 *)*plVar2;
  *(undefined4 *)(param_1 + 0x12fa5) = 0;
  if (((puVar6 != (undefined8 *)0x0) && ((long *)*puVar6 != (long *)0x0)) &&
     ((long *)*puVar6 == plVar2)) {
    *plVar2 = 0;
    *puVar6 = 0;
  }
  FUN_031356e0(param_1 + 0x38a2);
  FUN_031356e0(param_1 + 0x387f);
  FUN_031356e0(param_1 + 0x385c);
  FUN_031356e0(param_1 + 0x3839);
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

