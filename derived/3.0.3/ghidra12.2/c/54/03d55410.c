
undefined8 FUN_03d55410(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar11;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong uVar12;
  int iVar13;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar14;
  int *piVar15;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  ulong uVar21;
  
  DAT_05ae78a0 = FUN_03d5597c;
  DAT_05ae78a8 = FUN_03d55a0c;
  DAT_05af7d98 = param_3;
  lVar3 = FUN_03d53280(param_2);
  *(long *)(param_1 + 8) = lVar3;
  DAT_05ae78a0 = (code *)0x0;
  DAT_05ae78a8 = (code *)0x0;
  DAT_05af7d98 = (long *)0x0;
  if (*(int *)(lVar3 + 0x24) != -1) {
    uVar20 = **(uint **)(*(long *)(lVar3 + 0x18) + (long)*(int *)(lVar3 + 0x24) * 0x18);
    uVar21 = (ulong)uVar20;
    if (0 < (int)uVar20) {
      lVar3 = *(long *)PTR_DAT_04bb2698;
      if (lVar3 == 0) {
        puVar6 = malloc(uVar21 << 2);
        uVar11 = extraout_x10_01;
        uVar12 = extraout_x11_01;
        uVar14 = extraout_x12_01;
        uVar16 = extraout_x13_01;
        if (puVar6 != (undefined8 *)0x0) goto LAB_03d554f4;
LAB_03d55548:
        uVar20 = *(uint *)(param_1 + 0x10);
        puVar6 = *(undefined8 **)(param_1 + 0x18);
      }
      else {
        plVar5 = param_3;
        if (param_3 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar3 + 8);
          if (lVar4 != 0) {
            plVar5 = (long *)(lVar4 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          uVar11 = extraout_x10;
          uVar12 = extraout_x11;
          uVar14 = extraout_x12;
          uVar16 = extraout_x13;
          if (plVar5 == (long *)0x0) goto LAB_03d55548;
        }
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar21 << 2,8);
        uVar11 = extraout_x10_00;
        uVar12 = extraout_x11_00;
        uVar14 = extraout_x12_00;
        uVar16 = extraout_x13_00;
        if (puVar6 == (undefined8 *)0x0) goto LAB_03d55548;
LAB_03d554f4:
        puVar9 = puVar6;
        if ((uVar20 & 1) != 0) {
          uVar11 = 0xff;
          puVar9 = (undefined8 *)((long)puVar6 + 4);
          *(undefined4 *)puVar6 = 0xff;
        }
        if ((uVar21 - 1 & 0x3fffffffffffffff) != 0) {
          uVar11 = 0xff000000ff;
          do {
            puVar10 = puVar9 + 1;
            *puVar9 = 0xff000000ff;
            puVar9 = puVar10;
          } while (puVar10 != (undefined8 *)((long)puVar6 + uVar21 * 4));
        }
        *(uint *)(param_1 + 0x10) = uVar20;
        *(undefined8 **)(param_1 + 0x18) = puVar6;
      }
      if (uVar20 != 0) {
        uVar17 = 0;
        do {
          iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x24);
          if ((iVar13 != -1) &&
             (piVar15 = *(int **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18),
             (int)uVar17 < *piVar15)) {
            uVar11 = (ulong)*(byte *)(piVar15 + (long)(int)uVar17 + 1);
            uVar12 = (ulong)*(byte *)((long)piVar15 + (long)(int)uVar17 * 4 + 5);
            uVar14 = (ulong)*(byte *)((long)piVar15 + (long)(int)uVar17 * 4 + 6);
            uVar16 = (ulong)*(byte *)((long)piVar15 + (long)(int)uVar17 * 4 + 7);
          }
          puVar1 = (undefined1 *)((long)puVar6 + ((long)((ulong)uVar17 << 0x20) >> 0x1e));
          puVar1[3] = (char)uVar11;
          puVar1[2] = (char)uVar12;
          puVar1[1] = (char)uVar14;
          *puVar1 = (char)uVar16;
          uVar17 = uVar17 + 1;
        } while (uVar20 != uVar17);
      }
    }
  }
  iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x44);
  if (iVar13 != -1) {
    uVar20 = **(uint **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18);
    if (0 < (int)uVar20) {
      lVar3 = *(long *)PTR_DAT_04bb2698;
      if (lVar3 == 0) {
        pvVar7 = malloc((ulong)uVar20 << 4);
        if (pvVar7 != (void *)0x0) goto LAB_03d55658;
LAB_03d55670:
        uVar20 = *(uint *)(param_1 + 0x20);
        if (uVar20 == 0) goto LAB_03d557d4;
        pvVar7 = *(void **)(param_1 + 0x28);
      }
      else {
        plVar5 = param_3;
        if (param_3 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar3 + 8);
          if (lVar4 != 0) {
            plVar5 = (long *)(lVar4 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_03d55670;
        }
        pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar20 << 4,8);
        if (pvVar7 == (void *)0x0) goto LAB_03d55670;
LAB_03d55658:
        *(uint *)(param_1 + 0x20) = uVar20;
        *(void **)(param_1 + 0x28) = pvVar7;
      }
      uVar21 = 0;
      uVar11 = 0;
      do {
        iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x44);
        uVar17 = (uint)uVar21;
        if (iVar13 == -1) {
          uVar18 = 0xffffffff;
        }
        else {
          puVar19 = *(uint **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18);
          uVar18 = 0xffffffff;
          if (uVar17 < *puVar19) {
            uVar18 = puVar19[(long)(int)uVar17 * 4 + 1];
          }
        }
        *(uint *)((long)pvVar7 + (-(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4)) = uVar18;
        iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x44);
        if (iVar13 == -1) {
          uVar18 = 0xffffffff;
        }
        else {
          puVar19 = *(uint **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18);
          uVar18 = 0xffffffff;
          if (uVar17 < *puVar19) {
            uVar18 = puVar19[(long)(int)uVar17 * 4 + 2];
          }
        }
        iVar8 = (int)uVar11;
        *(uint *)((long)pvVar7 + (long)iVar8 * 0x10 + 4) = uVar18;
        iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x44);
        if (iVar13 == -1) {
          uVar18 = 0xffffffff;
        }
        else {
          puVar19 = *(uint **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18);
          uVar18 = 0xffffffff;
          if (uVar17 < *puVar19) {
            uVar2 = puVar19[(long)(int)uVar17 * 4 + 3];
            uVar18 = 0xfffffff4;
            if (uVar2 != 0xffffffff) {
              uVar18 = uVar2;
            }
          }
        }
        if ((int)uVar18 < 0) {
          uVar18 = 0xffffffff;
        }
        *(uint *)((long)pvVar7 + (long)iVar8 * 0x10 + 8) = uVar18;
        iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x44);
        if (iVar13 == -1) {
          uVar18 = 0xffffffff;
        }
        else {
          puVar19 = *(uint **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18);
          uVar18 = 0xffffffff;
          if (uVar17 < *puVar19) {
            uVar17 = puVar19[(long)(int)uVar17 * 4 + 4];
            uVar18 = 0xfffffff4;
            if (uVar17 != 0xffffffff) {
              uVar18 = uVar17;
            }
          }
        }
        if ((int)uVar18 < 0) {
          uVar18 = 0xffffffff;
        }
        *(uint *)((long)pvVar7 + (long)iVar8 * 0x10 + 0xc) = uVar18;
        uVar21 = uVar11 + 1;
        uVar11 = uVar21 & 0xffffffff;
      } while (uVar20 != (uint)uVar21);
    }
  }
