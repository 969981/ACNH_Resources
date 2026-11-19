
/* WARNING: Removing unreachable block (ram,0x0386f224) */
/* WARNING: Removing unreachable block (ram,0x0386f1f4) */
/* WARNING: Removing unreachable block (ram,0x0386f1cc) */
/* WARNING: Removing unreachable block (ram,0x0386f0ec) */
/* WARNING: Removing unreachable block (ram,0x0386f174) */
/* WARNING: Removing unreachable block (ram,0x0386f3d0) */
/* WARNING: Removing unreachable block (ram,0x0386f364) */
/* WARNING: Removing unreachable block (ram,0x0386f328) */
/* WARNING: Removing unreachable block (ram,0x0386f288) */
/* WARNING: Removing unreachable block (ram,0x0386f2b4) */
/* WARNING: Removing unreachable block (ram,0x0386f134) */
/* WARNING: Removing unreachable block (ram,0x0386f244) */

void FUN_0386efd0(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  bool bVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar13 = (ulong)(param_3 - 1);
    uVar15 = (ulong)param_2;
    uVar5 = (param_3 - 1) * param_2;
    uVar14 = (ulong)uVar5;
    lVar12 = 0;
    uVar8 = param_2 - 1;
    uVar17 = (ulong)-param_2;
    uVar10 = uVar15;
    uVar16 = 0;
    do {
      uVar6 = (int)uVar16 * param_2;
      uVar22 = (ulong)uVar6;
      plVar2 = param_1 + uVar6;
      if (0x7f < uVar6) {
        uVar22 = 0;
        plVar2 = param_1;
      }
      uVar1 = uVar16 + 1;
      uVar7 = (int)uVar1 * param_2;
      uVar18 = (ulong)uVar7;
      plVar3 = param_1 + uVar18;
      if (0x7f < uVar7) {
        uVar18 = 0;
        plVar3 = param_1;
      }
      plVar20 = param_1 + (uVar6 + uVar8);
      if (0x7f < uVar6 + uVar8) {
        plVar20 = param_1;
      }
      plVar4 = param_1 + (uVar6 - 1);
      if (0x7f < uVar6 - 1) {
        plVar4 = param_1;
      }
      lVar23 = *(long *)(param_1[uVar22] + 0x218);
      if (lVar23 == 0) {
LAB_0386f24c:
        if (param_2 != 1) {
LAB_0386f254:
          uVar22 = 1;
          do {
            iVar19 = (int)uVar22;
            iVar11 = (int)lVar12;
            uVar18 = (ulong)(uint)(iVar11 + iVar19);
            if (0x7f < (uint)(iVar11 + iVar19)) {
              uVar18 = 0;
            }
            lVar23 = *(long *)(param_1[uVar18] + 0x218);
            if (lVar23 != 0) {
              *(long *)(lVar23 + 0x1460) = lVar23;
              *(long *)(lVar23 + 0x1468) = lVar23;
              *(long *)(lVar23 + 0x1470) = lVar23;
              *(long *)(lVar23 + 0x1478) = lVar23;
              *(long *)(lVar23 + 0x1480) = lVar23;
              *(long *)(lVar23 + 0x1488) = lVar23;
              *(long *)(lVar23 + 0x1490) = lVar23;
              *(long *)(lVar23 + 0x1498) = lVar23;
              if (uVar16 == 0) {
                if ((param_5 & 1) == 0) {
                  if (uVar13 == 0) goto LAB_0386f38c;
                }
                else {
                  uVar6 = (int)uVar14 + iVar19;
                  uVar18 = (ulong)uVar6;
                  if (0x7f < uVar6) {
                    uVar18 = 0;
                  }
                  *(undefined8 *)(lVar23 + 0x1460) = *(undefined8 *)(param_1[uVar18] + 0x218);
                  if (uVar13 == 0) goto LAB_0386f374;
                }
LAB_0386f3a0:
                bVar21 = false;
                bVar9 = 0x7f < (uint)(uVar10 + uVar22);
                uVar18 = uVar10 + uVar22 & 0xffffffff;
LAB_0386f3b0:
                if (bVar9) {
                  uVar18 = 0;
                }
                *(undefined8 *)(lVar23 + 0x1468) = *(undefined8 *)(param_1[uVar18] + 0x218);
                if (uVar8 == uVar22) goto LAB_0386f3e0;
LAB_0386f260:
                uVar6 = iVar11 + iVar19 + 1;
                plVar20 = param_1 + uVar6;
                if (0x7f < uVar6) {
                  plVar20 = param_1;
                }
LAB_0386f274:
                *(undefined8 *)(lVar23 + 0x1478) = *(undefined8 *)(*plVar20 + 0x218);
              }
              else {
                uVar6 = (int)uVar17 + iVar19;
                uVar18 = (ulong)uVar6;
                if (0x7f < uVar6) {
                  uVar18 = 0;
                }
                *(undefined8 *)(lVar23 + 0x1460) = *(undefined8 *)(param_1[uVar18] + 0x218);
                if (uVar16 != uVar13) goto LAB_0386f3a0;
                if ((param_5 & 1) != 0) {
LAB_0386f374:
                  bVar9 = 0x7f < uVar22;
                  bVar21 = true;
                  uVar18 = uVar22;
                  goto LAB_0386f3b0;
                }
LAB_0386f38c:
                bVar21 = true;
                if (uVar8 != uVar22) goto LAB_0386f260;
LAB_0386f3e0:
                if ((param_4 & 1) == 0) {
                  plVar20 = plVar2;
                  if ((param_6 & 1) != 0) goto LAB_0386f274;
                }
                else {
                  plVar20 = plVar3;
                  if (!bVar21) goto LAB_0386f274;
                }
              }
              uVar6 = (iVar11 + iVar19) - 1;
              uVar18 = (ulong)uVar6;
              if (0x7f < uVar6) {
                uVar18 = 0;
              }
              *(undefined8 *)(lVar23 + 0x1470) = *(undefined8 *)(param_1[uVar18] + 0x218);
            }
            uVar22 = uVar22 + 1;
          } while (uVar15 != uVar22);
        }
      }
      else {
        *(long *)(lVar23 + 0x1460) = lVar23;
        *(long *)(lVar23 + 0x1468) = lVar23;
        *(long *)(lVar23 + 0x1470) = lVar23;
        *(long *)(lVar23 + 0x1478) = lVar23;
        *(long *)(lVar23 + 0x1480) = lVar23;
        *(long *)(lVar23 + 0x1488) = lVar23;
        *(long *)(lVar23 + 0x1490) = lVar23;
        *(long *)(lVar23 + 0x1498) = lVar23;
        plVar25 = param_1;
        if (uVar16 == 0) {
          if ((param_5 & 1) == 0) {
            if (uVar13 != 0) goto LAB_0386f1a4;
            bVar9 = true;
          }
          else {
            uVar7 = uVar6 + uVar5;
            uVar24 = (ulong)uVar7;
            if (0x7f < uVar7) {
              uVar24 = 0;
            }
            *(undefined8 *)(lVar23 + 0x1460) = *(undefined8 *)(param_1[uVar24] + 0x218);
            if (uVar13 == 0) {
              bVar9 = true;
              goto LAB_0386f1b8;
            }
LAB_0386f1a4:
            bVar9 = false;
            plVar25 = param_1 + (uVar6 + param_2);
            if (0x7f < uVar6 + param_2) {
              plVar25 = param_1;
            }
LAB_0386f1b8:
            *(undefined8 *)(lVar23 + 0x1468) = *(undefined8 *)(*plVar25 + 0x218);
          }
          if (uVar8 == 0) goto LAB_0386f1d8;
LAB_0386f114:
          uVar22 = (ulong)(uVar6 + 1);
          if (0x7f < uVar6 + 1) {
            uVar22 = 0;
          }
          *(undefined8 *)(lVar23 + 0x1478) = *(undefined8 *)(param_1[uVar22] + 0x218);
          if ((param_4 & 1) != 0) goto LAB_0386f200;
          if ((param_6 & 1) != 0) goto LAB_0386f230;
          goto LAB_0386f254;
        }
        uVar24 = (ulong)(uVar6 - param_2);
        if (0x7f < uVar6 - param_2) {
          uVar24 = 0;
        }
        *(undefined8 *)(lVar23 + 0x1460) = *(undefined8 *)(param_1[uVar24] + 0x218);
        if (uVar16 != uVar13) goto LAB_0386f1a4;
        bVar9 = true;
        if ((param_5 & 1) != 0) goto LAB_0386f1b8;
        if (uVar8 != 0) goto LAB_0386f114;
LAB_0386f1d8:
        if ((param_4 & 1) != 0) {
          if (!bVar9) {
            *(undefined8 *)(lVar23 + 0x1478) = *(undefined8 *)(param_1[uVar18] + 0x218);
          }
LAB_0386f200:
          plVar20 = plVar4;
          if (uVar16 == 0) goto LAB_0386f24c;
LAB_0386f230:
          *(undefined8 *)(lVar23 + 0x1470) = *(undefined8 *)(*plVar20 + 0x218);
          goto LAB_0386f24c;
        }
        if ((param_6 & 1) != 0) {
          *(undefined8 *)(lVar23 + 0x1478) = *(undefined8 *)(param_1[uVar22] + 0x218);
          goto LAB_0386f230;
        }
      }
      lVar12 = lVar12 + uVar15;
      uVar10 = uVar10 + uVar15;
      uVar14 = uVar14 + uVar15;
      uVar17 = uVar17 + uVar15;
      uVar16 = uVar1;
    } while (uVar1 != param_3);
  }
  return;
}

