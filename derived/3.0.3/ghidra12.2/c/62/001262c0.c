
undefined8 FUN_001262c0(long param_1,long param_2,short *param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  short sVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint unaff_w29;
  uint local_94;
  long local_88;
  byte *local_70;
  byte *local_68;
  
  if (*(char *)(param_2 + 0x51) != '\0') goto LAB_001262ec;
  if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
    param_3[0x2f] = 0x210;
    return 1;
  }
  lVar19 = *(long *)(*(long *)(param_2 + 0x28) + (param_4 & 0xffff) * 0x50 + 0x40);
  if ((*(byte *)(lVar19 + 0x2050) >> 1 & 1) != 0) goto LAB_001262ec;
  if (*(char *)(param_2 + 0x50) == '\x06') {
    lVar15 = *(long *)(param_3 + 0xc);
    if (lVar15 == 0) goto LAB_001262ec;
    local_88 = lVar15 + ((ulong)*(byte *)(lVar15 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar15 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar15 + 0x12) << 8 | (ulong)*(byte *)(lVar15 + 0x13));
  }
  else {
    uVar11 = *(uint *)(*(long *)(*(long *)(param_3 + 4) + 8) + 0x38);
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    unaff_w29 = uVar11 >> 0x10 | uVar11 << 0x10;
  }
  lVar15 = lVar19 + (ulong)*(ushort *)(param_2 + 0x4e) * 2;
  uVar4 = *(ushort *)(lVar15 + 0x1fe0);
  if (0xff < uVar4) {
    return 0xada0;
  }
  uVar5 = *(ushort *)(lVar15 + 0x1fde);
  if (0xfe < uVar5) {
    return 0xada0;
  }
  uVar28 = (uint)uVar4;
  uVar11 = (uint)uVar5;
  uVar7 = uVar28 - uVar11;
  if ((uVar7 & 0xffff) == 0) goto LAB_001262ec;
  uVar2 = uVar11;
  if (uVar11 <= (ushort)param_3[0x2e]) {
    uVar2 = (uint)(ushort)param_3[0x2e];
  }
  uVar14 = (ulong)uVar2;
  if (*(char *)(param_2 + 0x50) == '\x06') {
    lVar15 = lVar19 + uVar14 * 0x20;
    puVar18 = (uint *)(lVar15 + 0x10);
    if ((*puVar18 + 1 < 2) || (lVar17 = *(long *)(param_3 + 0xc), lVar17 == 0)) {
LAB_00126410:
      uVar10 = 0xffffd8f0;
      local_94 = 0xffffffff;
    }
    else {
      lVar17 = lVar17 + ((ulong)*(byte *)(lVar17 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar17 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar17 + 0x12) << 8 | (ulong)*(byte *)(lVar17 + 0x13));
      puVar25 = (uint *)(lVar15 + 0x18);
      uVar26 = *puVar25;
      uVar27 = *(uint *)(lVar15 + 0x14);
      if (uVar26 < uVar27) goto LAB_00126410;
      uVar21 = *(byte *)(lVar17 + (ulong)(*puVar18 * 4 - 4)) & 0x3f;
      local_94 = 0;
      uVar23 = 0xffffd8f0;
      do {
        uVar20 = uVar27 * 4 - 4;
        while (pbVar1 = (byte *)(lVar17 + (ulong)uVar20), -1 < *(char *)(param_2 + 0x53)) {
          if ((char)*pbVar1 < '\0') {
            cVar9 = FUN_0012b800(*(undefined8 *)(param_3 + 4),
                                 (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)pbVar1[3],
                                 *(undefined1 *)(param_1 + 0x6d648),
                                 *(undefined1 *)(param_1 + 0x6d649));
            if (cVar9 != '\0') break;
            uVar26 = *puVar25;
          }
          uVar27 = uVar27 + 1;
          uVar20 = uVar20 + 4;
          uVar10 = uVar23;
          if (uVar26 < uVar27) goto LAB_001269e4;
        }
        uVar10 = *pbVar1 & 0x3f;
        if ((uVar10 == uVar21) && (*puVar18 < uVar27)) {
          local_94 = uVar27;
          goto LAB_00126418;
        }
        uVar20 = uVar27;
        if (uVar21 <= uVar10 || (int)uVar10 <= (int)uVar23) {
          uVar20 = local_94;
          uVar10 = uVar23;
        }
        uVar27 = uVar27 + 1;
        uVar26 = *puVar25;
        uVar23 = uVar10;
        local_94 = uVar20;
      } while (uVar27 <= uVar26);
LAB_001269e4:
      if (uVar10 == 0xffffd8f0) goto LAB_00126410;
    }
LAB_00126418:
    *puVar18 = local_94;
    local_70 = (byte *)(local_88 + (ulong)(*(int *)(param_3 + 0x1c) * 4 - 4));
    uVar27 = *local_70 & 0x3f;
    if (uVar10 != uVar27) goto LAB_001264f4;
LAB_00126448:
    pbVar1 = (byte *)(lVar19 + 0x2051);
    bVar3 = *pbVar1;
    *pbVar1 = bVar3 + 1;
    if ((byte)(bVar3 + 1) < 3) {
      param_3[0x2f] = 0x210;
      iVar12 = *(int *)(lVar19 + uVar14 * 0x20 + 0x10);
      *(int *)(param_3 + 0x1c) = iVar12;
      param_3[0x2e] = (short)uVar2;
      uVar11 = iVar12 * 4 - 4;
      if (*(char *)(param_2 + 0x50) == '\x06') {
        local_70 = (byte *)(local_88 + (ulong)uVar11);
      }
      else {
        iVar12 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar11 + unaff_w29,4,&local_70);
        if (iVar12 < 0) {
          return 0xbda0;
        }
      }
      uVar13 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                            (uint)local_70[1] << 0x10 | (uint)local_70[2] << 8 | (uint)local_70[3]);
      *(undefined4 *)(param_3 + 0x2c) = uVar13;
      return 1;
    }
    uVar26 = 0;
    *pbVar1 = 0;
    bVar8 = true;
    uVar10 = 0xffffd8f0;
    uVar22 = 0;
  }
  else {
    uVar10 = FUN_0012c770(param_3,lVar19);
    iVar12 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,
                          unaff_w29 + *(int *)(param_3 + 0x1c) * 4 + -4,4,&local_70);
    if (iVar12 < 0) {
      return 0xbda0;
    }
    uVar27 = *local_70 & 0x7f;
    if (uVar10 == uVar27) goto LAB_00126448;
