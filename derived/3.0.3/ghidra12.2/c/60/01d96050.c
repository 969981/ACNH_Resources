
void FUN_01d96050(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 ***pppuVar4;
  byte bVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 ****local_e8;
  undefined8 ****local_d8 [2];
  undefined8 ***local_c8 [2];
  undefined8 **local_b8 [2];
  undefined8 *local_a8 [2];
  undefined8 local_98 [2];
  undefined8 local_88 [5];
  byte local_44 [4];
  
  if (*(long *)(param_1 + 8) == 0) {
    iVar11 = 0;
    goto LAB_01d9666c;
  }
  lVar8 = FUN_02658fd0();
  local_98[0] = 0;
  local_e8 = local_d8;
  local_d8[0] = local_c8;
  local_c8[0] = local_b8;
  local_b8[0] = local_a8;
  local_a8[0] = local_98;
  local_f8._4_4_ = 0;
  local_f0 = (undefined8 *)0x0;
  if (local_88 != (undefined8 *)0x0) {
    local_f8._4_4_ = 5;
    local_f0 = local_88;
  }
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  pbVar12 = &DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
LAB_01d96124:
    if (*pbVar12 < 8) goto LAB_01d9619c;
LAB_01d96130:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01d96194:
      pbVar12 = &DAT_0548e168;
      goto LAB_01d9619c;
    }
    lVar16 = *DAT_0537d558;
    bVar5 = *(byte *)(lVar16 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar3 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar12 = (byte *)(lVar16 + 0x471);
      }
    }
    local_44[0] = *pbVar12;
    if (7 < local_44[0]) goto LAB_01d96194;
  }
  else {
    pbVar12 = &DAT_0548e140;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar12 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d96124;
      }
      goto LAB_01d96130;
    }
