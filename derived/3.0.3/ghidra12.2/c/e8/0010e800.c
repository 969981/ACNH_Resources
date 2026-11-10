
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0010e800(long param_1,short *param_2)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  byte *pbVar23;
  ushort uVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ushort uVar32;
  uint uVar33;
  ulong uVar34;
  byte bVar35;
  long lVar36;
  uint uVar37;
  
  lVar19 = *(long *)(param_2 + 4);
  uVar16 = (ulong)*(byte *)(lVar19 + 0x48) << 0x18 | (ulong)*(byte *)(lVar19 + 0x49) << 0x10 |
           (ulong)*(byte *)(lVar19 + 0x4a) << 8 | (ulong)*(byte *)(lVar19 + 0x4b);
  pbVar23 = (byte *)(lVar19 + uVar16);
  uVar17 = (ulong)*(byte *)(lVar19 + 0x4e) << 0x18 | (ulong)*(byte *)(lVar19 + 0x4f) << 0x10 |
           (ulong)*(byte *)(lVar19 + 0x50) << 8 | (ulong)*(byte *)(lVar19 + 0x51);
  pbVar27 = *(byte **)(param_1 + 0x30);
  bVar7 = *(byte *)(lVar19 + 0x4d);
  pbVar25 = pbVar23 + uVar17;
  uVar18 = (ulong)*(byte *)(lVar19 + 0x2b) << 0x18 | (ulong)*(byte *)(lVar19 + 0x2c) << 0x10 |
           (ulong)*(byte *)(lVar19 + 0x2d) << 8 | (ulong)*(byte *)(lVar19 + 0x2e);
  cVar8 = *(char *)(param_1 + 0x50);
  pbVar1 = (byte *)(lVar19 + uVar18);
  uVar22 = (uint)*(byte *)(lVar19 + 0x4c);
  if ((cVar8 != '\x01') || (pbVar26 = pbVar23, *(short *)pbVar27 != 0)) {
    uVar31 = (uint)*(ushort *)(param_1 + 0x4c) << 1;
    if ((uVar31 & 0xffff) != 0) {
      uVar4 = (int)*(char *)(lVar19 + 0x47) & 0xffff;
      uVar29 = 0x20 - bVar7;
      bVar35 = 0;
      lVar2 = lVar19 + ((ulong)*(byte *)(lVar19 + 0x42) << 0x18 |
                        (ulong)*(byte *)(lVar19 + 0x43) << 0x10 |
                        (ulong)*(byte *)(lVar19 + 0x44) << 8 | (ulong)*(byte *)(lVar19 + 0x45));
      uVar15 = 1;
      bVar14 = false;
      pbVar26 = pbVar25;
LAB_0010e9f0:
      uVar30 = (uint)*(byte *)(lVar19 + 0x46);
      if (uVar30 != 0) {
        if ((int)*(char *)(lVar19 + 0x47) == 1) goto LAB_0010ecb8;
        bVar9 = *pbVar27;
        bVar10 = pbVar27[1];
        iVar28 = 0;
        if (uVar4 == 2) {
          uVar30 = (uint)*(byte *)(lVar19 + 0x46);
          do {
            uVar37 = (int)(short)uVar30 + (int)(short)iVar28;
            pbVar3 = (byte *)(lVar2 + ((long)(int)uVar37 & 0xfffffffffffffffeU));
            bVar11 = *pbVar3;
            if (bVar9 == bVar11) {
              bVar11 = pbVar3[1];
              if (bVar10 == bVar11) goto LAB_0010ec64;
              bVar13 = bVar11 <= bVar10;
            }
            else {
              bVar13 = bVar11 <= bVar9;
            }
            uVar33 = (uVar37 >> 1) - 1;
            if (bVar13) {
              iVar28 = (uVar37 >> 1) + 1;
              uVar33 = uVar30;
            }
            uVar30 = uVar33;
            if ((short)uVar33 < (short)iVar28) goto LAB_0010ecb8;
          } while( true );
        }
        while( true ) {
          sVar6 = (short)iVar28;
          uVar37 = (int)(short)uVar30 + (int)sVar6;
          iVar28 = (int)uVar37 >> 1;
          uVar32 = (ushort)*(byte *)(lVar2 + (int)(iVar28 * uVar4));
          if (CONCAT11(bVar9,bVar10) == uVar32) break;
          sVar12 = (short)(uVar37 >> 1);
          sVar5 = sVar12 + -1;
          if (uVar32 <= CONCAT11(bVar9,bVar10)) {
            sVar6 = sVar12 + 1;
            sVar5 = (short)uVar30;
          }
          iVar28 = (int)sVar6;
          uVar30 = (uint)sVar5;
          if ((int)uVar30 < iVar28) goto LAB_0010ecb8;
        }
        goto LAB_0010ec68;
      }
      uVar30 = (uint)*pbVar27;
      lVar36 = 1;
      goto joined_r0x0010ea80;
    }
    goto LAB_0010ecd4;
  }
