
uint FUN_0013aa00(long param_1,long param_2,char param_3,uint param_4,uint param_5,ushort *param_6,
                 uint param_7,uint param_8,short param_9,uint *param_10,uint *param_11,int *param_12
                 )

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  byte local_98 [56];
  
  if (param_5 <= param_4 - 1) {
    *param_10 = 0;
    *param_11 = 0;
    return 0xffff;
  }
  bVar2 = *(byte *)(param_1 + 0x20);
  bVar3 = *(byte *)(param_1 + 0x21);
  bVar4 = *(byte *)(param_1 + 0x22);
  uVar28 = param_7 & 0xffff;
  bVar5 = *(byte *)(param_1 + 0x23);
  bVar6 = *(byte *)(param_1 + 0x24);
  bVar7 = *(byte *)(param_1 + 0x25);
  bVar8 = *(byte *)(param_1 + 0x26);
  bVar9 = *(byte *)(param_1 + 0x27);
  *param_12 = 0;
  if (uVar28 == 0) {
    uVar27 = 0;
    local_98[0] = 0;
  }
  else {
    uVar26 = CONCAT11(*(undefined1 *)(param_1 + 0x74),*(undefined1 *)(param_1 + 0x75)) - 1;
    if (uVar26 != 0) {
      uVar10 = *(undefined1 *)(param_1 + 0x76);
      uVar11 = *(undefined1 *)(param_1 + 0x77);
      bVar12 = *(byte *)(param_1 + 0x70);
      bVar13 = *(byte *)(param_1 + 0x71);
      uVar27 = 0;
      sVar19 = 0;
      bVar14 = *(byte *)(param_1 + 0x72);
      bVar15 = *(byte *)(param_1 + 0x73);
      pbVar22 = local_98;
LAB_0013aad0:
      uVar30 = 1;
      pbVar23 = pbVar22;
      if (((uVar27 & 0xffff) < 0x37) && (*param_6 != 0)) {
        if ((*param_6 & 0xfc) == 0xd8) {
          if (param_6[1] != 0) {
            uVar30 = 2;
          }
          uVar29 = (ulong)uVar30;
        }
        else {
          uVar29 = 1;
        }
        uVar30 = 1;
        uVar31 = uVar26;
        do {
          while( true ) {
            uVar21 = uVar30 + uVar31 >> 1;
            pbVar23 = (byte *)(param_1 + ((ulong)bVar12 << 0x18 | (ulong)bVar13 << 0x10 |
                                          (ulong)bVar14 << 8 | (ulong)bVar15) +
                              (ulong)(uVar21 * CONCAT11(uVar10,uVar11)));
            bVar16 = *pbVar23;
            uVar32 = (uint)(byte)*param_6;
            if (uVar32 == bVar16) {
              uVar32 = (uint)*(byte *)((long)param_6 + 1);
              bVar16 = pbVar23[1];
            }
            if ((int)(uVar32 - bVar16) < 1) break;
LAB_0013ab48:
            uVar30 = uVar21 + 1;
            if (uVar31 < uVar30) {
              return 0xffff;
            }
          }
          if (-1 < (int)(uVar32 - bVar16)) {
            if ((uint)uVar29 < 2) goto LAB_0013aba0;
            bVar16 = (byte)param_6[1];
            bVar17 = pbVar23[uVar29];
            if (bVar16 == bVar17) {
              bVar16 = *(byte *)((long)param_6 + 3);
              bVar17 = (pbVar23 + uVar29)[1];
            }
            if (0 < (int)((uint)bVar16 - (uint)bVar17)) goto LAB_0013ab48;
            if (-1 < (int)((uint)bVar16 - (uint)bVar17)) goto LAB_0013aba0;
          }
          uVar31 = uVar21 - 1;
          if (uVar31 < uVar30) {
            return 0xffff;
          }
        } while( true );
      }
      goto LAB_0013abfc;
    }
    if (*param_6 != 0) {
      return 0xffff;
    }
    pbVar23 = local_98;
    uVar27 = 0;
LAB_0013abfc:
    *pbVar23 = 0;
  }
  lVar1 = param_1 + ((ulong)bVar6 << 0x18 | (ulong)bVar7 << 0x10 | (ulong)bVar8 << 8 | (ulong)bVar9)
  ;
  lVar25 = param_1 + ((ulong)bVar2 << 0x18 | (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar5
                     );
  if (uVar28 != (int)(short)uVar27) {
    param_7 = uVar27;
  }
  if (param_3 == '\x01') {
    uVar27 = param_7 & 0xffff;
    uVar28 = param_7 & 0xffff;
    param_7 = param_8;
    if (uVar27 != 0) {
      uVar27 = 0;
      pbVar22 = local_98;
      do {
        if (param_5 < param_4) {
          return 0xffff;
        }
        sVar19 = (short)param_7;
        bVar18 = false;
        uVar26 = param_4;
        uVar30 = param_5;
        do {
          while( true ) {
            uVar31 = uVar26 + (uVar30 - uVar26 >> 1);
            uVar21 = uVar31 - 1;
            pbVar23 = (byte *)(lVar25 + (ulong)(uVar21 * 6));
            if ((short)(*pbVar23 & 0x7f) <= sVar19) break;
            uVar32 = (uint)*(byte *)(lVar1 + sVar19 +
                                    ((ulong)pbVar23[1] << 0x10 | (ulong)pbVar23[2] << 8 |
                                    (ulong)pbVar23[3]));
            if ((int)(*pbVar22 - uVar32) < 0) {
              uVar30 = uVar21;
              if (uVar21 < uVar26) goto LAB_0013ad04;
            }
            else {
              if (*pbVar22 == uVar32) {
                bVar18 = true;
                param_4 = uVar31;
              }
              else {
                uVar26 = uVar31 + 1;
                uVar21 = uVar30;
              }
              uVar30 = uVar21;
              if (uVar21 < uVar26) goto LAB_0013ad04;
            }
          }
          uVar26 = uVar31 + 1;
        } while (uVar26 <= uVar30);
LAB_0013ad04:
        if (!bVar18) {
          return 0xffff;
        }
        if (param_5 < param_4) {
          return 0xffff;
        }
        bVar18 = false;
        uVar26 = param_4;
        uVar30 = param_5;
        do {
          while( true ) {
            uVar31 = uVar26 + (uVar30 - uVar26 >> 1);
            uVar21 = uVar31 - 1;
            pbVar23 = (byte *)(lVar25 + (ulong)(uVar21 * 6));
            if ((short)(*pbVar23 & 0x7f) <= sVar19) break;
            uVar32 = (uint)*(byte *)(lVar1 + sVar19 +
                                    ((ulong)pbVar23[1] << 0x10 | (ulong)pbVar23[2] << 8 |
                                    (ulong)pbVar23[3]));
            if ((int)(*pbVar22 - uVar32) < 0) {
              uVar30 = uVar21;
              if (uVar21 < uVar26) goto LAB_0013adac;
            }
            else {
              uVar26 = uVar31 + 1;
              if (*pbVar22 == uVar32) {
                bVar18 = true;
                param_5 = uVar31;
              }
              if (uVar30 < uVar26) goto LAB_0013adac;
            }
          }
          uVar30 = uVar21;
        } while (uVar26 <= uVar21);
LAB_0013adac:
        if (!bVar18) {
          return 0xffff;
        }
        uVar27 = uVar27 + 1 & 0xffff;
        pbVar22 = pbVar22 + 1;
        param_7 = param_7 + 1;
        *param_12 = *param_12 + 1;
      } while (uVar27 < uVar28);
    }
LAB_0013b040:
    lVar1 = param_1 + ((ulong)*(byte *)(param_1 + 0x28) << 0x18 |
                       (ulong)*(byte *)(param_1 + 0x29) << 0x10 |
                       (ulong)*(byte *)(param_1 + 0x2a) << 8 | (ulong)*(byte *)(param_1 + 0x2b));
    if (param_9 == 1) {
      if (param_2 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = param_2 + ((ulong)*(byte *)(param_1 + 0x10) << 0x18 |
                            (ulong)*(byte *)(param_1 + 0x11) << 0x10 |
                            (ulong)*(byte *)(param_1 + 0x12) << 8 | (ulong)*(byte *)(param_1 + 0x13)
                           ) + 0x3c;
      }
      if ((int)param_5 < (int)param_4) {
        return 0xffff;
      }
      if (lVar25 == 0) {
        iVar24 = param_4 - 1;
        uVar28 = param_4 * 2 - 1;
        while (*(byte *)(lVar1 + (ulong)uVar28) < 0x40) {
          iVar24 = iVar24 + 1;
          uVar28 = uVar28 + 2;
          if ((int)param_5 <= iVar24) {
            return 0xffff;
          }
        }
      }
      else {
        uVar27 = param_4 * 2 - 1;
        uVar28 = param_4 - 1;
        while ((((uint)(int)*(char *)(lVar25 + (ulong)uVar28) >> 6 & 1) != 0 ||
               ((-1 < *(char *)(lVar25 + (ulong)uVar28) && (*(byte *)(lVar1 + (ulong)uVar27) < 0x40)
                )))) {
          uVar28 = uVar28 + 1;
          uVar27 = uVar27 + 2;
          if ((int)param_5 <= (int)uVar28) {
            return 0xffff;
          }
        }
      }
    }
    else if (param_9 != -1) {
      if ((int)param_5 < (int)param_4) {
        return 0xffff;
      }
      iVar24 = param_4 - 1;
      uVar28 = param_4 * 2 - 2;
      while ((*(byte *)(lVar1 + (ulong)uVar28) >> 6 & 1) == 0) {
        iVar24 = iVar24 + 1;
        uVar28 = uVar28 + 2;
        if ((int)param_5 <= iVar24) {
          return 0xffff;
        }
      }
    }
    *param_10 = param_4;
    *param_11 = param_5;
    return param_7;
  }
  uVar28 = param_4;
  if (param_4 <= param_5) {
    uVar26 = 0;
    bVar18 = false;
    uVar30 = param_5;
    uVar27 = param_5;
LAB_0013ae68:
    do {
      while( true ) {
        uVar31 = uVar28 + (uVar27 - uVar28 >> 1);
        uVar32 = uVar31 - 1;
        pbVar22 = (byte *)(lVar25 + (ulong)(uVar32 * 6));
        pbVar23 = (byte *)(lVar1 + ((ulong)pbVar22[1] << 0x10 | (ulong)pbVar22[2] << 8 |
                                   (ulong)pbVar22[3]));
        uVar21 = *pbVar22 & 0x7f;
        uVar20 = (uint)local_98[0] - (uint)*pbVar23;
        if (uVar20 != 0) break;
        if (uVar21 < (param_7 & 0xffff)) {
          uVar20 = FUN_001006e0(local_98,pbVar23,uVar21);
          if ((uVar20 & 0xffff) == 0) {
            uVar20 = 1;
          }
        }
        else {
          uVar20 = FUN_001006e0(local_98,pbVar23,param_7);
          if ((uVar20 & 0xffff) == 0) goto LAB_0013aebc;
        }
LAB_0013af24:
        if (-1 < (short)uVar20) {
          uVar28 = uVar31 + 1;
          uVar32 = uVar27;
        }
        uVar27 = uVar32;
        if (uVar32 < uVar28) goto LAB_0013af58;
      }
      if ((uVar20 & 0xffff) != 0) goto LAB_0013af24;
LAB_0013aebc:
      if (uVar21 != (param_7 & 0xffff)) {
        bVar18 = true;
        uVar27 = uVar32;
        if (uVar32 < uVar28) break;
        goto LAB_0013ae68;
      }
      uVar21 = uVar31;
      if (uVar31 <= uVar26) {
        uVar27 = uVar30;
        uVar21 = uVar26;
      }
      uVar26 = uVar21;
      bVar18 = true;
      param_4 = uVar31;
      uVar30 = uVar27;
      uVar27 = uVar32;
    } while (uVar28 <= uVar32);
LAB_0013af58:
    if (uVar26 != 0) {
      if (uVar30 < uVar26) {
        return 0xffff;
      }
      param_5 = 0;
      do {
        while( true ) {
          uVar28 = uVar26 + (uVar30 - uVar26 >> 1);
          uVar31 = uVar28 - 1;
          pbVar22 = (byte *)(lVar25 + (ulong)(uVar31 * 6));
          pbVar23 = (byte *)(lVar1 + (short)param_8 +
                            ((ulong)pbVar22[1] << 0x10 | (ulong)pbVar22[2] << 8 | (ulong)pbVar22[3])
                            );
          uVar27 = *pbVar22 & 0x7f;
          uVar21 = (uint)local_98[0] - (uint)*pbVar23;
          if (uVar21 != 0) break;
          if (uVar27 < (param_7 & 0xffff)) {
            uVar21 = FUN_001006e0(local_98,pbVar23,uVar27);
            if ((uVar21 & 0xffff) == 0) {
              uVar21 = 1;
            }
          }
          else {
            uVar21 = FUN_001006e0(local_98,pbVar23,param_7);
            if ((uVar21 & 0xffff) == 0) goto LAB_0013afcc;
          }
LAB_0013b018:
          if (-1 < (short)uVar21) {
            uVar26 = uVar28 + 1;
            uVar31 = uVar30;
          }
          uVar30 = uVar31;
          if (uVar31 < uVar26) goto LAB_0013b030;
        }
        if ((uVar21 & 0xffff) != 0) goto LAB_0013b018;
LAB_0013afcc:
        if (uVar27 == (param_7 & 0xffff)) {
          uVar26 = uVar28 + 1;
          param_5 = uVar28;
          uVar31 = uVar30;
        }
        uVar30 = uVar31;
      } while (uVar26 <= uVar31);
LAB_0013b030:
      if (param_5 == 0) {
        return 0xffff;
      }
      goto LAB_0013b040;
    }
    if (bVar18) {
      return 0xfffe;
    }
  }
  if (((param_5 < uVar28) ||
      (pbVar22 = (byte *)(lVar25 + (ulong)(uVar28 * 6 - 6)), (*pbVar22 & 0x7f) < (param_7 & 0xffff))
      ) || (sVar19 = FUN_001006e0(local_98,lVar1 + ((ulong)pbVar22[1] << 0x10 |
                                                    (ulong)pbVar22[2] << 8 | (ulong)pbVar22[3]),
                                  param_7), sVar19 != 0)) {
    return 0xffff;
  }
  return 0xfffe;
LAB_0013aba0:
  param_6 = param_6 + uVar29;
  uVar27 = uVar27 + 1;
  if (1 < (uint)uVar29) {
    sVar19 = sVar19 + 1;
  }
  sVar19 = sVar19 + 1;
  pbVar23 = pbVar22 + 1;
  *pbVar22 = (byte)uVar21;
  pbVar22 = pbVar23;
  if ((int)uVar28 <= (int)sVar19) goto LAB_0013abfc;
  goto LAB_0013aad0;
}