LAB_001264f4:
    bVar8 = false;
    uVar26 = (uint)((int)uVar10 < -9999);
    uVar22 = uVar14;
  }
  if ((uVar2 + 1 & 0xffff) < uVar28) {
    uVar11 = uVar2 + 1;
  }
  uVar24 = (ulong)uVar11;
  if (uVar26 != (uVar7 & 0xffff)) {
    if (bVar8) {
      do {
        if (*(char *)(param_2 + 0x50) == '\x06') {
          iVar12 = *(int *)(lVar19 + (uVar24 & 0xffff) * 0x20 + 0x10);
          if ((1 < iVar12 + 1U) && (lVar15 = *(long *)(param_3 + 0xc), lVar15 != 0)) {
            uVar11 = *(byte *)(lVar15 + ((ulong)*(byte *)(lVar15 + 0x10) << 0x18 |
                                         (ulong)*(byte *)(lVar15 + 0x11) << 0x10 |
                                         (ulong)*(byte *)(lVar15 + 0x12) << 8 |
                                        (ulong)*(byte *)(lVar15 + 0x13)) + (ulong)(iVar12 * 4 - 4))
                     & 0x3f;
            goto joined_r0x00126610;
          }
LAB_00126664:
          uVar26 = uVar26 + 1;
        }
        else {
          iVar12 = *(int *)(lVar19 + (uVar24 & 0xffff) * 0x20 + 0x10);
          uVar11 = 0xffffd8f0;
          if (1 < iVar12 + 1U) {
            uVar11 = *(uint *)(*(long *)(*(long *)(param_3 + 4) + 8) + 0x38);
            uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            iVar12 = FUN_0010dbc0(*(long *)(param_3 + 4),3,
                                  (uVar11 >> 0x10 | uVar11 << 0x10) + iVar12 * 4 + -4,4,&local_68);
            if (iVar12 < 0) {
              uVar11 = 0xffffd8f0;
            }
            else {
              uVar11 = *local_68 & 0x7f;
            }
          }
joined_r0x00126610:
          if (uVar11 == uVar27) {
            lVar15 = lVar19 + (uVar24 & 0xffff) * 0x20;
            if ((*(int *)(param_3 + 0x1e) != *(int *)(lVar15 + 0x14)) ||
               (*(int *)(param_3 + 0x1c) != *(int *)(lVar15 + 0x10))) goto LAB_00126964;
            uVar11 = FUN_0012c770(param_3,lVar19,uVar24);
          }
          if (uVar11 == uVar27) goto LAB_00126964;
          if ((int)uVar11 < -9999) goto LAB_00126664;
        }
        uVar11 = (uint)uVar5;
        if (((int)uVar24 + 1U & 0xffff) < (uint)uVar4) {
          uVar11 = (int)uVar24 + 1;
        }
        uVar24 = (ulong)uVar11;
        if (uVar2 == (uVar11 & 0xffff)) {
          param_3[0x2f] = 0x210;
          lVar15 = lVar19 + uVar14 * 0x20;
          *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar15 + 0x14);
          *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar15 + 0x18);
          iVar12 = *(int *)(lVar15 + 0x10);
          *(int *)(param_3 + 0x1c) = iVar12;
          param_3[0x2e] = (short)uVar2;
          cVar9 = *(char *)(param_2 + 0x50);
          goto joined_r0x00126ad0;
        }
      } while ((uVar26 & 0xffff) != (uVar7 & 0xffff));
    }
    else {
      do {
        if (*(char *)(param_2 + 0x50) == '\x06') {
          iVar12 = *(int *)(lVar19 + (uVar24 & 0xffff) * 0x20 + 0x10);
          uVar11 = 0xffffd8f0;
          if (1 < iVar12 + 1U) {
            lVar15 = *(long *)(param_3 + 0xc);
            if (lVar15 != 0) {
              uVar11 = *(byte *)(lVar15 + ((ulong)*(byte *)(lVar15 + 0x10) << 0x18 |
                                           (ulong)*(byte *)(lVar15 + 0x11) << 0x10 |
                                           (ulong)*(byte *)(lVar15 + 0x12) << 8 |
                                          (ulong)*(byte *)(lVar15 + 0x13)) + (ulong)(iVar12 * 4 - 4)
                                ) & 0x3f;
              goto joined_r0x00126938;
            }
            uVar11 = 0xffffd8f0;
          }
LAB_001268b4:
          uVar26 = uVar26 + 1;
        }
        else {
          iVar12 = *(int *)(lVar19 + (uVar24 & 0xffff) * 0x20 + 0x10);
          if ((iVar12 + 1U < 2) ||
             (uVar11 = *(uint *)(*(long *)(*(long *)(param_3 + 4) + 8) + 0x38),
             uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8,
             iVar12 = FUN_0010dbc0(*(long *)(param_3 + 4),3,
                                   (uVar11 >> 0x10 | uVar11 << 0x10) + iVar12 * 4 + -4,4,&local_68),
             iVar12 < 0)) {
            uVar11 = 0xffffd8f0;
            if (uVar27 == 0xffffd8f0) goto LAB_00126860;
          }
          else {
            uVar11 = *local_68 & 0x7f;
joined_r0x00126938:
            if (uVar11 == uVar27) {
LAB_00126860:
              lVar15 = lVar19 + (uVar24 & 0xffff) * 0x20;
              if ((*(int *)(param_3 + 0x1e) != *(int *)(lVar15 + 0x14)) ||
                 (*(int *)(param_3 + 0x1c) != *(int *)(lVar15 + 0x10))) goto LAB_00126964;
              uVar11 = FUN_0012c770(param_3,lVar19,uVar24);
            }
          }
          if (uVar11 == uVar27) goto LAB_00126964;
          if ((int)uVar11 < -9999) goto LAB_001268b4;
        }
        uVar23 = (uint)uVar24;
        uVar21 = uVar23;
        if ((int)uVar11 <= (int)uVar10) {
          uVar21 = (uint)uVar22;
          uVar11 = uVar10;
        }
        uVar10 = uVar11;
        uVar22 = (ulong)uVar21;
        uVar11 = uVar23 + 1 & 0xffff;
        uVar20 = (uint)uVar5;
        if (uVar11 <= uVar28 && uVar4 != uVar11) {
          uVar20 = uVar23 + 1;
        }
        uVar24 = (ulong)uVar20;
        if ((uVar2 == (uVar20 & 0xffff)) && (uVar10 != 0xffffd8f0)) {
          iVar12 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar10;
          sVar6 = param_3[2] +
                  ((short)((ulong)((long)iVar12 * 0x51eb851f) >> 0x25) - (short)(iVar12 >> 0x1f));
          *param_3 = sVar6;
          sVar16 = param_3[0x35];
          if ((sVar16 <= sVar6) && (sVar16 = param_3[0x34], sVar6 <= param_3[0x34])) {
            sVar16 = sVar6;
          }
          param_3[0x2f] = 0x210;
          lVar15 = lVar19 + (uVar22 & 0xffff) * 0x20;
          *param_3 = sVar16;
          *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar15 + 0x14);
          *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar15 + 0x18);
          iVar12 = *(int *)(lVar15 + 0x10);
          *(int *)(param_3 + 0x1c) = iVar12;
          param_3[0x2e] = (short)uVar21;
          goto LAB_00126abc;
        }
      } while ((uVar26 & 0xffff) != (uVar7 & 0xffff));
    }
  }
LAB_001262ec:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
LAB_00126964:
  param_3[0x2f] = 0x210;
  lVar15 = lVar19 + (uVar24 & 0xffff) * 0x20;
  *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar15 + 0x14);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar15 + 0x18);
  iVar12 = *(int *)(lVar15 + 0x10);
  *(int *)(param_3 + 0x1c) = iVar12;
  param_3[0x2e] = (short)uVar24;
LAB_00126abc:
  cVar9 = *(char *)(param_2 + 0x50);
joined_r0x00126ad0:
  uVar11 = iVar12 * 4 - 4;
  if (cVar9 == '\x06') {
    local_70 = (byte *)(local_88 + (ulong)uVar11);
  }
  else {
    iVar12 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar11 + unaff_w29,4,&local_70);
    if (iVar12 < 0) {
      return 0xbda0;
    }
  }
  uVar13 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                        (uint)local_70[1] << 0x10 | (uint)local_70[2] << 8 | (uint)local_70[3]);
  *(undefined4 *)(param_3 + 0x2c) = uVar13;
  *(undefined1 *)(lVar19 + 0x2051) = 1;
  return 1;
}