joined_r0x0010ecd0:
  if (pbVar26 == (byte *)0x0) {
LAB_0010ecd4:
    *(undefined1 *)((long)param_2 + 0x5f) = 3;
    return 0;
  }
  uVar31 = (uint)*pbVar26;
  pbVar23 = pbVar26;
  if ((*pbVar26 >> 5 & 1) == 0) {
    if (cVar8 != '\x01') goto LAB_0010ecd4;
    uVar4 = 0x20 - bVar7;
    do {
      if ((uVar31 >> 6 & 1) == 0) goto LAB_0010ecd4;
      uVar15 = 4;
      if ((uVar31 & 0x10) != 0) {
        uVar15 = 8;
      }
      pbVar27 = pbVar23 + (uVar15 >> 3);
      pbVar23 = pbVar23 + (((ulong)*pbVar27 << 0x18 | (ulong)pbVar27[1] << 0x10 |
                            (ulong)pbVar27[2] << 8 | (ulong)pbVar27[3]) >>
                           ((ulong)(uVar4 - (uVar15 & 4)) & 0x3f) &
                          0xffffffffUL >> ((ulong)uVar4 & 0x3f));
      uVar31 = (uint)*pbVar23;
    } while ((*pbVar23 >> 5 & 1) == 0);
  }
  iVar28 = 4;
  if ((uVar31 & 0x10) != 0) {
    iVar28 = 8;
  }
  uVar15 = (uint)bVar7;
  uVar31 = iVar28 + (uVar15 & (uint)(int)(char)(uVar31 << 1) >> 7);
  pbVar23 = pbVar23 + (uVar31 >> 3);
  uVar4 = 0x20 - uVar22;
  uVar17 = 0xffffffffL >> ((ulong)uVar4 & 0x3f);
  uVar16 = ((ulong)*pbVar23 << 0x18 | (ulong)pbVar23[1] << 0x10 | (ulong)pbVar23[2] << 8 |
           (ulong)pbVar23[3]) >> ((ulong)(uVar4 - (uVar31 & 7)) & 0x3f) & uVar17;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(int *)(param_2 + 0x1e) = (int)uVar16;
  if (*(char *)(param_1 + 0x50) != '\x01') {
    return 1;
  }
  if (**(short **)(param_1 + 0x30) == 0) {
LAB_0010edc8:
    if (pbVar25 < pbVar1) {
      do {
        while( true ) {
          bVar7 = *pbVar25;
          if ((char)bVar7 < '\0') break;
          bVar14 = (bVar7 & 0x10) != 0;
          iVar28 = 4;
          if (bVar14) {
            iVar28 = 8;
          }
          iVar20 = 1;
          if (bVar14) {
            iVar20 = (bVar7 & 0xf) + 2;
          }
          pbVar25 = pbVar25 + ((ulong)((uVar15 & (uint)(int)(char)(bVar7 << 1) >> 7) +
                                       (uVar22 & (uint)(int)(char)(bVar7 << 2) >> 7) + iVar28 +
                                       iVar20 * 8 + 7 >> 3) & 0xff);
          if (pbVar1 <= pbVar25) goto LAB_0010ee94;
        }
        if ((bVar7 >> 6 & 1) == 0) {
          if ((bVar7 >> 5 & 1) == 0) {
            return 0xa262;
          }
          uVar22 = 4;
          if ((bVar7 & 0x10) != 0) {
            uVar22 = 8;
          }
          uVar31 = (*(uint *)(pbVar25 + (uVar22 >> 3)) & 0xff00ff00) >> 8 |
                   (*(uint *)(pbVar25 + (uVar22 >> 3)) & 0xff00ff) << 8;
          pbVar23 = pbVar1 + ((uVar31 >> 0x10 | uVar31 << 0x10) >>
                              (ulong)(uVar4 - (uVar22 & 4) & 0x1f) & (uint)uVar17);
          bVar7 = *pbVar23;
          goto joined_r0x0010f310;
        }
        uVar31 = 4;
        if ((bVar7 & 0x10) != 0) {
          uVar31 = 8;
        }
        pbVar23 = pbVar25 + (uVar31 >> 3);
        pbVar25 = pbVar25 + (((ulong)*pbVar23 << 0x18 | (ulong)pbVar23[1] << 0x10 |
                              (ulong)pbVar23[2] << 8 | (ulong)pbVar23[3]) >>
                             ((ulong)((0x20 - uVar15) - (uVar31 & 4)) & 0x3f) &
                            0xffffffffUL >> ((ulong)(0x20 - uVar15) & 0x3f));
      } while (pbVar25 < pbVar1);
    }
  }
  else if ((*pbVar26 >> 6 & 1) != 0) {
    uVar31 = 4;
    if ((*pbVar26 & 0x10) != 0) {
      uVar31 = 8;
    }
    pbVar23 = pbVar26 + (uVar31 >> 3);
    pbVar25 = pbVar26 + (((ulong)*pbVar23 << 0x18 | (ulong)pbVar23[1] << 0x10 |
                          (ulong)pbVar23[2] << 8 | (ulong)pbVar23[3]) >>
                         ((ulong)((0x20 - uVar15) - (uVar31 & 4)) & 0x3f) &
                        0xffffffffUL >> ((ulong)(0x20 - uVar15) & 0x3f));
    goto LAB_0010edc8;
  }
