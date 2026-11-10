
undefined8 FUN_00111f40(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  ushort uVar19;
  ushort uVar20;
  short sVar21;
  long lVar22;
  int iVar23;
  ushort uVar24;
  ushort uVar25;
  uint uVar26;
  char *pcVar27;
  uint uVar28;
  ushort uVar29;
  int iVar30;
  uint uVar31;
  
  bVar8 = *(byte *)(param_1 + 0x5f);
  if ((bVar8 & 0xf) == 3) {
    return 0;
  }
  if (bVar8 >> 4 == 3) {
    lVar22 = *(long *)(param_1 + 8);
    pbVar18 = (byte *)(lVar22 + ((ulong)*(byte *)(lVar22 + 0x52) << 0x18 |
                                 (ulong)*(byte *)(lVar22 + 0x53) << 0x10 |
                                 (ulong)*(byte *)(lVar22 + 0x54) << 8 |
                                (ulong)*(byte *)(lVar22 + 0x55)) + (ulong)*(uint *)(param_1 + 0x38))
    ;
    pcVar27 = (char *)(lVar22 + ((ulong)*(byte *)(lVar22 + 0x2b) << 0x18 |
                                 (ulong)*(byte *)(lVar22 + 0x2c) << 0x10 |
                                 (ulong)*(byte *)(lVar22 + 0x2d) << 8 |
                                (ulong)*(byte *)(lVar22 + 0x2e)) +
                      (((ulong)*pbVar18 << 0x18 | (ulong)pbVar18[1] << 0x10 | (ulong)pbVar18[2] << 8
                       | (ulong)pbVar18[3]) >>
                      ((ulong)((uint)*(byte *)(lVar22 + 0x59) * -8 + 0x20) & 0x3f)));
    iVar23 = 1;
  }
  else {
    lVar22 = *(long *)(param_1 + 8);
    iVar23 = (uint)(bVar8 >> 4 != 1) << 1;
    pcVar27 = (char *)(lVar22 + ((ulong)*(byte *)(lVar22 + 0x2b) << 0x18 |
                                 (ulong)*(byte *)(lVar22 + 0x2c) << 0x10 |
                                 (ulong)*(byte *)(lVar22 + 0x2d) << 8 |
                                (ulong)*(byte *)(lVar22 + 0x2e)) +
                      (ulong)(uint)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c)));
  }
  bVar15 = *(byte *)(lVar22 + 0x1c);
  bVar9 = *(byte *)(lVar22 + 0x32);
  uVar26 = (uint)*(byte *)(lVar22 + 0x33);
  if ((bVar15 & 3) != 0) {
    uVar26 = uVar26 + 1;
  }
  uVar17 = (ulong)uVar26;
  if (bVar9 == 0) {
    uVar24 = 0;
  }
  else {
    uVar28 = 0x10 - bVar9;
    uVar24 = CONCAT11(pcVar27[(uVar17 & 0xff) + 1 >> 3],(pcVar27 + ((uVar17 & 0xff) + 1 >> 3))[1])
             >> ((ulong)(uVar28 - (uVar26 + 1 & 7)) & 0x3f) &
             (ushort)(0xffffL >> ((ulong)uVar28 & 0x3f));
  }
  bVar14 = *(byte *)(lVar22 + ((ulong)*(byte *)(lVar22 + 0x26) << 0x18 |
                               (ulong)*(byte *)(lVar22 + 0x27) << 0x10 |
                               (ulong)*(byte *)(lVar22 + 0x28) << 8 |
                              (ulong)*(byte *)(lVar22 + 0x29)) + (long)(short)uVar24);
  bVar10 = *(byte *)(lVar22 + 0x30);
  if (bVar10 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = (uint)bVar9 + (uVar26 & 0xff) + 1;
    uVar16 = 0x10 - bVar10;
    uVar28 = 0xffffU >> (ulong)(uVar16 & 0x1f) &
             (uint)(ushort)(CONCAT11(pcVar27[uVar28 >> 3],(pcVar27 + (uVar28 >> 3))[1]) >>
                           (ulong)(uVar16 - (uVar28 & 7) & 0x1f));
  }
  bVar11 = *(byte *)(lVar22 + 0x25);
  lVar2 = lVar22 + ((ulong)*(byte *)(lVar22 + 0x1d) << 0x18 |
                    (ulong)*(byte *)(lVar22 + 0x1e) << 0x10 | (ulong)*(byte *)(lVar22 + 0x1f) << 8 |
                   (ulong)*(byte *)(lVar22 + 0x20));
  pbVar18 = (byte *)(lVar2 + (ulong)uVar28 * (ulong)(uint)bVar11);
  bVar12 = *pbVar18;
  uVar24 = (ushort)bVar12;
  if (bVar11 == 2) {
    uVar24 = CONCAT11(bVar12,pbVar18[1]);
  }
  bVar12 = *(byte *)(lVar22 + 0x31);
  if (bVar12 == 0) {
    uVar28 = 0;
  }
  else {
    uVar1 = (ulong)bVar9 + (ulong)(byte)uVar26 + (ulong)bVar10 + 1;
    uVar28 = 0x10 - bVar12;
    uVar28 = 0xffffU >> (ulong)(uVar28 & 0x1f) &
             (uint)(ushort)(CONCAT11(pcVar27[uVar1 >> 3],(pcVar27 + (uVar1 >> 3))[1]) >>
                           (ulong)(uVar28 - ((uint)uVar1 & 7) & 0x1f));
  }
  pbVar18 = (byte *)(lVar2 + (int)((uVar28 + ((int)(short)((ushort)*(byte *)(lVar22 + 0x21) << 8) |
                                             (uint)*(byte *)(lVar22 + 0x22))) * (uint)bVar11));
  bVar13 = *pbVar18;
  uVar29 = (ushort)bVar13;
  if (bVar11 == 2) {
    uVar29 = CONCAT11(bVar13,pbVar18[1]);
  }
  if (iVar23 == 1) {
    uVar19 = 0;
  }
  else {
    uVar1 = (ulong)bVar9 + (ulong)(byte)uVar26 + (ulong)bVar10 + (ulong)bVar12 + 1;
    uVar25 = CONCAT11(pcVar27[uVar1 >> 3],(pcVar27 + (uVar1 >> 3))[1]);
    bVar11 = *(byte *)(lVar22 + 0x2f);
    uVar26 = (uint)uVar1 & 7;
    uVar16 = 0x10 - bVar11;
    uVar28 = 0xffff >> (ulong)(uVar16 & 0x1f);
    uVar19 = 0;
    uVar17 = (ulong)(uVar25 >> (ulong)((0x10 - uVar26) - (uint)bVar11 & 0x1f) & uVar28);
    if ((iVar23 == 0) && ((char)bVar15 < '\0')) {
      uVar3 = uVar1 + bVar11;
      uVar31 = (uint)uVar3;
      if (*pcVar27 < '\0') {
        pcVar27 = pcVar27 + (uVar3 >> 3);
      }
      else {
        while (pcVar27 = pcVar27 + (short)((uVar25 >> (ulong)(uVar16 - uVar26 & 0x1f) &
                                           (ushort)uVar28) + ((ushort)(uVar31 + 7 >> 3) & 0xff)),
              -1 < *pcVar27) {
          uVar25 = CONCAT11(pcVar27[uVar1 >> 3],(pcVar27 + (uVar1 >> 3))[1]);
        }
        iVar30 = 1;
        if ((bVar15 & 3) != 0) {
          iVar30 = 2;
        }
        uVar1 = (ulong)((uint)bVar9 + (uint)*(byte *)(lVar22 + 0x33) + iVar30 + (uint)bVar10 +
                       (uint)bVar12) + (ulong)bVar11;
        pcVar27 = pcVar27 + (uVar1 >> 3);
        uVar31 = (uint)uVar1;
      }
      uVar26 = (uint)(ushort)(CONCAT11(*pcVar27,pcVar27[1]) >>
                             (ulong)((0x10 - (uVar31 & 7)) - (uint)*(byte *)(lVar22 + 0x35) & 0x1f))
               & 0xffffU >> (ulong)(0x10 - *(byte *)(lVar22 + 0x35) & 0x1f);
      if (uVar26 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (ushort)((uVar26 << (*(char *)(lVar22 + 0x46) != '\0')) >> 1) & 0x7fff;
      }
    }
  }
  if ((bVar8 & 0xf0) == 0x10) {
    *(ushort *)(param_2 + 0x70) = uVar19;
    uVar25 = uVar19;
  }
  else {
    uVar25 = *(ushort *)(param_2 + 0x70);
  }
  uVar20 = uVar25 & 0x7f;
  *(ushort *)(param_2 + 0x70) = uVar25 & 0x7f | uVar24 << 7;
  if (iVar23 == 1) {
LAB_0011235c:
    *(ushort *)(param_2 + 0x72) = uVar20;
  }
  else {
    if (uVar17 == 0) {
      if ((*(byte *)(param_1 + 0x5f) & 0xf0) != 0x10) goto LAB_0011235c;
    }
    else {
      uVar19 = (ushort)((uint)uVar17 >> 1);
    }
    uVar20 = uVar19;
    *(ushort *)(param_2 + 0x72) = uVar20;
  }
  *(ushort *)(param_2 + 0x72) = uVar20 & 0x7f | uVar29 << 7;
  uVar26 = *(uint *)(*(long *)(param_1 + 8) + 4);
  uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
  uVar28 = (uint)bVar14;
  if ((uVar26 >> 0x10 | uVar26 << 0x10) == 0x30000) {
    iVar30 = uVar28 - 0x20;
    iVar23 = ((uint)*(ushort *)(param_1 + 6) - (uint)*(ushort *)(param_1 + 4)) * iVar30;
    sVar21 = *(ushort *)(param_1 + 4) +
             ((short)((ulong)((long)iVar23 * 0x82082083) >> 0x25) - (short)(iVar23 >> 0x1f));
    *(short *)(param_2 + 8) = sVar21;
    if ((int)(uint)*(ushort *)(param_1 + 4) <= (int)sVar21) goto LAB_00112444;
    iVar23 = (uint)*(ushort *)(param_1 + 6) - (uint)*(ushort *)(param_1 + 4);
    uVar28 = iVar23 * iVar30;
    uVar26 = uVar28 + 0x1f;
    if (-1 < (int)uVar28) {
      uVar26 = uVar28;
    }
    sVar21 = (short)(uVar26 >> 5) - (short)iVar23;
  }
  else {
    iVar23 = ((uint)*(ushort *)(param_1 + 6) - (uint)*(ushort *)(param_1 + 4)) * uVar28;
    sVar21 = *(ushort *)(param_1 + 4) +
             ((short)((ulong)((long)iVar23 * 0x82082083) >> 0x25) - (short)(iVar23 >> 0x1f));
  }
  *(short *)(param_2 + 8) = sVar21;
LAB_00112444:
  lVar22 = *(long *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x28) = uVar5;
  *(long *)(param_2 + 0x10) = lVar22;
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_2 + 0x48) = uVar6;
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  *(undefined2 *)(param_2 + 0x74) = 0;
  *(undefined8 *)(param_2 + 0x60) = uVar5;
  *(undefined8 *)(param_2 + 0x68) = uVar7;
  *(undefined8 *)(param_2 + 0x50) = uVar4;
  *(undefined8 *)(param_2 + 0x58) = uVar6;
  return 1;
}

