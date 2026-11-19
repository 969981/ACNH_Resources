
/* WARNING: Removing unreachable block (ram,0x0386f748) */
/* WARNING: Removing unreachable block (ram,0x0386f628) */
/* WARNING: Removing unreachable block (ram,0x0386f6f8) */
/* WARNING: Removing unreachable block (ram,0x0386f794) */

void FUN_0386f420(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar2 = param_2 - 1;
    uVar10 = (ulong)param_2;
    lVar29 = 0;
    uVar23 = 1 - param_2;
    uVar17 = ~param_2;
    uVar19 = param_2 + 1;
    uVar27 = 0xffffffff;
    uVar5 = 1;
    uVar8 = (ulong)uVar2;
    uVar4 = 0;
    do {
      uVar1 = uVar4 + 1;
      uVar25 = 0;
      iVar26 = -1;
      iVar11 = (int)uVar8;
      lVar30 = lVar29;
      uVar24 = uVar23;
      uVar18 = uVar17;
      uVar20 = uVar19;
      uVar28 = uVar27;
      do {
        uVar13 = uVar4 * param_2 + (int)uVar25;
        uVar6 = (ulong)uVar13;
        if (0x7f < uVar13) {
          uVar6 = 0;
        }
        lVar9 = *(long *)(param_1 + uVar6 * 8);
        iVar21 = (int)uVar8;
        if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x218), lVar9 != 0)) {
          *(long *)(lVar9 + 0x1460) = lVar9;
          *(long *)(lVar9 + 0x1468) = lVar9;
          *(long *)(lVar9 + 0x1470) = lVar9;
          *(long *)(lVar9 + 0x1478) = lVar9;
          *(long *)(lVar9 + 0x1480) = lVar9;
          *(long *)(lVar9 + 0x1488) = lVar9;
          *(long *)(lVar9 + 0x1490) = lVar9;
          *(long *)(lVar9 + 0x1498) = lVar9;
          if ((int)(uVar4 + 0x7fffffff) < 0) {
            iVar31 = uVar4 - 1;
            uVar15 = uVar18;
            uVar12 = uVar24;
            do {
              uVar22 = uVar13 + (iVar31 - uVar4) * param_2;
              uVar6 = (ulong)uVar22;
              if (0x7f < uVar22) {
                uVar6 = 0;
              }
              lVar7 = *(long *)(param_1 + uVar6 * 8);
              if (lVar7 != 0) {
LAB_0386f618:
                *(undefined8 *)(lVar9 + 0x1460) = *(undefined8 *)(lVar7 + 0x218);
                break;
              }
              if (1 < param_2) {
                lVar14 = uVar10 - 1;
                uVar16 = uVar15;
                uVar22 = uVar12;
                do {
                  lVar7 = 0;
                  if ((-1 < (int)uVar16) && (iVar31 * param_2 <= uVar16)) {
                    uVar6 = (ulong)uVar16;
                    if (0x7f < uVar16) {
                      uVar6 = 0;
                    }
                    lVar7 = *(long *)(param_1 + uVar6 * 8);
                  }
                  if ((uVar22 <= iVar31 * param_2 + uVar2) && (lVar7 == 0)) {
                    uVar6 = (ulong)uVar22;
                    if (0x7f < uVar22) {
                      uVar6 = 0;
                    }
                    lVar7 = *(long *)(param_1 + uVar6 * 8);
                  }
                  if (lVar7 != 0) goto LAB_0386f618;
                  uVar22 = uVar22 + 1;
                  uVar16 = uVar16 - 1;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              iVar31 = iVar31 + -1;
              uVar12 = uVar12 - param_2;
              uVar15 = uVar15 - param_2;
            } while (-1 < iVar31);
          }
          if (uVar4 < param_3 - 1 && uVar1 < param_3) {
            uVar15 = uVar20;
            uVar12 = uVar5;
            do {
              uVar22 = uVar13 + (uVar12 - uVar4) * param_2;
              uVar6 = (ulong)uVar22;
              if (0x7f < uVar22) {
                uVar6 = 0;
              }
              lVar7 = *(long *)(param_1 + uVar6 * 8);
              if (lVar7 != 0) {
LAB_0386f6e4:
                *(undefined8 *)(lVar9 + 0x1468) = *(undefined8 *)(lVar7 + 0x218);
                break;
              }
              iVar31 = (int)uVar8;
              if (1 < param_2) {
                lVar14 = uVar10 - 1;
                uVar22 = uVar15;
                do {
                  lVar7 = 0;
                  uVar16 = (uint)uVar8;
                  if ((-1 < (int)uVar16) && (uVar12 * param_2 <= uVar16)) {
                    if (0x7f < uVar16) {
                      uVar8 = 0;
                    }
                    lVar7 = *(long *)(param_1 + uVar8 * 8);
                  }
                  if ((uVar22 <= uVar12 * param_2 + uVar2) && (lVar7 == 0)) {
                    uVar8 = (ulong)uVar22;
                    if (0x7f < uVar22) {
                      uVar8 = 0;
                    }
                    lVar7 = *(long *)(param_1 + uVar8 * 8);
                  }
                  if (lVar7 != 0) goto LAB_0386f6e4;
                  uVar22 = uVar22 + 1;
                  uVar8 = (ulong)(uVar16 - 1);
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              uVar12 = uVar12 + 1;
              uVar15 = uVar15 + param_2;
              uVar8 = (ulong)(iVar31 + param_2);
            } while (uVar12 != param_3);
          }
          if (uVar25 < uVar2) {
            lVar7 = 1;
            do {
              if (uVar10 <= uVar25 + lVar7) goto LAB_0386f750;
              uVar13 = (int)lVar30 + (int)lVar7;
              uVar8 = (ulong)uVar13;
              lVar7 = lVar7 + 1;
              if (0x7f < uVar13) {
                uVar8 = 0;
              }
              lVar14 = *(long *)(param_1 + uVar8 * 8);
            } while (lVar14 == 0);
            *(undefined8 *)(lVar9 + 0x1478) = *(undefined8 *)(lVar14 + 0x218);
          }
LAB_0386f750:
          if (uVar25 != 0) {
            iVar31 = iVar26;
            uVar13 = uVar28;
            do {
              if (iVar31 < 0) goto LAB_0386f500;
              uVar8 = (ulong)uVar13;
              bVar3 = 0x7f < uVar13;
              uVar13 = uVar13 - 1;
              if (bVar3) {
                uVar8 = 0;
              }
              iVar31 = iVar31 + -1;
              lVar7 = *(long *)(param_1 + uVar8 * 8);
            } while (lVar7 == 0);
            *(undefined8 *)(lVar9 + 0x1470) = *(undefined8 *)(lVar7 + 0x218);
          }
        }
LAB_0386f500:
        uVar25 = uVar25 + 1;
        uVar24 = uVar24 + 1;
        uVar18 = uVar18 + 1;
        uVar20 = uVar20 + 1;
        uVar8 = (ulong)(iVar21 + 1);
        lVar30 = lVar30 + 1;
        uVar28 = uVar28 + 1;
        iVar26 = iVar26 + 1;
      } while (uVar25 != uVar10);
      uVar5 = uVar5 + 1;
      uVar8 = (ulong)(iVar11 + param_2);
      uVar23 = uVar23 + param_2;
      uVar17 = uVar17 + param_2;
      uVar19 = uVar19 + param_2;
      lVar29 = lVar29 + uVar10;
      uVar27 = uVar27 + param_2;
      uVar4 = uVar1;
    } while (uVar1 != param_3);
  }
  return;
}

