
undefined8 FUN_00124860(long param_1,long *param_2,short *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  short sVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  ushort uVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long local_80;
  byte *local_70;
  char *local_68;
  
  lVar15 = *(long *)(param_3 + 4);
  lVar27 = *(long *)(lVar15 + 8);
  uVar30 = (*(uint *)(lVar27 + 0x38) & 0xff00ff00) >> 8 | (*(uint *)(lVar27 + 0x38) & 0xff00ff) << 8
  ;
  uVar19 = uVar30 >> 0x10 | uVar30 << 0x10;
  uVar30 = *(uint *)(param_3 + 0x1c);
  lVar29 = *(long *)(lVar15 + 0x28);
  iVar13 = *(int *)(lVar15 + 0x70);
  uVar26 = *(uint *)(lVar27 + 0x20);
  if (*(byte *)(param_2 + 10) - 3 < 2) {
    iVar11 = FUN_0010dbc0(lVar15,3,uVar19 + uVar30 * 4 + -4,4,&local_70);
    if (iVar11 < 0) {
      *(undefined1 *)((long)param_3 + 0x5f) = 3;
      return 0;
    }
    lVar15 = *(long *)(param_3 + 4);
  }
  else {
    lVar21 = *(long *)(param_3 + 0xc);
    if (lVar21 == 0) goto LAB_0012506c;
    local_80 = lVar21 + ((ulong)*(byte *)(lVar21 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar21 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar21 + 0x12) << 8 | (ulong)*(byte *)(lVar21 + 0x13));
    local_70 = (byte *)(local_80 + (ulong)(uVar30 * 4 - 4));
  }
  bVar4 = local_70[1];
  bVar5 = local_70[2];
  uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
  uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
  bVar6 = local_70[3];
  iVar11 = FUN_0010dbc0(lVar15,5,uVar26,1,&local_68);
  if (iVar11 < 0) goto LAB_0012506c;
  cVar9 = *local_68;
  iVar11 = 10;
  if (iVar13 == 0x40050001) {
    iVar11 = 6;
  }
  uVar25 = *(uint *)(*(long *)(param_3 + 4) + 8);
  uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
  uVar14 = 6;
  if ((uVar25 >> 0x10 | uVar25 << 0x10) != 0x40050001) {
    uVar14 = 10;
  }
  iVar12 = FUN_0010dbc0(*(long *)(param_3 + 4),5,
                        uVar26 + (((uint)bVar4 << 0x10 | (uint)bVar5 << 8 | (uint)bVar6) - 1) *
                                 iVar11,uVar14,&local_68);
  if (iVar12 < 0) goto LAB_0012506c;
  cVar7 = (char)param_2[10];
  uVar25 = *(uint *)(param_3 + 0x1c);
  if ((cVar7 == '\x05') || (cVar7 == '\x03')) {
    uVar30 = uVar25;
    if ((*(byte *)((long)param_3 + 0x5f) & 0xf) != 1) {
      if (uVar25 == *(uint *)(param_3 + 0x20)) goto LAB_0012506c;
      if (*(char *)((long)param_2 + 0x51) == '\0') {
        uVar30 = uVar25 + 1;
        if (*(uint *)(param_3 + 0x20) < uVar30) goto LAB_0012506c;
        if (cVar7 == '\x05') {
          local_70 = (byte *)(local_80 + (ulong)(uVar25 * 4));
        }
        else {
          iVar12 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar25 * 4 + uVar19,4,&local_70);
          if (iVar12 < 0) {
            *(undefined1 *)((long)param_3 + 0x5f) = 3;
            return 0;
          }
        }
        uVar25 = *(uint *)(*(long *)(param_3 + 4) + 8);
        uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
        uVar14 = 6;
        if ((uVar25 >> 0x10 | uVar25 << 0x10) != 0x40050001) {
          uVar14 = 10;
        }
        iVar12 = FUN_0010dbc0(*(long *)(param_3 + 4),5,
                              uVar26 + (((uint)local_70[1] << 0x10 | (uint)local_70[2] << 8 |
                                        (uint)local_70[3]) - 1) * iVar11,uVar14,&local_68);
        if (iVar12 < 0) goto LAB_0012506c;
      }
    }
    bVar4 = *(byte *)(lVar27 + 0x4a);
    lVar15 = 8;
    if (iVar13 == 0x40050001) {
      lVar15 = 4;
    }
    lVar21 = 9;
    if (iVar13 == 0x40050001) {
      lVar21 = 5;
    }
    bVar5 = *(byte *)(lVar27 + 0x4e);
    uVar25 = uVar30 * 4 - 4;
    iVar13 = uVar19 + uVar30 * 4 + -4;
    while (uVar30 <= *(uint *)(param_3 + 0x20)) {
      if (*param_2 == 0) {
        uVar17 = 0;
        if (param_2[1] != 0) goto LAB_00124a98;
LAB_00124b30:
        uVar18 = 0;
LAB_00124b34:
        sVar10 = FUN_001139a0(param_2,uVar17,uVar18);
      }
      else {
        bVar6 = *(byte *)(lVar27 + 0x4b);
        uVar22 = (ulong)bVar6;
        if (bVar6 != 0) {
          uVar22 = (ulong)(ushort)(CONCAT11(local_68[lVar15],local_68[lVar21]) >>
                                  (ulong)(0x10 - bVar6 & 0x1f));
        }
        pbVar23 = (byte *)(lVar29 + uVar22 * bVar4);
        bVar6 = *pbVar23;
        uVar17 = (ushort)bVar6;
        if (bVar4 == 2) {
          uVar17 = CONCAT11(bVar6,pbVar23[1]);
        }
        if (param_2[1] == 0) goto LAB_00124b30;
LAB_00124a98:
        bVar6 = *(byte *)(lVar27 + 0x4f);
        uVar19 = (uint)bVar6;
        if (bVar6 != 0) {
          uVar19 = 0x10 - bVar6;
          uVar19 = (uint)(ushort)(CONCAT11(local_68[lVar15],local_68[lVar21]) >>
                                 (ulong)(uVar19 - *(byte *)(lVar27 + 0x4b) & 0x1f)) &
                   0xffffU >> (ulong)(uVar19 & 0x1f);
        }
        puVar1 = (undefined1 *)
                 (lVar29 + (ulong)(uVar19 * bVar5 +
                                  ((int)(short)((ushort)*(byte *)(lVar27 + 0x48) << 8) |
                                  (uint)*(byte *)(lVar27 + 0x49)) * (uint)bVar4));
        uVar18 = *puVar1;
        if (bVar5 != 2) goto LAB_00124b34;
        sVar10 = FUN_001139a0(param_2,uVar17,CONCAT11(uVar18,puVar1[1]));
      }
      if (sVar10 != 0) {
        *(undefined1 *)((long)param_3 + 0x5f) = 2;
        *(uint *)(param_3 + 0x1c) = uVar30;
        if ((char)param_2[10] == '\x05') {
          local_70 = (byte *)(local_80 + (ulong)uVar25);
          uVar30 = 0x3f;
        }
        else {
          iVar13 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,iVar13,4,&local_70);
          if (iVar13 < 0) goto LAB_0012515c;
          uVar30 = 0x7f;
        }
        uVar30 = *local_70 & uVar30;
        goto LAB_00124ea0;
      }
      if ((cVar9 < '\0') || (uVar30 = uVar30 + 1, *(uint *)(param_3 + 0x20) < uVar30)) break;
      if ((char)param_2[10] == '\x05') {
        local_70 = (byte *)(local_80 + (ulong)(uVar25 + 4));
      }
      else {
        iVar12 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,iVar13 + 4,4,&local_70);
        if (iVar12 < 0) break;
      }
      uVar19 = *(uint *)(*(long *)(param_3 + 4) + 8);
      uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      uVar14 = 6;
      if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0x40050001) {
        uVar14 = 10;
      }
      iVar12 = FUN_0010dbc0(*(long *)(param_3 + 4),5,
                            uVar26 + (((uint)local_70[1] << 0x10 | (uint)local_70[2] << 8 |
                                      (uint)local_70[3]) - 1) * iVar11,uVar14,&local_68);
      iVar13 = iVar13 + 4;
      uVar25 = uVar25 + 4;
      if (iVar12 < 0) break;
    }
    goto LAB_0012506c;
  }
  if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
    param_3[0x2f] = 0x210;
    return 1;
  }
  if (*(char *)((long)param_2 + 0x51) != '\0') {
    if (uVar25 == *(uint *)(param_3 + 0x20)) goto LAB_0012506c;
    if (cVar7 == '\x06') {
      local_70 = (byte *)(local_80 + (ulong)(uVar25 << 2));
      *(undefined1 *)((long)param_3 + 0x5f) = 2;
      *(uint *)(param_3 + 0x1c) = uVar25 + 1;
    }
    else {
      *(undefined1 *)((long)param_3 + 0x5f) = 2;
      *(uint *)(param_3 + 0x1c) = uVar25 + 1;
      iVar13 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar19 + uVar25 * 4,4,&local_70);
      if (iVar13 < 0) goto LAB_0012515c;
    }
    uVar30 = *local_70 & 0x3f;
