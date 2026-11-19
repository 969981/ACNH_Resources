
void FUN_039c6fd0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  
  iVar2 = *(int *)(param_1 + 6);
  *param_1 = &PTR_FUN_04b6ada8;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0x50) = 1;
  if (iVar2 != 0) {
    lVar7 = param_1[7];
    iVar8 = 0;
    do {
      FUN_0390d560(lVar7 + (long)iVar8 * 0xe8 + 0x70);
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  FUN_0390d560(param_1 + 0x1067);
  FUN_0390d560(param_1 + 0x1076);
  puVar3 = PTR_DAT_04bb2698;
  pvVar9 = (void *)param_1[0x4f];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
      }
    }
    param_1[0x4f] = 0;
    *(undefined4 *)(param_1 + 0x4e) = 0;
  }
  if ((*(byte *)(param_1 + 0x34) >> 1 & 1) != 0) {
    pvVar9 = (void *)param_1[0x33];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar9);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
        }
      }
      param_1[0x33] = 0;
      *(undefined4 *)(param_1 + 0x32) = 0;
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  puVar4 = PTR_DAT_04bd11b8;
  lVar7 = param_1[7];
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + -8);
    if (*plVar5 != 0) {
      lVar10 = *plVar5 * 0xe8;
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      do {
        *(undefined **)(lVar7 + -0x78 + lVar10) = puVar1;
        FUN_0390d560();
        lVar10 = lVar10 + -0xe8;
      } while (lVar10 != 0);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar5);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,plVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    lVar7 = param_1[0x52];
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (lVar7 != 0) {
      plVar5 = (long *)(lVar7 + -8);
      if (*plVar5 != 0) {
        lVar10 = *plVar5 * 0x78;
        do {
          *(undefined **)(lVar7 + -0x78 + lVar10) = puVar4 + 0x10;
          FUN_0390d560();
          lVar10 = lVar10 + -0x78;
        } while (lVar10 != 0);
      }
      if (*(long *)puVar3 == 0) {
        free(plVar5);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar3,plVar5);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
        }
      }
      param_1[0x52] = 0;
      *(undefined4 *)(param_1 + 0x51) = 0;
    }
    lVar7 = param_1[0x54];
    if (lVar7 != 0) {
      plVar5 = (long *)(lVar7 + -8);
      if (*plVar5 != 0) {
        lVar10 = *plVar5 * 0x78;
        do {
          *(undefined **)(lVar7 + -0x78 + lVar10) = puVar4 + 0x10;
          FUN_0390d560();
          lVar10 = lVar10 + -0x78;
        } while (lVar10 != 0);
      }
      if (*(long *)puVar3 == 0) {
        free(plVar5);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar3,plVar5);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
        }
      }
      param_1[0x54] = 0;
      *(undefined4 *)(param_1 + 0x53) = 0;
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  param_1[0x1063] = &PTR_LAB_04b6ad88;
  param_1[0x1076] = puVar4 + 0x10;
  FUN_0390d560(param_1 + 0x1076);
  param_1[0x1067] = puVar4 + 0x10;
  FUN_0390d560(param_1 + 0x1067);
  FUN_0390e230(param_1 + 0x11);
  return;
}

