
void FUN_03fce860(long param_1,long *param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ushort *puVar27;
  ushort *puVar28;
  uint uVar29;
  bool bVar30;
  uint uVar31;
  byte bVar32;
  
  pbVar10 = (byte *)((long)param_2 + (ulong)param_3 * 8 + 0x7f);
  if (*pbVar10 != 0) {
    uVar12 = (ulong)param_3;
    lVar14 = *(long *)(param_1 + 0x90);
    lVar15 = param_1 + uVar12 * 0xb8;
    pbVar8 = (byte *)(param_2 + uVar12 + 0x10);
    lVar13 = param_2[(ulong)param_3 + 0xb];
    pbVar16 = (byte *)(lVar15 + 0x45ae5);
    lVar1 = lVar15 + 0x45ae2;
    uVar11 = 0;
    iVar9 = (uint)*pbVar16 * 0x2000;
    uVar29 = (int)*(short *)(lVar15 + 0x45ad6) + (uint)*(ushort *)(param_1 + 0x45e7a);
    uVar7 = uVar29 * 8 & 0x38;
    uVar2 = uVar29 >> 7 & 2;
    uVar20 = (ulong)(uVar29 * 4 & 0x3e0);
    do {
      sVar6 = *(short *)(param_1 + uVar12 * 0xb8 + 0x45ad4);
      uVar21 = (long)sVar6 + (ulong)*pbVar8;
      uVar29 = (int)sVar6 + (uint)pbVar8[1];
      uVar17 = (uint)uVar21;
      iVar25 = (int)uVar17 >> 3;
      iVar26 = ((int)uVar29 >> 3) - iVar25;
      if (iVar26 == 0) {
        if (((uVar29 ^ 0xffffffff) & 7) == 0) {
          bVar30 = false;
          iVar26 = 1;
          uVar24 = 0xffffffff;
        }
        else {
          iVar26 = 0;
          uVar24 = uVar29 - uVar17;
          bVar30 = true;
        }
      }
      else {
        uVar24 = uVar29 & 7;
        bVar30 = false;
        if (uVar24 == 7) {
          uVar24 = 0xffffffff;
          iVar26 = iVar26 + 1;
        }
      }
      uVar21 = uVar21 & 7;
      uVar31 = (int)(uVar29 + 1) >> 3;
      lVar15 = *pbVar8 - uVar21;
      uVar3 = (int)(uVar29 + 1 ^ uVar17) >> 3;
      pbVar23 = (byte *)(param_2[1] + lVar15);
      puVar22 = (undefined2 *)(*param_2 + lVar15 * 2);
      uVar29 = uVar31;
      if ((uVar3 & 0x20) != 0) {
        uVar29 = uVar31 & 0x60;
      }
      puVar28 = (ushort *)
                (*(long *)(param_1 + uVar12 * 0xb8 + (ulong)(uVar17 >> 8 & 1 | uVar2) * 8 + 0x45b30)
                 + uVar20 * 2 + (ulong)(uVar17 >> 3 & 0x1f) * 2);
      if (!bVar30) {
        puVar27 = puVar28 + 1;
        uVar5 = *puVar28;
        uVar31 = uVar31 & (int)(uVar3 << 0x1a) >> 0x1f;
        puVar19 = puVar27;
        if (*(char *)(param_1 + 0x1898 + ((ulong)((uint)uVar5 + (uint)*pbVar16 * 0x80) & 0x3ff)) ==
            '\0') goto LAB_03fcec50;
        bVar32 = *(byte *)(lVar1 + ((ulong)(uVar5 >> 0xd) & 1));
        pbVar18 = (byte *)(lVar14 + ((ulong)(iVar9 + (uVar5 & 0x3ff) * 0x40) & 0xffc0 |
                                    (ulong)((uint)(uVar5 >> 0xf) * 0x38 ^ uVar7)));
        switch(uVar5 >> 0xb & 8 | (uint)uVar21) {
        case 1:
          goto switchD_03fcea58_caseD_1;
        case 2:
          goto switchD_03fcea58_caseD_2;
        case 3:
          goto switchD_03fcea58_caseD_3;
        case 4:
          goto switchD_03fcea58_caseD_4;
        case 5:
          goto switchD_03fcea58_caseD_5;
        case 6:
          goto switchD_03fcea58_caseD_6;
        case 7:
          goto switchD_03fcea58_caseD_7;
        case 8:
          goto switchD_03fcea58_caseD_8;
        case 9:
          goto switchD_03fcea58_caseD_9;
        case 10:
          goto switchD_03fcea58_caseD_a;
        case 0xb:
          goto switchD_03fcea58_caseD_b;
        case 0xc:
          goto switchD_03fcea58_caseD_c;
        case 0xd:
          goto switchD_03fcea58_caseD_d;
        case 0xe:
          goto switchD_03fcea58_caseD_e;
        case 0xf:
          goto switchD_03fcea58_caseD_f;
        }
switchD_03fcea58_caseD_0:
        bVar4 = *pbVar18;
        if (((ulong)bVar4 != 0) && (*pbVar23 < bVar32)) {
          *pbVar23 = bVar32;
          *puVar22 = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
switchD_03fcea58_caseD_1:
        bVar4 = pbVar18[1];
        if (((ulong)bVar4 != 0) && (pbVar23[1] < bVar32)) {
          pbVar23[1] = bVar32;
          puVar22[1] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
switchD_03fcea58_caseD_2:
        bVar4 = pbVar18[2];
        if (((ulong)bVar4 != 0) && (pbVar23[2] < bVar32)) {
          pbVar23[2] = bVar32;
          puVar22[2] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
switchD_03fcea58_caseD_3:
        bVar4 = pbVar18[3];
        if (((ulong)bVar4 != 0) && (pbVar23[3] < bVar32)) {
          pbVar23[3] = bVar32;
          puVar22[3] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
switchD_03fcea58_caseD_4:
        bVar4 = pbVar18[4];
        if (((ulong)bVar4 != 0) && (pbVar23[4] < bVar32)) {
          pbVar23[4] = bVar32;
          puVar22[4] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
switchD_03fcea58_caseD_5:
        bVar4 = pbVar18[5];
        if (((ulong)bVar4 != 0) && (pbVar23[5] < bVar32)) {
          pbVar23[5] = bVar32;
          puVar22[5] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
switchD_03fcea58_caseD_6:
        bVar4 = pbVar18[6];
        if (((ulong)bVar4 != 0) && (pbVar23[6] < bVar32)) {
          pbVar23[6] = bVar32;
          puVar22[6] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
switchD_03fcea58_caseD_7:
        bVar4 = pbVar18[7];
        puVar19 = puVar27;
        do {
          if ((bVar4 != 0) && (pbVar23[7] < bVar32)) {
            pbVar23[7] = bVar32;
            puVar22[7] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
LAB_03fcec50:
          do {
            if (iVar25 + 1U == uVar29) {
              if ((uVar31 != 0) &&
                 (puVar19 = (ushort *)
                            (*(long *)(param_1 + uVar12 * 0xb8 +
                                       (ulong)(uVar29 >> 5 & 1 | uVar2) * 8 + 0x45b30) + uVar20 * 2)
                 , uVar29 != uVar31)) {
                uVar29 = uVar31;
                uVar31 = 0;
                goto LAB_03fcec94;
              }
              puVar28 = puVar19;
              if (1 < iVar26) goto LAB_03fce910;
LAB_03fced08:
              uVar21 = 0;
              pbVar23 = pbVar23 + 8;
              puVar22 = puVar22 + 8;
              goto LAB_03fced14;
            }
LAB_03fcec94:
            puVar27 = puVar19 + 1;
            puVar28 = puVar27;
            if (iVar26 < 2) goto LAB_03fced08;
            uVar5 = *puVar19;
            pbVar23 = pbVar23 + 8;
            puVar22 = puVar22 + 8;
            iVar25 = iVar25 + 1;
            iVar26 = iVar26 + -1;
            puVar19 = puVar27;
          } while (*(char *)(param_1 + 0x1898 +
                            ((ulong)((uint)uVar5 + (uint)*pbVar16 * 0x80) & 0x3ff)) == '\0');
          bVar32 = *(byte *)(lVar1 + ((ulong)(uVar5 >> 0xd) & 1));
          pbVar18 = (byte *)(lVar14 + (ulong)(iVar9 + (uVar5 & 0x3ff) * 0x40 & 0xffc0 |
                                             (uint)(uVar5 >> 0xf) * 0x38 ^ uVar7));
          if ((uVar5 >> 0xe & 1) == 0) goto switchD_03fcea58_caseD_0;
switchD_03fcea58_caseD_8:
          bVar4 = pbVar18[7];
          if (((ulong)bVar4 != 0) && (*pbVar23 < bVar32)) {
            *pbVar23 = bVar32;
            *puVar22 = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
switchD_03fcea58_caseD_9:
          bVar4 = pbVar18[6];
          if (((ulong)bVar4 != 0) && (pbVar23[1] < bVar32)) {
            pbVar23[1] = bVar32;
            puVar22[1] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
switchD_03fcea58_caseD_a:
          bVar4 = pbVar18[5];
          if (((ulong)bVar4 != 0) && (pbVar23[2] < bVar32)) {
            pbVar23[2] = bVar32;
            puVar22[2] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
switchD_03fcea58_caseD_b:
          bVar4 = pbVar18[4];
          if (((ulong)bVar4 != 0) && (pbVar23[3] < bVar32)) {
            pbVar23[3] = bVar32;
            puVar22[3] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
switchD_03fcea58_caseD_c:
          bVar4 = pbVar18[3];
          if (((ulong)bVar4 != 0) && (pbVar23[4] < bVar32)) {
            pbVar23[4] = bVar32;
            puVar22[4] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
switchD_03fcea58_caseD_d:
          bVar4 = pbVar18[2];
          if (((ulong)bVar4 != 0) && (pbVar23[5] < bVar32)) {
            pbVar23[5] = bVar32;
            puVar22[5] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
switchD_03fcea58_caseD_e:
          bVar4 = pbVar18[1];
          if (((ulong)bVar4 != 0) && (pbVar23[6] < bVar32)) {
            pbVar23[6] = bVar32;
            puVar22[6] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
switchD_03fcea58_caseD_f:
          bVar4 = *pbVar18;
          puVar19 = puVar27;
        } while( true );
      }
LAB_03fced14:
      if ((int)uVar24 < 0) goto LAB_03fce910;
      uVar5 = *puVar28;
      bVar32 = *(byte *)(lVar1 + ((ulong)(uVar5 >> 0xd) & 1));
      pbVar18 = (byte *)(lVar14 + (ulong)(iVar9 + (uint)uVar5 * 0x40 & 0xffc0 |
                                         (uint)(uVar5 >> 0xf) * 0x38 ^ uVar7));
      switch(uVar5 >> 0xb & 8 | (uint)uVar21) {
      case 0:
        bVar4 = *pbVar18;
        if (((ulong)bVar4 != 0) && (*pbVar23 < bVar32)) {
          *pbVar23 = bVar32;
          *puVar22 = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
        if (uVar24 == 0) break;
        uVar24 = uVar24 - 1;
      case 1:
        bVar4 = pbVar18[1];
        if (((ulong)bVar4 != 0) && (pbVar23[1] < bVar32)) {
          pbVar23[1] = bVar32;
          puVar22[1] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
        if (uVar24 != 0) {
          uVar24 = uVar24 - 1;
switchD_03fced64_caseD_2:
          bVar4 = pbVar18[2];
          if (((ulong)bVar4 != 0) && (pbVar23[2] < bVar32)) {
            pbVar23[2] = bVar32;
            puVar22[2] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
          if (uVar24 != 0) {
            uVar24 = uVar24 - 1;
switchD_03fced64_caseD_3:
            bVar4 = pbVar18[3];
            if (((ulong)bVar4 != 0) && (pbVar23[3] < bVar32)) {
              pbVar23[3] = bVar32;
              puVar22[3] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
            }
            if (uVar24 != 0) {
              uVar24 = uVar24 - 1;
switchD_03fced64_caseD_4:
              bVar4 = pbVar18[4];
              if (((ulong)bVar4 != 0) && (pbVar23[4] < bVar32)) {
                pbVar23[4] = bVar32;
                puVar22[4] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
              }
              if (uVar24 != 0) {
                uVar24 = uVar24 - 1;
switchD_03fced64_caseD_5:
                bVar4 = pbVar18[5];
                if (((ulong)bVar4 != 0) && (pbVar23[5] < bVar32)) {
                  pbVar23[5] = bVar32;
                  puVar22[5] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
                }
                if (uVar24 != 0) {
                  uVar24 = uVar24 - 1;
switchD_03fced64_caseD_6:
                  bVar4 = pbVar18[6];
                  if (((ulong)bVar4 != 0) && (pbVar23[6] < bVar32)) {
                    pbVar23[6] = bVar32;
                    puVar22[6] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
                  }
                  if (uVar24 != 0) {
switchD_03fced64_caseD_7:
                    bVar4 = pbVar18[7];
                    if (bVar4 != 0) {
LAB_03fcefa4:
                      if (pbVar23[7] < bVar32) {
                        pbVar23[7] = bVar32;
                        puVar22[7] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        goto switchD_03fced64_caseD_2;
      case 3:
        goto switchD_03fced64_caseD_3;
      case 4:
        goto switchD_03fced64_caseD_4;
      case 5:
        goto switchD_03fced64_caseD_5;
      case 6:
        goto switchD_03fced64_caseD_6;
      case 7:
        goto switchD_03fced64_caseD_7;
      case 8:
        bVar4 = pbVar18[7];
        if (((ulong)bVar4 != 0) && (*pbVar23 < bVar32)) {
          *pbVar23 = bVar32;
          *puVar22 = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
        if (uVar24 == 0) break;
        uVar24 = uVar24 - 1;
      case 9:
        bVar4 = pbVar18[6];
        if (((ulong)bVar4 != 0) && (pbVar23[1] < bVar32)) {
          pbVar23[1] = bVar32;
          puVar22[1] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
        }
        if (uVar24 != 0) {
          uVar24 = uVar24 - 1;
switchD_03fced64_caseD_a:
          bVar4 = pbVar18[5];
          if (((ulong)bVar4 != 0) && (pbVar23[2] < bVar32)) {
            pbVar23[2] = bVar32;
            puVar22[2] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
          if (uVar24 == 0) break;
          uVar24 = uVar24 - 1;
switchD_03fced64_caseD_b:
          bVar4 = pbVar18[4];
          if (((ulong)bVar4 != 0) && (pbVar23[3] < bVar32)) {
            pbVar23[3] = bVar32;
            puVar22[3] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
          if (uVar24 == 0) break;
          uVar24 = uVar24 - 1;
switchD_03fced64_caseD_c:
          bVar4 = pbVar18[3];
          if (((ulong)bVar4 != 0) && (pbVar23[4] < bVar32)) {
            pbVar23[4] = bVar32;
            puVar22[4] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
          if (uVar24 == 0) break;
          uVar24 = uVar24 - 1;
switchD_03fced64_caseD_d:
          bVar4 = pbVar18[2];
          if (((ulong)bVar4 != 0) && (pbVar23[5] < bVar32)) {
            pbVar23[5] = bVar32;
            puVar22[5] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
          if (uVar24 == 0) break;
          uVar24 = uVar24 - 1;
switchD_03fced64_caseD_e:
          bVar4 = pbVar18[1];
          if (((ulong)bVar4 != 0) && (pbVar23[6] < bVar32)) {
            pbVar23[6] = bVar32;
            puVar22[6] = *(undefined2 *)(lVar13 + (ulong)bVar4 * 2);
          }
          if (uVar24 == 0) break;
switchD_03fced64_caseD_f:
          bVar4 = *pbVar18;
          if (bVar4 == 0) break;
          goto LAB_03fcefa4;
        }
        break;
      case 10:
        goto switchD_03fced64_caseD_a;
      case 0xb:
        goto switchD_03fced64_caseD_b;
      case 0xc:
        goto switchD_03fced64_caseD_c;
      case 0xd:
        goto switchD_03fced64_caseD_d;
      case 0xe:
        goto switchD_03fced64_caseD_e;
      case 0xf:
        goto switchD_03fced64_caseD_f;
      }
LAB_03fce910:
      uVar11 = uVar11 + 1;
      pbVar8 = pbVar8 + 2;
    } while (uVar11 < *pbVar10);
  }
  return;
}