LAB_0010ee94:
  pbVar23 = pbVar1 + (uVar16 & 0xffffffff);
  bVar7 = *pbVar23;
joined_r0x0010f310:
  if (-1 < (char)bVar7) {
    bVar7 = *(byte *)(lVar19 + 0x33);
    if ((*(byte *)(lVar19 + 0x1c) & 3) != 0) {
      bVar7 = bVar7 + 1;
    }
    uVar22 = 0x10 - *(byte *)(lVar19 + 0x2f);
    uVar17 = (ulong)*(byte *)(lVar19 + 0x32) + (ulong)*(byte *)(lVar19 + 0x30) +
             (ulong)*(byte *)(lVar19 + 0x31) + (ulong)bVar7 + 1;
    uVar31 = (uint)uVar17;
    do {
      pbVar23 = pbVar23 + ((long)(short)((CONCAT11(pbVar23[uVar17 >> 3],(pbVar23 + (uVar17 >> 3))[1]
                                                  ) >> (ulong)(uVar22 - (uVar31 & 7) & 0x1f) &
                                         (ushort)(0xffff >> (ulong)(uVar22 & 0x1f))) +
                                        ((ushort)(uVar31 + *(byte *)(lVar19 + 0x2f) + 7 >> 3) & 0xff
                                        )) & 0xffffffff);
    } while (-1 < (char)*pbVar23);
  }
  uVar31 = (int)pbVar23 - (int)pbVar1;
  *(uint *)(param_2 + 0x20) = uVar31;
  bVar35 = *(byte *)(lVar19 + 0x1c);
  pbVar23 = (byte *)(lVar19 + ((ulong)*(byte *)(lVar19 + 0x26) << 0x18 |
                               (ulong)*(byte *)(lVar19 + 0x27) << 0x10 |
                               (ulong)*(byte *)(lVar19 + 0x28) << 8 |
                              (ulong)*(byte *)(lVar19 + 0x29)));
  bVar7 = *(byte *)(lVar19 + 0x32);
  pbVar27 = pbVar1 + uVar16;
  uVar22 = (uint)*(byte *)(lVar19 + 0x33);
  if ((bVar35 & 3) != 0) {
    uVar22 = uVar22 + 1;
  }
  if (bVar7 == 0) {
    bVar9 = *pbVar23;
    cVar8 = *(char *)(param_1 + 0x51);
  }
  else {
    uVar4 = 0x10 - bVar7;
    bVar9 = pbVar23[(short)(CONCAT11(pbVar27[((ulong)uVar22 & 0xff) + 1 >> 3],
                                     (pbVar27 + (((ulong)uVar22 & 0xff) + 1 >> 3))[1]) >>
                            ((ulong)(uVar4 - (uVar22 + 1 & 7)) & 0x3f) &
                           (ushort)(0xffffL >> ((ulong)uVar4 & 0x3f)))];
    cVar8 = *(char *)(param_1 + 0x51);
  }
  uVar32 = (ushort)bVar9;
  if (cVar8 == '\0') {
    uVar16 = (ulong)bVar7 + (ulong)(byte)uVar22 + (ulong)*(byte *)(lVar19 + 0x30) +
             (ulong)*(byte *)(lVar19 + 0x31) + 1;
    uVar18 = uVar16 >> 3;
    uVar17 = uVar16 + *(byte *)(lVar19 + 0x2f);
    uVar4 = 0x10 - *(byte *)(lVar19 + 0x2f);
    uVar15 = uVar4 - ((uint)uVar16 & 7);
    uVar4 = 0xffff >> (ulong)(uVar4 & 0x1f);
    uVar29 = (uint)uVar17;
    if (((char)bVar35 < '\0') && ((char)*pbVar27 < '\0')) {
      bVar9 = *(byte *)(lVar19 + 0x35);
      uVar30 = 0xffffU >> (ulong)(0x10 - bVar9 & 0x1f) &
               (uint)(ushort)(CONCAT11(pbVar27[uVar17 >> 3],(pbVar27 + (uVar17 >> 3))[1]) >>
                             (ulong)((0x10 - (uVar29 & 7)) - (uint)bVar9 & 0x1f));
      uVar16 = (ulong)(uVar29 + bVar9);
    }
    else {
      uVar30 = 0;
      uVar16 = uVar17;
    }
    pbVar1 = pbVar1 + uVar31;
    uVar16 = (ulong)(uVar30 + ((ushort)(CONCAT11(pbVar27[uVar18],(pbVar27 + uVar18)[1]) >>
                                       (ulong)(uVar15 & 0x1f)) & uVar4) +
                     ((int)uVar16 + 7U >> 3 & 0xff) & 0xffff);
    pbVar27 = pbVar27 + uVar16;
    if (pbVar27 <= pbVar1) {
      iVar28 = 0x10 - (uVar29 & 7);
      if (bVar7 == 0) {
        bVar7 = *pbVar23;
        iVar20 = 0;
        uVar24 = uVar32;
        do {
          iVar21 = (int)uVar16;
          if (bVar7 <= uVar24) {
            iVar21 = iVar20;
          }
          uVar32 = (ushort)bVar7;
          if (bVar7 <= uVar24) {
            uVar32 = uVar24;
          }
          if (((char)bVar35 < '\0') && ((char)*pbVar27 < '\0')) {
            bVar9 = *(byte *)(lVar19 + 0x35);
            uVar34 = (ulong)(uVar29 + bVar9);
            uVar22 = 0xffffU >> (ulong)(0x10 - bVar9 & 0x1f) &
                     (uint)(ushort)(CONCAT11(pbVar27[uVar17 >> 3],(pbVar27 + (uVar17 >> 3))[1]) >>
                                   (ulong)(iVar28 - (uint)bVar9 & 0x1f));
          }
          else {
            uVar22 = 0;
            uVar34 = uVar17;
          }
          uVar22 = uVar22 + ((ushort)(CONCAT11(pbVar27[uVar18],(pbVar27 + uVar18)[1]) >>
                                     (ulong)(uVar15 & 0x1f)) & uVar4) +
                   ((int)uVar34 + 7U >> 3 & 0xff) & 0xffff;
          pbVar27 = pbVar27 + uVar22;
          uVar16 = (ulong)(uVar22 + (int)uVar16);
          iVar20 = iVar21;
          uVar24 = uVar32;
        } while (pbVar27 <= pbVar1);
      }
      else {
        uVar31 = 0x10 - bVar7;
        iVar20 = 0;
        uVar24 = uVar32;
        do {
          bVar7 = pbVar23[(short)(CONCAT11(pbVar27[((ulong)uVar22 & 0xff) + 1 >> 3],
                                           (pbVar27 + (((ulong)uVar22 & 0xff) + 1 >> 3))[1]) >>
                                  ((ulong)(uVar31 - (uVar22 + 1 & 7)) & 0x3f) &
                                 (ushort)(0xffffL >> ((ulong)uVar31 & 0x3f)))];
          uVar32 = (ushort)bVar7;
          if (bVar7 <= uVar24) {
            uVar32 = uVar24;
          }
          iVar21 = (int)uVar16;
          if (bVar7 <= uVar24) {
            iVar21 = iVar20;
          }
          if (((char)bVar35 < '\0') && ((char)*pbVar27 < '\0')) {
            bVar7 = *(byte *)(lVar19 + 0x35);
            uVar34 = (ulong)(uVar29 + bVar7);
            uVar30 = 0xffffU >> (ulong)(0x10 - bVar7 & 0x1f) &
                     (uint)(ushort)(CONCAT11(pbVar27[uVar17 >> 3],(pbVar27 + (uVar17 >> 3))[1]) >>
                                   (ulong)(iVar28 - (uint)bVar7 & 0x1f));
          }
          else {
            uVar30 = 0;
            uVar34 = uVar17;
          }
          uVar30 = uVar30 + ((ushort)(CONCAT11(pbVar27[uVar18],(pbVar27 + uVar18)[1]) >>
                                     (ulong)(uVar15 & 0x1f)) & uVar4) +
                   ((int)uVar34 + 7U >> 3 & 0xff) & 0xffff;
          pbVar27 = pbVar27 + uVar30;
          uVar16 = (ulong)(uVar30 + (int)uVar16);
          iVar20 = iVar21;
          uVar24 = uVar32;
        } while (pbVar27 <= pbVar1);
      }
      uVar22 = (*(uint *)(lVar19 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar19 + 4) & 0xff00ff) << 8;
      uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
      goto joined_r0x0010f06c;
    }
  }
  iVar21 = 0;
  uVar22 = (*(uint *)(lVar19 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar19 + 4) & 0xff00ff) << 8;
  uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