LAB_01d9619c:
    local_44[0] = *pbVar12;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  lVar16 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  if (lVar16 == 0) {
    piVar24 = *(int **)(param_1 + 8);
    iVar17 = *piVar24;
    if (iVar17 != 0) {
      puVar9 = *(undefined8 **)(piVar24 + 2);
      uVar23 = 0;
      do {
        ppppuVar7 = local_e8;
        plVar15 = (long *)*puVar9;
        lVar16 = *plVar15;
        if (lVar16 == 0 || lVar16 == lVar8) {
LAB_01d9626c:
          piVar24 = *(int **)(param_1 + 8);
          if ((int)uVar23 < *piVar24) {
            lVar16 = (long)(int)uVar23;
            puVar18 = *(undefined8 **)(piVar24 + 4);
            do {
              puVar21 = *(undefined8 **)(*(long *)(piVar24 + 2) + lVar16 * 8);
              lVar16 = lVar16 + 1;
              *puVar21 = puVar18;
              *(undefined8 **)(piVar24 + 4) = puVar21;
              puVar18 = puVar21;
            } while (lVar16 < (int)(uVar23 + 1));
          }
          if ((-1 < (int)uVar23) && (iVar11 = *piVar24, (int)uVar23 < iVar11)) {
            uVar1 = uVar23 + 1;
            uVar6 = iVar11 - uVar1;
            if (uVar6 != 0 && (int)uVar1 <= iVar11) {
              memmove((void *)(*(long *)(piVar24 + 2) + (ulong)uVar23 * 8),
                      (void *)(*(long *)(piVar24 + 2) + (ulong)uVar1 * 8),
                      -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
              iVar11 = *piVar24;
            }
            *piVar24 = iVar11 + -1;
          }
          piVar24 = *(int **)(param_1 + 8);
          iVar17 = *piVar24;
        }
        else {
          if ((*(int *)(param_1 + 0x110) == 3) && (iVar11 = *(int *)(param_1 + 0x20), iVar11 != 0))
          {
            iVar22 = *(int *)(param_1 + 0x1c);
            do {
              iVar2 = 0;
              if (*(int *)(param_1 + 0x18) <= iVar22) {
                iVar2 = *(int *)(param_1 + 0x18);
              }
              if (lVar16 == *(long *)(*(long *)(param_1 + 0x10) + (long)(iVar22 - iVar2) * 8)) {
                if ((int)local_f8 < (int)local_f8._4_4_) {
                  if (local_e8 != (undefined8 ****)0x0) {
                    local_e8 = (undefined8 ****)*local_e8;
                  }
                  pppuVar4 = (undefined8 ***)plVar15[1];
                  *ppppuVar7 = (undefined8 ***)*plVar15;
                  ppppuVar7[1] = pppuVar4;
                  if ((int)local_f8 < (int)local_f8._4_4_) {
                    local_f0[(int)local_f8] = ppppuVar7;
                    local_f8 = CONCAT44(local_f8._4_4_,(int)local_f8 + 1);
                  }
                }
                goto LAB_01d9626c;
              }
              iVar22 = iVar22 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          puVar9 = puVar9 + 1;
          uVar23 = uVar23 + 1;
        }
      } while (puVar9 != (undefined8 *)(*(long *)(piVar24 + 2) + (long)iVar17 * 8));
      iVar11 = 0;
      goto LAB_01d965a4;
    }
    iVar11 = 0;
    iVar17 = *(int *)(param_1 + 0x20);
  }
  else {
    lVar13 = lVar16 + 0x194b0;
    if (*(long *)(lVar16 + 0x194b8) == 0) {
      lVar13 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x2aed0) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar13 + 0x2aed0), puVar9 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar9)();
      uVar10 = uVar10 & 0xffffffff;
    }
    if (**(int **)(param_1 + 8) == 0) {
      iVar17 = 0;
      iVar11 = 0;
    }
    else {
      uVar23 = 0;
      puVar9 = *(undefined8 **)(*(int **)(param_1 + 8) + 2);
      iVar11 = 0;
      plVar15 = (long *)(*(long *)(lVar13 + 0x2aeb8) + *(long *)(lVar13 + 0x2aeb0));
      do {
        ppppuVar7 = local_e8;
        plVar14 = (long *)*puVar9;
        lVar16 = *plVar14;
        if (lVar16 == 0 || lVar16 == lVar8) {
LAB_01d96448:
          piVar24 = *(int **)(param_1 + 8);
          if ((int)uVar23 < *piVar24) {
            lVar16 = (long)(int)uVar23;
            puVar18 = *(undefined8 **)(piVar24 + 4);
            do {
              puVar21 = *(undefined8 **)(*(long *)(piVar24 + 2) + lVar16 * 8);
              lVar16 = lVar16 + 1;
              *puVar21 = puVar18;
              *(undefined8 **)(piVar24 + 4) = puVar21;
              puVar18 = puVar21;
            } while (lVar16 < (int)(uVar23 + 1));
          }
          if ((-1 < (int)uVar23) && (iVar17 = *piVar24, (int)uVar23 < iVar17)) {
            uVar1 = uVar23 + 1;
            uVar6 = iVar17 - uVar1;
            if (uVar6 != 0 && (int)uVar1 <= iVar17) {
              memmove((void *)(*(long *)(piVar24 + 2) + (ulong)uVar23 * 8),
                      (void *)(*(long *)(piVar24 + 2) + (ulong)uVar1 * 8),
                      -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
              iVar17 = *piVar24;
            }
            *piVar24 = iVar17 + -1;
          }
        }
        else {
          if (plVar15 != (long *)0x0) {
            if ((*plVar15 == 0) || (*plVar15 != lVar16)) {
              uVar19 = 0;
              do {
                uVar19 = uVar19 + 1;
                lVar20 = *(long *)((long)plVar15 +
                                  (-(uVar19 >> 0x1f & 1) & 0xfffffff800000000 |
                                  uVar19 * 8 & 0x7fffffff8));
                if (lVar20 != 0 && lVar20 == lVar16) {
                  iVar17 = (int)uVar19;
                  break;
                }
                uVar19 = (uVar19 & 0xffffffff) + 1;
                iVar17 = (int)uVar19;
                if (iVar17 == 100) goto LAB_01d964d0;
                lVar20 = *(long *)((long)plVar15 +
                                  (-(uVar19 >> 0x1f & 1) & 0xfffffff800000000 |
                                  uVar19 * 8 & 0x7fffffff8));
                uVar19 = uVar19 & 0xffffffff;
              } while (lVar20 == 0 || lVar20 != lVar16);
              if (iVar17 < 0) goto LAB_01d964d0;
            }
            iVar11 = iVar11 + 1;
            goto LAB_01d96448;
          }
LAB_01d964d0:
          if ((*(int *)(param_1 + 0x110) == 3) && (iVar17 = *(int *)(param_1 + 0x20), iVar17 != 0))
          {
            iVar22 = *(int *)(param_1 + 0x1c);
            do {
              iVar2 = 0;
              if (*(int *)(param_1 + 0x18) <= iVar22) {
                iVar2 = *(int *)(param_1 + 0x18);
              }
              if (lVar16 == *(long *)(*(long *)(param_1 + 0x10) + (long)(iVar22 - iVar2) * 8)) {
                if ((int)local_f8 < (int)local_f8._4_4_) {
                  if (local_e8 != (undefined8 ****)0x0) {
                    local_e8 = (undefined8 ****)*local_e8;
                  }
                  pppuVar4 = (undefined8 ***)plVar14[1];
                  *ppppuVar7 = (undefined8 ***)*plVar14;
                  ppppuVar7[1] = pppuVar4;
                  if ((int)local_f8 < (int)local_f8._4_4_) {
                    local_f0[(int)local_f8] = ppppuVar7;
                    local_f8 = CONCAT44(local_f8._4_4_,(int)local_f8 + 1);
                  }
                }
                goto LAB_01d96448;
              }
              iVar22 = iVar22 + 1;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          puVar9 = puVar9 + 1;
          uVar23 = uVar23 + 1;
        }
        iVar17 = **(int **)(param_1 + 8);
      } while (puVar9 != (undefined8 *)(*(long *)(*(int **)(param_1 + 8) + 2) + (long)iVar17 * 8));
    }
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar13 + 0x2aed0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x2aed0) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
      iVar17 = **(int **)(param_1 + 8);
    }
LAB_01d965a4:
    if (0 < iVar17) goto LAB_01d9666c;
    iVar17 = *(int *)(param_1 + 0x20);
  }
  if (iVar17 != 0) {
    if ((int)local_f8 != 0) {
      plVar15 = *(long **)(param_1 + 0x10);
      if (0 < iVar17) {
        iVar22 = iVar17 + *(int *)(param_1 + 0x1c) + -1;
        iVar17 = 0;
        if (*(int *)(param_1 + 0x18) <= iVar22) {
          iVar17 = *(int *)(param_1 + 0x18);
        }
        plVar15 = plVar15 + (iVar22 - iVar17);
      }
      lVar16 = *plVar15;
      lVar8 = (long)(int)local_f8 << 3;
      do {
        plVar15 = (long *)*local_f0;
        if ((*plVar15 != lVar16) && (piVar24 = *(int **)(param_1 + 8), *piVar24 < piVar24[1])) {
          plVar14 = *(long **)(piVar24 + 4);
          if (plVar14 != (long *)0x0) {
            *(long *)(piVar24 + 4) = *plVar14;
          }
          lVar13 = plVar15[1];
          *plVar14 = *plVar15;
          plVar14[1] = lVar13;
          if (*piVar24 < piVar24[1]) {
            *(long **)(*(long *)(piVar24 + 2) + (long)*piVar24 * 8) = plVar14;
            *piVar24 = *piVar24 + 1;
          }
        }
        local_f0 = local_f0 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
LAB_01d9666c:
  *(int *)(DAT_053762d8 + 0x24c) = iVar11;
  return;
}

