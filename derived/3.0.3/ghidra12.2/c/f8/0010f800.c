
undefined8 FUN_0010f800(long param_1,ushort *param_2)

{
  ulong uVar1;
  short sVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  
  if ((*(byte *)((long)param_2 + 0x5f) & 0xf) == 1) {
    param_2[0x2f] = 0x210;
    return 1;
  }
  lVar17 = *(long *)(param_2 + 4);
  uVar19 = (ulong)*(uint *)(param_2 + 0x1c);
  bVar9 = *(byte *)(lVar17 + 0x1c);
  lVar21 = lVar17 + ((ulong)*(byte *)(lVar17 + 0x2b) << 0x18 |
                     (ulong)*(byte *)(lVar17 + 0x2c) << 0x10 | (ulong)*(byte *)(lVar17 + 0x2d) << 8
                    | (ulong)*(byte *)(lVar17 + 0x2e));
  pbVar3 = (byte *)(lVar21 + (ulong)*(uint *)(param_2 + 0x1e)) + uVar19;
  if ((bVar9 & 3) == 0) {
    pbVar22 = (byte *)(lVar17 + 0x1c) +
              ((ulong)*(byte *)(lVar17 + 0x10) << 0x18 | (ulong)*(byte *)(lVar17 + 0x11) << 0x10 |
               (ulong)*(byte *)(lVar17 + 0x12) << 8 | (ulong)*(byte *)(lVar17 + 0x13)) +
              ((ulong)*(byte *)(lVar17 + 0xc) << 0x18 | (ulong)*(byte *)(lVar17 + 0xd) << 0x10 |
               (ulong)*(byte *)(lVar17 + 0xe) << 8 | (ulong)*(byte *)(lVar17 + 0xf)) + -4;
    cVar6 = *(char *)(param_1 + 0x51);
  }
  else {
    pbVar22 = (byte *)(lVar17 + ((ulong)*(byte *)(lVar17 + 0x52) << 0x18 |
                                 (ulong)*(byte *)(lVar17 + 0x53) << 0x10 |
                                 (ulong)*(byte *)(lVar17 + 0x54) << 8 |
                                (ulong)*(byte *)(lVar17 + 0x55)));
    cVar6 = *(char *)(param_1 + 0x51);
  }
  if (cVar6 == '\0') {
    if (pbVar3 < pbVar22) {
      uVar14 = (uint)*(byte *)(lVar17 + 0x33);
      uVar11 = (uint)*(byte *)(lVar17 + 0x32);
      bVar8 = false;
      uVar23 = 0;
      uVar20 = 0xffff;
      pbVar10 = pbVar3;
      do {
        bVar13 = (byte)uVar14;
        if ((bVar9 & 3) != 0) {
          bVar13 = bVar13 + 1;
        }
        uVar4 = (ulong)*(byte *)(lVar17 + 0x30) + (ulong)(byte)uVar11 +
                (ulong)*(byte *)(lVar17 + 0x31) + (ulong)bVar13 + 1;
        uVar11 = 0x10 - *(byte *)(lVar17 + 0x2f);
        uVar12 = uVar4 + *(byte *)(lVar17 + 0x2f);
        if (((char)bVar9 < '\0') && ((char)*pbVar10 < '\0')) {
          uVar1 = uVar12 >> 3;
          bVar9 = *(byte *)(lVar17 + 0x35);
          uVar14 = (uint)uVar12;
          uVar12 = (ulong)(uVar14 + bVar9);
          uVar16 = (ushort)(0xffff >> (ulong)(0x10 - bVar9 & 0x1f)) &
                   CONCAT11(pbVar10[uVar1],(pbVar10 + uVar1)[1]) >>
                   (ulong)((0x10 - (uVar14 & 7)) - (uint)bVar9 & 0x1f);
        }
        else {
          uVar16 = 0;
        }
        sVar2 = uVar16 + (CONCAT11(pbVar10[uVar4 >> 3],(pbVar10 + (uVar4 >> 3))[1]) >>
                          (ulong)(uVar11 - ((uint)uVar4 & 7) & 0x1f) &
                         (ushort)(0xffff >> (ulong)(uVar11 & 0x1f))) +
                ((ushort)((int)uVar12 + 7U >> 3) & 0xff);
        if ((byte *)(lVar21 + (ulong)*(uint *)(param_2 + 0x20)) < pbVar10 + sVar2) {
          if ((*param_2 == 0) || (bVar8)) break;
          uVar19 = 0;
          *param_2 = *param_2 - 1;
          bVar8 = true;
          pbVar10 = (byte *)(lVar21 + (ulong)*(uint *)(param_2 + 0x1e));
        }
        else {
          uVar19 = (ulong)(uint)((int)uVar19 + (int)sVar2);
          pbVar10 = pbVar10 + sVar2;
        }
        if (((~uVar20 & 0xffff) != 0) && (pbVar10 == pbVar3)) {
          param_2[0x2f] = 0x210;
          *(uint *)(param_2 + 0x1c) = uVar23;
          *param_2 = (ushort)uVar20;
          return 1;
        }
        bVar9 = *(byte *)(lVar17 + 0x1c);
        uVar14 = (uint)*(byte *)(lVar17 + 0x33);
        uVar11 = (uint)*(byte *)(lVar17 + 0x32);
        uVar15 = uVar14;
        if ((bVar9 & 3) != 0) {
          uVar15 = uVar14 + 1;
        }
        if (uVar11 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = CONCAT11(pbVar10[((ulong)uVar15 & 0xff) + 1 >> 3],
                            (pbVar10 + (((ulong)uVar15 & 0xff) + 1 >> 3))[1]) >>
                   ((ulong)((0x10 - uVar11) - (uVar15 + 1 & 7)) & 0x3f) &
                   (ushort)(0xffffL >> ((ulong)(0x10 - uVar11) & 0x3f));
        }
        bVar13 = *(byte *)(lVar17 + ((ulong)*(byte *)(lVar17 + 0x26) << 0x18 |
                                     (ulong)*(byte *)(lVar17 + 0x27) << 0x10 |
                                     (ulong)*(byte *)(lVar17 + 0x28) << 8 |
                                    (ulong)*(byte *)(lVar17 + 0x29)) + (long)(short)uVar16);
        uVar15 = (uint)bVar13;
        uVar18 = (*(uint *)(lVar17 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 4) & 0xff00ff) << 8
        ;
        if ((uVar18 >> 0x10 | uVar18 << 0x10) != 0x30000) {
          iVar7 = ((uint)param_2[3] - (uint)param_2[2]) * (uint)bVar13;
          uVar15 = (uint)param_2[2] +
                   ((uint)((ulong)((long)iVar7 * 0x82082083) >> 0x25) - (iVar7 >> 0x1f));
        }
        uVar18 = (uint)uVar19;
        if ((uint)*param_2 == (uVar15 & 0xffff)) {
          param_2[0x2f] = 0x210;
          *(uint *)(param_2 + 0x1c) = uVar18;
          return 1;
        }
        uVar5 = uVar15;
        if ((short)uVar15 <= (short)(ushort)uVar20 &&
            (uVar23 <= uVar18 || (uVar15 & 0xffff) != (uVar20 & 0xffff))) {
          uVar5 = uVar20;
          uVar18 = uVar23;
        }
        if ((short)uVar15 < (short)*param_2) {
          uVar20 = uVar5;
          uVar23 = uVar18;
        }
      } while (pbVar10 < pbVar22);
    }
  }
  else {
    uVar20 = (uint)*(byte *)(lVar17 + 0x33);
    if ((bVar9 & 3) != 0) {
      uVar20 = uVar20 + 1;
    }
    bVar13 = *(byte *)(lVar17 + 0x32);
    uVar19 = (ulong)bVar13 + (ulong)(byte)uVar20 + (ulong)*(byte *)(lVar17 + 0x30) +
             (ulong)*(byte *)(lVar17 + 0x31) + 1;
    uVar11 = 0x10 - *(byte *)(lVar17 + 0x2f);
    uVar4 = uVar19 + *(byte *)(lVar17 + 0x2f);
    uVar23 = (uint)uVar4;
    if (((char)bVar9 < '\0') && ((char)*pbVar3 < '\0')) {
      bVar9 = *(byte *)(lVar17 + 0x35);
      uVar16 = (ushort)(0xffff >> (ulong)(0x10 - bVar9 & 0x1f)) &
               CONCAT11(pbVar3[uVar4 >> 3],(pbVar3 + (uVar4 >> 3))[1]) >>
               (ulong)((0x10 - (uVar23 & 7)) - (uint)bVar9 & 0x1f);
      uVar23 = uVar23 + bVar9;
    }
    else {
      uVar16 = 0;
    }
    sVar2 = uVar16 + (CONCAT11(pbVar3[uVar19 >> 3],(pbVar3 + (uVar19 >> 3))[1]) >>
                      (ulong)(uVar11 - ((uint)uVar19 & 7) & 0x1f) &
                     (ushort)(0xffff >> (ulong)(uVar11 & 0x1f))) +
            ((ushort)(uVar23 + 7 >> 3) & 0xff);
    pbVar3 = pbVar3 + sVar2;
    if (pbVar3 <= (byte *)(lVar21 + (ulong)*(uint *)(param_2 + 0x20))) {
      if (bVar13 == 0) {
        lVar21 = 0;
        uVar20 = (*(uint *)(lVar17 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 4) & 0xff00ff) << 8
        ;
        uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      }
      else {
        uVar23 = 0x10 - bVar13;
        lVar21 = (long)(short)(CONCAT11(pbVar3[((ulong)uVar20 & 0xff) + 1 >> 3],
                                        (pbVar3 + (((ulong)uVar20 & 0xff) + 1 >> 3))[1]) >>
                               ((ulong)(uVar23 - (uVar20 + 1 & 7)) & 0x3f) &
                              (ushort)(0xffffL >> ((ulong)uVar23 & 0x3f)));
        uVar20 = (*(uint *)(lVar17 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 4) & 0xff00ff) << 8
        ;
        uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      }
      if (uVar20 != 0x30000) {
        iVar7 = ((uint)param_2[3] - (uint)param_2[2]) *
                (uint)*(byte *)(lVar17 + ((ulong)*(byte *)(lVar17 + 0x26) << 0x18 |
                                          (ulong)*(byte *)(lVar17 + 0x27) << 0x10 |
                                          (ulong)*(byte *)(lVar17 + 0x28) << 8 |
                                         (ulong)*(byte *)(lVar17 + 0x29)) + lVar21);
        *param_2 = param_2[2] +
                   ((short)((ulong)((long)iVar7 * 0x82082083) >> 0x25) - (short)(iVar7 >> 0x1f));
      }
      param_2[0x2f] = 0x210;
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) + (int)sVar2;
      return 1;
    }
  }
  *(undefined1 *)((long)param_2 + 0x5f) = 3;
  return 0;
}

