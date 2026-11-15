
/* WARNING: Removing unreachable block (ram,0x022e9bf4) */
/* WARNING: Removing unreachable block (ram,0x022e9c9c) */

void FUN_022e9a80(long param_1,ushort param_2,ulong param_3,short *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  
  puVar13 = PTR_DAT_04bbc2f8;
  puVar12 = PTR_DAT_04bbbe30;
  uVar5 = param_2 ^ 0xffff;
  if ((param_3 & 1) == 0) {
    uVar14 = (ulong)DAT_05483774;
    if (7 < DAT_05483774) {
      uVar14 = 0;
    }
    if ((*(ushort *)(param_1 + uVar14 * 2) & param_2) != 0) {
      uVar14 = (ulong)DAT_05483778;
      if (7 < DAT_05483778) {
        uVar14 = 0;
      }
      uVar16 = (ulong)DAT_0548377c;
      if (7 < DAT_0548377c) {
        uVar16 = 0;
      }
      if ((*(ushort *)(param_1 + uVar14 * 2) & *(ushort *)(param_1 + uVar16 * 2) & param_2) == 0) {
        uVar14 = (ulong)DAT_05483774;
        if (7 < DAT_05483774) {
          uVar14 = 0;
        }
        *(ushort *)(param_1 + uVar14 * 2) = *(ushort *)(param_1 + uVar14 * 2) & uVar5;
      }
    }
    uVar14 = (ulong)DAT_05483780;
    if (7 < DAT_05483780) {
      uVar14 = 0;
    }
    if ((*(ushort *)(param_1 + uVar14 * 2) & param_2) != 0) {
      uVar14 = (ulong)DAT_05483784;
      if (7 < DAT_05483784) {
        uVar14 = 0;
      }
      uVar16 = (ulong)DAT_05483788;
      if (7 < DAT_05483788) {
        uVar16 = 0;
      }
      if ((*(ushort *)(param_1 + uVar14 * 2) & *(ushort *)(param_1 + uVar16 * 2) & param_2) == 0) {
        uVar14 = (ulong)DAT_05483780;
        if (7 < DAT_05483780) {
          uVar14 = 0;
        }
        *(ushort *)(param_1 + uVar14 * 2) = *(ushort *)(param_1 + uVar14 * 2) & uVar5;
      }
    }
    uVar14 = (ulong)DAT_0548378c;
    if (7 < DAT_0548378c) {
      uVar14 = 0;
    }
    if ((*(ushort *)(param_1 + uVar14 * 2) & param_2) != 0) {
      uVar14 = (ulong)DAT_05483790;
      if (7 < DAT_05483790) {
        uVar14 = 0;
      }
      uVar16 = (ulong)DAT_05483794;
      if (7 < DAT_05483794) {
        uVar16 = 0;
      }
      if ((*(ushort *)(param_1 + uVar14 * 2) & *(ushort *)(param_1 + uVar16 * 2) & param_2) == 0) {
        uVar14 = (ulong)DAT_0548378c;
        if (7 < DAT_0548378c) {
          uVar14 = 0;
        }
        *(ushort *)(param_1 + uVar14 * 2) = *(ushort *)(param_1 + uVar14 * 2) & uVar5;
      }
    }
    uVar14 = (ulong)DAT_05483798;
    if (7 < DAT_05483798) {
      uVar14 = 0;
    }
    if ((*(ushort *)(param_1 + uVar14 * 2) & param_2) != 0) {
      uVar14 = (ulong)DAT_0548379c;
      if (7 < DAT_0548379c) {
        uVar14 = 0;
      }
      uVar16 = (ulong)DAT_054837a0;
      if (7 < DAT_054837a0) {
        uVar16 = 0;
      }
      if ((*(ushort *)(param_1 + uVar14 * 2) & *(ushort *)(param_1 + uVar16 * 2) & param_2) == 0) {
        uVar14 = (ulong)DAT_05483798;
        if (7 < DAT_05483798) {
          uVar14 = 0;
        }
        *(ushort *)(param_1 + uVar14 * 2) = *(ushort *)(param_1 + uVar14 * 2) & uVar5;
        return;
      }
    }
    return;
  }
  iVar15 = 0;
  lVar17 = *(long *)PTR_DAT_04bb27a8;
  do {
    uVar6 = (&DAT_05483774)[(long)iVar15 * 3];
    uVar14 = (ulong)uVar6;
    if (7 < uVar6) {
      uVar14 = 0;
    }
    if ((*(ushort *)(param_1 + uVar14 * 2) & param_2) != 0) {
      uVar6 = (&DAT_05483778)[(long)iVar15 * 3];
      uVar14 = (ulong)uVar6;
      if (7 < uVar6) {
        uVar14 = 0;
      }
      uVar8 = *(ushort *)(param_1 + uVar14 * 2);
      uVar7 = (&DAT_0548377c)[(long)iVar15 * 3];
      uVar14 = (ulong)uVar7;
      if (7 < uVar7) {
        uVar14 = 0;
      }
      uVar9 = *(ushort *)(param_1 + uVar14 * 2);
      uVar1 = uVar8 & param_2;
      if ((uVar9 & uVar1) == 0) {
        if (((uVar9 | uVar8) & param_2) != 0) {
          if (uVar1 != 0) {
            uVar7 = uVar6;
          }
          puVar2 = &DAT_054837a8 + (ulong)uVar7 * 2;
          if (7 < uVar7) {
            puVar2 = &DAT_054837a8;
          }
          sVar10 = param_4[2];
          if (param_4[4] <= param_4[2]) {
            sVar10 = param_4[4];
          }
          sVar11 = param_4[3];
          if (param_4[5] <= param_4[3]) {
            sVar11 = param_4[5];
          }
          uVar6 = (*(int *)(puVar2 + 1) + (int)*param_4) - (int)sVar10;
          uVar7 = (*(int *)((long)puVar2 + 0xc) + (int)param_4[1]) - (int)sVar11;
          puVar3 = (ushort *)(param_4 + (ulong)(uVar7 * 3 + uVar6) * 7 + 6);
          if (2 < uVar7 || 2 < uVar6) {
            puVar3 = (ushort *)puVar13;
          }
          uVar6 = (uint)*puVar3 - (uint)*(ushort *)(lVar17 + 0x408);
          if (((uVar6 < *(uint *)(lVar17 + 1000)) &&
              (puVar18 = *(uint **)(*(long *)(lVar17 + 0x3f0) + (long)(int)uVar6 * 8),
              puVar18 != (uint *)0x0)) &&
             (uVar6 = *puVar18, uVar6 != 0 && puVar18 != (uint *)(ulong)uVar6)) {
            puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar6);
            if (((*puVar19 != 0) && (uVar6 = puVar19[1], uVar6 != 0)) &&
               ((ulong)(ushort)puVar19[2] != 0)) {
              lVar4 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar19 + lVar4 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar4 != 0) {
                uVar7 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar18 - lVar4) / (ulong)uVar6);
                }
                if (*puVar19 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)puVar12) &&
                   (*(short *)(*(long *)(puVar12 + 8) + (long)(int)uVar7 * 2) == 2))
                goto LAB_022e9b0c;
              }
            }
          }
          uVar6 = (uint)puVar3[3] - (uint)*(ushort *)(lVar17 + 0x408);
          if ((uVar6 < *(uint *)(lVar17 + 1000)) &&
             ((puVar18 = *(uint **)(*(long *)(lVar17 + 0x3f0) + (long)(int)uVar6 * 8),
              puVar18 != (uint *)0x0 &&
              (uVar6 = *puVar18, uVar6 != 0 && puVar18 != (uint *)(ulong)uVar6)))) {
            puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar6);
            if ((*puVar19 != 0) &&
               ((uVar6 = puVar19[1], uVar6 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
              lVar4 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar19 + lVar4 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar4 != 0) {
                uVar7 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar18 - lVar4) / (ulong)uVar6);
                }
                if (*puVar19 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)puVar12) &&
                   (*(short *)(*(long *)(puVar12 + 8) + (long)(int)uVar7 * 2) == 2))
                goto LAB_022e9b0c;
              }
            }
          }
        }
        uVar6 = (&DAT_05483774)[(long)iVar15 * 3];
        uVar14 = (ulong)uVar6;
        if (7 < uVar6) {
          uVar14 = 0;
        }
        *(ushort *)(param_1 + uVar14 * 2) = *(ushort *)(param_1 + uVar14 * 2) & uVar5;
      }
    }
LAB_022e9b0c:
    iVar15 = iVar15 + 1;
    if (iVar15 == 4) {
      return;
    }
  } while( true );
}

