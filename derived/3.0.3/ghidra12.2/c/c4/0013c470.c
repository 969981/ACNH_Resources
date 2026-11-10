
uint FUN_0013c470(long param_1,byte param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint *param_8,uint *param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_f8;
  uint local_e4;
  byte local_d0 [112];
  
  lVar16 = *(long *)(param_1 + 8);
  if (param_2 - 5 < 2) {
    lVar20 = *(long *)(param_1 + 0x18);
    if (lVar20 == 0) {
      return 0xffff;
    }
LAB_0013c4e4:
    uVar21 = (ulong)*(byte *)(lVar20 + 0x10) << 0x18 | (ulong)*(byte *)(lVar20 + 0x11) << 0x10 |
             (ulong)*(byte *)(lVar20 + 0x12) << 8;
    pbVar17 = (byte *)(lVar20 + 0x13);
  }
  else {
    lVar20 = *(long *)(param_1 + 0x20);
    if (lVar20 != 0) goto LAB_0013c4e4;
    uVar21 = (ulong)*(byte *)(lVar16 + 0x38) << 0x18 | (ulong)*(byte *)(lVar16 + 0x39) << 0x10 |
             (ulong)*(byte *)(lVar16 + 0x3a) << 8;
    pbVar17 = (byte *)(lVar16 + 0x3b);
    lVar20 = lVar16;
  }
  uVar11 = (*(uint *)(lVar16 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar16 + 8) & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  lVar20 = lVar20 + (uVar21 | *pbVar17);
  lVar1 = lVar16 + ((ulong)*(byte *)(lVar16 + 0x20) << 0x18 |
                    (ulong)*(byte *)(lVar16 + 0x21) << 0x10 | (ulong)*(byte *)(lVar16 + 0x22) << 8 |
                   (ulong)*(byte *)(lVar16 + 0x23));
  lVar2 = lVar16 + ((ulong)*(byte *)(lVar16 + 0x24) << 0x18 |
                    (ulong)*(byte *)(lVar16 + 0x25) << 0x10 | (ulong)*(byte *)(lVar16 + 0x26) << 8 |
                   (ulong)*(byte *)(lVar16 + 0x27));
  local_e4 = param_5;
  if ((param_2 | 2) == 6) {
    if ((param_4 & 0xffff) != 0) {
      iVar19 = 6;
      if (uVar11 != 0x50001) {
        iVar19 = 10;
      }
      do {
        if ((*param_3 & 0xfc) == 0xd8) {
          iVar18 = 1;
          if (*(short *)(param_3 + 2) != 0) {
            iVar18 = 2;
          }
        }
        else {
          iVar18 = 1;
        }
        if (param_6 < local_e4) {
          return 0xffff;
        }
        sVar10 = (short)param_7;
        bVar6 = false;
        uVar11 = local_e4;
        uVar23 = param_6;
        do {
          while( true ) {
            uVar22 = uVar11 + (uVar23 - uVar11 >> 1);
            uVar24 = uVar22 - 1;
            lVar16 = lVar20 + (ulong)(uVar24 * 4);
            uVar8 = FUN_00139a50(*(undefined8 *)(param_1 + 8),
                                 lVar1 + (ulong)((((uint)*(byte *)(lVar16 + 1) << 0x10 |
                                                   (uint)*(byte *)(lVar16 + 2) << 8 |
                                                  (uint)*(byte *)(lVar16 + 3)) - 1) * iVar19),lVar2,
                                 local_d0);
            if ((short)(uVar8 & 0xff) <= sVar10) break;
            sVar9 = FUN_00100470(param_3,local_d0 + (long)sVar10 * 2,iVar18);
            if (sVar9 == 0) {
              bVar6 = true;
              local_e4 = uVar22;
              uVar23 = uVar24;
              if (uVar24 < uVar11) goto LAB_0013c6b0;
            }
            else {
              if (-1 < sVar9) {
                uVar11 = uVar22 + 1;
                uVar24 = uVar23;
              }
              uVar23 = uVar24;
              if (uVar24 < uVar11) goto LAB_0013c6b0;
            }
          }
          uVar11 = uVar22 + 1;
        } while (uVar11 <= uVar23);
LAB_0013c6b0:
        if (!bVar6) {
          return 0xffff;
        }
        if (param_6 < local_e4) {
          return 0xffff;
        }
        bVar6 = false;
        uVar23 = param_6;
        uVar11 = local_e4;
        do {
          while( true ) {
            uVar22 = uVar11 + (uVar23 - uVar11 >> 1);
            uVar24 = uVar22 - 1;
            lVar16 = lVar20 + (ulong)(uVar24 * 4);
            uVar8 = FUN_00139a50(*(undefined8 *)(param_1 + 8),
                                 lVar1 + (ulong)((((uint)*(byte *)(lVar16 + 1) << 0x10 |
                                                   (uint)*(byte *)(lVar16 + 2) << 8 |
                                                  (uint)*(byte *)(lVar16 + 3)) - 1) * iVar19),lVar2,
                                 local_d0);
            if ((short)(uVar8 & 0xff) <= sVar10) break;
            sVar9 = FUN_00100470(param_3,local_d0 + (long)sVar10 * 2,iVar18);
            if (sVar9 == 0) {
              uVar11 = uVar22 + 1;
              bVar6 = true;
              param_6 = uVar22;
              if (uVar23 < uVar11) goto LAB_0013c790;
            }
            else {
              if (-1 < sVar9) {
                uVar11 = uVar22 + 1;
                uVar24 = uVar23;
              }
              uVar23 = uVar24;
              if (uVar24 < uVar11) goto LAB_0013c790;
            }
          }
          uVar23 = uVar24;
        } while (uVar11 <= uVar24);
LAB_0013c790:
        if (!bVar6) {
          return 0xffff;
        }
        param_3 = param_3 + (ulong)(ushort)iVar18 * 2;
        param_4 = param_4 - iVar18;
        param_7 = iVar18 + param_7;
        param_5 = local_e4;
      } while ((param_4 & 0xffff) != 0);
    }
LAB_0013c7c4:
    *param_8 = param_5;
    *param_9 = param_6;
    return param_7;
  }
  if (param_5 <= param_6) {
    iVar19 = 6;
    if (uVar11 != 0x50001) {
      iVar19 = 10;
    }
    local_f8 = param_4 & 0xffff;
    uVar23 = 0;
    bVar6 = false;
    uVar22 = param_6;
    uVar24 = param_6;
    do {
      uVar14 = param_5 + (uVar24 - param_5 >> 1);
      uVar15 = uVar14 - 1;
      lVar3 = lVar20 + (ulong)(uVar15 * 4);
      uVar12 = FUN_00139a50(lVar16,lVar1 + (ulong)((((uint)*(byte *)(lVar3 + 1) << 0x10 |
                                                     (uint)*(byte *)(lVar3 + 2) << 8 |
                                                    (uint)*(byte *)(lVar3 + 3)) - 1) * iVar19),lVar2
                            ,local_d0);
      bVar4 = *param_3;
      bVar5 = local_d0[0];
      if (bVar4 == local_d0[0]) {
        bVar4 = param_3[1];
        bVar5 = local_d0[1];
      }
      uVar13 = (uint)bVar4 - (uint)bVar5;
      if (uVar13 == 0) {
        if ((uVar12 & 0xff) < local_f8) {
          uVar13 = FUN_00100470(param_3 + 2,(ulong)local_d0 | 2,(uVar12 & 0xff) - 1);
          if ((uVar13 & 0xffff) == 0) {
            uVar13 = 1;
          }
        }
        else {
          uVar13 = FUN_00100470(param_3 + 2,(ulong)local_d0 | 2,param_4 - 1);
          if ((uVar13 & 0xffff) == 0) goto LAB_0013c94c;
        }
LAB_0013c9b8:
        if (-1 < (short)uVar13) {
          param_5 = uVar14 + 1;
          uVar15 = uVar24;
        }
        uVar24 = uVar15;
        if (uVar15 < param_5) goto LAB_0013c9e4;
      }
      else {
        if ((uVar13 & 0xffff) != 0) goto LAB_0013c9b8;
LAB_0013c94c:
        uVar13 = uVar23;
        uVar7 = uVar22;
        if (local_f8 == (uVar12 & 0xff)) {
          uVar13 = uVar14;
          local_e4 = uVar14;
          uVar7 = uVar24;
          if (uVar14 <= uVar23) {
            uVar13 = uVar23;
            uVar7 = uVar22;
          }
        }
        uVar22 = uVar7;
        uVar23 = uVar13;
        bVar6 = true;
        uVar24 = uVar15;
        if (uVar15 < param_5) goto LAB_0013c9e4;
      }
      lVar16 = *(long *)(param_1 + 8);
    } while( true );
  }
LAB_0013c7e8:
  if (param_5 <= param_6) {
    lVar20 = lVar20 + (ulong)(param_5 * 4 - 4);
    iVar19 = 6;
    if (uVar11 != 0x50001) {
      iVar19 = 10;
    }
    uVar11 = FUN_00139a50(*(undefined8 *)(param_1 + 8),
                          lVar1 + (ulong)((((uint)*(byte *)(lVar20 + 1) << 0x10 |
                                            (uint)*(byte *)(lVar20 + 2) << 8 |
                                           (uint)*(byte *)(lVar20 + 3)) - 1) * iVar19),lVar2,
                          local_d0);
    if (((param_4 & 0xffff) <= (uVar11 & 0xff)) &&
       (sVar10 = FUN_00100470(param_3,local_d0,param_4), sVar10 == 0)) {
      return 0xfffe;
    }
  }
  return 0xffff;
LAB_0013c9e4:
  if (uVar23 != 0) {
    if (uVar23 == uVar22) {
      *param_8 = local_e4;
      *param_9 = uVar23;
      return param_4;
    }
    if (uVar22 < uVar23) {
      return 0xffff;
    }
    iVar19 = 6;
    if (uVar11 != 0x50001) {
      iVar19 = 10;
    }
    param_6 = 0;
    do {
      while( true ) {
        uVar11 = uVar23 + (uVar22 - uVar23 >> 1);
        uVar24 = uVar11 - 1;
        lVar16 = lVar20 + (ulong)(uVar24 * 4);
        uVar14 = FUN_00139a50(*(undefined8 *)(param_1 + 8),
                              lVar1 + (ulong)((((uint)*(byte *)(lVar16 + 1) << 0x10 |
                                                (uint)*(byte *)(lVar16 + 2) << 8 |
                                               (uint)*(byte *)(lVar16 + 3)) - 1) * iVar19),lVar2,
                              local_d0);
        bVar4 = *param_3;
        bVar5 = local_d0[0];
        if (bVar4 == local_d0[0]) {
          bVar4 = param_3[1];
          bVar5 = local_d0[1];
        }
        uVar15 = (uint)bVar4 - (uint)bVar5;
        if (uVar15 != 0) break;
        if ((uVar14 & 0xff) < (param_4 & 0xffff)) {
          uVar15 = FUN_00100470(param_3 + 2,(ulong)local_d0 | 2,(uVar14 & 0xff) - 1);
          if ((uVar15 & 0xffff) == 0) {
            uVar15 = 1;
          }
        }
        else {
          uVar15 = FUN_00100470(param_3 + 2,(ulong)local_d0 | 2,param_4 - 1);
          if ((uVar15 & 0xffff) == 0) goto LAB_0013caf8;
        }
LAB_0013cb5c:
        if (-1 < (short)uVar15) {
          uVar23 = uVar11 + 1;
          uVar24 = uVar22;
        }
        uVar22 = uVar24;
        if (uVar24 < uVar23) goto LAB_0013cb80;
      }
      if ((uVar15 & 0xffff) != 0) goto LAB_0013cb5c;
LAB_0013caf8:
      if ((uVar14 & 0xff) == (param_4 & 0xffff)) {
        uVar23 = uVar11 + 1;
        param_6 = uVar11;
        uVar24 = uVar22;
      }
      uVar22 = uVar24;
    } while (uVar23 <= uVar24);
LAB_0013cb80:
    param_5 = local_e4;
    param_7 = param_4;
    if (param_6 == 0) {
      return 0xffff;
    }
    goto LAB_0013c7c4;
  }
  if (bVar6) {
    return 0xfffe;
  }
  goto LAB_0013c7e8;
}

