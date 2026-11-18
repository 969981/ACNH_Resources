
/* WARNING: Removing unreachable block (ram,0x035a56f4) */

void FUN_035a56c0(ushort *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  
  uVar2 = *(int *)(param_1 + 6) + (uint)*param_1;
  uVar18 = (uint)param_1[1];
  uVar3 = *(int *)(param_1 + 8) + (uint)param_1[1];
  if (0 < *(int *)(param_1 + 8)) {
    do {
      uVar12 = (uint)*param_1;
      if ((int)(uint)*param_1 < (int)uVar2) {
        do {
          uVar5 = *param_1;
          uVar22 = (uint)uVar5;
          iVar20 = uVar12 - uVar5;
          if ((-1 < iVar20) && (iVar13 = *(int *)(param_1 + 6), iVar20 < iVar13)) {
            uVar6 = param_1[1];
            iVar20 = uVar18 - uVar6;
            if (((-1 < iVar20) &&
                (((iVar9 = *(int *)(param_1 + 8), iVar20 < iVar9 &&
                  (lVar21 = *(long *)(param_1 + 0x10), lVar21 != 0)) &&
                 (iVar20 = uVar12 + (iVar13 * iVar20 - (uint)uVar5),
                 *(char *)(lVar21 + (long)iVar20 * 0x28 + 6) != '\x03')))) &&
               ((*(byte *)(lVar21 + (long)iVar20 * 0x28 + 5) & 0xf5) != 0)) {
              puVar25 = (ushort *)(lVar21 + (long)iVar20 * 0x28);
              uVar14 = (uint)uVar5;
              uVar23 = (uVar14 + iVar13) - 1;
              uVar5 = *puVar25;
              uVar24 = (uint)uVar5;
              uVar7 = puVar25[1];
              uVar15 = (uint)uVar7;
              uVar16 = uVar5 - 1;
              uVar17 = uVar16 & 0xffff;
              if (((((uVar14 <= uVar17) && ((uVar16 & 0xffff) <= (uVar23 & 0xffff))) &&
                   ((uVar16 = (uint)uVar6, (uint)uVar6 < (uint)uVar7 || uVar16 == uVar7 &&
                    ((uVar15 <= ((uVar16 + iVar9) - 1 & 0xffff) &&
                     (iVar20 = uVar17 - uVar14, -1 < iVar20)))))) && (iVar20 < iVar13)) &&
                 ((iVar8 = uVar15 - uVar16, -1 < iVar8 && (iVar8 < iVar9)))) {
                lVar21 = lVar21 + (long)(iVar20 + iVar8 * iVar13) * 0x28;
                *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xfd;
                uVar22 = (uint)*param_1;
                iVar13 = *(int *)(param_1 + 6);
                uVar23 = ((uint)*param_1 + iVar13) - 1;
              }
              uVar17 = uVar5 + 1;
              uVar16 = uVar17 & 0xffff;
              if (((uVar16 <= (uVar23 & 0xffff)) && (uVar22 <= (uVar17 & 0xffff))) &&
                 (uVar5 = param_1[1], uVar5 <= uVar15)) {
                if ((((uVar15 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                     (iVar20 = uVar16 - uVar22, -1 < iVar20)) &&
                    ((iVar20 < iVar13 &&
                     ((iVar9 = uVar15 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))))))) &&
                   (*(long *)(param_1 + 0x10) != 0)) {
                  lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar20 + iVar9 * iVar13) * 0x28;
                  *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xfe;
                  uVar22 = (uint)*param_1;
                  iVar13 = *(int *)(param_1 + 6);
                  uVar24 = (uint)*puVar25;
                  uVar15 = (uint)puVar25[1];
                  uVar23 = (uVar22 + iVar13) - 1;
                }
              }
              if ((uVar22 <= uVar24) && (uVar24 <= (uVar23 & 0xffff))) {
                uVar5 = param_1[1];
                uVar17 = uVar15 - 1 & 0xffff;
                if (uVar5 <= uVar17) {
                  if (((((uVar17 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                        (iVar20 = uVar24 - uVar22, -1 < iVar20)) && (iVar20 < iVar13)) &&
                      ((iVar9 = uVar17 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))))) &&
                     (*(long *)(param_1 + 0x10) != 0)) {
                    lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar20 + iVar9 * iVar13) * 0x28;
                    *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xf7;
                    uVar22 = (uint)*param_1;
                    iVar13 = *(int *)(param_1 + 6);
                    uVar24 = (uint)*puVar25;
                    uVar15 = (uint)puVar25[1];
                    uVar23 = (uVar22 + iVar13) - 1;
                  }
                }
              }
              if ((uVar22 <= uVar24) && (uVar24 <= (uVar23 & 0xffff))) {
                uVar5 = param_1[1];
                uVar17 = uVar15 + 1 & 0xffff;
                if (uVar5 <= uVar17) {
                  if ((((uVar17 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                       (iVar20 = uVar24 - uVar22, -1 < iVar20)) && (iVar20 < iVar13)) &&
                     (((iVar9 = uVar17 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))) &&
                      (*(long *)(param_1 + 0x10) != 0)))) {
                    lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar20 + iVar9 * iVar13) * 0x28;
                    *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xfb;
                    uVar22 = (uint)*param_1;
                    iVar13 = *(int *)(param_1 + 6);
                    uVar24 = (uint)*puVar25;
                    uVar15 = (uint)puVar25[1];
                    uVar23 = (uVar22 + iVar13) - 1;
                  }
                }
              }
              uVar17 = uVar24 - 1 & 0xffff;
              if ((uVar22 <= uVar17) && ((uVar24 - 1 & 0xffff) <= (uVar23 & 0xffff))) {
                uVar5 = param_1[1];
                uVar16 = uVar15 - 1 & 0xffff;
                if (uVar5 <= uVar16) {
                  if ((((uVar16 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                       (iVar20 = uVar17 - uVar22, -1 < iVar20)) && (iVar20 < iVar13)) &&
                     (((iVar9 = uVar16 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))) &&
                      (*(long *)(param_1 + 0x10) != 0)))) {
                    lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar20 + iVar9 * iVar13) * 0x28;
                    *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xdf;
                    uVar22 = (uint)*param_1;
                    iVar13 = *(int *)(param_1 + 6);
                    uVar24 = (uint)*puVar25;
                    uVar15 = (uint)puVar25[1];
                    uVar23 = (uVar22 + iVar13) - 1;
                  }
                }
              }
              uVar17 = uVar24 + 1;
              uVar16 = uVar17 & 0xffff;
              if ((uVar22 <= uVar16) && ((uVar17 & 0xffff) <= (uVar23 & 0xffff))) {
                uVar5 = param_1[1];
                uVar14 = uVar15 + 1 & 0xffff;
                if (uVar5 <= uVar14) {
                  if (((((uVar14 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                        (iVar20 = uVar16 - uVar22, -1 < iVar20)) && (iVar20 < iVar13)) &&
                      ((iVar9 = uVar14 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))))) &&
                     (*(long *)(param_1 + 0x10) != 0)) {
                    lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar20 + iVar9 * iVar13) * 0x28;
                    *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xef;
                    uVar24 = (uint)*puVar25;
                    uVar22 = (uint)*param_1;
                    iVar13 = *(int *)(param_1 + 6);
                    uVar15 = (uint)puVar25[1];
                    uVar17 = uVar24 + 1;
                    uVar16 = uVar17 & 0xffff;
                    uVar23 = (uVar22 + iVar13) - 1;
                  }
                }
              }
              if (((uVar17 & 0xffff) <= (uVar23 & 0xffff)) && (uVar22 <= (uVar17 & 0xffff))) {
                uVar5 = param_1[1];
                uVar17 = uVar15 - 1 & 0xffff;
                if (uVar5 <= uVar17) {
                  if ((((uVar17 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                       (iVar20 = uVar16 - uVar22, -1 < iVar20)) && (iVar20 < iVar13)) &&
                     (((iVar9 = uVar17 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))) &&
                      (*(long *)(param_1 + 0x10) != 0)))) {
                    lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar20 + iVar9 * iVar13) * 0x28;
                    *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0x7f;
                    uVar22 = (uint)*param_1;
                    iVar13 = *(int *)(param_1 + 6);
                    uVar24 = (uint)*puVar25;
                    uVar15 = (uint)puVar25[1];
                    uVar23 = (uVar22 + iVar13) - 1;
                  }
                }
              }
              uVar17 = uVar24 - 1 & 0xffff;
              if ((uVar22 <= uVar17) && ((uVar24 - 1 & 0xffff) <= (uVar23 & 0xffff))) {
                uVar5 = param_1[1];
                uVar23 = uVar15 + 1 & 0xffff;
                if (uVar5 <= uVar23) {
                  if ((((uVar23 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                       (iVar20 = uVar17 - uVar22, -1 < iVar20)) && (iVar20 < iVar13)) &&
                     (((iVar9 = uVar23 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))) &&
                      (*(long *)(param_1 + 0x10) != 0)))) {
                    lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar20 + iVar9 * iVar13) * 0x28;
                    *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xbf;
                  }
                }
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar2 != uVar12);
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (int)uVar3);
    uVar18 = (uint)param_1[1];
  }
  if ((int)uVar18 < (int)uVar3) {
    do {
      uVar12 = (uint)*param_1;
      if ((int)(uint)*param_1 < (int)uVar2) {
        do {
          iVar20 = uVar12 - *param_1;
          if (((-1 < iVar20) && (iVar20 < *(int *)(param_1 + 6))) &&
             ((iVar20 = uVar18 - param_1[1], -1 < iVar20 &&
              ((iVar20 < *(int *)(param_1 + 8) && (lVar21 = *(long *)(param_1 + 0x10), lVar21 != 0))
              )))) {
            iVar20 = uVar12 + (*(int *)(param_1 + 6) * iVar20 - (uint)*param_1);
            pcVar19 = (char *)(lVar21 + (long)iVar20 * 0x28 + 6);
            if (*pcVar19 != '\x03') {
              lVar10 = lVar21 + (long)iVar20 * 0x28;
              pbVar11 = (byte *)(lVar10 + 4);
              bVar4 = *pbVar11;
              if ((((bVar4 & 10) != 0 && (bVar4 & 6) != 0) && (bVar4 & 5) != 0) && (bVar4 & 9) != 0)
              {
                pbVar1 = (byte *)(lVar10 + 5);
                if ((((bVar4 & 3) == 0) && (((*pbVar1 ^ 0xff) & 3) == 0)) ||
                   (((bVar4 & 0xc) == 0 && (((*pbVar1 ^ 0xff) & 0xc) == 0)))) {
                  *pcVar19 = '\x05';
                }
                else {
                  if ((bVar4 & 0x41) == 0) {
                    uVar22 = 0xd5;
                    if (((*pbVar1 ^ 0xff) & 0x41) != 0) {
                      uVar22 = 0;
                    }
                    if ((bVar4 & 0x21) != 0) goto LAB_035a5d6c;
LAB_035a5dc8:
                    uVar17 = uVar22 | 0xb9;
                    if (((*pbVar1 ^ 0xff) & 0x21) != 0) {
                      uVar17 = uVar22;
                    }
                    if ((bVar4 & 0x84) != 0) goto LAB_035a5d74;
LAB_035a5de4:
                    uVar22 = uVar17 | 0xd5;
                    if (((*pbVar1 ^ 0xff) & 0x84) != 0) {
                      uVar22 = uVar17;
                    }
                    if ((bVar4 & 0x24) != 0) goto LAB_035a5d7c;
LAB_035a5e00:
                    uVar17 = uVar22 | 0x76;
                    if (((*pbVar1 ^ 0xff) & 0x24) != 0) {
                      uVar17 = uVar22;
                    }
                    if ((bVar4 & 0x12) != 0) goto LAB_035a5d84;
LAB_035a5e18:
                    uVar22 = uVar17 | 0x76;
                    if (((*pbVar1 ^ 0xff) & 0x12) != 0) {
                      uVar22 = uVar17;
                    }
                    if ((bVar4 & 0x82) != 0) goto LAB_035a5d8c;
LAB_035a5e30:
                    uVar17 = uVar22 | 0xea;
                    if (((*pbVar1 ^ 0xff) & 0x82) != 0) {
                      uVar17 = uVar22;
                    }
                    if ((bVar4 & 0x18) != 0) goto LAB_035a5d94;
LAB_035a5e48:
                    uVar22 = uVar17 | 0xb9;
                    if (((*pbVar1 ^ 0xff) & 0x18) != 0) {
                      uVar22 = uVar17;
                    }
                    if ((bVar4 & 0x48) != 0) goto LAB_035a5d9c;
LAB_035a5e68:
                    uVar17 = uVar22 | 0xea;
                    if (((*pbVar1 ^ 0xff) & 0x48) != 0) {
                      uVar17 = uVar22;
                    }
                    if ((bVar4 & 0x30) != 0) goto LAB_035a5da4;
LAB_035a5e80:
                    uVar22 = 0xff;
                    if (((*pbVar1 ^ 0xff) & 0x30) != 0) {
                      uVar22 = uVar17;
                    }
                    uVar17 = uVar22;
                    if (bVar4 < 0x40) goto LAB_035a5e9c;
LAB_035a5eb0:
                    if (uVar17 == 0) goto LAB_035a5c94;
                  }
                  else {
                    uVar22 = 0;
                    if ((bVar4 & 0x21) == 0) goto LAB_035a5dc8;
LAB_035a5d6c:
                    uVar17 = uVar22;
                    if ((bVar4 & 0x84) == 0) goto LAB_035a5de4;
LAB_035a5d74:
                    uVar22 = uVar17;
                    if ((bVar4 & 0x24) == 0) goto LAB_035a5e00;
LAB_035a5d7c:
                    uVar17 = uVar22;
                    if ((bVar4 & 0x12) == 0) goto LAB_035a5e18;
LAB_035a5d84:
                    uVar22 = uVar17;
                    if ((bVar4 & 0x82) == 0) goto LAB_035a5e30;
LAB_035a5d8c:
                    uVar17 = uVar22;
                    if ((bVar4 & 0x18) == 0) goto LAB_035a5e48;
LAB_035a5d94:
                    uVar22 = uVar17;
                    if ((bVar4 & 0x48) == 0) goto LAB_035a5e68;
LAB_035a5d9c:
                    uVar17 = uVar22;
                    if ((bVar4 & 0x30) == 0) goto LAB_035a5e80;
LAB_035a5da4:
                    uVar22 = uVar17;
                    if (0x3f < bVar4) goto LAB_035a5eb0;
LAB_035a5e9c:
                    uVar17 = uVar22;
                    if (*pbVar1 < 0xc0) goto LAB_035a5eb0;
                    uVar17 = uVar22 | 0xea;
                  }
                  puVar25 = (ushort *)(lVar21 + (long)iVar20 * 0x28);
                  if ((uVar17 & 1) != 0) {
                    bVar4 = bVar4 & 0xfe;
                  }
                  uVar5 = *puVar25;
                  uVar22 = (uint)uVar5;
                  if ((uVar17 & 2) != 0) {
                    bVar4 = bVar4 & 0xfd;
                  }
                  uVar6 = puVar25[1];
                  uVar23 = (uint)uVar6;
                  if ((uVar17 & 4) != 0) {
                    bVar4 = bVar4 & 0xfb;
                  }
                  if ((uVar17 & 8) != 0) {
                    bVar4 = bVar4 & 0xf7;
                  }
                  if ((uVar17 & 0x10) != 0) {
                    bVar4 = bVar4 & 0xef;
                  }
                  if ((uVar17 & 0x20) != 0) {
                    bVar4 = bVar4 & 0xdf;
                  }
                  if ((uVar17 & 0x40) != 0) {
                    bVar4 = bVar4 & 0xbf;
                  }
                  if ((uVar17 & 0x80) != 0) {
                    bVar4 = bVar4 & 0x7f;
                  }
                  *pbVar11 = bVar4;
                  uVar16 = uVar5 - 1;
                  uVar5 = *param_1;
                  uVar24 = (uint)uVar5;
                  iVar20 = *(int *)(param_1 + 6);
                  uVar17 = uVar16 & 0xffff;
                  uVar14 = ((uint)uVar5 + iVar20) - 1;
                  if (((uVar5 < uVar17 || uVar5 == uVar17) &&
                      ((uVar16 & 0xffff) <= (uVar14 & 0xffff))) &&
                     (uVar7 = param_1[1], uVar7 <= uVar6)) {
                    if (((((uint)uVar6 <= (((uint)uVar7 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                         (iVar13 = uVar17 - uVar5, -1 < iVar13)) &&
                        ((iVar13 < iVar20 &&
                         ((iVar9 = (uint)uVar6 - (uint)uVar7, -1 < iVar9 &&
                          (iVar9 < *(int *)(param_1 + 8))))))) && (*(long *)(param_1 + 0x10) != 0))
                    {
                      lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                      *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xfd;
                      uVar24 = (uint)*param_1;
                      iVar20 = *(int *)(param_1 + 6);
                      uVar22 = (uint)*puVar25;
                      uVar23 = (uint)puVar25[1];
                      uVar14 = ((uint)*param_1 + iVar20) - 1;
                    }
                  }
                  uVar17 = uVar22 + 1 & 0xffff;
                  if (((uVar24 <= uVar17) && ((uVar22 + 1 & 0xffff) <= (uVar14 & 0xffff))) &&
                     (uVar5 = param_1[1], uVar5 <= uVar23)) {
                    if (((uVar23 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                        (iVar13 = uVar17 - uVar24, -1 < iVar13)) &&
                       (((iVar13 < iVar20 &&
                         ((iVar9 = uVar23 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8)))))
                        && (*(long *)(param_1 + 0x10) != 0)))) {
                      lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                      *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xfe;
                      uVar24 = (uint)*param_1;
                      iVar20 = *(int *)(param_1 + 6);
                      uVar22 = (uint)*puVar25;
                      uVar23 = (uint)puVar25[1];
                      uVar14 = (uVar24 + iVar20) - 1;
                    }
                  }
                  if ((uVar24 <= uVar22) && (uVar22 <= (uVar14 & 0xffff))) {
                    uVar5 = param_1[1];
                    uVar17 = uVar23 - 1 & 0xffff;
                    if (uVar5 <= uVar17) {
                      if (((((uVar17 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                            (iVar13 = uVar22 - uVar24, -1 < iVar13)) && (iVar13 < iVar20)) &&
                          ((iVar9 = uVar17 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8)))))
                         && (*(long *)(param_1 + 0x10) != 0)) {
                        lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                        *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xf7;
                        uVar24 = (uint)*param_1;
                        iVar20 = *(int *)(param_1 + 6);
                        uVar22 = (uint)*puVar25;
                        uVar23 = (uint)puVar25[1];
                        uVar14 = (uVar24 + iVar20) - 1;
                      }
                    }
                  }
                  if ((uVar24 <= uVar22) && (uVar22 <= (uVar14 & 0xffff))) {
                    uVar5 = param_1[1];
                    uVar17 = uVar23 + 1 & 0xffff;
                    if (uVar5 <= uVar17) {
                      if ((((uVar17 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                           (iVar13 = uVar22 - uVar24, -1 < iVar13)) && (iVar13 < iVar20)) &&
                         (((iVar9 = uVar17 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8)))
                          && (*(long *)(param_1 + 0x10) != 0)))) {
                        lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                        *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xfb;
                        uVar24 = (uint)*param_1;
                        iVar20 = *(int *)(param_1 + 6);
                        uVar22 = (uint)*puVar25;
                        uVar23 = (uint)puVar25[1];
                        uVar14 = (uVar24 + iVar20) - 1;
                      }
                    }
                  }
                  uVar17 = uVar22 - 1 & 0xffff;
                  if ((uVar24 <= uVar17) && ((uVar22 - 1 & 0xffff) <= (uVar14 & 0xffff))) {
                    uVar5 = param_1[1];
                    uVar16 = uVar23 - 1 & 0xffff;
                    if (uVar5 <= uVar16) {
                      if ((((uVar16 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                           (iVar13 = uVar17 - uVar24, -1 < iVar13)) && (iVar13 < iVar20)) &&
                         (((iVar9 = uVar16 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8)))
                          && (*(long *)(param_1 + 0x10) != 0)))) {
                        lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                        *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xdf;
                        uVar24 = (uint)*param_1;
                        iVar20 = *(int *)(param_1 + 6);
                        uVar22 = (uint)*puVar25;
                        uVar23 = (uint)puVar25[1];
                        uVar14 = (uVar24 + iVar20) - 1;
                      }
                    }
                  }
                  uVar17 = uVar22 + 1;
                  uVar16 = uVar17 & 0xffff;
                  if ((uVar24 <= uVar16) && ((uVar17 & 0xffff) <= (uVar14 & 0xffff))) {
                    uVar15 = uVar23 + 1 & 0xffff;
                    uVar5 = param_1[1];
                    if (uVar5 <= uVar15) {
                      if (((((uVar15 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                            (iVar13 = uVar16 - uVar24, -1 < iVar13)) && (iVar13 < iVar20)) &&
                          ((iVar9 = uVar15 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8)))))
                         && (*(long *)(param_1 + 0x10) != 0)) {
                        lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                        *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xef;
                        uVar22 = (uint)*puVar25;
                        uVar24 = (uint)*param_1;
                        iVar20 = *(int *)(param_1 + 6);
                        uVar23 = (uint)puVar25[1];
                        uVar17 = uVar22 + 1;
                        uVar16 = uVar17 & 0xffff;
                        uVar14 = (uVar24 + iVar20) - 1;
                      }
                    }
                  }
                  if (((uVar17 & 0xffff) <= (uVar14 & 0xffff)) && (uVar24 <= (uVar17 & 0xffff))) {
                    uVar17 = uVar23 - 1 & 0xffff;
                    uVar5 = param_1[1];
                    if (uVar5 <= uVar17) {
                      if ((((uVar17 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                           (iVar13 = uVar16 - uVar24, -1 < iVar13)) && (iVar13 < iVar20)) &&
                         (((iVar9 = uVar17 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8)))
                          && (*(long *)(param_1 + 0x10) != 0)))) {
                        lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                        *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0x7f;
                        uVar24 = (uint)*param_1;
                        iVar20 = *(int *)(param_1 + 6);
                        uVar22 = (uint)*puVar25;
                        uVar23 = (uint)puVar25[1];
                        uVar14 = (uVar24 + iVar20) - 1;
                      }
                    }
                  }
                  uVar17 = uVar22 - 1 & 0xffff;
                  if ((uVar24 <= uVar17) && ((uVar22 - 1 & 0xffff) <= (uVar14 & 0xffff))) {
                    uVar5 = param_1[1];
                    uVar22 = uVar23 + 1 & 0xffff;
                    if (uVar5 <= uVar22) {
                      if ((((uVar22 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                           (iVar13 = uVar17 - uVar24, -1 < iVar13)) && (iVar13 < iVar20)) &&
                         (((iVar9 = uVar22 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8)))
                          && (*(long *)(param_1 + 0x10) != 0)))) {
                        lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar13 + iVar9 * iVar20) * 0x28;
                        *(byte *)(lVar21 + 4) = *(byte *)(lVar21 + 4) & 0xbf;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_035a5c94:
          uVar12 = uVar12 + 1;
        } while (uVar2 != uVar12);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar3);
    uVar18 = (uint)param_1[1];
  }
  if ((int)uVar18 < (int)uVar3) {
    do {
      uVar12 = (uint)*param_1;
      if ((int)(uint)*param_1 < (int)uVar2) {
        do {
          iVar20 = uVar12 - *param_1;
          if (((-1 < iVar20) && (iVar20 < *(int *)(param_1 + 6))) &&
             ((iVar20 = uVar18 - param_1[1], -1 < iVar20 &&
              (((iVar20 < *(int *)(param_1 + 8) && (*(long *)(param_1 + 0x10) != 0)) &&
               (*(char *)(*(long *)(param_1 + 0x10) +
                          (long)(int)(uVar12 + (*(int *)(param_1 + 6) * iVar20 - (uint)*param_1)) *
                          0x28 + 6) == '\x05')))))) {
            FUN_035a4360(param_1,uVar12,uVar18,0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar2 != uVar12);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar3);
  }
  return;
}