joined_r0x0010f06c:
  if (uVar22 != 0x30000) {
    iVar28 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) * (int)(short)uVar32;
    *param_2 = param_2[2] +
               ((short)((ulong)((long)iVar28 * 0x82082083) >> 0x25) - (short)(iVar28 >> 0x1f));
  }
  *(int *)(param_2 + 0x1c) = iVar21;
  return 1;
LAB_0010f174:
  if (cVar8 != '\x01') goto LAB_0010ecd4;
  goto joined_r0x0010ecd0;
LAB_0010ec64:
  iVar28 = (int)uVar37 >> 1;
LAB_0010ec68:
  uVar30 = (uint)(short)((short)iVar28 + 1);
  if (-1 < (int)uVar30) {
    lVar36 = 2;
joined_r0x0010ea80:
    if (pbVar26 < pbVar1) {
      uVar30 = uVar30 & 0xff;
      if (uVar17 == 0) {
        do {
          bVar9 = *pbVar26;
          uVar37 = (uint)(char)bVar9;
          bVar13 = (uVar37 & 0x10) != 0;
          uVar15 = 1;
          if (bVar13) {
            uVar15 = (uVar37 & 0xf) + 2;
          }
          iVar28 = 4;
          if (bVar13) {
            iVar28 = 8;
          }
          iVar28 = (uVar22 & (uint)(int)(char)((int)(char)bVar9 << 2) >> 7) +
                   ((uint)bVar7 & (uint)(int)(char)((int)(char)bVar9 << 1) >> 7) + iVar28;
          uVar33 = iVar28 + (uint)bVar35 * 8;
          uVar33 = (ushort)(CONCAT11(pbVar26[uVar33 >> 3],(pbVar26 + (uVar33 >> 3))[1]) >>
                           (ulong)(8 - (uVar33 & 7) & 0x1f)) & 0xff;
          if (uVar33 == uVar30) break;
          if ((((bVar35 != 0) || ((int)uVar37 < 0)) || (uVar30 <= uVar33)) ||
             (pbVar26 = pbVar26 + ((uVar15 << 3 | 7) + iVar28 >> 3), pbVar26 == pbVar25))
          goto LAB_0010ecb8;
          bVar35 = 0;
        } while (pbVar26 < pbVar1);
      }
      else {
        do {
          while( true ) {
            bVar9 = *pbVar26;
            uVar37 = (uint)(char)bVar9;
            bVar13 = (uVar37 & 0x10) != 0;
            uVar15 = 1;
            if (bVar13) {
              uVar15 = (uVar37 & 0xf) + 2;
            }
            iVar28 = 4;
            if (bVar13) {
              iVar28 = 8;
            }
            iVar28 = (uVar22 & (uint)(int)(char)((int)(char)bVar9 << 2) >> 7) +
                     ((uint)bVar7 & (uint)(int)(char)((int)(char)bVar9 << 1) >> 7) + iVar28;
            uVar33 = iVar28 + (uint)bVar35 * 8;
            uVar33 = (ushort)(CONCAT11(pbVar26[uVar33 >> 3],(pbVar26 + (uVar33 >> 3))[1]) >>
                             (ulong)(8 - (uVar33 & 7) & 0x1f)) & 0xff;
            if (uVar33 == uVar30) goto LAB_0010ec80;
            if (((bVar35 != 0) || ((int)uVar37 < 0)) || (uVar30 <= uVar33)) break;
            pbVar26 = pbVar26 + ((uVar15 << 3 | 7) + iVar28 >> 3);
            if (pbVar26 == pbVar25) goto LAB_0010ecb8;
            bVar35 = 0;
            if (pbVar1 <= pbVar26) goto LAB_0010ec80;
          }
          if (((bVar35 != 0) || (pbVar26 != pbVar25)) || ((bVar14 || (uVar33 <= uVar30))))
          goto LAB_0010ecb8;
          bVar35 = 0;
          bVar14 = true;
          pbVar26 = pbVar23;
        } while (uVar16 < uVar18);
      }
    }
LAB_0010ec80:
    pbVar27 = pbVar27 + lVar36;
    uVar31 = uVar31 - (int)lVar36;
    if (bVar35 + 1 < uVar15) {
      bVar35 = bVar35 + 1;
      if ((uVar31 & 0xffff) == 0) goto LAB_0010f174;
      goto LAB_0010e9f0;
    }
    if ((uVar31 & 0xffff) == 0) goto joined_r0x0010ecd0;
    if ((*pbVar26 >> 6 & 1) != 0) {
      uVar30 = 4;
      if ((*pbVar26 & 0x10) != 0) {
        uVar30 = 8;
      }
      pbVar3 = pbVar26 + (uVar30 >> 3);
      bVar35 = 0;
      pbVar26 = pbVar26 + (((ulong)*pbVar3 << 0x18 | (ulong)pbVar3[1] << 0x10 |
                            (ulong)pbVar3[2] << 8 | (ulong)pbVar3[3]) >>
                           ((ulong)(uVar29 - (uVar30 & 4)) & 0x3f) &
                          0xffffffffUL >> ((ulong)uVar29 & 0x3f));
      goto LAB_0010e9f0;
    }
  }
LAB_0010ecb8:
  *(undefined1 *)((long)param_2 + 0x5f) = 4;
  return 0;
}

