
undefined8 FUN_00137d70(long param_1,long param_2,short *param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  
  if (*(char *)(param_2 + 0x51) != '\0') goto LAB_00137d98;
  if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
    param_3[0x2f] = 0x210;
    return 1;
  }
  lVar22 = *(long *)(*(long *)(param_2 + 0x28) + (param_4 & 0xffff) * 0x50 + 0x40);
  if ((*(byte *)(lVar22 + 0x2050) >> 1 & 1) != 0) goto LAB_00137d98;
  if (*(char *)(param_2 + 0x50) == '\x06') {
    lVar16 = *(long *)(param_3 + 0xc);
    if (lVar16 == 0) goto LAB_00137d98;
LAB_00137e2c:
    uVar18 = (ulong)*(byte *)(lVar16 + 0x10) << 0x18 | (ulong)*(byte *)(lVar16 + 0x11) << 0x10 |
             (ulong)*(byte *)(lVar16 + 0x12) << 8;
    pbVar20 = (byte *)(lVar16 + 0x13);
  }
  else {
    lVar16 = *(long *)(param_3 + 0x10);
    if (lVar16 != 0) goto LAB_00137e2c;
    lVar16 = *(long *)(param_3 + 4);
    uVar18 = (ulong)*(byte *)(lVar16 + 0x38) << 0x18 | (ulong)*(byte *)(lVar16 + 0x39) << 0x10 |
             (ulong)*(byte *)(lVar16 + 0x3a) << 8;
    pbVar20 = (byte *)(lVar16 + 0x3b);
  }
  lVar1 = lVar22 + (ulong)*(ushort *)(param_2 + 0x4e) * 2;
  uVar3 = *(ushort *)(lVar1 + 0x1fe0);
  if (0xff < uVar3) {
    return 0xad80;
  }
  uVar4 = *(ushort *)(lVar1 + 0x1fde);
  if (0xfe < uVar4) {
    return 0xad80;
  }
  uVar27 = (uint)uVar4;
  uVar6 = uVar3 - uVar27;
  if ((uVar6 & 0xffff) == 0) goto LAB_00137d98;
  lVar16 = lVar16 + (uVar18 | *pbVar20);
  if (uVar27 <= (ushort)param_3[0x2e]) {
    uVar27 = (uint)(ushort)param_3[0x2e];
  }
  uVar18 = (ulong)uVar27;
  if (*(char *)(param_2 + 0x50) == '\x06') {
    lVar1 = lVar22 + uVar18 * 0x20;
    uVar13 = *(uint *)(lVar1 + 0x10);
    if (uVar13 + 1 < 2) {
LAB_00137ed4:
      uVar10 = 0xffffd8f0;
      uVar24 = 0xffffffff;
    }
    else {
      lVar17 = *(long *)(param_3 + 0xc);
      if (lVar17 != 0) {
        uVar24 = *(uint *)(lVar1 + 0x14);
        uVar28 = *(uint *)(lVar1 + 0x18);
        if (uVar24 <= uVar28) {
          lVar17 = lVar17 + ((ulong)*(byte *)(lVar17 + 0x10) << 0x18 |
                             (ulong)*(byte *)(lVar17 + 0x11) << 0x10 |
                             (ulong)*(byte *)(lVar17 + 0x12) << 8 | (ulong)*(byte *)(lVar17 + 0x13))
          ;
          uVar26 = *(byte *)(lVar17 + (ulong)(uVar13 * 4 - 4)) & 0x3f;
          if (*(char *)(param_2 + 0x53) < '\0') {
            uVar21 = 0;
            uVar12 = uVar24 * 4 - 4;
            uVar23 = 0xffffd8f0;
            do {
              uVar10 = *(byte *)(lVar17 + (ulong)uVar12) & 0x3f;
              if ((uVar13 < uVar24) && (uVar10 == uVar26)) goto LAB_00137edc;
              uVar8 = uVar24;
              if (uVar26 <= uVar10 || (int)uVar10 <= (int)uVar23) {
                uVar10 = uVar23;
                uVar8 = uVar21;
              }
              uVar21 = uVar8;
              uVar24 = uVar24 + 1;
              uVar12 = uVar12 + 4;
              uVar23 = uVar10;
            } while (uVar24 <= uVar28);
          }
          else {
            uVar21 = 0;
            uVar12 = 0xffffd8f0;
            do {
              uVar23 = uVar24 * 4 - 4;
              while( true ) {
                pbVar20 = (byte *)(lVar17 + (ulong)uVar23);
                bVar2 = *pbVar20;
                if (((char)bVar2 < '\0') &&
                   (cVar9 = FUN_0013cbb0(*(undefined8 *)(param_3 + 4),
                                         (uint)pbVar20[1] << 0x10 | (uint)pbVar20[2] << 8 |
                                         (uint)pbVar20[3],*(undefined1 *)(param_1 + 0x6d648),
                                         *(undefined1 *)(param_1 + 0x6d649)), cVar9 != '\0')) break;
                uVar24 = uVar24 + 1;
                uVar23 = uVar23 + 4;
                uVar10 = uVar12;
                if (uVar28 < uVar24) goto joined_r0x00138524;
              }
              uVar10 = bVar2 & 0x3f;
              if ((uVar13 < uVar24) && (uVar10 == uVar26)) goto LAB_00137edc;
              uVar23 = uVar24;
              if (uVar26 <= uVar10 || (int)uVar10 <= (int)uVar12) {
                uVar10 = uVar12;
                uVar23 = uVar21;
              }
              uVar21 = uVar23;
              uVar24 = uVar24 + 1;
              uVar12 = uVar10;
            } while (uVar24 <= uVar28);
          }
joined_r0x00138524:
          uVar24 = uVar21;
          if (uVar10 != 0xffffd8f0) goto LAB_00137edc;
        }
        goto LAB_00137ed4;
      }
      uVar24 = 0xffffffff;
      uVar10 = 0xffffd8f0;
    }
LAB_00137edc:
    *(uint *)(lVar1 + 0x10) = uVar24;
    uVar13 = 0x3f;
  }
  else {
    uVar10 = FUN_0013d310(param_3,lVar22,uVar18);
    uVar13 = 0x7f;
  }
  uVar28 = (uint)uVar4;
  uVar24 = (uint)uVar3;
  uVar13 = *(byte *)(lVar16 + (ulong)(*(int *)(param_3 + 0x1c) * 4 - 4)) & uVar13;
  if (uVar10 == uVar13) {
    pbVar20 = (byte *)(lVar22 + 0x2051);
    bVar2 = *pbVar20;
    *pbVar20 = bVar2 + 1;
    if ((byte)(bVar2 + 1) < 3) {
      param_3[0x2f] = 0x210;
      iVar14 = *(int *)(lVar22 + uVar18 * 0x20 + 0x10);
      *(int *)(param_3 + 0x1c) = iVar14;
      param_3[0x2e] = (short)uVar27;
      lVar16 = lVar16 + (ulong)(iVar14 * 4 - 4);
      uVar11 = FUN_0013be30(*(undefined8 *)(param_3 + 4),
                            (uint)*(byte *)(lVar16 + 1) << 0x10 | (uint)*(byte *)(lVar16 + 2) << 8 |
                            (uint)*(byte *)(lVar16 + 3));
      *(undefined4 *)(param_3 + 0x2c) = uVar11;
      return 1;
    }
    uVar26 = 0;
    *pbVar20 = 0;
    bVar7 = true;
    uVar10 = 0xffffd8f0;
    uVar19 = 0;
  }
  else {
    bVar7 = false;
    uVar26 = (uint)((int)uVar10 < -9999);
    uVar19 = uVar18;
  }
  uVar21 = uVar28;
  if ((uVar27 + 1 & 0xffff) < uVar24) {
    uVar21 = uVar27 + 1;
  }
  uVar25 = (ulong)uVar21;
  if (uVar26 != (uVar6 & 0xffff)) {
    if (bVar7) {
      do {
        uVar21 = (uint)uVar25;
        uVar29 = uVar25 & 0xffff;
        lVar1 = lVar22 + uVar29 * 0x20;
        iVar14 = *(int *)(lVar1 + 0x10);
        if (*(char *)(param_2 + 0x50) == '\x06') {
          if ((1 < iVar14 + 1U) && (lVar17 = *(long *)(param_3 + 0xc), lVar17 != 0)) {
            uVar19 = (ulong)*(byte *)(lVar17 + 0x10) << 0x18 |
                     (ulong)*(byte *)(lVar17 + 0x11) << 0x10 | (ulong)*(byte *)(lVar17 + 0x12) << 8;
            pbVar20 = (byte *)(lVar17 + 0x13);
            uVar12 = 0x3f;
            goto LAB_0013808c;
          }
LAB_00138100:
          uVar26 = uVar26 + 1;
        }
        else {
          if (iVar14 + 1U < 2) goto LAB_00138100;
          lVar17 = *(long *)(param_3 + 0x10);
          if (lVar17 == 0) {
            lVar17 = *(long *)(param_3 + 4);
            uVar19 = (ulong)*(byte *)(lVar17 + 0x38) << 0x18 |
                     (ulong)*(byte *)(lVar17 + 0x39) << 0x10 | (ulong)*(byte *)(lVar17 + 0x3a) << 8;
            pbVar20 = (byte *)(lVar17 + 0x3b);
          }
          else {
            uVar19 = (ulong)*(byte *)(lVar17 + 0x10) << 0x18 |
                     (ulong)*(byte *)(lVar17 + 0x11) << 0x10 | (ulong)*(byte *)(lVar17 + 0x12) << 8;
            pbVar20 = (byte *)(lVar17 + 0x13);
          }
          uVar12 = 0x7f;
LAB_0013808c:
          uVar12 = *(byte *)(lVar17 + (uVar19 | *pbVar20) + (ulong)(iVar14 * 4 - 4)) & uVar12;
          if (((uVar12 == uVar13) && (*(int *)(param_3 + 0x1e) == *(int *)(lVar1 + 0x14))) &&
             (*(int *)(param_3 + 0x1c) == iVar14)) {
            uVar12 = FUN_0013d310(param_3,lVar22,uVar25);
          }
          if (uVar12 == uVar13) goto LAB_001384a0;
          if ((int)uVar12 < -9999) goto LAB_00138100;
        }
        uVar12 = uVar28;
        if ((uVar21 + 1 & 0xffff) < uVar24) {
          uVar12 = uVar21 + 1;
        }
        uVar25 = (ulong)uVar12;
        if (uVar27 == (uVar12 & 0xffff)) {
          param_3[0x2f] = 0x210;
          lVar1 = lVar22 + uVar18 * 0x20;
          *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar1 + 0x14);
          *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar1 + 0x18);
          iVar14 = *(int *)(lVar1 + 0x10);
          *(int *)(param_3 + 0x1c) = iVar14;
          param_3[0x2e] = (short)uVar27;
          goto LAB_001384c8;
        }
      } while ((uVar26 & 0xffff) != (uVar6 & 0xffff));
    }
    else {
      do {
        uVar21 = (uint)uVar25;
        uVar29 = uVar25 & 0xffff;
        lVar1 = lVar22 + uVar29 * 0x20;
        iVar14 = *(int *)(lVar1 + 0x10);
        if (*(char *)(param_2 + 0x50) == '\x06') {
          uVar12 = 0xffffd8f0;
          if (1 < iVar14 + 1U) {
            lVar17 = *(long *)(param_3 + 0xc);
            if (lVar17 != 0) {
              uVar18 = (ulong)*(byte *)(lVar17 + 0x10) << 0x18 |
                       (ulong)*(byte *)(lVar17 + 0x11) << 0x10 |
                       (ulong)*(byte *)(lVar17 + 0x12) << 8;
              pbVar20 = (byte *)(lVar17 + 0x13);
              uVar12 = 0x3f;
              goto LAB_001381e0;
            }
            uVar12 = 0xffffd8f0;
          }
LAB_0013824c:
          uVar26 = uVar26 + 1;
        }
        else {
          uVar12 = 0xffffd8f0;
          if (iVar14 + 1U < 2) goto LAB_0013824c;
          lVar17 = *(long *)(param_3 + 0x10);
          if (lVar17 == 0) {
            lVar17 = *(long *)(param_3 + 4);
            uVar18 = (ulong)*(byte *)(lVar17 + 0x38) << 0x18 |
                     (ulong)*(byte *)(lVar17 + 0x39) << 0x10 | (ulong)*(byte *)(lVar17 + 0x3a) << 8;
            pbVar20 = (byte *)(lVar17 + 0x3b);
          }
          else {
            uVar18 = (ulong)*(byte *)(lVar17 + 0x10) << 0x18 |
                     (ulong)*(byte *)(lVar17 + 0x11) << 0x10 | (ulong)*(byte *)(lVar17 + 0x12) << 8;
            pbVar20 = (byte *)(lVar17 + 0x13);
          }
          uVar12 = 0x7f;
LAB_001381e0:
          uVar12 = *(byte *)(lVar17 + (uVar18 | *pbVar20) + (ulong)(iVar14 * 4 - 4)) & uVar12;
          if (((uVar12 == uVar13) && (*(int *)(param_3 + 0x1e) == *(int *)(lVar1 + 0x14))) &&
             (*(int *)(param_3 + 0x1c) == iVar14)) {
            uVar12 = FUN_0013d310(param_3,lVar22,uVar25);
          }
          if (uVar12 == uVar13) goto LAB_001384a0;
          if ((int)uVar12 < -9999) goto LAB_0013824c;
        }
        uVar23 = uVar21;
        if ((int)uVar12 <= (int)uVar10) {
          uVar23 = (uint)uVar19;
          uVar12 = uVar10;
        }
        uVar10 = uVar12;
        uVar19 = (ulong)uVar23;
        uVar12 = uVar28;
        if ((uVar21 + 1 & 0xffff) < uVar24) {
          uVar12 = uVar21 + 1;
        }
        uVar25 = (ulong)uVar12;
        if ((uVar27 == (uVar12 & 0xffff)) && (uVar10 != 0xffffd8f0)) {
          iVar14 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar10;
          sVar5 = param_3[2] +
                  ((short)((ulong)((long)iVar14 * 0x51eb851f) >> 0x25) - (short)(iVar14 >> 0x1f));
          *param_3 = sVar5;
          sVar15 = param_3[0x35];
          if ((sVar15 <= sVar5) && (sVar15 = param_3[0x34], sVar5 <= param_3[0x34])) {
            sVar15 = sVar5;
          }
          param_3[0x2f] = 0x210;
          lVar1 = lVar22 + (uVar19 & 0xffff) * 0x20;
          *param_3 = sVar15;
          *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar1 + 0x14);
          *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar1 + 0x18);
          iVar14 = *(int *)(lVar1 + 0x10);
          *(int *)(param_3 + 0x1c) = iVar14;
          param_3[0x2e] = (short)uVar23;
          goto LAB_001384c8;
        }
      } while ((uVar26 & 0xffff) != (uVar6 & 0xffff));
    }
  }
LAB_00137d98:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
LAB_001384a0:
  param_3[0x2f] = 0x210;
  lVar1 = lVar22 + uVar29 * 0x20;
  *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar1 + 0x14);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar1 + 0x18);
  iVar14 = *(int *)(lVar1 + 0x10);
  *(int *)(param_3 + 0x1c) = iVar14;
  param_3[0x2e] = (short)uVar21;
LAB_001384c8:
  lVar16 = lVar16 + (ulong)(iVar14 * 4 - 4);
  uVar11 = FUN_0013be30(*(undefined8 *)(param_3 + 4),
                        (uint)*(byte *)(lVar16 + 1) << 0x10 | (uint)*(byte *)(lVar16 + 2) << 8 |
                        (uint)*(byte *)(lVar16 + 3));
  *(undefined4 *)(param_3 + 0x2c) = uVar11;
  *(undefined1 *)(lVar22 + 0x2051) = 1;
  return 1;
}

