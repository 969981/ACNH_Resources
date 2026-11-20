
void FUN_03fcce80(long param_1,long *param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  undefined2 *puVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ushort *puVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  byte bVar23;
  byte *pbVar24;
  byte *pbVar25;
  long lVar26;
  undefined2 *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined2 *puVar30;
  byte *pbVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  ushort *puVar35;
  uint uVar36;
  uint uVar37;
  
  pbVar15 = (byte *)((long)param_2 + (ulong)param_3 * 8 + 0x7f);
  if (*pbVar15 != 0) {
    uVar17 = (ulong)param_3;
    lVar20 = param_2[(ulong)param_3 + 0xb];
    lVar18 = param_1 + uVar17 * 0xb8;
    lVar26 = *(long *)(param_1 + 0x88);
    pbVar25 = (byte *)(param_2 + uVar17 + 0x10);
    pbVar24 = (byte *)(lVar18 + 0x45ae5);
    lVar1 = lVar18 + 0x45ae2;
    uVar16 = 0;
    iVar10 = (uint)*pbVar24 * 0x2000;
    uVar2 = (int)*(short *)(lVar18 + 0x45ad6) + (uint)*(ushort *)(param_1 + 0x45e7a);
    uVar36 = uVar2 * 4;
    uVar3 = uVar36 & 0x1c;
    uVar2 = uVar2 >> 7 & 2;
    uVar28 = (ulong)(uVar36 & 0x3e0);
    do {
      sVar9 = *(short *)(param_1 + uVar17 * 0xb8 + 0x45ad4);
      uVar14 = (long)sVar9 + (ulong)*pbVar25;
      uVar36 = (int)sVar9 + (uint)pbVar25[1];
      uVar21 = (uint)uVar14;
      iVar33 = (int)uVar21 >> 3;
      iVar34 = ((int)uVar36 >> 3) - iVar33;
      if (iVar34 == 0) {
        if (((uVar36 ^ 0xffffffff) & 7) == 0) {
          bVar12 = false;
          iVar34 = 1;
          uVar32 = 0xffffffff;
        }
        else {
          iVar34 = 0;
          uVar32 = uVar36 - uVar21;
          bVar12 = true;
        }
      }
      else {
        uVar32 = uVar36 & 7;
        bVar12 = false;
        if (uVar32 == 7) {
          uVar32 = 0xffffffff;
          iVar34 = iVar34 + 1;
        }
      }
      uVar14 = uVar14 & 7;
      lVar18 = *pbVar25 - uVar14;
      uVar37 = (int)(uVar36 + 1) >> 3;
      pbVar31 = (byte *)(param_2[1] + lVar18);
      puVar30 = (undefined2 *)(*param_2 + lVar18 * 2);
      uVar4 = (int)(uVar36 + 1 ^ uVar21) >> 3;
      uVar36 = uVar37;
      if ((uVar4 & 0x20) != 0) {
        uVar36 = uVar37 & 0x60;
      }
      puVar35 = (ushort *)
                (*(long *)(param_1 + uVar17 * 0xb8 + (ulong)(uVar21 >> 8 & 1 | uVar2) * 8 + 0x45b30)
                 + uVar28 * 2 + (ulong)(uVar21 >> 3 & 0x1f) * 2);
      if (!bVar12) {
        uVar37 = uVar37 & (int)(uVar4 << 0x1a) >> 0x1f;
        puVar19 = puVar35 + 1;
        uVar8 = *puVar35;
        if (*(char *)(param_1 + 0x1098 + ((ulong)((uVar8 & 0x3ff) + (uint)*pbVar24 * 0x100) & 0x7ff)
                     ) == '\0') goto LAB_03fcd450;
        uVar21 = uVar8 >> 0xe & 1;
        lVar18 = lVar20 + ((ulong)(uVar8 >> 5) & 0xe0);
        bVar23 = *(byte *)(lVar1 + ((ulong)(uVar8 >> 0xd) & 1));
        pbVar22 = (byte *)(lVar26 + (ulong)(iVar10 + (uVar8 & 0x3ff) * 0x20 & 0xffe0 |
                                           (uint)(uVar8 >> 0xf) * 0x1c ^ uVar3));
        uVar29 = (ulong)pbVar22[(uVar21 | uVar21 << 1) ^ (uint)uVar14 >> 1];
        uVar21 = (uint)pbVar22[(uVar21 | uVar21 << 1) ^ (uint)uVar14 >> 1];
        puVar35 = puVar19;
        switch((uint)uVar14 | (uVar8 >> 0xe & 1) << 3) {
        case 1:
          goto switchD_03fcd100_caseD_1;
        case 2:
          goto switchD_03fcd100_caseD_2;
        case 3:
          goto switchD_03fcd100_caseD_3;
        case 4:
          goto switchD_03fcd100_caseD_4;
        case 5:
          goto switchD_03fcd100_caseD_5;
        case 6:
          goto switchD_03fcd100_caseD_6;
        case 7:
          goto switchD_03fcd100_caseD_7;
        case 8:
          goto switchD_03fcd100_caseD_8;
        case 9:
          goto switchD_03fcd100_caseD_9;
        case 10:
          goto switchD_03fcd100_caseD_a;
        case 0xb:
          goto switchD_03fcd100_caseD_b;
        case 0xc:
          goto switchD_03fcd100_caseD_c;
        case 0xd:
          goto switchD_03fcd100_caseD_d;
        case 0xe:
          goto switchD_03fcd100_caseD_e;
        case 0xf:
          goto switchD_03fcd100_caseD_f;
        }
        do {
          bVar5 = *pbVar22;
          uVar29 = (ulong)bVar5;
          bVar6 = *pbVar31;
          bVar13 = 0xf < bVar5;
          bVar12 = bVar13 && bVar6 <= bVar23;
          puVar27 = puVar30;
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            puVar27 = (undefined2 *)(lVar18 + ((ulong)(bVar5 >> 3) & 0x1e));
          }
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            bVar6 = bVar23;
          }
          uVar7 = *puVar27;
          *pbVar31 = bVar6;
          *puVar30 = uVar7;
switchD_03fcd100_caseD_1:
          bVar6 = pbVar31[1];
          puVar27 = puVar30 + 1;
          if (pbVar31[1] < bVar23 && (uVar29 & 0xf) != 0) {
            bVar6 = bVar23;
            puVar27 = (undefined2 *)(lVar18 + (ulong)((uint)uVar29 & 0xf) * 2);
          }
          uVar7 = *puVar27;
          pbVar31[1] = bVar6;
          puVar30[1] = uVar7;
switchD_03fcd100_caseD_2:
          bVar5 = pbVar22[1];
          uVar29 = (ulong)bVar5;
          bVar6 = pbVar31[2];
          bVar13 = 0xf < bVar5;
          bVar12 = bVar13 && bVar6 <= bVar23;
          puVar27 = puVar30 + 2;
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            puVar27 = (undefined2 *)(lVar18 + ((ulong)(bVar5 >> 3) & 0x1e));
          }
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            bVar6 = bVar23;
          }
          uVar7 = *puVar27;
          pbVar31[2] = bVar6;
          puVar30[2] = uVar7;
switchD_03fcd100_caseD_3:
          bVar6 = pbVar31[3];
          puVar27 = puVar30 + 3;
          if (pbVar31[3] < bVar23 && (uVar29 & 0xf) != 0) {
            bVar6 = bVar23;
            puVar27 = (undefined2 *)(lVar18 + (ulong)((uint)uVar29 & 0xf) * 2);
          }
          uVar7 = *puVar27;
          pbVar31[3] = bVar6;
          puVar30[3] = uVar7;
switchD_03fcd100_caseD_4:
          bVar5 = pbVar22[2];
          uVar29 = (ulong)bVar5;
          bVar6 = pbVar31[4];
          bVar13 = 0xf < bVar5;
          bVar12 = bVar13 && bVar6 <= bVar23;
          puVar27 = puVar30 + 4;
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            puVar27 = (undefined2 *)(lVar18 + ((ulong)(bVar5 >> 3) & 0x1e));
          }
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            bVar6 = bVar23;
          }
          uVar7 = *puVar27;
          pbVar31[4] = bVar6;
          puVar30[4] = uVar7;
