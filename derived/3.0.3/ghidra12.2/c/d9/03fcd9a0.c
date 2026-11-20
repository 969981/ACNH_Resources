
void FUN_03fcd9a0(long param_1,long *param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  byte bVar21;
  ushort *puVar22;
  ulong uVar23;
  long lVar24;
  ushort *puVar25;
  ushort *puVar26;
  int iVar27;
  int iVar28;
  byte *pbVar29;
  uint uVar30;
  undefined2 *puVar31;
  byte *pbVar32;
  uint uVar33;
  uint uVar34;
  
  uVar14 = (ulong)param_3;
  lVar17 = param_1 + uVar14 * 0xb8;
  sVar6 = *(short *)(lVar17 + 0x45ad8);
  puVar3 = PTR_DAT_04bdf2b8;
  if (sVar6 != 0x1ff) {
    puVar3 = PTR_DAT_04bdf2b0;
  }
  pbVar15 = (byte *)((long)param_2 + (ulong)param_3 * 8 + 0x7f);
  uVar19 = 7;
  if (sVar6 != 0x1ff) {
    uVar19 = 8;
  }
  if (*pbVar15 != 0) {
    uVar11 = 1;
    if (sVar6 == 0x1ff) {
      uVar11 = 2;
    }
    lVar1 = lVar17 + 0x45ae2;
    lVar18 = param_2[(ulong)param_3 + 0xb];
    uVar16 = 0;
    bVar4 = *(byte *)(param_1 + 0x316a9f);
    iVar8 = (uint)*(byte *)(lVar17 + 0x45ae5) * 0x2000;
    lVar20 = *(long *)(param_1 + 0x88);
    uVar34 = (int)*(short *)(lVar17 + 0x45ad6) + (uint)*(ushort *)(param_1 + 0x45e7a);
    uVar2 = uVar34 & 0xf;
    uVar12 = (ulong)(uVar34 << (ulong)uVar11 & 0x3e0);
    uVar19 = uVar34 >> (ulong)uVar19 & 2;
    lVar17 = uVar14 * 8 + 0x80;
    do {
      iVar28 = (uint)*(byte *)((long)param_2 + lVar17) * (uint)bVar4;
      uVar11 = (int)*(short *)(param_1 + uVar14 * 0xb8 + 0x45ad4) * (uint)bVar4;
      if (*(int *)(*(long *)(param_1 + 0x45e68) + 0x58) != 0) {
        uVar11 = uVar11 & 0x1ff;
      }
      uVar30 = (bVar4 - 1) + (uint)((byte *)((long)param_2 + lVar17))[1] * (uint)bVar4 + uVar11;
      uVar11 = uVar11 + iVar28;
      uVar34 = (int)uVar11 >> 4;
      iVar27 = ((int)uVar30 >> 4) - uVar34;
      if (iVar27 == 0) {
        if (((uVar30 ^ 0xffffffff) & 0xf) == 0) {
          bVar9 = false;
          iVar27 = 1;
          uVar33 = 0xffffffff;
        }
        else {
          iVar27 = 0;
          uVar33 = uVar30 - uVar11;
          bVar9 = true;
        }
      }
      else {
        uVar33 = uVar30 & 0xf;
        bVar9 = false;
        if (uVar33 == 0xf) {
          uVar33 = 0xffffffff;
          iVar27 = iVar27 + 1;
        }
      }
      uVar23 = (ulong)uVar11 & 0xf;
      iVar28 = iVar28 - (int)uVar23;
      pbVar32 = (byte *)(param_2[1] + (long)iVar28);
      puVar31 = (undefined2 *)(*param_2 + (long)iVar28 * 2);
      uVar10 = (int)(uVar30 + 1) >> 4;
      uVar13 = (int)(uVar30 + 1 ^ uVar11) >> 4;
      uVar30 = uVar10;
      if ((uVar13 & 0x20) != 0) {
        uVar30 = uVar10 & 0x60;
      }
      puVar26 = (ushort *)
                (*(long *)(param_1 + uVar14 * 0xb8 + (ulong)(uVar11 >> 9 & 1 | uVar19) * 8 + 0x45b30
                          ) + uVar12 * 2 + (ulong)(uVar11 >> 4 & 0x1f) * 2);
      if (!bVar9) {
        puVar25 = puVar26 + 1;
        uVar7 = *puVar26;
        uVar10 = uVar10 & (int)(uVar13 << 0x1a) >> 0x1f;
        uVar11 = 0;
        if ((short)uVar7 < 0) {
          uVar11 = 0xf;
        }
        lVar24 = lVar18 + ((ulong)(uVar7 >> 5) & 0xe0);
        bVar21 = *(byte *)(lVar1 + ((ulong)(uVar7 >> 0xd) & 1));
        pbVar29 = (byte *)(lVar20 + (ulong)(iVar8 + (uint)*(ushort *)
                                                           (puVar3 + (ulong)(uVar11 ^ uVar2) * 2) +
                                            (uVar7 & 0x3ff) * 0x20 & 0xffff));
        if ((uVar7 >> 0xe & 1) != 0) {
          uVar11 = (uint)pbVar29[(byte)PTR_DAT_04bdf2c0[uVar23 ^ 0xf]];
          switch(uVar23) {
          case 0:
            goto switchD_03fcdcbc_caseD_0;
          case 1:
            goto switchD_03fcdcbc_caseD_1;
          case 2:
            goto switchD_03fcdcbc_caseD_2;
          case 3:
            goto switchD_03fcdcbc_caseD_3;
          case 4:
            goto switchD_03fcdcbc_caseD_4;
          case 5:
            goto switchD_03fcdcbc_caseD_5;
          case 6:
            goto switchD_03fcdcbc_caseD_6;
          case 7:
            goto switchD_03fcdcbc_caseD_7;
          case 8:
            goto switchD_03fcdcbc_caseD_8;
          case 9:
            goto switchD_03fcdcbc_caseD_9;
          case 10:
            goto switchD_03fcdcbc_caseD_a;
          case 0xb:
            goto switchD_03fcdcbc_caseD_b;
          case 0xc:
            goto switchD_03fcdcbc_caseD_c;
          case 0xd:
            goto switchD_03fcdcbc_caseD_d;
          case 0xe:
            goto switchD_03fcdcbc_caseD_e;
          case 0xf:
            goto switchD_03fcdcbc_caseD_f;
          }
        }
        bVar5 = pbVar29[(byte)PTR_DAT_04bdf2c0[uVar23]];
        uVar13 = (uint)bVar5;
        puVar22 = puVar25;
        switch(uVar23) {
        case 1:
          goto switchD_03fcdc7c_caseD_1;
        case 2:
          goto switchD_03fcdc7c_caseD_2;
        case 3:
          uVar11 = (uint)bVar5;
          goto joined_r0x03fcdc84;
        case 4:
          goto switchD_03fcdc7c_caseD_4;
        case 5:
          goto switchD_03fcdc7c_caseD_5;
        case 6:
          goto switchD_03fcdc7c_caseD_6;
        case 7:
          goto switchD_03fcdc7c_caseD_7;
        case 8:
          goto switchD_03fcdc7c_caseD_8;
        case 9:
          goto switchD_03fcdc7c_caseD_9;
        case 10:
          goto switchD_03fcdc7c_caseD_a;
        case 0xb:
          goto switchD_03fcdc7c_caseD_b;
        case 0xc:
          goto switchD_03fcdc7c_caseD_c;
        case 0xd:
          goto switchD_03fcdc7c_caseD_d;
        case 0xe:
          goto switchD_03fcdc7c_caseD_e;
        case 0xf:
          goto switchD_03fcdc7c_caseD_f;
        }
        do {
          bVar5 = *pbVar29;
          uVar13 = (uint)bVar5;
          if ((0xf < bVar5) && (*pbVar32 < bVar21)) {
            *pbVar32 = bVar21;
            *puVar31 = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
switchD_03fcdc7c_caseD_1:
          if (((uVar13 & 0xf) != 0) && (pbVar32[1] < bVar21)) {
            pbVar32[1] = bVar21;
            puVar31[1] = *(undefined2 *)(lVar24 + (ulong)(uVar13 & 0xf) * 2);
          }
switchD_03fcdc7c_caseD_2:
          bVar5 = pbVar29[1];
          uVar11 = (uint)bVar5;
          if ((0xf < uVar11) && (pbVar32[2] < bVar21)) {
            pbVar32[2] = bVar21;
            puVar31[2] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
joined_r0x03fcdc84:
          if (((bVar5 & 0xf) != 0) && (pbVar32[3] < bVar21)) {
            pbVar32[3] = bVar21;
            puVar31[3] = *(undefined2 *)(lVar24 + (ulong)(uVar11 & 0xf) * 2);
          }
switchD_03fcdc7c_caseD_4:
          bVar5 = pbVar29[2];
          uVar13 = (uint)bVar5;
          if ((0xf < bVar5) && (pbVar32[4] < bVar21)) {
            pbVar32[4] = bVar21;
            puVar31[4] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
switchD_03fcdc7c_caseD_5:
          if (((uVar13 & 0xf) != 0) && (pbVar32[5] < bVar21)) {
            pbVar32[5] = bVar21;
            puVar31[5] = *(undefined2 *)(lVar24 + (ulong)(uVar13 & 0xf) * 2);
          }
switchD_03fcdc7c_caseD_6:
          bVar5 = pbVar29[3];
          uVar13 = (uint)bVar5;
          if ((0xf < bVar5) && (pbVar32[6] < bVar21)) {
            pbVar32[6] = bVar21;
            puVar31[6] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
switchD_03fcdc7c_caseD_7:
          if (((uVar13 & 0xf) != 0) && (pbVar32[7] < bVar21)) {
            pbVar32[7] = bVar21;
            puVar31[7] = *(undefined2 *)(lVar24 + (ulong)(uVar13 & 0xf) * 2);
          }
switchD_03fcdc7c_caseD_8:
          bVar5 = pbVar29[0x20];
          uVar13 = (uint)bVar5;
          if ((0xf < bVar5) && (pbVar32[8] < bVar21)) {
            pbVar32[8] = bVar21;
            puVar31[8] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
switchD_03fcdc7c_caseD_9:
          if (((uVar13 & 0xf) != 0) && (pbVar32[9] < bVar21)) {
            pbVar32[9] = bVar21;
            puVar31[9] = *(undefined2 *)(lVar24 + (ulong)(uVar13 & 0xf) * 2);
          }
switchD_03fcdc7c_caseD_a:
          bVar5 = pbVar29[0x21];
          uVar13 = (uint)bVar5;
          if ((0xf < bVar5) && (pbVar32[10] < bVar21)) {
            pbVar32[10] = bVar21;
            puVar31[10] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
switchD_03fcdc7c_caseD_b:
          if (((uVar13 & 0xf) != 0) && (pbVar32[0xb] < bVar21)) {
            pbVar32[0xb] = bVar21;
            puVar31[0xb] = *(undefined2 *)(lVar24 + (ulong)(uVar13 & 0xf) * 2);
          }
switchD_03fcdc7c_caseD_c:
          bVar5 = pbVar29[0x22];
          uVar13 = (uint)bVar5;
          if ((0xf < bVar5) && (pbVar32[0xc] < bVar21)) {
            pbVar32[0xc] = bVar21;
            puVar31[0xc] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
switchD_03fcdc7c_caseD_d:
          if (((uVar13 & 0xf) != 0) && (pbVar32[0xd] < bVar21)) {
            pbVar32[0xd] = bVar21;
            puVar31[0xd] = *(undefined2 *)(lVar24 + (ulong)(uVar13 & 0xf) * 2);
          }
switchD_03fcdc7c_caseD_e:
          bVar5 = pbVar29[0x23];
          uVar13 = (uint)bVar5;
          puVar22 = puVar25;
          if ((0xf < bVar5) && (pbVar32[0xe] < bVar21)) {
            pbVar32[0xe] = bVar21;
            puVar31[0xe] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
switchD_03fcdc7c_caseD_f:
          uVar11 = uVar13 & 0xf;
          iVar28 = iVar27;
          if (((uVar13 & 0xf) != 0) && (pbVar32[0xf] < bVar21)) goto LAB_03fce138;
LAB_03fce144:
          uVar34 = uVar34 + 1;
          iVar27 = iVar28 + -1;
          pbVar32 = pbVar32 + 0x10;
          puVar31 = puVar31 + 0x10;
          if (uVar34 == uVar30) {
            if (uVar10 != 0) {
              bVar9 = uVar30 != uVar10;
              puVar22 = (ushort *)
                        (*(long *)(param_1 + uVar14 * 0xb8 + (ulong)(uVar30 >> 5 & 1 | uVar19) * 8 +
                                  0x45b30) + uVar12 * 2);
              uVar30 = uVar10;
              uVar10 = 0;
              if (bVar9) goto LAB_03fce174;
            }
            puVar26 = puVar22;
            if (1 < iVar28) goto LAB_03fcdaa0;
LAB_03fce180:
            uVar23 = 0;
            goto LAB_03fce184;
          }
LAB_03fce174:
          puVar25 = puVar22 + 1;
          puVar26 = puVar25;
          if (iVar28 < 2) goto LAB_03fce180;
          uVar7 = *puVar22;
          bVar21 = *(byte *)(lVar1 + ((ulong)(uVar7 >> 0xd) & 1));
          uVar11 = 0;
          if ((short)uVar7 < 0) {
            uVar11 = 0xf;
          }
          lVar24 = lVar18 + ((ulong)(uVar7 >> 5) & 0xe0);
          pbVar29 = (byte *)(lVar20 + (ulong)(iVar8 + (uint)*(ushort *)
                                                             (puVar3 + (ulong)(uVar11 ^ uVar2) * 2)
                                              + (uVar7 & 0x3ff) * 0x20 & 0xffff));
        } while ((uVar7 >> 0xe & 1) == 0);
switchD_03fcdcbc_caseD_0:
        uVar11 = (uint)pbVar29[0x23];
        uVar23 = (ulong)pbVar29[0x23] & 0xf;
        if (((int)uVar23 != 0) && (*pbVar32 < bVar21)) {
          *pbVar32 = bVar21;
          *puVar31 = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_1:
        if ((0xf < uVar11) && (pbVar32[1] < bVar21)) {
          pbVar32[1] = bVar21;
          puVar31[1] = *(undefined2 *)(lVar24 + (ulong)(uVar11 >> 4) * 2);
        }
switchD_03fcdcbc_caseD_2:
        uVar11 = (uint)pbVar29[0x22];
        uVar23 = (ulong)pbVar29[0x22] & 0xf;
        if (((int)uVar23 != 0) && (pbVar32[2] < bVar21)) {
          pbVar32[2] = bVar21;
          puVar31[2] = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_3:
        if ((0xf < uVar11) && (pbVar32[3] < bVar21)) {
          pbVar32[3] = bVar21;
          puVar31[3] = *(undefined2 *)(lVar24 + (ulong)(uVar11 >> 4) * 2);
        }
switchD_03fcdcbc_caseD_4:
        uVar11 = (uint)pbVar29[0x21];
        uVar23 = (ulong)pbVar29[0x21] & 0xf;
        if (((int)uVar23 != 0) && (pbVar32[4] < bVar21)) {
          pbVar32[4] = bVar21;
          puVar31[4] = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_5:
        if ((0xf < uVar11) && (pbVar32[5] < bVar21)) {
          pbVar32[5] = bVar21;
          puVar31[5] = *(undefined2 *)(lVar24 + (ulong)(uVar11 >> 4) * 2);
        }
switchD_03fcdcbc_caseD_6:
        uVar11 = (uint)pbVar29[0x20];
        uVar23 = (ulong)pbVar29[0x20] & 0xf;
        if (((int)uVar23 != 0) && (pbVar32[6] < bVar21)) {
          pbVar32[6] = bVar21;
          puVar31[6] = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_7:
        if ((0xf < uVar11) && (pbVar32[7] < bVar21)) {
          pbVar32[7] = bVar21;
          puVar31[7] = *(undefined2 *)(lVar24 + (ulong)(uVar11 >> 4) * 2);
        }
switchD_03fcdcbc_caseD_8:
        uVar11 = (uint)pbVar29[3];
        uVar23 = (ulong)pbVar29[3] & 0xf;
        if (((int)uVar23 != 0) && (pbVar32[8] < bVar21)) {
          pbVar32[8] = bVar21;
          puVar31[8] = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_9:
        if ((0xf < uVar11) && (pbVar32[9] < bVar21)) {
          pbVar32[9] = bVar21;
          puVar31[9] = *(undefined2 *)(lVar24 + (ulong)(uVar11 >> 4) * 2);
        }
switchD_03fcdcbc_caseD_a:
        uVar11 = (uint)pbVar29[2];
        uVar23 = (ulong)pbVar29[2] & 0xf;
        if (((int)uVar23 != 0) && (pbVar32[10] < bVar21)) {
          pbVar32[10] = bVar21;
          puVar31[10] = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_b:
        if ((0xf < uVar11) && (pbVar32[0xb] < bVar21)) {
          pbVar32[0xb] = bVar21;
          puVar31[0xb] = *(undefined2 *)(lVar24 + (ulong)(uVar11 >> 4) * 2);
        }
switchD_03fcdcbc_caseD_c:
        uVar11 = (uint)pbVar29[1];
        uVar23 = (ulong)pbVar29[1] & 0xf;
        if (((int)uVar23 != 0) && (pbVar32[0xc] < bVar21)) {
          pbVar32[0xc] = bVar21;
          puVar31[0xc] = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_d:
        if ((0xf < uVar11) && (pbVar32[0xd] < bVar21)) {
          pbVar32[0xd] = bVar21;
          puVar31[0xd] = *(undefined2 *)(lVar24 + (ulong)(uVar11 >> 4) * 2);
        }
switchD_03fcdcbc_caseD_e:
        uVar11 = (uint)*pbVar29;
        uVar23 = (ulong)*pbVar29 & 0xf;
        if (((int)uVar23 != 0) && (pbVar32[0xe] < bVar21)) {
          pbVar32[0xe] = bVar21;
          puVar31[0xe] = *(undefined2 *)(lVar24 + uVar23 * 2);
        }
switchD_03fcdcbc_caseD_f:
        puVar22 = puVar25;
        iVar28 = iVar27;
        if ((0xf < uVar11) && (pbVar32[0xf] < bVar21)) {
          uVar11 = uVar11 >> 4;
LAB_03fce138:
          pbVar32[0xf] = bVar21;
          puVar31[0xf] = *(undefined2 *)(lVar24 + (ulong)uVar11 * 2);
          iVar28 = iVar27;
        }
        goto LAB_03fce144;
      }
LAB_03fce184:
      if ((int)uVar33 < 0) goto LAB_03fcdaa0;
      uVar7 = *puVar26;
      bVar21 = *(byte *)(lVar1 + ((ulong)(uVar7 >> 0xd) & 1));
      uVar11 = 0;
      if ((short)uVar7 < 0) {
        uVar11 = 0xf;
      }
      lVar24 = lVar18 + ((ulong)(uVar7 >> 5) & 0xe0);
      pbVar29 = (byte *)(lVar20 + (ulong)(iVar8 + (uint)*(ushort *)
                                                         (puVar3 + (ulong)(uVar11 ^ uVar2) * 2) +
                                          (uVar7 & 0x3ff) * 0x20 & 0xffff));
      if ((uVar7 >> 0xe & 1) == 0) {
        switch(uVar23) {
        case 0:
          bVar5 = *pbVar29;
          if ((0xf < bVar5) && (*pbVar32 < bVar21)) {
            *pbVar32 = bVar21;
            *puVar31 = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
          break;
        case 2:
          goto switchD_03fce1e8_caseD_2;
        case 3:
          goto switchD_03fce1e8_caseD_3;
        case 4:
          goto switchD_03fce1e8_caseD_4;
        case 5:
          goto switchD_03fce1e8_caseD_5;
        case 6:
          goto switchD_03fce1e8_caseD_6;
        case 7:
          goto switchD_03fce1e8_caseD_7;
        case 8:
          goto switchD_03fce1e8_caseD_8;
        case 9:
          goto switchD_03fce1e8_caseD_9;
        case 10:
          goto switchD_03fce1e8_caseD_a;
        case 0xb:
          goto switchD_03fce1e8_caseD_b;
        case 0xc:
          goto switchD_03fce1e8_caseD_c;
        case 0xd:
          goto switchD_03fce1e8_caseD_d;
        case 0xe:
          goto switchD_03fce1e8_caseD_e;
        case 0xf:
          goto switchD_03fce1e8_caseD_f;
        }
        bVar5 = *pbVar29;
        if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[1] < bVar21)) {
          pbVar32[1] = bVar21;
          puVar31[1] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
        }
        if (uVar33 != 0) {
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_2:
          bVar5 = pbVar29[1];
          if ((0xf < bVar5) && (pbVar32[2] < bVar21)) {
            pbVar32[2] = bVar21;
            puVar31[2] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_3:
          bVar5 = pbVar29[1];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[3] < bVar21)) {
            pbVar32[3] = bVar21;
            puVar31[3] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_4:
          bVar5 = pbVar29[2];
          if ((0xf < bVar5) && (pbVar32[4] < bVar21)) {
            pbVar32[4] = bVar21;
            puVar31[4] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_5:
          bVar5 = pbVar29[2];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[5] < bVar21)) {
            pbVar32[5] = bVar21;
            puVar31[5] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_6:
          bVar5 = pbVar29[3];
          if ((0xf < bVar5) && (pbVar32[6] < bVar21)) {
            pbVar32[6] = bVar21;
            puVar31[6] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_7:
          bVar5 = pbVar29[3];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[7] < bVar21)) {
            pbVar32[7] = bVar21;
            puVar31[7] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_8:
          bVar5 = pbVar29[0x20];
          if ((0xf < bVar5) && (pbVar32[8] < bVar21)) {
            pbVar32[8] = bVar21;
            puVar31[8] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_9:
          bVar5 = pbVar29[0x20];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[9] < bVar21)) {
            pbVar32[9] = bVar21;
            puVar31[9] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_a:
          bVar5 = pbVar29[0x21];
          if ((0xf < bVar5) && (pbVar32[10] < bVar21)) {
            pbVar32[10] = bVar21;
            puVar31[10] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_b:
          bVar5 = pbVar29[0x21];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[0xb] < bVar21)) {
            pbVar32[0xb] = bVar21;
            puVar31[0xb] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_c:
          bVar5 = pbVar29[0x22];
          if ((0xf < bVar5) && (pbVar32[0xc] < bVar21)) {
            pbVar32[0xc] = bVar21;
            puVar31[0xc] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_d:
          bVar5 = pbVar29[0x22];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[0xd] < bVar21)) {
            pbVar32[0xd] = bVar21;
            puVar31[0xd] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
switchD_03fce1e8_caseD_e:
          bVar5 = pbVar29[0x23];
          if ((0xf < bVar5) && (pbVar32[0xe] < bVar21)) {
            pbVar32[0xe] = bVar21;
            puVar31[0xe] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
switchD_03fce1e8_caseD_f:
          uVar11 = pbVar29[0x23] & 0xf;
          if (((pbVar29[0x23] & 0xf) == 0) || (bVar21 <= pbVar32[0xf])) goto LAB_03fcdaa0;
LAB_03fcda8c:
          pbVar32[0xf] = bVar21;
          puVar31[0xf] = *(undefined2 *)(lVar24 + (ulong)uVar11 * 2);
        }
      }
      else {
        switch(uVar23) {
        case 0:
          bVar5 = pbVar29[0x23];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (*pbVar32 < bVar21)) {
            *pbVar32 = bVar21;
            *puVar31 = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 == 0) goto LAB_03fcdaa0;
          uVar33 = uVar33 - 1;
          break;
        case 2:
          goto switchD_03fce4d8_caseD_2;
        case 3:
          goto switchD_03fce4d8_caseD_3;
        case 4:
          goto switchD_03fce4d8_caseD_4;
        case 5:
          goto switchD_03fce4d8_caseD_5;
        case 6:
          goto switchD_03fce4d8_caseD_6;
        case 7:
          goto switchD_03fce4d8_caseD_7;
        case 8:
          goto switchD_03fce4d8_caseD_8;
        case 9:
          goto switchD_03fce4d8_caseD_9;
        case 10:
          goto switchD_03fce4d8_caseD_a;
        case 0xb:
          goto switchD_03fce4d8_caseD_b;
        case 0xc:
          goto switchD_03fce4d8_caseD_c;
        case 0xd:
          goto switchD_03fce4d8_caseD_d;
        case 0xe:
          goto switchD_03fce4d8_caseD_e;
        case 0xf:
          goto switchD_03fce4d8_caseD_f;
        }
        bVar5 = pbVar29[0x23];
        if ((0xf < bVar5) && (pbVar32[1] < bVar21)) {
          pbVar32[1] = bVar21;
          puVar31[1] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
        }
        if (uVar33 != 0) {
          uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_2:
          bVar5 = pbVar29[0x22];
          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[2] < bVar21)) {
            pbVar32[2] = bVar21;
            puVar31[2] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
          }
          if (uVar33 != 0) {
            uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_3:
            bVar5 = pbVar29[0x22];
            if ((0xf < bVar5) && (pbVar32[3] < bVar21)) {
              pbVar32[3] = bVar21;
              puVar31[3] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
            }
            if (uVar33 != 0) {
              uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_4:
              bVar5 = pbVar29[0x21];
              if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[4] < bVar21)) {
                pbVar32[4] = bVar21;
                puVar31[4] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
              }
              if (uVar33 != 0) {
                uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_5:
                bVar5 = pbVar29[0x21];
                if ((0xf < bVar5) && (pbVar32[5] < bVar21)) {
                  pbVar32[5] = bVar21;
                  puVar31[5] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
                }
                if (uVar33 != 0) {
                  uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_6:
                  bVar5 = pbVar29[0x20];
                  if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[6] < bVar21)) {
                    pbVar32[6] = bVar21;
                    puVar31[6] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
                  }
                  if (uVar33 != 0) {
                    uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_7:
                    bVar5 = pbVar29[0x20];
                    if ((0xf < bVar5) && (pbVar32[7] < bVar21)) {
                      pbVar32[7] = bVar21;
                      puVar31[7] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
                    }
                    if (uVar33 != 0) {
                      uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_8:
                      bVar5 = pbVar29[3];
                      if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[8] < bVar21)) {
                        pbVar32[8] = bVar21;
                        puVar31[8] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
                      }
                      if (uVar33 != 0) {
                        uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_9:
                        bVar5 = pbVar29[3];
                        if ((0xf < bVar5) && (pbVar32[9] < bVar21)) {
                          pbVar32[9] = bVar21;
                          puVar31[9] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
                        }
                        if (uVar33 != 0) {
                          uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_a:
                          bVar5 = pbVar29[2];
                          if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[10] < bVar21)) {
                            pbVar32[10] = bVar21;
                            puVar31[10] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
                          }
                          if (uVar33 != 0) {
                            uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_b:
                            bVar5 = pbVar29[2];
                            if ((0xf < bVar5) && (pbVar32[0xb] < bVar21)) {
                              pbVar32[0xb] = bVar21;
                              puVar31[0xb] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
                            }
                            if (uVar33 != 0) {
                              uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_c:
                              bVar5 = pbVar29[1];
                              if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[0xc] < bVar21)) {
                                pbVar32[0xc] = bVar21;
                                puVar31[0xc] = *(undefined2 *)(lVar24 + ((ulong)bVar5 & 0xf) * 2);
                              }
                              if (uVar33 != 0) {
                                uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_d:
                                bVar5 = pbVar29[1];
                                if ((0xf < bVar5) && (pbVar32[0xd] < bVar21)) {
                                  pbVar32[0xd] = bVar21;
                                  puVar31[0xd] = *(undefined2 *)(lVar24 + (ulong)(bVar5 >> 4) * 2);
                                }
                                if (uVar33 != 0) {
                                  uVar33 = uVar33 - 1;
switchD_03fce4d8_caseD_e:
                                  bVar5 = *pbVar29;
                                  if (((int)((ulong)bVar5 & 0xf) != 0) && (pbVar32[0xe] < bVar21)) {
                                    pbVar32[0xe] = bVar21;
                                    puVar31[0xe] = *(undefined2 *)
                                                    (lVar24 + ((ulong)bVar5 & 0xf) * 2);
                                  }
                                  if (uVar33 != 0) {
switchD_03fce4d8_caseD_f:
                                    if ((0xf < *pbVar29) && (pbVar32[0xf] < bVar21)) {
                                      uVar11 = (uint)(*pbVar29 >> 4);
                                      goto LAB_03fcda8c;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_03fcdaa0:
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 2;
    } while (uVar16 < *pbVar15);
  }
  return;
}

