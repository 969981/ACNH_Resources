
/* WARNING: Type propagation algorithm not settling */

byte * FUN_00119c10(long param_1,long param_2,ulong param_3,byte *param_4,byte param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  byte local_64 [4];
  
  pbVar2 = (byte *)(param_1 + 0x61ea0);
  uVar3 = (uint)param_5;
  local_64[0] = 0;
  *param_4 = 0;
  if (param_5 == 0) {
    bVar14 = 0;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    uVar25 = 0;
    pbVar24 = pbVar2;
LAB_00119c7c:
    do {
      if (uVar25 == 0) {
        uVar10 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b));
LAB_00119d0c:
        if (uVar10 <= ((uint)param_3 & 0xffff)) {
          return (byte *)0x0;
        }
      }
      else {
        uVar10 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b));
        if (uVar10 != 0) {
          uVar12 = 0;
          do {
            uVar4 = 0;
            if (((int)param_3 + 1U & 0xffff) < uVar10) {
              uVar4 = (int)param_3 + 1;
            }
            param_3 = (ulong)uVar4;
            if ((*(byte *)(param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                                      (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                                      (ulong)*(byte *)(param_2 + 0x22) << 8 |
                                     (ulong)*(byte *)(param_2 + 0x23)) +
                          (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),
                                          *(undefined1 *)(param_2 + 0x2f)) * (param_3 & 0xffff)) & 3
                ) != 0) goto LAB_00119d0c;
            uVar12 = uVar12 + 1;
          } while ((uVar12 & 0xffff) < uVar10);
        }
        param_3 = 0;
        if (uVar10 == 0) {
          return (byte *)0x0;
        }
      }
      pbVar11 = (byte *)(param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                                    (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                                    (ulong)*(byte *)(param_2 + 0x22) << 8 |
                                   (ulong)*(byte *)(param_2 + 0x23)) +
                        (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),
                                        *(undefined1 *)(param_2 + 0x2f)) * (param_3 & 0xffff));
      bVar5 = *pbVar11;
      *(char *)(param_1 + 0x6079e) = (char)(bVar5 & 3);
      bVar6 = pbVar11[2];
      bVar14 = bVar6 & 0x7f;
      *(byte *)(param_1 + 0x607a1) = bVar14;
      *(byte *)(param_1 + 0x6079f) = bVar6 >> 1 & 0x3f;
      uVar10 = pbVar11[4] & 0x7f;
      bVar6 = pbVar11[4] >> 1 & 0x3f;
      *(char *)(param_1 + 0x607a2) = (char)uVar10;
      *(byte *)(param_1 + 0x607a0) = bVar6;
      if (1 < (bVar5 & 3) - 1) {
        return (byte *)0x0;
      }
      if (0x6f < bVar14) {
        return (byte *)0x0;
      }
      if (0x6f < uVar10) {
        return (byte *)0x0;
      }
      bVar5 = *(byte *)(param_2 + 0x2f);
      uVar7 = CONCAT11(*(undefined1 *)(param_2 + 0x2e),bVar5);
      uVar23 = (ulong)uVar7;
      pbVar11 = (byte *)(param_2 +
                        ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                         (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                         (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23)));
      if (bVar6 == 0) {
        pbVar9 = (byte *)FUN_00119860(param_1,param_2,param_3,local_64,1);
        if (pbVar9 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if ((pbVar11[uVar23 * (param_3 & 0xffff)] >> 4 & 1) == 0) {
          if (uVar3 - 1 == uVar25) {
            if (param_5 < 2) {
              *param_4 = *param_4 + local_64[0];
              return pbVar9;
            }
            FUN_00100350(param_1 + (ulong)*param_4 * 2 + 0x61ea0,pbVar9);
            *param_4 = *param_4 + local_64[0];
            return pbVar2;
          }
          FUN_00100350(param_1 + (ulong)*param_4 * 2 + 0x61ea0,pbVar9);
          bVar14 = *param_4 + local_64[0];
          *param_4 = bVar14;
          pbVar24 = pbVar24 + (ulong)local_64[0] * 2;
          uVar25 = uVar25 + 1 & 0xffff;
          if (uVar3 <= uVar25) break;
          goto LAB_00119c7c;
        }
        uVar23 = (ulong)local_64[0];
        cVar8 = FUN_00114550(pbVar9,param_1 + (ulong)*param_4 * 2 + 0x61ea0,uVar23);
        bVar14 = *param_4 + cVar8;
        *param_4 = bVar14;
        if (uVar3 - 1 == uVar25) {
          return pbVar2;
        }
        pbVar24 = pbVar24 + uVar23 * 2;
      }
      else {
        bVar6 = bVar14;
        if ((byte)(bVar5 - 5) <= bVar14) {
          bVar6 = bVar5 - 5;
        }
        pbVar19 = pbVar11 + uVar23 * (param_3 & 0xffff) + (ulong)bVar6 + 5;
        uVar12 = (uint)uVar7;
        pbVar9 = pbVar11 + (int)(CONCAT11(*(undefined1 *)(param_2 + 0x2a),
                                          *(undefined1 *)(param_2 + 0x2b)) * uVar12 + -1);
        bVar14 = bVar14 - bVar6;
        if (bVar14 != 0) {
          do {
            if (pbVar9 <= pbVar19) {
              pbVar19 = pbVar11;
            }
            if (*pbVar19 != 0) {
              return (byte *)0x0;
            }
            bVar6 = bVar14;
            if (uVar12 <= bVar14) {
              bVar6 = bVar5 - 1;
            }
            bVar14 = bVar14 - bVar6;
            pbVar19 = pbVar19 + (ulong)bVar6 + 1;
          } while (bVar14 != 0);
        }
        lVar15 = 0;
        if (uVar23 != 0) {
          lVar15 = ((long)pbVar19 - (long)pbVar11) / (long)uVar23;
        }
        lVar15 = ((long)pbVar19 - (long)pbVar11) - lVar15 * uVar23;
        if (lVar15 == 0) {
          pbVar17 = pbVar19;
          if (pbVar9 <= pbVar19) {
            pbVar17 = pbVar11;
          }
          pbVar19 = pbVar17 + 1;
          if (*pbVar17 != 0) {
            return (byte *)0x0;
          }
          lVar15 = 0;
          if (uVar23 != 0) {
            lVar15 = ((long)pbVar19 - (long)pbVar11) / (long)uVar23;
          }
          lVar15 = ((long)pbVar19 - (long)pbVar11) - lVar15 * uVar23;
        }
        uVar13 = (uint)bVar5;
        uVar22 = uVar13 - (int)lVar15;
        uVar4 = uVar10;
        if ((uVar22 & 0xff) <= uVar10) {
          uVar4 = uVar22;
        }
        pbVar17 = pbVar24;
        if ((uVar4 & 0xff) == 0) {
          uVar10 = uVar10 - uVar4;
          if ((uVar10 & 0xff) != 0) goto LAB_0011a040;
        }
        else {
          uVar22 = ~uVar13 + (int)lVar15;
          uVar21 = uVar22 & 0xff;
          uVar20 = uVar4 & 7;
          if (uVar21 <= (~uVar10 & 0xff)) {
            uVar22 = ~uVar10;
          }
          uVar22 = -uVar22 - 2 & 0xff;
          pbVar18 = (byte *)(ulong)uVar22;
          pbVar16 = pbVar19;
          pbVar1 = (byte *)(ulong)uVar21;
          if (6 < uVar22) {
            uVar22 = uVar4 - uVar20;
            do {
              *pbVar24 = *pbVar19;
              pbVar24[1] = pbVar19[1];
              pbVar24[2] = pbVar19[2];
              pbVar24[3] = pbVar19[3];
              pbVar24[4] = pbVar19[4];
              pbVar24[5] = pbVar19[5];
              pbVar24[6] = pbVar19[6];
              pbVar18 = pbVar19 + 8;
              pbVar1 = pbVar24 + 8;
              uVar22 = uVar22 - 8;
              pbVar24[7] = pbVar19[7];
              pbVar19 = pbVar18;
              pbVar24 = pbVar1;
              pbVar16 = pbVar18;
              pbVar17 = pbVar1;
            } while ((uVar22 & 0xff) != 0);
          }
          pbVar24 = pbVar1;
          pbVar19 = pbVar18;
          if (uVar20 != 0) {
            pbVar18 = pbVar17;
            do {
              pbVar19 = pbVar16 + 1;
              uVar20 = uVar20 - 1;
              pbVar24 = pbVar18 + 1;
              *pbVar18 = *pbVar16;
              pbVar16 = pbVar19;
              pbVar18 = pbVar24;
            } while ((uVar20 & 0xff) != 0);
          }
          uVar10 = uVar10 - uVar4;
          if ((uVar10 & 0xff) != 0) {
LAB_0011a040:
            do {
              while( true ) {
                if (pbVar9 <= pbVar19) {
                  pbVar19 = pbVar11;
                }
                if (*pbVar19 != 0) {
                  return (byte *)0x0;
                }
                uVar4 = uVar10;
                if (uVar12 <= (uVar10 & 0xff)) {
                  uVar4 = uVar13 - 1;
                }
                pbVar19 = pbVar19 + 1;
                if ((uVar4 & 0xff) == 0) break;
                uVar22 = uVar4 & 7;
                pbVar18 = pbVar24;
                if (6 < (uVar4 - 1 & 0xff)) {
                  uVar21 = uVar4 - uVar22;
                  do {
                    *pbVar24 = *pbVar19;
                    pbVar24[1] = pbVar19[1];
                    pbVar24[2] = pbVar19[2];
                    pbVar24[3] = pbVar19[3];
                    pbVar24[4] = pbVar19[4];
                    pbVar24[5] = pbVar19[5];
                    pbVar24[6] = pbVar19[6];
                    pbVar17 = pbVar19 + 7;
                    pbVar18 = pbVar24 + 8;
                    uVar21 = uVar21 - 8;
                    pbVar19 = pbVar19 + 8;
                    pbVar24[7] = *pbVar17;
                    pbVar24 = pbVar18;
                    pbVar17 = pbVar18;
                  } while ((uVar21 & 0xff) != 0);
                }
                pbVar24 = pbVar17;
                if (uVar22 != 0) {
                  pbVar17 = pbVar19;
                  do {
                    pbVar19 = pbVar17 + 1;
                    uVar22 = uVar22 - 1;
                    pbVar24 = pbVar18 + 1;
                    *pbVar18 = *pbVar17;
                    pbVar17 = pbVar19;
                    pbVar18 = pbVar24;
                  } while ((uVar22 & 0xff) != 0);
                }
                uVar10 = uVar10 - uVar4;
                pbVar17 = pbVar24;
                if ((uVar10 & 0xff) == 0) goto LAB_0011a128;
              }
              uVar10 = uVar10 - uVar4;
              pbVar17 = pbVar24;
            } while ((uVar10 & 0xff) != 0);
          }
        }
LAB_0011a128:
        bVar14 = *param_4 + *(char *)(param_1 + 0x607a0);
        *param_4 = bVar14;
      }
      uVar25 = uVar25 + 1 & 0xffff;
    } while (uVar25 < uVar3);
  }
  *(undefined2 *)(param_1 + (ulong)bVar14 * 2 + 0x61ea0) = 0;
  return pbVar2;
}

