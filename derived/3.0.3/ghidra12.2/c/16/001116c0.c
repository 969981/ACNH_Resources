
undefined8 FUN_001116c0(long *param_1,short *param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  short sVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  ushort uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  uint uVar29;
  short local_64 [2];
  
  lVar11 = *(long *)(param_2 + 4);
  bVar3 = *(byte *)(lVar11 + 0x59);
  uVar25 = (ulong)bVar3;
  lVar13 = lVar11 + ((ulong)*(byte *)(lVar11 + 0x52) << 0x18 |
                     (ulong)*(byte *)(lVar11 + 0x53) << 0x10 | (ulong)*(byte *)(lVar11 + 0x54) << 8
                    | (ulong)*(byte *)(lVar11 + 0x55));
  uVar22 = (uint)bVar3;
  pbVar26 = (byte *)(lVar13 + ((ulong)*(byte *)(lVar11 + 0x56) << 0x10 |
                               (ulong)*(byte *)(lVar11 + 0x57) << 8 |
                              (ulong)*(byte *)(lVar11 + 0x58)) * uVar25);
  pbVar27 = (byte *)(lVar13 + (ulong)*(uint *)(param_2 + 0x1c));
  if ((*(byte *)((long)param_2 + 0x5f) & 0xf) == 1) {
    pbVar28 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x2b) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x2c) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x2d) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x2e)) +
                      (((ulong)*pbVar27 << 0x18 | (ulong)pbVar27[1] << 0x10 | (ulong)pbVar27[2] << 8
                       | (ulong)pbVar27[3]) >> ((ulong)(uVar22 * -8 + 0x20) & 0x3f)));
    uVar29 = 0;
  }
  else {
    pbVar27 = pbVar27 + uVar25;
    if (pbVar26 <= pbVar27) goto LAB_00111ea4;
    pbVar28 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x2b) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x2c) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x2d) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x2e)) +
                      (((ulong)*pbVar27 << 0x18 | (ulong)pbVar27[1] << 0x10 | (ulong)pbVar27[2] << 8
                       | (ulong)pbVar27[3]) >> ((ulong)(0x20 - (uVar22 * 8 & 0xf8)) & 0x3f)));
    bVar6 = *(byte *)(lVar11 + 0x1c);
    bVar5 = *(byte *)(lVar11 + 0x33);
    bVar4 = bVar5;
    if ((bVar6 & 3) != 0) {
      bVar4 = bVar5 + 1;
    }
    uVar17 = (ulong)*(byte *)(lVar11 + 0x32) + (ulong)*(byte *)(lVar11 + 0x30) +
             (ulong)*(byte *)(lVar11 + 0x31) + (ulong)bVar4 + 1;
    uVar24 = uVar17 >> 3;
    bVar4 = (pbVar28 + uVar24)[1];
    bVar9 = pbVar28[uVar24];
    bVar7 = *(byte *)(lVar11 + 0x2f);
    uVar21 = (uint)uVar17;
    uVar29 = 0x10 - bVar7;
    uVar18 = uVar29 - (uVar21 & 7);
    iVar2 = uVar21 + bVar7;
    uVar23 = 0xffffL >> ((ulong)uVar29 & 0x3f);
    uVar17 = (ushort)(CONCAT11(bVar9,bVar4) >> ((ulong)uVar18 & 0x3f)) & uVar23;
    iVar20 = iVar2;
    if (((char)bVar6 < '\0') && ((char)*pbVar28 < '\0')) {
      iVar20 = iVar2 + (uint)*(byte *)(lVar11 + 0x35);
    }
    if (uVar17 == 0) {
      pbVar15 = pbVar28;
      if (-1 < (char)*pbVar28) {
        uVar12 = (ushort)(iVar2 + 7U >> 3) & 0xff;
        pbVar15 = pbVar28 + (short)((CONCAT11(bVar9,bVar4) >> (ulong)(uVar18 & 0x1f) &
                                    (ushort)uVar23) + uVar12);
        bVar4 = *pbVar15;
        while (-1 < (char)bVar4) {
          pbVar15 = pbVar15 + (short)((CONCAT11(pbVar15[uVar24],(pbVar15 + uVar24)[1]) >>
                                       (ulong)(uVar18 & 0x1f) & (ushort)uVar23) + uVar12);
          bVar4 = *pbVar15;
        }
      }
      iVar2 = (uint)bVar5 + (uint)*(byte *)(lVar11 + 0x32);
      if ((bVar6 & 3) != 0) {
        iVar2 = iVar2 + 1;
      }
      uVar24 = (ulong)(iVar2 + 1) + (ulong)*(byte *)(lVar11 + 0x30) +
               (ulong)*(byte *)(lVar11 + 0x31);
      uVar17 = bVar7 + uVar24;
      if ((char)bVar6 < '\0') {
        uVar1 = uVar17 >> 3;
        bVar4 = *(byte *)(lVar11 + 0x35);
        uVar18 = (uint)uVar17;
        uVar17 = (ulong)(uVar18 + bVar4);
        uVar18 = (uint)(ushort)(CONCAT11(pbVar15[uVar1],(pbVar15 + uVar1)[1]) >>
                               (ulong)((0x10 - (uVar18 & 7)) - (uint)bVar4 & 0x1f)) &
                 0xffffU >> (ulong)(0x10 - bVar4 & 0x1f);
      }
      else {
        uVar18 = 0;
      }
      sVar10 = FUN_00112bf0(lVar11,param_1[6],*(undefined1 *)((long)param_1 + 0x4c),
                            pbVar15 + (((uint)(ushort)(CONCAT11(pbVar15[uVar24 >> 3],
                                                                (pbVar15 + (uVar24 >> 3))[1]) >>
                                                      (ulong)(uVar29 - ((uint)uVar24 & 7) & 0x1f)) &
                                       (uint)uVar23) + ((int)uVar17 + 7U >> 3 & 0xff) & 0xffff),
                            uVar18,*pbVar28 & 0x40,local_64);
      if ((sVar10 != 0) || (uVar29 = (uint)bVar3, *(short *)((long)param_1 + 0x4c) != local_64[0]))
      goto LAB_00111ea4;
    }
    else if (((ulong)*(ushort *)((long)param_1 + 0x4c) * 2 != uVar17) ||
            (sVar10 = FUN_001006e0(param_1[6],pbVar28 + (iVar20 + 7U >> 3 & 0xff)), uVar29 = uVar22,
            sVar10 != 0)) goto LAB_00111ea4;
  }
  if (pbVar27 < pbVar26) {
    lVar13 = *(long *)(param_2 + 4);
    bVar4 = *(byte *)(lVar13 + 0x25);
    uVar18 = (uint)*(byte *)(lVar13 + 0x33);
    if ((*(byte *)(lVar13 + 0x1c) & 3) != 0) {
      uVar18 = uVar18 + 1;
    }
    lVar13 = ((ulong)uVar18 & 0xff) + 1;
    do {
      lVar11 = param_1[6];
      if (*param_1 == 0) {
        uVar12 = 0;
        if (param_1[1] == 0) goto LAB_001118dc;
LAB_0011188c:
        lVar14 = *(long *)(param_2 + 4);
        if (*(byte *)(lVar14 + 0x31) == 0) {
          uVar16 = 0;
        }
        else {
          uVar17 = lVar13 + (ulong)*(byte *)(lVar14 + 0x32) + (ulong)*(byte *)(lVar14 + 0x30);
          uVar18 = 0x10 - *(byte *)(lVar14 + 0x31);
          uVar16 = CONCAT11(pbVar28[uVar17 >> 3],(pbVar28 + (uVar17 >> 3))[1]) >>
                   ((ulong)(uVar18 - ((uint)uVar17 & 7)) & 0x3f) &
                   (ushort)(0xffffL >> ((ulong)uVar18 & 0x3f));
        }
        pbVar15 = (byte *)(lVar14 + ((ulong)*(byte *)(lVar14 + 0x1d) << 0x18 |
                                     (ulong)*(byte *)(lVar14 + 0x1e) << 0x10 |
                                     (ulong)*(byte *)(lVar14 + 0x1f) << 8 |
                                    (ulong)*(byte *)(lVar14 + 0x20)) +
                          (((long)(short)((ushort)*(byte *)(lVar14 + 0x21) << 8) |
                           (ulong)*(byte *)(lVar14 + 0x22)) + (ulong)uVar16) * (ulong)bVar4);
        bVar5 = *pbVar15;
        uVar16 = (ushort)bVar5;
        if (bVar4 == 2) {
          uVar16 = CONCAT11(bVar5,pbVar15[1]);
        }
        sVar10 = FUN_001139a0(param_1,uVar12,uVar16);
      }
      else {
        lVar14 = *(long *)(param_2 + 4);
        if (*(byte *)(lVar14 + 0x30) == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = lVar13 + (ulong)*(byte *)(lVar14 + 0x32);
          uVar18 = 0x10 - *(byte *)(lVar14 + 0x30);
          uVar17 = (ulong)(ushort)(CONCAT11(pbVar28[uVar17 >> 3],(pbVar28 + (uVar17 >> 3))[1]) >>
                                  ((ulong)(uVar18 - ((uint)uVar17 & 7)) & 0x3f)) &
                   0xffffUL >> ((ulong)uVar18 & 0x3f);
        }
        pbVar15 = (byte *)(lVar14 + ((ulong)*(byte *)(lVar14 + 0x1d) << 0x18 |
                                     (ulong)*(byte *)(lVar14 + 0x1e) << 0x10 |
                                     (ulong)*(byte *)(lVar14 + 0x1f) << 8 |
                                    (ulong)*(byte *)(lVar14 + 0x20)) + uVar17 * bVar4);
        bVar5 = *pbVar15;
        uVar12 = (ushort)bVar5;
        if (bVar4 == 2) {
          uVar12 = CONCAT11(bVar5,pbVar15[1]);
        }
        if (param_1[1] != 0) goto LAB_0011188c;
LAB_001118dc:
        sVar10 = FUN_001139a0(param_1,uVar12,0);
      }
      if (sVar10 != 0) {
        *(uint *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + uVar29;
        lVar13 = *(long *)(param_2 + 4);
        param_2[0x2f] = 0x210;
        uVar22 = (uint)*(byte *)(lVar13 + 0x33);
        if ((*(byte *)(lVar13 + 0x1c) & 3) != 0) {
          uVar22 = uVar22 + 1;
        }
        if (*(byte *)(lVar13 + 0x32) == 0) {
          lVar11 = 0;
          uVar22 = (*(uint *)(lVar13 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar13 + 4) & 0xff00ff) << 8;
          uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
        }
        else {
          uVar29 = 0x10 - *(byte *)(lVar13 + 0x32);
          lVar11 = (long)(short)(CONCAT11(pbVar28[((ulong)uVar22 & 0xff) + 1 >> 3],
                                          (pbVar28 + (((ulong)uVar22 & 0xff) + 1 >> 3))[1]) >>
                                 ((ulong)(uVar29 - (uVar22 + 1 & 7)) & 0x3f) &
                                (ushort)(0xffffL >> ((ulong)uVar29 & 0x3f)));
          uVar22 = (*(uint *)(lVar13 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar13 + 4) & 0xff00ff) << 8;
          uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
        }
        if (uVar22 == 0x30000) {
          return 1;
        }
        iVar2 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) *
                (uint)*(byte *)(lVar13 + ((ulong)*(byte *)(lVar13 + 0x26) << 0x18 |
                                          (ulong)*(byte *)(lVar13 + 0x27) << 0x10 |
                                          (ulong)*(byte *)(lVar13 + 0x28) << 8 |
                                         (ulong)*(byte *)(lVar13 + 0x29)) + lVar11);
        *param_2 = param_2[2] +
                   ((short)((ulong)((long)iVar2 * 0x82082083) >> 0x25) - (short)(iVar2 >> 0x1f));
        return 1;
      }
      pbVar27 = pbVar27 + uVar25;
      if (pbVar26 <= pbVar27) break;
      lVar14 = *(long *)(param_2 + 4);
      pbVar28 = (byte *)(lVar14 + ((ulong)*(byte *)(lVar14 + 0x2b) << 0x18 |
                                   (ulong)*(byte *)(lVar14 + 0x2c) << 0x10 |
                                   (ulong)*(byte *)(lVar14 + 0x2d) << 8 |
                                  (ulong)*(byte *)(lVar14 + 0x2e)) +
                        (((ulong)*pbVar27 << 0x18 | (ulong)pbVar27[1] << 0x10 |
                          (ulong)pbVar27[2] << 8 | (ulong)pbVar27[3]) >>
                        ((ulong)(uVar22 * -8 + 0x20) & 0x3f)));
      bVar9 = *(byte *)(lVar14 + 0x1c);
      bVar6 = *(byte *)(lVar14 + 0x33);
      bVar5 = bVar6;
      if ((bVar9 & 3) != 0) {
        bVar5 = bVar6 + 1;
      }
      uVar17 = (ulong)*(byte *)(lVar14 + 0x32) + (ulong)*(byte *)(lVar14 + 0x30) +
               (ulong)*(byte *)(lVar14 + 0x31) + (ulong)bVar5 + 1;
      uVar24 = uVar17 >> 3;
      bVar5 = (pbVar28 + uVar24)[1];
      bVar7 = pbVar28[uVar24];
      bVar8 = *(byte *)(lVar14 + 0x2f);
      uVar19 = (uint)uVar17;
      uVar18 = 0x10 - bVar8;
      uVar21 = uVar18 - (uVar19 & 7);
      uVar23 = 0xffffL >> ((ulong)uVar18 & 0x3f);
      uVar29 = uVar29 + bVar3;
      iVar2 = uVar19 + bVar8;
      uVar17 = (ushort)(CONCAT11(bVar7,bVar5) >> ((ulong)uVar21 & 0x3f)) & uVar23;
      iVar20 = iVar2;
      if ((char)bVar9 < '\0') {
        if ((char)*pbVar28 < '\0') {
          iVar20 = iVar2 + (uint)*(byte *)(lVar14 + 0x35);
          goto joined_r0x00111a34;
        }
        if (uVar17 != 0) goto LAB_00111a50;
LAB_00111a90:
        pbVar15 = pbVar28;
        if (-1 < (char)*pbVar28) {
          uVar12 = (ushort)(iVar2 + 7U >> 3) & 0xff;
          pbVar15 = pbVar28 + (short)((CONCAT11(bVar7,bVar5) >> (ulong)(uVar21 & 0x1f) &
                                      (ushort)uVar23) + uVar12);
          bVar5 = *pbVar15;
          while (-1 < (char)bVar5) {
            pbVar15 = pbVar15 + (short)((CONCAT11(pbVar15[uVar24],(pbVar15 + uVar24)[1]) >>
                                         (ulong)(uVar21 & 0x1f) & (ushort)uVar23) + uVar12);
            bVar5 = *pbVar15;
          }
        }
        iVar2 = (uint)bVar6 + (uint)*(byte *)(lVar14 + 0x32);
        if ((bVar9 & 3) != 0) {
          iVar2 = iVar2 + 1;
        }
        uVar24 = (ulong)(iVar2 + 1) + (ulong)*(byte *)(lVar14 + 0x30) +
                 (ulong)*(byte *)(lVar14 + 0x31);
        uVar17 = bVar8 + uVar24;
        if ((char)bVar9 < '\0') {
          bVar5 = *(byte *)(lVar14 + 0x35);
          uVar21 = (uint)(ushort)(CONCAT11(pbVar15[uVar17 >> 3],(pbVar15 + (uVar17 >> 3))[1]) >>
                                 (ulong)((0x10 - ((uint)uVar17 & 7)) - (uint)bVar5 & 0x1f)) &
                   0xffffU >> (ulong)(0x10 - bVar5 & 0x1f);
          uVar17 = (ulong)((uint)uVar17 + (uint)bVar5);
        }
        else {
          uVar21 = 0;
        }
        sVar10 = FUN_00112bf0(lVar14,lVar11,*(undefined1 *)((long)param_1 + 0x4c),
                              pbVar15 + (((uint)(ushort)(CONCAT11(pbVar15[uVar24 >> 3],
                                                                  (pbVar15 + (uVar24 >> 3))[1]) >>
                                                        (ulong)(uVar18 - ((uint)uVar24 & 7) & 0x1f))
                                         & (uint)uVar23) + ((int)uVar17 + 7U >> 3 & 0xff) & 0xffff),
                              uVar21,*pbVar28 & 0x40,local_64);
        if ((sVar10 != 0) || (*(short *)((long)param_1 + 0x4c) != local_64[0])) break;
      }
      else {
joined_r0x00111a34:
        if (uVar17 == 0) goto LAB_00111a90;
LAB_00111a50:
        if (((ulong)*(ushort *)((long)param_1 + 0x4c) * 2 != uVar17) ||
           (sVar10 = FUN_001006e0(lVar11,pbVar28 + (iVar20 + 7U >> 3 & 0xff)), sVar10 != 0)) break;
      }
    } while( true );
  }
LAB_00111ea4:
  *(undefined1 *)((long)param_2 + 0x5f) = 3;
  return 0;
}

