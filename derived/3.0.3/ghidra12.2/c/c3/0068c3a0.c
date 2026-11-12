
void FUN_0068c3a0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  uint uVar22;
  long *plVar23;
  undefined8 *puVar24;
  
  puVar18 = (undefined8 *)param_1[1];
  if (puVar18 != (undefined8 *)0x0) {
    if ((int)param_1[2] != 0) {
      lVar20 = (long)(int)param_1[2] << 4;
      puVar21 = puVar18;
      do {
        if (((*(int *)(puVar21 + 1) == 9) || (*(int *)(puVar21 + 1) == 7)) &&
           (plVar23 = (long *)*puVar21, plVar23 != (long *)0x0)) {
          lVar7 = *plVar23;
          *plVar23 = 0;
          plVar23[1] = 0;
          if (lVar7 != 0) {
            (**(code **)(*(long *)plVar23[2] + 0x18))();
          }
          plVar23[2] = 0;
          *(undefined4 *)(plVar23 + 1) = 0;
          (**(code **)(param_1[3] + 0x18))(param_1 + 3,*puVar21);
          *puVar21 = 0;
        }
        puVar21 = puVar21 + 2;
        lVar20 = lVar20 + -0x10;
      } while (lVar20 != 0);
    }
    (**(code **)(param_1[3] + 0x18))(param_1 + 3,puVar18);
  }
  lVar10 = *(long *)(param_3 + 8);
  plVar23 = param_1 + 3;
  *param_1 = lVar10;
  lVar20 = *param_2;
  lVar7 = param_2[1];
  lVar1 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = lVar1;
  param_1[4] = lVar20;
  param_1[5] = lVar7;
  iVar4 = *(int *)(lVar10 + 4);
  puVar18 = (undefined8 *)(**(code **)(*plVar23 + 0x10))(plVar23,(long)iVar4 * 0x10,0x10);
  param_1[1] = (long)puVar18;
  *(int *)(param_1 + 2) = iVar4;
  if (iVar4 != 0) {
    puVar21 = puVar18 + (long)iVar4 * 2;
    plVar19 = *(long **)(param_3 + 0x10);
    do {
      bVar2 = *(byte *)((long)plVar19 + 10);
      *puVar18 = 0;
      *(uint *)(puVar18 + 1) = (uint)bVar2;
      switch((uint)bVar2) {
      case 2:
      case 3:
        *(int *)puVar18 = (int)*plVar19;
        break;
      case 4:
        *(int *)puVar18 = (int)*plVar19;
        break;
      case 7:
        plVar5 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x18,0x10);
        if (plVar5 != (long *)0x0) {
          plVar5[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
        }
        *puVar18 = plVar5;
        lVar20 = *plVar5;
        *plVar5 = 0;
        plVar5[1] = 0;
        if (lVar20 != 0) {
          (**(code **)(*(long *)plVar5[2] + 0x18))();
        }
        plVar5[2] = (long)plVar23;
        puVar6 = (undefined4 *)(**(code **)(*plVar23 + 0x10))(plVar23,8,0x10);
        puVar8 = (undefined4 *)*plVar5;
        uVar15 = (ulong)(int)plVar5[1];
        if ((int)plVar5[1] != 0) {
          uVar16 = uVar15 & 7;
          puVar13 = puVar6;
          puVar9 = puVar8;
          if (uVar16 != 0) {
            puVar12 = puVar6;
            puVar11 = puVar8;
            do {
              puVar9 = puVar11 + 1;
              uVar16 = uVar16 - 1;
              puVar13 = puVar12 + 1;
              *puVar12 = *puVar11;
              puVar12 = puVar13;
              puVar11 = puVar9;
            } while (uVar16 != 0);
          }
          if (6 < (uVar15 - 1 & 0x3fffffffffffffff)) {
            do {
              *puVar13 = *puVar9;
              puVar13[1] = puVar9[1];
              puVar13[2] = puVar9[2];
              puVar13[3] = puVar9[3];
              puVar13[4] = puVar9[4];
              puVar13[5] = puVar9[5];
              puVar13[6] = puVar9[6];
              puVar12 = puVar9 + 7;
              puVar9 = puVar9 + 8;
              puVar13[7] = *puVar12;
              puVar13 = puVar13 + 8;
            } while (puVar9 != puVar8 + uVar15);
          }
        }
        *plVar5 = (long)puVar6;
        *(undefined4 *)((long)plVar5 + 0xc) = 2;
        if (puVar8 != (undefined4 *)0x0) {
          (**(code **)(*(long *)plVar5[2] + 0x18))();
        }
        puVar24 = (undefined8 *)*puVar18;
        uVar3 = *(ushort *)(plVar19 + 1);
        uVar15 = (ulong)uVar3;
        puVar6 = (undefined4 *)*plVar19;
        uVar22 = (uint)uVar3;
        if (*(int *)((long)puVar24 + 0xc) < (int)(uint)uVar3) {
          *(undefined4 *)(puVar24 + 1) = 0;
          puVar8 = (undefined4 *)
                   (**(code **)(*(long *)puVar24[2] + 0x10))((long *)puVar24[2],uVar15 << 3,0x10);
          puVar9 = (undefined4 *)*puVar24;
          uVar16 = (ulong)*(int *)(puVar24 + 1);
          if (*(int *)(puVar24 + 1) != 0) {
            uVar17 = uVar16 & 7;
            puVar12 = puVar8;
            puVar13 = puVar9;
            if (uVar17 != 0) {
              puVar11 = puVar8;
              puVar14 = puVar9;
              do {
                puVar13 = puVar14 + 1;
                uVar17 = uVar17 - 1;
                puVar12 = puVar11 + 1;
                *puVar11 = *puVar14;
                puVar11 = puVar12;
                puVar14 = puVar13;
              } while (uVar17 != 0);
            }
            if (6 < (uVar16 - 1 & 0x3fffffffffffffff)) {
              do {
                *puVar12 = *puVar13;
                puVar12[1] = puVar13[1];
                puVar12[2] = puVar13[2];
                puVar12[3] = puVar13[3];
                puVar12[4] = puVar13[4];
                puVar12[5] = puVar13[5];
                puVar12[6] = puVar13[6];
                puVar11 = puVar13 + 7;
                puVar13 = puVar13 + 8;
                puVar12[7] = *puVar11;
                puVar12 = puVar12 + 8;
              } while (puVar13 != puVar9 + uVar16);
            }
          }
          *puVar24 = puVar8;
          *(uint *)((long)puVar24 + 0xc) = (uint)uVar3 << 1;
          if (puVar9 != (undefined4 *)0x0) {
            (**(code **)(*(long *)puVar24[2] + 0x18))();
          }
        }
        *(uint *)(puVar24 + 1) = uVar22;
        if (uVar22 != 0) {
          puVar9 = (undefined4 *)*puVar24;
          uVar16 = uVar15 & 7;
          puVar13 = puVar9;
          puVar12 = puVar6;
          puVar8 = puVar6;
          if ((uVar3 & 7) != 0) {
            do {
              puVar8 = puVar12 + 1;
              uVar16 = uVar16 - 1;
              puVar9 = puVar13 + 1;
              *puVar13 = *puVar12;
              puVar13 = puVar9;
              puVar12 = puVar8;
            } while (uVar16 != 0);
          }
          if (6 < (uVar15 - 1 & 0x3fffffffffffffff)) {
            do {
              *puVar9 = *puVar8;
              puVar9[1] = puVar8[1];
              puVar9[2] = puVar8[2];
              puVar9[3] = puVar8[3];
              puVar9[4] = puVar8[4];
              puVar9[5] = puVar8[5];
              puVar9[6] = puVar8[6];
              puVar13 = puVar8 + 7;
              puVar8 = puVar8 + 8;
              puVar9[7] = *puVar13;
              puVar9 = puVar9 + 8;
            } while (puVar8 != puVar6 + uVar22);
          }
        }
        break;
      case 9:
        plVar5 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x18,0x10);
        if (plVar5 != (long *)0x0) {
          plVar5[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
        }
        *puVar18 = plVar5;
        lVar20 = *plVar5;
        *plVar5 = 0;
        plVar5[1] = 0;
        if (lVar20 != 0) {
          (**(code **)(*(long *)plVar5[2] + 0x18))();
        }
        plVar5[2] = (long)plVar23;
        puVar6 = (undefined4 *)(**(code **)(*plVar23 + 0x10))(plVar23,8,0x10);
        puVar8 = (undefined4 *)*plVar5;
        uVar15 = (ulong)(int)plVar5[1];
        if ((int)plVar5[1] != 0) {
          uVar16 = uVar15 & 7;
          puVar13 = puVar6;
          puVar9 = puVar8;
          if (uVar16 != 0) {
            puVar12 = puVar6;
            puVar11 = puVar8;
            do {
              puVar9 = puVar11 + 1;
              uVar16 = uVar16 - 1;
              puVar13 = puVar12 + 1;
              *puVar12 = *puVar11;
              puVar12 = puVar13;
              puVar11 = puVar9;
            } while (uVar16 != 0);
          }
          if (6 < (uVar15 - 1 & 0x3fffffffffffffff)) {
            do {
              *puVar13 = *puVar9;
              puVar13[1] = puVar9[1];
              puVar13[2] = puVar9[2];
              puVar13[3] = puVar9[3];
              puVar13[4] = puVar9[4];
              puVar13[5] = puVar9[5];
              puVar13[6] = puVar9[6];
              puVar12 = puVar9 + 7;
              puVar9 = puVar9 + 8;
              puVar13[7] = *puVar12;
              puVar13 = puVar13 + 8;
            } while (puVar9 != puVar8 + uVar15);
          }
        }
        *plVar5 = (long)puVar6;
        *(undefined4 *)((long)plVar5 + 0xc) = 2;
        if (puVar8 != (undefined4 *)0x0) {
          (**(code **)(*(long *)plVar5[2] + 0x18))();
        }
        plVar5 = (long *)*puVar18;
        uVar3 = *(ushort *)(plVar19 + 1);
        uVar15 = (ulong)uVar3;
        puVar6 = (undefined4 *)*plVar19;
        uVar22 = (uint)uVar3;
        if (*(int *)((long)plVar5 + 0xc) < (int)(uint)uVar3) {
          *(undefined4 *)(plVar5 + 1) = 0;
          puVar8 = (undefined4 *)
                   (**(code **)(*(long *)plVar5[2] + 0x10))((long *)plVar5[2],uVar15 << 3,0x10);
          puVar9 = (undefined4 *)*plVar5;
          uVar16 = (ulong)(int)plVar5[1];
          if ((int)plVar5[1] != 0) {
            uVar17 = uVar16 & 7;
            puVar12 = puVar8;
            puVar13 = puVar9;
            if (uVar17 != 0) {
              puVar11 = puVar8;
              puVar14 = puVar9;
              do {
                puVar13 = puVar14 + 1;
                uVar17 = uVar17 - 1;
                puVar12 = puVar11 + 1;
                *puVar11 = *puVar14;
                puVar11 = puVar12;
                puVar14 = puVar13;
              } while (uVar17 != 0);
            }
            if (6 < (uVar16 - 1 & 0x3fffffffffffffff)) {
              do {
                *puVar12 = *puVar13;
                puVar12[1] = puVar13[1];
                puVar12[2] = puVar13[2];
                puVar12[3] = puVar13[3];
                puVar12[4] = puVar13[4];
                puVar12[5] = puVar13[5];
                puVar12[6] = puVar13[6];
                puVar11 = puVar13 + 7;
                puVar13 = puVar13 + 8;
                puVar12[7] = *puVar11;
                puVar12 = puVar12 + 8;
              } while (puVar13 != puVar9 + uVar16);
            }
          }
          *plVar5 = (long)puVar8;
          *(uint *)((long)plVar5 + 0xc) = (uint)uVar3 << 1;
          if (puVar9 != (undefined4 *)0x0) {
            (**(code **)(*(long *)plVar5[2] + 0x18))();
          }
        }
        *(uint *)(plVar5 + 1) = uVar22;
        if (uVar22 != 0) {
          puVar9 = (undefined4 *)*plVar5;
          uVar16 = uVar15 & 7;
          puVar13 = puVar9;
          puVar12 = puVar6;
          puVar8 = puVar6;
          if ((uVar3 & 7) != 0) {
            do {
              puVar8 = puVar12 + 1;
              uVar16 = uVar16 - 1;
              puVar9 = puVar13 + 1;
              *puVar13 = *puVar12;
              puVar13 = puVar9;
              puVar12 = puVar8;
            } while (uVar16 != 0);
          }
          if (6 < (uVar15 - 1 & 0x3fffffffffffffff)) {
            do {
              *puVar9 = *puVar8;
              puVar9[1] = puVar8[1];
              puVar9[2] = puVar8[2];
              puVar9[3] = puVar8[3];
              puVar9[4] = puVar8[4];
              puVar9[5] = puVar8[5];
              puVar9[6] = puVar8[6];
              puVar13 = puVar8 + 7;
              puVar8 = puVar8 + 8;
              puVar9[7] = *puVar13;
              puVar9 = puVar9 + 8;
            } while (puVar8 != puVar6 + uVar22);
          }
        }
      }
      puVar18 = puVar18 + 2;
      plVar19 = plVar19 + 2;
    } while (puVar18 != puVar21);
  }
  return;
}

