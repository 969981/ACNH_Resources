
void FUN_03922a70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  
  *param_1 = &PTR_FUN_04b66aa0;
  param_1[7] = &PTR_LAB_04b66af8;
  param_1[8] = &PTR_LAB_04b66b18;
  puVar8 = PTR_DAT_04bd1068;
  puVar7 = PTR_DAT_04bbd578;
  lVar12 = param_1[0x2c];
  if (lVar12 == 0) {
    iVar5 = *(int *)(param_1 + 0x2b);
    param_1[0x24] = 0;
    if (iVar5 != 0) {
      uVar11 = 0;
      do {
        uVar13 = -(uVar11 >> 0x1f) & 0xffffff0000000000 | uVar11 << 8;
        lVar12 = *(long *)(uVar13 + 0xa0);
        if (lVar12 != 0) {
          uVar13 = uVar13 | 0x30;
          plVar15 = (long *)((long)*(int *)(lVar12 + 0x4c) + uVar13);
          if (*plVar15 != 0) {
            *(long *)(*plVar15 + 8) = plVar15[1];
          }
          if ((long *)plVar15[1] != (long *)0x0) {
            *(long *)plVar15[1] = *plVar15;
          }
          *plVar15 = 0;
          plVar15[1] = 0;
          iVar6 = *(int *)(lVar12 + 0x48);
          *(undefined8 *)(uVar13 + 0x70) = 0;
          *(int *)(lVar12 + 0x48) = iVar6 + -1;
        }
        uVar13 = uVar11 + 1;
        uVar11 = uVar13 & 0xffffffff;
      } while (iVar5 != (int)uVar13);
    }
  }
  else {
    plVar15 = (long *)(lVar12 + -8);
    if (*plVar15 != 0) {
      lVar10 = *plVar15 << 8;
      puVar1 = PTR_DAT_04bbd578 + 0x10;
      puVar2 = PTR_DAT_04bd1068 + 0x10;
      puVar3 = PTR_DAT_04bd12f8 + 0x10;
      do {
        plVar9 = (long *)(lVar12 + -0x78 + lVar10);
        plVar9[-0x11] = (long)&PTR_LAB_04b66b70;
        plVar9[5] = (long)puVar1;
        plVar9[-0xb] = (long)puVar3;
        if ((plVar9[1] != 0 || *plVar9 != 0) && (lVar14 = plVar9[3], lVar14 != 0)) {
          plVar4 = (long *)(lVar12 + -0xd0 + lVar10 + (long)*(int *)(lVar14 + 0x4c));
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          *plVar4 = 0;
          plVar4[1] = 0;
          *(int *)(lVar14 + 0x48) = *(int *)(lVar14 + 0x48) + -1;
          plVar9[3] = 0;
        }
        lVar10 = lVar10 + -0x100;
        plVar9[-0x11] = (long)puVar2;
        plVar9[-0xb] = (long)(puVar7 + 0x10);
      } while (lVar10 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar15);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar15);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar15);
      }
    }
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x2b) = 0;
    param_1[0x24] = 0;
  }
  param_1[0x25] = puVar8 + 0x10;
  puVar8 = PTR_DAT_04bd1070;
  param_1[0x11] = puVar7 + 0x10;
  param_1[0x1b] = puVar8 + 0x10;
  param_1[8] = puVar8 + 0x10;
  FUN_03921cb4(param_1);
  return;
}

