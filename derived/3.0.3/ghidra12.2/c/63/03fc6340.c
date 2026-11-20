
void FUN_03fc6340(long param_1,long *param_2,byte param_3)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ushort *puVar20;
  byte *pbVar21;
  uint uVar22;
  ulong uVar23;
  bool bVar24;
  ulong uVar25;
  byte bVar26;
  undefined2 *puVar27;
  byte *pbVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  ushort *puVar32;
  ushort *puVar33;
  uint uVar34;
  uint uVar35;
  
  pbVar13 = (byte *)((long)param_2 + (ulong)param_3 * 8 + 0x7f);
  if (*pbVar13 != 0) {
    uVar15 = (ulong)param_3;
    lVar16 = param_2[(ulong)param_3 + 0xb];
    lVar18 = param_1 + uVar15 * 0xb8;
    lVar17 = *(long *)(param_1 + 0x80);
    pbVar21 = (byte *)(lVar18 + 0x45ae5);
    lVar1 = lVar18 + 0x45ae2;
    uVar14 = 0;
    pbVar12 = (byte *)(param_2 + uVar15 + 0x10);
    iVar10 = (uint)*pbVar21 * 0x2000;
    uVar34 = (int)*(short *)(lVar18 + 0x45ad6) + (uint)*(ushort *)(param_1 + 0x45e7a);
    uVar11 = uVar34 * 2 & 0xe;
    uVar3 = uVar34 >> 7 & 2;
    uVar25 = (ulong)(uVar34 * 4 & 0x3e0);
    do {
      sVar9 = *(short *)(param_1 + uVar15 * 0xb8 + 0x45ad4);
      uVar19 = (long)sVar9 + (ulong)*pbVar12;
      uVar34 = (int)sVar9 + (uint)pbVar12[1];
      uVar22 = (uint)uVar19;
      iVar30 = (int)uVar22 >> 3;
      iVar31 = ((int)uVar34 >> 3) - iVar30;
      if (iVar31 == 0) {
        if (((uVar34 ^ 0xffffffff) & 7) == 0) {
          bVar24 = false;
          iVar31 = 1;
          uVar29 = 0xffffffff;
        }
        else {
          iVar31 = 0;
          uVar29 = uVar34 - uVar22;
          bVar24 = true;
        }
      }
      else {
        uVar29 = uVar34 & 7;
        bVar24 = false;
        if (uVar29 == 7) {
          uVar29 = 0xffffffff;
          iVar31 = iVar31 + 1;
        }
      }
      uVar19 = uVar19 & 7;
      lVar18 = *pbVar12 - uVar19;
      uVar35 = (int)(uVar34 + 1) >> 3;
      pbVar28 = (byte *)(param_2[1] + lVar18);
      puVar27 = (undefined2 *)(*param_2 + lVar18 * 2);
      uVar4 = (int)(uVar34 + 1 ^ uVar22) >> 3;
      uVar34 = uVar35;
      if ((uVar4 & 0x20) != 0) {
        uVar34 = uVar35 & 0x60;
      }
      puVar33 = (ushort *)
                (*(long *)(param_1 + uVar15 * 0xb8 + (ulong)(uVar22 >> 8 & 1 | uVar3) * 8 + 0x45b30)
                 + uVar25 * 2 + (ulong)(uVar22 >> 3 & 0x1f) * 2);
      if (!bVar24) {
        uVar35 = uVar35 & (int)(uVar4 << 0x1a) >> 0x1f;
        puVar32 = puVar33 + 1;
        uVar7 = *puVar33;
        puVar20 = puVar32;
        if (*(char *)(param_1 + 0x98 + ((ulong)((uVar7 & 0x3ff) + (uint)*pbVar21 * 0x200) & 0xfff))
            == '\0') goto LAB_03fc67a0;
        uVar8 = *(ushort *)
                 (lVar17 + (ulong)(iVar10 + (uVar7 & 0x3ff) * 0x10 & 0xfff0 |
                                  (uint)(uVar7 >> 0xf) * 0xe ^ uVar11));
        bVar26 = *(byte *)(lVar1 + ((ulong)(uVar7 >> 0xd) & 1));
        lVar18 = lVar16 + ((ulong)(uVar7 >> 7) & 0x38);
        uVar23 = (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8);
        switch(uVar7 >> 0xb & 8 | (uint)uVar19) {
        case 1:
          goto switchD_03fc6590_caseD_1;
        case 2:
          goto switchD_03fc6590_caseD_2;
        case 3:
          goto switchD_03fc6590_caseD_3;
        case 4:
          goto switchD_03fc6590_caseD_4;
        case 5:
          goto switchD_03fc6590_caseD_5;
        case 6:
          goto switchD_03fc6590_caseD_6;
        case 7:
          goto switchD_03fc6590_caseD_7;
        case 8:
          goto switchD_03fc6590_caseD_8;
        case 9:
          goto switchD_03fc6590_caseD_9;
        case 10:
          goto switchD_03fc6590_caseD_a;
        case 0xb:
          goto switchD_03fc6590_caseD_b;
        case 0xc:
          goto switchD_03fc6590_caseD_c;
        case 0xd:
          goto switchD_03fc6590_caseD_d;
        case 0xe:
          goto switchD_03fc6590_caseD_e;
        case 0xf:
          goto switchD_03fc6590_caseD_f;
        }
switchD_03fc6590_caseD_0:
        if ((0x3fff < uVar23) && (*pbVar28 < bVar26)) {
          *pbVar28 = bVar26;
          *puVar27 = *(undefined2 *)(lVar18 + (uVar23 >> 0xe) * 2);
        }
switchD_03fc6590_caseD_1:
        uVar19 = uVar23 >> 0xc & 3;
        if ((uVar19 != 0) && (pbVar28[1] < bVar26)) {
          pbVar28[1] = bVar26;
          puVar27[1] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
switchD_03fc6590_caseD_2:
        uVar19 = uVar23 >> 10 & 3;
        if ((uVar19 != 0) && (pbVar28[2] < bVar26)) {
          pbVar28[2] = bVar26;
          puVar27[2] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
switchD_03fc6590_caseD_3:
        uVar19 = uVar23 >> 8 & 3;
        if ((uVar19 != 0) && (pbVar28[3] < bVar26)) {
          pbVar28[3] = bVar26;
          puVar27[3] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
switchD_03fc6590_caseD_4:
        uVar19 = uVar23 >> 6 & 3;
        if ((uVar19 != 0) && (pbVar28[4] < bVar26)) {
          pbVar28[4] = bVar26;
          puVar27[4] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
switchD_03fc6590_caseD_5:
        uVar19 = uVar23 >> 4 & 3;
        if ((uVar19 != 0) && (pbVar28[5] < bVar26)) {
          pbVar28[5] = bVar26;
          puVar27[5] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
switchD_03fc6590_caseD_6:
        uVar19 = uVar23 >> 2 & 3;
        puVar20 = puVar32;
        if ((uVar19 != 0) && (pbVar28[6] < bVar26)) {
          pbVar28[6] = bVar26;
          puVar27[6] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
switchD_03fc6590_caseD_7:
        uVar23 = uVar23 & 3;
        if (uVar23 == 0) goto LAB_03fc67a0;
        if (bVar26 <= pbVar28[7]) goto LAB_03fc67a0;
        do {
          pbVar28[7] = bVar26;
          puVar27[7] = *(undefined2 *)(lVar18 + uVar23 * 2);
LAB_03fc67a0:
          do {
            do {
              if (iVar30 + 1U == uVar34) {
                if ((uVar35 != 0) &&
                   (puVar20 = (ushort *)
                              (*(long *)(param_1 + uVar15 * 0xb8 +
                                         (ulong)(uVar34 >> 5 & 1 | uVar3) * 8 + 0x45b30) +
                              uVar25 * 2), uVar34 != uVar35)) {
                  uVar34 = uVar35;
                  uVar35 = 0;
                  goto LAB_03fc67e4;
                }
                puVar33 = puVar20;
                if (1 < iVar31) goto LAB_03fc6410;
LAB_03fc6884:
                uVar19 = 0;
                pbVar28 = pbVar28 + 8;
                puVar27 = puVar27 + 8;
                goto LAB_03fc6890;
              }
LAB_03fc67e4:
              puVar32 = puVar20 + 1;
              puVar33 = puVar32;
              if (iVar31 < 2) goto LAB_03fc6884;
              uVar7 = *puVar20;
              pbVar28 = pbVar28 + 8;
              puVar27 = puVar27 + 8;
              iVar30 = iVar30 + 1;
              iVar31 = iVar31 + -1;
              puVar20 = puVar32;
            } while (*(char *)(param_1 + 0x98 +
                              ((ulong)((uVar7 & 0x3ff) + (uint)*pbVar21 * 0x200) & 0xfff)) == '\0');
            lVar18 = lVar16 + ((ulong)(uVar7 >> 7) & 0x38);
            bVar26 = *(byte *)(lVar1 + ((ulong)(uVar7 >> 0xd) & 1));
            uVar8 = *(ushort *)
                     (lVar17 + (ulong)(iVar10 + (uVar7 & 0x3ff) * 0x10 & 0xfff0 |
                                      (uint)(uVar7 >> 0xf) * 0xe ^ uVar11));
            uVar23 = (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8);
            if ((uVar7 >> 0xe & 1) == 0) goto switchD_03fc6590_caseD_0;
switchD_03fc6590_caseD_8:
            if (((uVar23 & 3) != 0) && (*pbVar28 < bVar26)) {
              *pbVar28 = bVar26;
              *puVar27 = *(undefined2 *)(lVar18 + (uVar23 & 3) * 2);
            }
switchD_03fc6590_caseD_9:
            uVar19 = uVar23 >> 2 & 3;
            if ((uVar19 != 0) && (pbVar28[1] < bVar26)) {
              pbVar28[1] = bVar26;
              puVar27[1] = *(undefined2 *)(lVar18 + uVar19 * 2);
            }
switchD_03fc6590_caseD_a:
            uVar19 = uVar23 >> 4 & 3;
            if ((uVar19 != 0) && (pbVar28[2] < bVar26)) {
              pbVar28[2] = bVar26;
              puVar27[2] = *(undefined2 *)(lVar18 + uVar19 * 2);
            }
switchD_03fc6590_caseD_b:
            uVar19 = uVar23 >> 6 & 3;
            if ((uVar19 != 0) && (pbVar28[3] < bVar26)) {
              pbVar28[3] = bVar26;
              puVar27[3] = *(undefined2 *)(lVar18 + uVar19 * 2);
            }
switchD_03fc6590_caseD_c:
            uVar19 = uVar23 >> 8 & 3;
            if ((uVar19 != 0) && (pbVar28[4] < bVar26)) {
              pbVar28[4] = bVar26;
              puVar27[4] = *(undefined2 *)(lVar18 + uVar19 * 2);
            }
switchD_03fc6590_caseD_d:
            uVar19 = uVar23 >> 10 & 3;
            if ((uVar19 != 0) && (pbVar28[5] < bVar26)) {
              pbVar28[5] = bVar26;
              puVar27[5] = *(undefined2 *)(lVar18 + uVar19 * 2);
            }
switchD_03fc6590_caseD_e:
            uVar19 = uVar23 >> 0xc & 3;
            puVar20 = puVar32;
            if ((uVar19 != 0) && (pbVar28[6] < bVar26)) {
              pbVar28[6] = bVar26;
              puVar27[6] = *(undefined2 *)(lVar18 + uVar19 * 2);
            }
switchD_03fc6590_caseD_f:
          } while ((uVar23 < 0x4000) || (bVar26 <= pbVar28[7]));
          uVar23 = uVar23 >> 0xe;
        } while( true );
      }
LAB_03fc6890:
      if ((int)uVar29 < 0) goto LAB_03fc6410;
      uVar7 = *puVar33;
      lVar18 = lVar16 + ((ulong)(uVar7 >> 7) & 0x38);
      bVar6 = *(byte *)(lVar1 + ((ulong)(uVar7 >> 0xd) & 1));
      pbVar2 = (byte *)(lVar17 + (ulong)(iVar10 + (uVar7 & 0x3ff) * 0x10 & 0xfff0 |
                                        (uint)(uVar7 >> 0xf) * 0xe ^ uVar11));
      bVar26 = *pbVar2;
      bVar5 = pbVar2[1];
      uVar34 = (uint)bVar5;
      switch(uVar7 >> 0xb & 8 | (uint)uVar19) {
      case 0:
        if ((0x3f < bVar26) && (*pbVar28 < bVar6)) {
          *pbVar28 = bVar6;
          *puVar27 = *(undefined2 *)(lVar18 + (ulong)(bVar26 >> 6) * 2);
        }
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
      case 1:
        uVar19 = (ulong)(bVar26 >> 4) & 3;
        if (((int)uVar19 != 0) && (pbVar28[1] < bVar6)) {
          pbVar28[1] = bVar6;
          puVar27[1] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
        if (uVar29 != 0) {
          uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_2:
          uVar19 = (ulong)(bVar26 >> 2) & 3;
          if (((int)uVar19 != 0) && (pbVar28[2] < bVar6)) {
            pbVar28[2] = bVar6;
            puVar27[2] = *(undefined2 *)(lVar18 + uVar19 * 2);
          }
          if (uVar29 != 0) {
            uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_3:
            uVar19 = (ulong)bVar26 & 3;
            if (((int)uVar19 != 0) && (pbVar28[3] < bVar6)) {
              pbVar28[3] = bVar6;
              puVar27[3] = *(undefined2 *)(lVar18 + uVar19 * 2);
            }
            if (uVar29 != 0) {
              uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_4:
              if ((0x3f < uVar34) && (pbVar28[4] < bVar6)) {
                pbVar28[4] = bVar6;
                puVar27[4] = *(undefined2 *)(lVar18 + (ulong)(bVar5 >> 6) * 2);
              }
              if (uVar29 != 0) {
                uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_5:
                uVar19 = (ulong)(bVar5 >> 4) & 3;
                if (((int)uVar19 != 0) && (pbVar28[5] < bVar6)) {
                  pbVar28[5] = bVar6;
                  puVar27[5] = *(undefined2 *)(lVar18 + uVar19 * 2);
                }
                if (uVar29 != 0) {
                  uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_6:
                  uVar19 = (ulong)(bVar5 >> 2) & 3;
                  if (((int)uVar19 != 0) && (pbVar28[6] < bVar6)) {
                    pbVar28[6] = bVar6;
                    puVar27[6] = *(undefined2 *)(lVar18 + uVar19 * 2);
                  }
                  if (uVar29 != 0) {
switchD_03fc68fc_caseD_7:
                    uVar34 = uVar34 & 3;
                    if (((bVar5 & 3) != 0) && (pbVar28[7] < bVar6)) {
LAB_03fc63fc:
                      pbVar28[7] = bVar6;
                      puVar27[7] = *(undefined2 *)(lVar18 + (ulong)uVar34 * 2);
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        goto switchD_03fc68fc_caseD_2;
      case 3:
        goto switchD_03fc68fc_caseD_3;
      case 4:
        goto switchD_03fc68fc_caseD_4;
      case 5:
        goto switchD_03fc68fc_caseD_5;
      case 6:
        goto switchD_03fc68fc_caseD_6;
      case 7:
        goto switchD_03fc68fc_caseD_7;
      case 8:
        if (((int)((ulong)bVar5 & 3) != 0) && (*pbVar28 < bVar6)) {
          *pbVar28 = bVar6;
          *puVar27 = *(undefined2 *)(lVar18 + ((ulong)bVar5 & 3) * 2);
        }
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
      case 9:
        uVar19 = (ulong)(bVar5 >> 2) & 3;
        if (((int)uVar19 != 0) && (pbVar28[1] < bVar6)) {
          pbVar28[1] = bVar6;
          puVar27[1] = *(undefined2 *)(lVar18 + uVar19 * 2);
        }
        if (uVar29 != 0) {
          uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_a:
          uVar19 = (ulong)(bVar5 >> 4) & 3;
          if (((int)uVar19 != 0) && (pbVar28[2] < bVar6)) {
            pbVar28[2] = bVar6;
            puVar27[2] = *(undefined2 *)(lVar18 + uVar19 * 2);
          }
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_b:
          if ((0x3f < uVar34) && (pbVar28[3] < bVar6)) {
            pbVar28[3] = bVar6;
            puVar27[3] = *(undefined2 *)(lVar18 + (ulong)(bVar5 >> 6) * 2);
          }
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_c:
          uVar19 = (ulong)bVar26 & 3;
          if (((int)uVar19 != 0) && (pbVar28[4] < bVar6)) {
            pbVar28[4] = bVar6;
            puVar27[4] = *(undefined2 *)(lVar18 + uVar19 * 2);
          }
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_d:
          uVar19 = (ulong)(bVar26 >> 2) & 3;
          if (((int)uVar19 != 0) && (pbVar28[5] < bVar6)) {
            pbVar28[5] = bVar6;
            puVar27[5] = *(undefined2 *)(lVar18 + uVar19 * 2);
          }
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
switchD_03fc68fc_caseD_e:
          uVar19 = (ulong)(bVar26 >> 4) & 3;
          if (((int)uVar19 != 0) && (pbVar28[6] < bVar6)) {
            pbVar28[6] = bVar6;
            puVar27[6] = *(undefined2 *)(lVar18 + uVar19 * 2);
          }
          if (uVar29 == 0) break;
switchD_03fc68fc_caseD_f:
          if ((bVar26 < 0x40) || (bVar6 <= pbVar28[7])) break;
          uVar34 = (uint)(bVar26 >> 6);
          goto LAB_03fc63fc;
        }
        break;
      case 10:
        goto switchD_03fc68fc_caseD_a;
      case 0xb:
        goto switchD_03fc68fc_caseD_b;
      case 0xc:
        goto switchD_03fc68fc_caseD_c;
      case 0xd:
        goto switchD_03fc68fc_caseD_d;
      case 0xe:
        goto switchD_03fc68fc_caseD_e;
      case 0xf:
        goto switchD_03fc68fc_caseD_f;
      }
LAB_03fc6410:
      uVar14 = uVar14 + 1;
      pbVar12 = pbVar12 + 2;
    } while (uVar14 < *pbVar13);
  }
  return;
}