LAB_00124ea0:
    uVar14 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                          (uint)local_70[1] << 0x10 | (uint)local_70[2] << 8 | (uint)local_70[3]);
    *(undefined1 *)(param_3 + 0x2f) = 0x10;
    uVar17 = param_3[2];
    iVar13 = ((uint)(ushort)param_3[3] - (uint)uVar17) * uVar30;
    *(undefined4 *)(param_3 + 0x2c) = uVar14;
    goto LAB_00124edc;
  }
  uVar26 = uVar30 * 4 - 4;
  if (cVar7 == '\x06') {
    uVar20 = *(uint *)(param_3 + 0x20);
    uVar25 = *(uint *)(param_3 + 0x1e);
    if (uVar20 < uVar25) goto LAB_0012506c;
    uVar26 = *(byte *)(local_80 + (ulong)uVar26) & 0x3f;
LAB_00124d80:
    uVar24 = 0xffffd8f0;
    uVar31 = 0;
    do {
      uVar28 = uVar25 * 4 - 4;
      while( true ) {
        pbVar23 = (byte *)(local_80 + (ulong)uVar28);
        local_70 = pbVar23;
        if (*(char *)((long)param_2 + 0x53) < '\0') break;
        if ((char)*pbVar23 < '\0') {
          cVar9 = FUN_0012b800(*(undefined8 *)(param_3 + 4),
                               (uint)pbVar23[1] << 0x10 | (uint)pbVar23[2] << 8 | (uint)pbVar23[3],
                               *(undefined1 *)(param_1 + 0x6d648),*(undefined1 *)(param_1 + 0x6d649)
                              );
          if (cVar9 != '\0') {
            bVar4 = *local_70;
            goto joined_r0x00124e28;
          }
          uVar20 = *(uint *)(param_3 + 0x20);
        }
        uVar25 = uVar25 + 1;
        uVar28 = uVar28 + 4;
        if (uVar20 < uVar25) goto LAB_00125038;
      }
      bVar4 = *pbVar23;
joined_r0x00124e28:
      uVar28 = bVar4 & 0x3f;
      if ((uVar30 < uVar25) && (uVar26 == uVar28)) {
        param_3[0x2f] = 0x210;
        *(uint *)(param_3 + 0x1c) = uVar25;
        uVar16 = *(undefined8 *)(param_3 + 4);
        uVar30 = (uint)pbVar23[1] << 0x10 | (uint)pbVar23[2] << 8 | (uint)pbVar23[3];
        local_70 = pbVar23;
        goto LAB_00125194;
      }
      uVar2 = uVar28;
      if (uVar26 <= uVar28 || (int)uVar28 <= (int)uVar24) {
        uVar2 = uVar24;
      }
      uVar20 = *(uint *)(param_3 + 0x20);
      uVar3 = uVar25;
      if (uVar26 <= uVar28 || (int)uVar28 <= (int)uVar24) {
        uVar3 = uVar31;
      }
      uVar25 = uVar25 + 1;
      uVar24 = uVar2;
      uVar31 = uVar3;
    } while (uVar25 <= uVar20);
  }
  else {
    iVar13 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar19 + uVar26,4,&local_70);
    if (iVar13 < 0) {
      *(undefined1 *)((long)param_3 + 0x5f) = 3;
      return 0;
    }
    uVar20 = *(uint *)(param_3 + 0x20);
    uVar25 = *(uint *)(param_3 + 0x1e);
    uVar26 = *local_70 & 0x7f;
    if ((char)param_2[10] == '\x06') {
      if (uVar20 < uVar25) goto LAB_0012506c;
      goto LAB_00124d80;
    }
    if (uVar20 < uVar25) goto LAB_0012506c;
    iVar13 = uVar19 + uVar25 * 4 + -4;
    uVar20 = 0xffffd8f0;
    uVar28 = 0;
    do {
      iVar11 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,iVar13,4,&local_70);
      if (iVar11 < 0) goto LAB_0012506c;
      uVar2 = *local_70 & 0x7f;
      if ((uVar30 < uVar25) && (uVar26 == uVar2)) {
        param_3[0x2f] = 0x210;
        *(uint *)(param_3 + 0x1c) = uVar25;
        iVar13 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,iVar13,4,&local_70);
        if (-1 < iVar13) {
          uVar16 = *(undefined8 *)(param_3 + 4);
          uVar30 = (uint)local_70[1] << 0x10 | (uint)local_70[2] << 8 | (uint)local_70[3];
LAB_00125194:
          uVar14 = FUN_0012a960(uVar16,uVar30);
          *(undefined4 *)(param_3 + 0x2c) = uVar14;
          return 1;
        }
        goto LAB_0012515c;
      }
      uVar24 = uVar2;
      if (uVar26 <= uVar2 || (int)uVar2 <= (int)uVar20) {
        uVar24 = uVar20;
      }
      uVar31 = uVar25;
      if (uVar26 <= uVar2 || (int)uVar2 <= (int)uVar20) {
        uVar31 = uVar28;
      }
      uVar25 = uVar25 + 1;
      iVar13 = iVar13 + 4;
      uVar20 = uVar24;
      uVar28 = uVar31;
    } while (uVar25 <= *(uint *)(param_3 + 0x20));
  }
