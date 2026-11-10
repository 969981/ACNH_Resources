
undefined8 FUN_00136d10(long param_1,long *param_2,short *param_3)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  short sVar10;
  undefined4 uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  short sVar17;
  uint uVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  bVar4 = *(byte *)(param_2 + 10);
  lVar24 = *(long *)(param_3 + 4);
  uVar15 = *(uint *)(param_3 + 0x1c);
  if (bVar4 - 3 < 2) {
    lVar22 = *(long *)(param_3 + 0x10);
    if (lVar22 != 0) goto LAB_00136d94;
    uVar23 = (ulong)*(byte *)(lVar24 + 0x38) << 0x18 | (ulong)*(byte *)(lVar24 + 0x39) << 0x10 |
             (ulong)*(byte *)(lVar24 + 0x3a) << 8;
    pbVar20 = (byte *)(lVar24 + 0x3b);
    lVar22 = lVar24;
  }
  else {
    lVar22 = *(long *)(param_3 + 0xc);
    if (lVar22 == 0) goto LAB_001373f0;
LAB_00136d94:
    uVar23 = (ulong)*(byte *)(lVar22 + 0x10) << 0x18 | (ulong)*(byte *)(lVar22 + 0x11) << 0x10 |
             (ulong)*(byte *)(lVar22 + 0x12) << 8;
    pbVar20 = (byte *)(lVar22 + 0x13);
  }
  lVar22 = lVar22 + (uVar23 | *pbVar20);
  uVar14 = uVar15 * 4;
  pbVar20 = (byte *)(lVar22 + (ulong)(uVar14 - 4));
  uVar18 = (*(uint *)(lVar24 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar24 + 8) & 0xff00ff) << 8;
  uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
  iVar7 = 10;
  if (uVar18 == 0x50001) {
    iVar7 = 6;
  }
  if ((bVar4 == 5) || (bVar4 == 3)) {
    uVar28 = (uint)pbVar20[1] << 0x10 | (uint)pbVar20[2] << 8 | (uint)pbVar20[3];
    pcVar1 = (char *)(lVar24 + ((ulong)*(byte *)(lVar24 + 0x20) << 0x18 |
                                (ulong)*(byte *)(lVar24 + 0x21) << 0x10 |
                                (ulong)*(byte *)(lVar24 + 0x22) << 8 |
                               (ulong)*(byte *)(lVar24 + 0x23)));
    uVar3 = *(uint *)(param_3 + 0x20);
    if ((*(byte *)((long)param_3 + 0x5f) & 0xf) != 1) {
      if (uVar15 == uVar3) goto LAB_001373f0;
      if (*(char *)((long)param_2 + 0x51) == '\0') {
        uVar15 = uVar15 + 1;
        if (uVar3 < uVar15) goto LAB_001373f0;
        lVar2 = lVar22 + (ulong)uVar14;
        uVar28 = (uint)*(byte *)(lVar2 + 1) << 0x10 | (uint)*(byte *)(lVar2 + 2) << 8 |
                 (uint)*(byte *)(lVar2 + 3);
      }
    }
    if (uVar3 < uVar15) goto LAB_001373f0;
    pcVar16 = pcVar1 + (uVar28 - 1) * iVar7;
    bVar4 = *(byte *)(lVar24 + 0x4a);
    bVar5 = *(byte *)(lVar24 + 0x4e);
    lVar24 = 8;
    if (uVar18 == 0x50001) {
      lVar24 = 4;
    }
    lVar2 = 9;
    if (uVar18 == 0x50001) {
      lVar2 = 5;
    }
    uVar23 = (ulong)(uVar15 * 4 - 4);
    if (*param_2 != 0) goto LAB_00136ec8;
LAB_00136f74:
    uVar12 = 0;
    if (param_2[1] != 0) goto LAB_00136f38;
    while (sVar10 = FUN_001139a0(param_2,uVar12,0), sVar10 == 0) {
      while( true ) {
        if ((*pcVar1 < '\0') || (uVar15 = uVar15 + 1, *(uint *)(param_3 + 0x20) < uVar15))
        goto LAB_001373f0;
        uVar23 = (ulong)((int)uVar23 + 4);
        lVar19 = lVar22 + uVar23;
        pcVar16 = pcVar1 + (((uint)*(byte *)(lVar19 + 1) << 0x10 | (uint)*(byte *)(lVar19 + 2) << 8
                            | (uint)*(byte *)(lVar19 + 3)) - 1) * iVar7;
        if (*param_2 == 0) goto LAB_00136f74;
LAB_00136ec8:
        lVar19 = *(long *)(param_3 + 4);
        bVar6 = *(byte *)(lVar19 + 0x4b);
        uVar21 = (ulong)bVar6;
        if (bVar6 != 0) {
          uVar21 = (ulong)(ushort)(CONCAT11(pcVar16[lVar24],pcVar16[lVar2]) >>
                                  (ulong)(0x10 - bVar6 & 0x1f));
        }
        pbVar20 = (byte *)(lVar19 + ((ulong)*(byte *)(lVar19 + 0x44) << 0x18 |
                                     (ulong)*(byte *)(lVar19 + 0x45) << 0x10 |
                                     (ulong)*(byte *)(lVar19 + 0x46) << 8 |
                                    (ulong)*(byte *)(lVar19 + 0x47)) + uVar21 * bVar4);
        bVar6 = *pbVar20;
        uVar12 = (ushort)bVar6;
        if (bVar4 == 2) {
          uVar12 = CONCAT11(bVar6,pbVar20[1]);
        }
        if (param_2[1] == 0) break;
LAB_00136f38:
        lVar19 = *(long *)(param_3 + 4);
        if (*(byte *)(lVar19 + 0x4f) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0x10 - *(byte *)(lVar19 + 0x4f);
          uVar14 = (uint)(ushort)(CONCAT11(pcVar16[lVar24],pcVar16[lVar2]) >>
                                 (ulong)(uVar14 - *(byte *)(lVar19 + 0x4b) & 0x1f)) &
                   0xffffU >> (ulong)(uVar14 & 0x1f);
        }
        pbVar20 = (byte *)(lVar19 + ((ulong)*(byte *)(lVar19 + 0x44) << 0x18 |
                                     (ulong)*(byte *)(lVar19 + 0x45) << 0x10 |
                                     (ulong)*(byte *)(lVar19 + 0x46) << 8 |
                                    (ulong)*(byte *)(lVar19 + 0x47)) +
                          (ulong)(uVar14 * bVar5 +
                                 ((int)(short)((ushort)*(byte *)(lVar19 + 0x48) << 8) |
                                 (uint)*(byte *)(lVar19 + 0x49)) * (uint)bVar4));
        bVar6 = *pbVar20;
        uVar13 = (ushort)bVar6;
        if (bVar5 == 2) {
          uVar13 = CONCAT11(bVar6,pbVar20[1]);
        }
        sVar10 = FUN_001139a0(param_2,uVar12,uVar13);
        if (sVar10 != 0) goto LAB_00137098;
      }
    }
LAB_00137098:
    pbVar20 = (byte *)(lVar22 + uVar23);
    *(undefined1 *)((long)param_3 + 0x5f) = 2;
    *(uint *)(param_3 + 0x1c) = uVar15;
    uVar11 = FUN_0013be30(*(undefined8 *)(param_3 + 4),
                          (uint)pbVar20[1] << 0x10 | (uint)pbVar20[2] << 8 | (uint)pbVar20[3]);
    *(undefined4 *)(param_3 + 0x2c) = uVar11;
    *(undefined1 *)(param_3 + 0x2f) = 0x10;
    uVar15 = 0x3f;
    if ((char)param_2[10] != '\x05') {
      uVar15 = 0x7f;
    }
    iVar7 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * (uVar15 & *pbVar20);
    sVar10 = param_3[2] +
             ((short)((ulong)((long)iVar7 * 0x51eb851f) >> 0x25) - (short)(iVar7 >> 0x1f));
    goto LAB_001373c4;
  }
  if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
    param_3[0x2f] = 0x210;
    return 1;
  }
  if (*(char *)((long)param_2 + 0x51) == '\0') {
    uVar14 = *(uint *)(param_3 + 0x1e);
    uVar3 = *(uint *)(param_3 + 0x20);
    uVar18 = 0x3f;
    if (bVar4 != 6) {
      uVar18 = 0x7f;
    }
    uVar18 = *pbVar20 & uVar18;
    if (bVar4 != 6) {
      if (uVar3 < uVar14) goto LAB_001373f0;
      uVar27 = 0;
      uVar28 = uVar14 * 4 - 4;
      uVar25 = 0xffffd8f0;
      do {
        uVar26 = *(byte *)(lVar22 + (ulong)uVar28) & 0x7f;
        if ((uVar15 < uVar14) && (uVar18 == uVar26)) {
          lVar22 = lVar22 + (ulong)uVar28;
          param_3[0x2f] = 0x210;
          *(uint *)(param_3 + 0x1c) = uVar14;
          uVar15 = (uint)*(byte *)(lVar22 + 1) << 0x10 | (uint)*(byte *)(lVar22 + 2) << 8 |
                   (uint)*(byte *)(lVar22 + 3);
          goto LAB_00137444;
        }
        uVar8 = uVar14;
        if (uVar18 <= uVar26 || (int)uVar26 <= (int)uVar25) {
          uVar26 = uVar25;
          uVar8 = uVar27;
        }
        uVar27 = uVar8;
        uVar14 = uVar14 + 1;
        uVar28 = uVar28 + 4;
        uVar25 = uVar26;
      } while (uVar14 <= uVar3);
    }
    else {
      if (uVar3 < uVar14) goto LAB_001373f0;
      if (*(char *)((long)param_2 + 0x53) < '\0') {
        uVar27 = 0;
        uVar28 = uVar14 * 4 - 4;
        uVar25 = 0xffffd8f0;
        do {
          uVar26 = *(byte *)(lVar22 + (ulong)uVar28) & 0x3f;
          if ((uVar15 < uVar14) && (uVar18 == uVar26)) {
            pbVar20 = (byte *)(lVar22 + (ulong)uVar28);
            goto LAB_00137420;
          }
          uVar8 = uVar14;
          if (uVar18 <= uVar26 || (int)uVar26 <= (int)uVar25) {
            uVar26 = uVar25;
            uVar8 = uVar27;
          }
          uVar27 = uVar8;
          uVar14 = uVar14 + 1;
          uVar28 = uVar28 + 4;
          uVar25 = uVar26;
        } while (uVar14 <= uVar3);
      }
      else {
        uVar27 = 0;
        uVar26 = 0xffffd8f0;
        do {
          uVar28 = uVar14 * 4 - 4;
          while( true ) {
            pbVar20 = (byte *)(lVar22 + (ulong)uVar28);
            bVar4 = *pbVar20;
            if (((char)bVar4 < '\0') &&
               (cVar9 = FUN_0013cbb0(lVar24,(uint)pbVar20[1] << 0x10 | (uint)pbVar20[2] << 8 |
                                            (uint)pbVar20[3],*(undefined1 *)(param_1 + 0x6d648),
                                     *(undefined1 *)(param_1 + 0x6d649)), cVar9 != '\0')) break;
            uVar14 = uVar14 + 1;
            uVar28 = uVar28 + 4;
            if (uVar3 < uVar14) goto LAB_00137350;
          }
          uVar28 = bVar4 & 0x3f;
          if ((uVar15 < uVar14) && (uVar18 == uVar28)) {
LAB_00137420:
            param_3[0x2f] = 0x210;
            *(uint *)(param_3 + 0x1c) = uVar14;
            uVar15 = (uint)pbVar20[1] << 0x10 | (uint)pbVar20[2] << 8 | (uint)pbVar20[3];
LAB_00137444:
            uVar11 = FUN_0013be30(lVar24,uVar15);
            *(undefined4 *)(param_3 + 0x2c) = uVar11;
            return 1;
          }
          uVar25 = uVar14;
          if (uVar18 <= uVar28 || (int)uVar28 <= (int)uVar26) {
            uVar28 = uVar26;
            uVar25 = uVar27;
          }
          uVar27 = uVar25;
          uVar14 = uVar14 + 1;
          uVar26 = uVar28;
        } while (uVar14 <= uVar3);
      }
    }
LAB_00137350:
    if (uVar27 == 0) {
LAB_001373f0:
      *(undefined1 *)((long)param_3 + 0x5f) = 3;
      return 0;
    }
    *(undefined1 *)((long)param_3 + 0x5f) = 2;
    pbVar20 = (byte *)(lVar22 + (ulong)(uVar27 * 4 - 4));
    *(uint *)(param_3 + 0x1c) = uVar27;
LAB_0013736c:
    uVar15 = (uint)pbVar20[1] << 0x10 | (uint)pbVar20[2] << 8 | (uint)pbVar20[3];
  }
  else {
    if (uVar15 == *(uint *)(param_3 + 0x20)) goto LAB_001373f0;
    if (bVar4 != 6) {
      *(uint *)(param_3 + 0x1c) = uVar15 + 1;
      pbVar20 = (byte *)(lVar22 + (ulong)uVar14);
      *(undefined1 *)((long)param_3 + 0x5f) = 2;
      uVar26 = *pbVar20 & 0x7f;
      goto LAB_0013736c;
    }
    pbVar20 = (byte *)(lVar22 + (ulong)uVar14);
    *(undefined1 *)((long)param_3 + 0x5f) = 2;
    *(uint *)(param_3 + 0x1c) = uVar15 + 1;
    uVar26 = *pbVar20 & 0x3f;
    uVar15 = (uint)pbVar20[1] << 0x10 | (uint)pbVar20[2] << 8 | (uint)pbVar20[3];
  }
  uVar11 = FUN_0013be30(lVar24,uVar15);
  *(undefined1 *)(param_3 + 0x2f) = 0x10;
  iVar7 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar26;
  *(undefined4 *)(param_3 + 0x2c) = uVar11;
  sVar10 = param_3[2] +
           ((short)((ulong)((long)iVar7 * 0x51eb851f) >> 0x25) - (short)(iVar7 >> 0x1f));
LAB_001373c4:
  *param_3 = sVar10;
  sVar17 = param_3[0x35];
  if ((sVar17 <= sVar10) && (sVar17 = param_3[0x34], sVar10 <= param_3[0x34])) {
    sVar17 = sVar10;
  }
  *param_3 = sVar17;
  return 1;
}

