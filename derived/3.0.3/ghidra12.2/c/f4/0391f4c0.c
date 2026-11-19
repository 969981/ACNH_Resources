
void FUN_0391f4c0(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  long *__ptr;
  long lVar11;
  ulong uVar12;
  
  iVar4 = *(int *)(param_1 + 5);
  *param_1 = &PTR_FUN_04b668d0;
  param_1[0x12] = &PTR_LAB_04b66980;
  param_1[7] = &PTR_LAB_04b66938;
  if (iVar4 != 0) {
    lVar11 = param_1[6];
    uVar12 = 0;
    do {
      plVar7 = *(long **)(lVar11 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      uVar2 = uVar12 + 1;
      uVar12 = uVar2 & 0xffffffff;
    } while (iVar4 != (int)uVar2);
  }
  puVar5 = PTR_DAT_04bb2698;
  pvVar10 = (void *)param_1[0x4e];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar10);
      }
    }
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
  }
  puVar6 = PTR_DAT_04bd1070;
  plVar7 = (long *)param_1[0x8d];
  if (plVar7 != (long *)0x0) {
    __ptr = plVar7 + -1;
    lVar11 = *__ptr;
    if (lVar11 != 0) {
      plVar8 = plVar7 + lVar11 * 0xb;
      uVar12 = lVar11 * 0x58 - 0x58;
      uVar1 = ((uint)(uVar12 / 0x58) & 0xfffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar11 = ((ulong)uVar1 & 7) * 0x58;
        puVar3 = PTR_DAT_04bd1070 + 0x10;
        do {
          lVar11 = lVar11 + -0x58;
          plVar8 = plVar8 + -0xb;
          *plVar8 = (long)puVar3;
        } while (lVar11 != 0);
      }
      if (0x267 < uVar12) {
        puVar3 = puVar6 + 0x10;
        do {
          plVar8[-0xb] = (long)puVar3;
          plVar8[-0x16] = (long)puVar3;
          plVar8[-0x21] = (long)puVar3;
          plVar8[-0x2c] = (long)puVar3;
          plVar8[-0x37] = (long)puVar3;
          plVar8[-0x42] = (long)puVar3;
          plVar9 = plVar8 + -0x4d;
          plVar8 = plVar8 + -0x58;
          *plVar9 = (long)puVar3;
          *plVar8 = (long)puVar3;
        } while (plVar8 != plVar7);
      }
    }
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      free(__ptr);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar11,__ptr);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
      }
    }
    param_1[0x8d] = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  pvVar10 = (void *)param_1[0x50];
  if (pvVar10 != (void *)0x0) {
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      free(pvVar10);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar11,pvVar10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar10);
      }
    }
    param_1[0x50] = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
  }
  FUN_03921f90(param_1 + 0x5a);
  FUN_03922a70(param_1 + 0x5a);
  FUN_038e1a84(param_1 + 0x52);
  param_1[0x12] = puVar6 + 0x10;
  FUN_0394df80(param_1 + 7);
  FUN_03921cb4(param_1);
  return;
}