LAB_00125038:
  if (uVar31 != 0) {
    *(undefined1 *)((long)param_3 + 0x5f) = 2;
    *(uint *)(param_3 + 0x1c) = uVar31;
    uVar30 = uVar31 * 4 - 4;
    if ((char)param_2[10] == '\x06') {
      local_70 = (byte *)(local_80 + (ulong)uVar30);
    }
    else {
      iVar13 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar30 + uVar19,4,&local_70);
      if (iVar13 < 0) {
LAB_0012515c:
        *(undefined1 *)((long)param_3 + 0x5f) = 3;
        return 0;
      }
    }
    uVar14 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                          (uint)local_70[1] << 0x10 | (uint)local_70[2] << 8 | (uint)local_70[3]);
    *(undefined1 *)(param_3 + 0x2f) = 0x10;
    uVar17 = param_3[2];
    *(undefined4 *)(param_3 + 0x2c) = uVar14;
    iVar13 = ((uint)(ushort)param_3[3] - (uint)uVar17) * uVar24;
LAB_00124edc:
    sVar8 = uVar17 + ((short)((ulong)((long)iVar13 * 0x51eb851f) >> 0x25) - (short)(iVar13 >> 0x1f))
    ;
    *param_3 = sVar8;
    sVar10 = param_3[0x35];
    if ((sVar10 <= sVar8) && (sVar10 = param_3[0x34], sVar8 <= param_3[0x34])) {
      sVar10 = sVar8;
    }
    *param_3 = sVar10;
    return 1;
  }
LAB_0012506c:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
}