LAB_03d557d4:
  iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x2c);
  if (iVar13 == -1) goto LAB_03d55938;
  uVar20 = **(uint **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18);
  if ((int)uVar20 < 1) goto LAB_03d55938;
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    pvVar7 = malloc((ulong)uVar20 << 3);
    if (pvVar7 != (void *)0x0) goto LAB_03d55860;
LAB_03d55878:
    uVar20 = *(uint *)(param_1 + 0x30);
    if (uVar20 == 0) goto LAB_03d55938;
    pvVar7 = *(void **)(param_1 + 0x38);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar6 = (undefined8 *)(lVar3 + 8);
      if (lVar4 != 0) {
        puVar6 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*puVar6;
      if (param_3 == (long *)0x0) goto LAB_03d55878;
    }
    pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar20 << 3,8);
    if (pvVar7 == (void *)0x0) goto LAB_03d55878;
LAB_03d55860:
    *(uint *)(param_1 + 0x30) = uVar20;
    *(void **)(param_1 + 0x38) = pvVar7;
  }
  uVar21 = 0;
  uVar11 = 0;
  do {
    iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x2c);
    iVar8 = (int)uVar21;
    if ((iVar13 == -1) ||
       (piVar15 = *(int **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18),
       *piVar15 <= iVar8)) {
      iVar13 = 0xff;
    }
    else {
      iVar13 = (int)(char)piVar15[(long)iVar8 * 2 + 1];
    }
    *(int *)((long)pvVar7 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3)) = iVar13;
    iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x2c);
    if (iVar13 == -1) {
      iVar13 = -1;
    }
    else {
      piVar15 = *(int **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar13 * 0x18);
      iVar13 = -1;
      if (iVar8 < *piVar15) {
        iVar13 = piVar15[(long)iVar8 * 2 + 2];
      }
    }
    *(int *)((long)pvVar7 + (long)(int)uVar11 * 8 + 4) = iVar13;
    uVar21 = uVar11 + 1;
    uVar11 = uVar21 & 0xffffffff;
  } while (uVar20 != (uint)uVar21);
LAB_03d55938:
  uVar20 = *(uint *)(*(long *)(param_1 + 8) + 0x4c);
  if (uVar20 != 0xffffffff) {
    uVar20 = **(uint **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)uVar20 * 0x18);
  }
  *(uint *)(param_1 + 0x40) = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
  return 1;
}