switchD_03fcd100_caseD_5:
          bVar6 = pbVar31[5];
          puVar27 = puVar30 + 5;
          if (pbVar31[5] < bVar23 && (uVar29 & 0xf) != 0) {
            bVar6 = bVar23;
            puVar27 = (undefined2 *)(lVar18 + (ulong)((uint)uVar29 & 0xf) * 2);
          }
          uVar7 = *puVar27;
          pbVar31[5] = bVar6;
          puVar30[5] = uVar7;
switchD_03fcd100_caseD_6:
          bVar5 = pbVar22[3];
          uVar29 = (ulong)bVar5;
          bVar6 = pbVar31[6];
          bVar13 = 0xf < bVar5;
          bVar12 = bVar13 && bVar6 <= bVar23;
          puVar27 = puVar30 + 6;
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            puVar27 = (undefined2 *)(lVar18 + ((ulong)(bVar5 >> 3) & 0x1e));
          }
          if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
            bVar6 = bVar23;
          }
          uVar7 = *puVar27;
          pbVar31[6] = bVar6;
          puVar30[6] = uVar7;
          puVar19 = puVar35;
switchD_03fcd100_caseD_7:
          bVar6 = pbVar31[7];
          puVar27 = (undefined2 *)(lVar18 + (ulong)((uint)uVar29 & 0xf) * 2);
          bVar12 = bVar23 <= bVar6 || (uVar29 & 0xf) == 0;
          while( true ) {
            puVar11 = puVar30 + 7;
            if (!bVar12) {
              bVar6 = bVar23;
              puVar11 = puVar27;
            }
            uVar7 = *puVar11;
            pbVar31[7] = bVar6;
            puVar30[7] = uVar7;
LAB_03fcd450:
            do {
              if (iVar33 + 1U == uVar36) {
                if ((uVar37 == 0) ||
                   (puVar19 = (ushort *)
                              (*(long *)(param_1 + uVar17 * 0xb8 +
                                         (ulong)(uVar36 >> 5 & 1 | uVar2) * 8 + 0x45b30) +
                              uVar28 * 2), uVar36 == uVar37)) {
                  if (1 < iVar34) goto LAB_03fccf80;
                  uVar36 = 0;
                  pbVar31 = pbVar31 + 8;
                  puVar30 = puVar30 + 8;
                  puVar35 = puVar19;
                  goto joined_r0x03fcd7c4;
                }
                uVar36 = uVar37;
                uVar37 = 0;
              }
              puVar35 = puVar19 + 1;
              if (iVar34 < 2) {
                uVar14 = 0;
                pbVar31 = pbVar31 + 8;
                puVar30 = puVar30 + 8;
                goto LAB_03fcd540;
              }
              uVar8 = *puVar19;
              pbVar31 = pbVar31 + 8;
              puVar30 = puVar30 + 8;
              iVar33 = iVar33 + 1;
              iVar34 = iVar34 + -1;
              puVar19 = puVar35;
            } while (*(char *)(param_1 + 0x1098 +
                              ((ulong)((uVar8 & 0x3ff) + (uint)*pbVar24 * 0x100) & 0x7ff)) == '\0');
            bVar23 = *(byte *)(lVar1 + ((ulong)(uVar8 >> 0xd) & 1));
            lVar18 = lVar20 + ((ulong)(uVar8 >> 5) & 0xe0);
            pbVar22 = (byte *)(lVar26 + (ulong)(iVar10 + (uVar8 & 0x3ff) * 0x20 & 0xffe0 |
                                               (uint)(uVar8 >> 0xf) * 0x1c ^ uVar3));
            if ((uVar8 >> 0xe & 1) == 0) break;
switchD_03fcd100_caseD_8:
            uVar21 = (uint)pbVar22[3];
            uVar14 = (ulong)pbVar22[3] & 0xf;
            puVar27 = puVar30;
            bVar6 = *pbVar31;
            if (*pbVar31 < bVar23 && (int)uVar14 != 0) {
              puVar27 = (undefined2 *)(lVar18 + uVar14 * 2);
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            *pbVar31 = bVar6;
            *puVar30 = uVar7;
switchD_03fcd100_caseD_9:
            bVar6 = pbVar31[1];
            bVar13 = 0xf < uVar21;
            bVar12 = bVar13 && bVar6 <= bVar23;
            puVar27 = puVar30 + 1;
            if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
              puVar27 = (undefined2 *)(lVar18 + (ulong)(uVar21 >> 4) * 2);
            }
            if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            pbVar31[1] = bVar6;
            puVar30[1] = uVar7;
switchD_03fcd100_caseD_a:
            uVar21 = (uint)pbVar22[2];
            uVar14 = (ulong)pbVar22[2] & 0xf;
            puVar27 = puVar30 + 2;
            bVar6 = pbVar31[2];
            if (pbVar31[2] < bVar23 && (int)uVar14 != 0) {
              puVar27 = (undefined2 *)(lVar18 + uVar14 * 2);
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            pbVar31[2] = bVar6;
            puVar30[2] = uVar7;
switchD_03fcd100_caseD_b:
            bVar6 = pbVar31[3];
            bVar13 = 0xf < uVar21;
            bVar12 = bVar13 && bVar6 <= bVar23;
            puVar27 = puVar30 + 3;
            if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
              puVar27 = (undefined2 *)(lVar18 + (ulong)(uVar21 >> 4) * 2);
            }
            if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            pbVar31[3] = bVar6;
            puVar30[3] = uVar7;
switchD_03fcd100_caseD_c:
            uVar21 = (uint)pbVar22[1];
            uVar14 = (ulong)pbVar22[1] & 0xf;
            puVar27 = puVar30 + 4;
            bVar6 = pbVar31[4];
            if (pbVar31[4] < bVar23 && (int)uVar14 != 0) {
              puVar27 = (undefined2 *)(lVar18 + uVar14 * 2);
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            pbVar31[4] = bVar6;
            puVar30[4] = uVar7;
switchD_03fcd100_caseD_d:
            bVar6 = pbVar31[5];
            bVar13 = 0xf < uVar21;
            bVar12 = bVar13 && bVar6 <= bVar23;
            puVar27 = puVar30 + 5;
            if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
              puVar27 = (undefined2 *)(lVar18 + (ulong)(uVar21 >> 4) * 2);
            }
            if (bVar12 && (!bVar13 || bVar23 != bVar6)) {
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            pbVar31[5] = bVar6;
            puVar30[5] = uVar7;
switchD_03fcd100_caseD_e:
            uVar29 = (ulong)*pbVar22;
            puVar27 = puVar30 + 6;
            bVar6 = pbVar31[6];
            if (pbVar31[6] < bVar23 && (int)(uVar29 & 0xf) != 0) {
              puVar27 = (undefined2 *)(lVar18 + (uVar29 & 0xf) * 2);
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            pbVar31[6] = bVar6;
            puVar30[6] = uVar7;
switchD_03fcd100_caseD_f:
            bVar6 = pbVar31[7];
            puVar27 = (undefined2 *)(lVar18 + (uVar29 >> 4) * 2);
            bVar12 = (uint)uVar29 < 0x10 || bVar23 <= bVar6;
            puVar19 = puVar35;
          }
        } while( true );
      }
LAB_03fcd540:
      uVar36 = (uint)uVar14;
joined_r0x03fcd7c4:
      if (-1 < (int)uVar32) {
        uVar8 = *puVar35;
        bVar23 = *(byte *)(lVar1 + ((ulong)(uVar8 >> 0xd) & 1));
        lVar18 = lVar20 + ((ulong)(uVar8 >> 5) & 0xe0);
        pbVar22 = (byte *)(lVar26 + (ulong)(iVar10 + (uVar8 & 0x3ff) * 0x20 & 0xffe0 |
                                           (uint)(uVar8 >> 0xf) * 0x1c ^ uVar3));
        switch(uVar8 >> 0xb & 8 | uVar36) {
        case 0:
          bVar6 = *pbVar31;
          puVar27 = puVar30;
          if (0xf < *pbVar22 && *pbVar31 < bVar23) {
            bVar6 = bVar23;
            puVar27 = (undefined2 *)(lVar18 + ((ulong)(*pbVar22 >> 3) & 0x1e));
          }
          uVar7 = *puVar27;
          *pbVar31 = bVar6;
          *puVar30 = uVar7;
          if (uVar32 == 0) break;
          uVar32 = uVar32 - 1;
        case 1:
          puVar27 = puVar30 + 1;
          bVar6 = pbVar31[1];
          if (pbVar31[1] < bVar23 && (int)((ulong)*pbVar22 & 0xf) != 0) {
            puVar27 = (undefined2 *)(lVar18 + ((ulong)*pbVar22 & 0xf) * 2);
            bVar6 = bVar23;
          }
          uVar7 = *puVar27;
          pbVar31[1] = bVar6;
          puVar30[1] = uVar7;
          if (uVar32 != 0) {
            uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_2:
            bVar6 = pbVar31[2];
            puVar27 = puVar30 + 2;
            if (0xf < pbVar22[1] && pbVar31[2] < bVar23) {
              bVar6 = bVar23;
              puVar27 = (undefined2 *)(lVar18 + ((ulong)(pbVar22[1] >> 3) & 0x1e));
            }
            uVar7 = *puVar27;
            pbVar31[2] = bVar6;
            puVar30[2] = uVar7;
            if (uVar32 != 0) {
              uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_3:
              puVar27 = puVar30 + 3;
              bVar6 = pbVar31[3];
              if (pbVar31[3] < bVar23 && (int)((ulong)pbVar22[1] & 0xf) != 0) {
                puVar27 = (undefined2 *)(lVar18 + ((ulong)pbVar22[1] & 0xf) * 2);
                bVar6 = bVar23;
              }
              uVar7 = *puVar27;
              pbVar31[3] = bVar6;
              puVar30[3] = uVar7;
              if (uVar32 != 0) {
                uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_4:
                bVar6 = pbVar31[4];
                puVar27 = puVar30 + 4;
                if (0xf < pbVar22[2] && pbVar31[4] < bVar23) {
                  bVar6 = bVar23;
                  puVar27 = (undefined2 *)(lVar18 + ((ulong)(pbVar22[2] >> 3) & 0x1e));
                }
                uVar7 = *puVar27;
                pbVar31[4] = bVar6;
                puVar30[4] = uVar7;
                if (uVar32 != 0) {
                  uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_5:
                  puVar27 = puVar30 + 5;
                  bVar6 = pbVar31[5];
                  if (pbVar31[5] < bVar23 && (int)((ulong)pbVar22[2] & 0xf) != 0) {
                    puVar27 = (undefined2 *)(lVar18 + ((ulong)pbVar22[2] & 0xf) * 2);
                    bVar6 = bVar23;
                  }
                  uVar7 = *puVar27;
                  pbVar31[5] = bVar6;
                  puVar30[5] = uVar7;
                  if (uVar32 != 0) {
                    uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_6:
                    bVar6 = pbVar31[6];
                    puVar27 = puVar30 + 6;
                    if (0xf < pbVar22[3] && pbVar31[6] < bVar23) {
                      bVar6 = bVar23;
                      puVar27 = (undefined2 *)(lVar18 + ((ulong)(pbVar22[3] >> 3) & 0x1e));
                    }
                    uVar7 = *puVar27;
                    pbVar31[6] = bVar6;
                    puVar30[6] = uVar7;
                    if (uVar32 != 0) {
switchD_03fcd5b0_caseD_7:
                      puVar27 = puVar30 + 7;
                      bVar6 = pbVar31[7];
                      if (pbVar31[7] < bVar23 && (int)((ulong)pbVar22[3] & 0xf) != 0) {
                        puVar27 = (undefined2 *)(lVar18 + ((ulong)pbVar22[3] & 0xf) * 2);
                        bVar6 = bVar23;
                      }
                      uVar7 = *puVar27;
                      pbVar31[7] = bVar6;
                      puVar30[7] = uVar7;
                    }
                  }
                }
              }
            }
          }
          break;
        case 2:
          goto switchD_03fcd5b0_caseD_2;
        case 3:
          goto switchD_03fcd5b0_caseD_3;
        case 4:
          goto switchD_03fcd5b0_caseD_4;
        case 5:
          goto switchD_03fcd5b0_caseD_5;
        case 6:
          goto switchD_03fcd5b0_caseD_6;
        case 7:
          goto switchD_03fcd5b0_caseD_7;
        case 8:
          puVar27 = puVar30;
          bVar6 = *pbVar31;
          if (*pbVar31 < bVar23 && (int)((ulong)pbVar22[3] & 0xf) != 0) {
            puVar27 = (undefined2 *)(lVar18 + ((ulong)pbVar22[3] & 0xf) * 2);
            bVar6 = bVar23;
          }
          uVar7 = *puVar27;
          *pbVar31 = bVar6;
          *puVar30 = uVar7;
          if (uVar32 == 0) break;
          uVar32 = uVar32 - 1;
        case 9:
          bVar6 = pbVar31[1];
          puVar27 = puVar30 + 1;
          if (0xf < pbVar22[3] && pbVar31[1] < bVar23) {
            bVar6 = bVar23;
            puVar27 = (undefined2 *)(lVar18 + ((ulong)(pbVar22[3] >> 3) & 0x1e));
          }
          uVar7 = *puVar27;
          pbVar31[1] = bVar6;
          puVar30[1] = uVar7;
          if (uVar32 != 0) {
            uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_a:
            puVar27 = puVar30 + 2;
            bVar6 = pbVar31[2];
            if (pbVar31[2] < bVar23 && (int)((ulong)pbVar22[2] & 0xf) != 0) {
              puVar27 = (undefined2 *)(lVar18 + ((ulong)pbVar22[2] & 0xf) * 2);
              bVar6 = bVar23;
            }
            uVar7 = *puVar27;
            pbVar31[2] = bVar6;
            puVar30[2] = uVar7;
            if (uVar32 != 0) {
              uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_b:
              bVar6 = pbVar31[3];
              puVar27 = puVar30 + 3;
              if (0xf < pbVar22[2] && pbVar31[3] < bVar23) {
                bVar6 = bVar23;
                puVar27 = (undefined2 *)(lVar18 + ((ulong)(pbVar22[2] >> 3) & 0x1e));
              }
              uVar7 = *puVar27;
              pbVar31[3] = bVar6;
              puVar30[3] = uVar7;
              if (uVar32 != 0) {
                uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_c:
                puVar27 = puVar30 + 4;
                bVar6 = pbVar31[4];
                if (pbVar31[4] < bVar23 && (int)((ulong)pbVar22[1] & 0xf) != 0) {
                  puVar27 = (undefined2 *)(lVar18 + ((ulong)pbVar22[1] & 0xf) * 2);
                  bVar6 = bVar23;
                }
                uVar7 = *puVar27;
                pbVar31[4] = bVar6;
                puVar30[4] = uVar7;
                if (uVar32 != 0) {
                  uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_d:
                  bVar6 = pbVar31[5];
                  puVar27 = puVar30 + 5;
                  if (0xf < pbVar22[1] && pbVar31[5] < bVar23) {
                    bVar6 = bVar23;
                    puVar27 = (undefined2 *)(lVar18 + ((ulong)(pbVar22[1] >> 3) & 0x1e));
                  }
                  uVar7 = *puVar27;
                  pbVar31[5] = bVar6;
                  puVar30[5] = uVar7;
                  if (uVar32 != 0) {
                    uVar32 = uVar32 - 1;
switchD_03fcd5b0_caseD_e:
                    puVar27 = puVar30 + 6;
                    bVar6 = pbVar31[6];
                    if (pbVar31[6] < bVar23 && (int)((ulong)*pbVar22 & 0xf) != 0) {
                      puVar27 = (undefined2 *)(lVar18 + ((ulong)*pbVar22 & 0xf) * 2);
                      bVar6 = bVar23;
                    }
                    uVar7 = *puVar27;
                    pbVar31[6] = bVar6;
                    puVar30[6] = uVar7;
                    if (uVar32 != 0) {
switchD_03fcd5b0_caseD_f:
                      bVar6 = pbVar31[7];
                      puVar27 = puVar30 + 7;
                      if (0xf < *pbVar22 && pbVar31[7] < bVar23) {
                        bVar6 = bVar23;
                        puVar27 = (undefined2 *)(lVar18 + ((ulong)(*pbVar22 >> 3) & 0x1e));
                      }
                      uVar7 = *puVar27;
                      pbVar31[7] = bVar6;
                      puVar30[7] = uVar7;
                    }
                  }
                }
              }
            }
          }
          break;
        case 10:
          goto switchD_03fcd5b0_caseD_a;
        case 0xb:
          goto switchD_03fcd5b0_caseD_b;
        case 0xc:
          goto switchD_03fcd5b0_caseD_c;
        case 0xd:
          goto switchD_03fcd5b0_caseD_d;
        case 0xe:
          goto switchD_03fcd5b0_caseD_e;
        case 0xf:
          goto switchD_03fcd5b0_caseD_f;
        }
      }
LAB_03fccf80:
      uVar16 = uVar16 + 1;
      pbVar25 = pbVar25 + 2;
    } while (uVar16 < *pbVar15);
  }
  return;
}

