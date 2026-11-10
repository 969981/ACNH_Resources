
undefined8 FUN_001258e0(long param_1,long param_2,short *param_3,ulong param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  short sVar10;
  short sVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  ushort uVar19;
  byte *pbVar20;
  ushort uVar21;
  uint uVar22;
  long unaff_x22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  byte *pbVar32;
  ushort uVar33;
  long lVar34;
  short *psVar35;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [112];
  ushort local_78 [2];
  ushort local_74 [2];
  undefined8 local_70;
  byte *local_68;
  
  lVar34 = *(long *)(*(long *)(param_2 + 0x28) + (param_4 & 0xffff) * 0x50 + 0x40);
  local_70 = 0;
  if (*(char *)(param_2 + 0x51) != '\0') goto LAB_00125920;
  pbVar1 = (byte *)(lVar34 + 0x2050);
  lVar27 = *(long *)(*(long *)(param_3 + 4) + 8);
  uVar25 = (ulong)*(ushort *)(param_2 + 0x4e);
  if (uVar25 == 0) {
LAB_00125f44:
    lVar18 = lVar34 + uVar25 * 2;
    if (*(short *)(lVar18 + 0x1fde) == *(short *)(lVar18 + 0x1fe0)) goto LAB_00125920;
  }
  else {
    bVar5 = *pbVar1;
    pbVar20 = *(byte **)(param_2 + 0x30);
    pbVar32 = (byte *)(*(long *)(param_2 + 0x28) + 0x65c);
    bVar7 = false;
    bVar8 = false;
    uVar28 = 0;
LAB_001259a4:
    do {
      uVar23 = uVar28;
      if (bVar7) {
LAB_001259e8:
        FUN_001005e0(auStack_f0,pbVar20,1);
        uVar12 = FUN_001003e0(auStack_f0);
        sVar11 = (short)uVar12;
        if (uVar23 == 0) {
          *(undefined2 *)(lVar34 + 0x1fe0) = 0;
          if (*(char *)(param_2 + 0x50) == '\x06') {
            lVar18 = *(long *)(param_3 + 0xc);
            uVar26 = (uint)*(byte *)(lVar18 + 0x18) << 0x18 | (uint)*(byte *)(lVar18 + 0x19) << 0x10
                     | (uint)*(byte *)(lVar18 + 0x1a) << 8;
            pbVar17 = (byte *)(lVar18 + 0x1b);
          }
          else {
            uVar26 = (uint)*(byte *)(lVar27 + 0x60) << 0x18 | (uint)*(byte *)(lVar27 + 0x61) << 0x10
                     | (uint)*(byte *)(lVar27 + 0x62) << 8;
            pbVar17 = (byte *)(lVar27 + 99);
          }
          sVar10 = FUN_0012aef0(param_3,param_2,auStack_f0,uVar12,1,uVar26 | *pbVar17,0,
                                (long)&local_70 + 4,&local_70);
          if (-1 < sVar10) {
            *(undefined4 *)(lVar34 + 0x14) = local_70._4_4_;
            *(short *)(lVar34 + 0x1c) = sVar11;
            *(undefined4 *)(lVar34 + 0x18) = (undefined4)local_70;
          }
          uVar19 = (ushort)(-1 < sVar10);
          if ((((bVar5 & 1) == 0) && (*(long *)(param_2 + 0x40) != 0)) &&
             (sVar11 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar32,local_74,local_78),
             sVar11 == 1)) {
            uVar21 = local_74[0];
            uVar33 = uVar19;
            if (local_74[0] <= local_78[0]) {
              do {
                FUN_00100350(auStack_e8,
                             *(undefined8 *)(*(long *)(param_2 + 0x40) + (ulong)uVar21 * 8 + 0x800))
                ;
                uVar12 = FUN_001003e0(auStack_e8);
                if (*(char *)(param_2 + 0x50) == '\x06') {
                  lVar18 = *(long *)(param_3 + 0xc);
                  uVar26 = (uint)*(byte *)(lVar18 + 0x18) << 0x18 |
                           (uint)*(byte *)(lVar18 + 0x19) << 0x10 |
                           (uint)*(byte *)(lVar18 + 0x1a) << 8;
                  pbVar17 = (byte *)(lVar18 + 0x1b);
                }
                else {
                  uVar26 = (uint)*(byte *)(lVar27 + 0x60) << 0x18 |
                           (uint)*(byte *)(lVar27 + 0x61) << 0x10 |
                           (uint)*(byte *)(lVar27 + 0x62) << 8;
                  pbVar17 = (byte *)(lVar27 + 99);
                }
                sVar11 = FUN_0012aef0(param_3,param_2,auStack_e8,uVar12,1,uVar26 | *pbVar17,0,
                                      (long)&local_70 + 4,&local_70);
                if (-1 < sVar11) {
                  lVar18 = lVar34 + (ulong)uVar19 * 0x20;
                  *(undefined4 *)(lVar18 + 0x14) = local_70._4_4_;
                  *(short *)(lVar18 + 0x1c) = (short)uVar12;
                  *(undefined4 *)(lVar18 + 0x18) = (undefined4)local_70;
                  if (0xfe < uVar19) {
                    *(undefined2 *)(lVar34 + 0x1fe2) = 0;
                    return 0xaca0;
                  }
                  uVar33 = uVar33 + 1;
                  uVar19 = uVar19 + 1;
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 <= local_78[0]);
            }
            *(ushort *)(lVar34 + 0x1fe2) = uVar19;
            uVar19 = uVar33;
          }
          else {
            *(ushort *)(lVar34 + 0x1fe2) = uVar19;
          }
        }
        else {
          lVar18 = lVar34 + uVar23 * 2;
          uVar33 = *(ushort *)(lVar18 + 0x1fe0);
          uVar19 = *(ushort *)(lVar18 + 0x1fde);
          uVar28 = (ulong)uVar19;
          if (uVar33 == uVar19) {
            *(ushort *)(lVar18 + 0x1fe2) = uVar33;
            bVar8 = true;
            bVar6 = *pbVar20;
            goto joined_r0x00125a44;
          }
          uVar21 = uVar33;
          if ((*pbVar1 & 1) != 0) {
            *(ushort *)(lVar18 + 0x1fe0) = uVar19;
            uVar21 = uVar19;
          }
          if (0xfe < uVar19) {
            return 0xada0;
          }
          if (0xff < (uVar21 | uVar33)) {
            return 0xada0;
          }
          if (uVar19 < uVar33) {
            if ((bVar5 & 1) == 0) {
              uVar19 = 0;
              do {
                lVar2 = lVar34 + uVar28 * 0x20;
                psVar35 = (short *)(lVar2 + 0x1c);
                sVar10 = FUN_0012aef0(param_3,param_2,auStack_f0,uVar12,
                                      *(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),
                                      *psVar35,(long)&local_70 + 4,&local_70);
                if (-1 < sVar10) {
                  if (0xfe < uVar21) goto LAB_00125fc0;
                  uVar16 = (ulong)uVar21;
                  uVar21 = uVar21 + 1;
                  lVar3 = lVar34 + uVar16 * 0x20;
                  *(undefined4 *)(lVar3 + 0x14) = local_70._4_4_;
                  *(undefined4 *)(lVar3 + 0x18) = (undefined4)local_70;
                  uVar19 = uVar19 + 1;
                  *(short *)(lVar3 + 0x1c) = *psVar35 + sVar11;
                }
                if (((*(long *)(param_2 + 0x40) != 0) &&
                    (sVar10 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar32,local_74,local_78),
                    sVar10 == 1)) && (uVar29 = local_74[0], local_74[0] <= local_78[0])) {
                  do {
                    FUN_00100350(auStack_e8,
                                 *(undefined8 *)
                                  (*(long *)(param_2 + 0x40) + (ulong)uVar29 * 8 + 0x800));
                    uVar13 = FUN_001003e0(auStack_e8);
                    sVar10 = FUN_0012aef0(param_3,param_2,auStack_e8,uVar13,
                                          *(undefined4 *)(lVar2 + 0x14),
                                          *(undefined4 *)(lVar2 + 0x18),*psVar35,(long)&local_70 + 4
                                          ,&local_70);
                    if (-1 < sVar10) {
                      if (0xfe < uVar21) goto LAB_00125fc0;
                      uVar16 = (ulong)uVar21;
                      uVar21 = uVar21 + 1;
                      lVar3 = lVar34 + uVar16 * 0x20;
                      *(undefined4 *)(lVar3 + 0x14) = local_70._4_4_;
                      *(undefined4 *)(lVar3 + 0x18) = (undefined4)local_70;
                      uVar19 = uVar19 + 1;
                      *(short *)(lVar3 + 0x1c) = *psVar35 + (short)uVar13;
                    }
                    uVar29 = uVar29 + 1;
                  } while (uVar29 <= local_78[0]);
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 < uVar33);
            }
            else {
              psVar35 = (short *)(lVar34 + 0x1c + uVar28 * 0x20);
              uVar19 = 0;
              do {
                sVar10 = FUN_0012aef0(param_3,param_2,auStack_f0,uVar12,
                                      *(undefined4 *)(psVar35 + -4),*(undefined4 *)(psVar35 + -2),
                                      *psVar35,(long)&local_70 + 4,&local_70);
                if (-1 < sVar10) {
                  if (0xfe < uVar21) {
LAB_00125fc0:
                    *(undefined2 *)(lVar34 + (ulong)((int)uVar23 + 1) * 2 + 0x1fe0) = 0;
                    return 0xaca0;
                  }
                  uVar16 = (ulong)uVar21;
                  uVar21 = uVar21 + 1;
                  lVar2 = lVar34 + uVar16 * 0x20;
                  *(undefined4 *)(lVar2 + 0x14) = local_70._4_4_;
                  *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_70;
                  uVar19 = uVar19 + 1;
                  *(short *)(lVar2 + 0x1c) = *psVar35 + sVar11;
                }
                uVar28 = uVar28 + 1;
                psVar35 = psVar35 + 0x10;
              } while (uVar28 < uVar33);
            }
          }
          else {
            uVar19 = 0;
          }
          *(ushort *)(lVar18 + 0x1fe2) = uVar21;
        }
        if ((*pbVar20 & 0xfc) == 0xd8) goto LAB_00125ec0;
LAB_00125a48:
        lVar18 = 1;
      }
      else {
        if (((uVar23 != 0) && (*(short *)(lVar34 + uVar23 * 2 + 0x1fe0) == 0)) ||
           (*(short *)(lVar34 + uVar23 * 2 + 0x1fe2) == 0)) {
          bVar7 = true;
          goto LAB_001259e8;
        }
        bVar7 = false;
        bVar6 = *pbVar20;
joined_r0x00125a44:
        uVar19 = 0;
        if ((bVar6 & 0xfc) != 0xd8) goto LAB_00125a48;
LAB_00125ec0:
        lVar18 = 1;
        if (*(short *)(pbVar20 + 2) != 0) {
          lVar18 = 2;
        }
      }
      pbVar20 = pbVar20 + lVar18 * 2;
      if ((*pbVar32 & 0xfc) != 0xd8) {
        pbVar32 = pbVar32 + 2;
        uVar28 = uVar23 + 1;
        if (uVar25 <= uVar23 + 1) break;
        goto LAB_001259a4;
      }
      lVar18 = 1;
      if (*(short *)(pbVar32 + 2) != 0) {
        lVar18 = 2;
      }
      pbVar32 = pbVar32 + lVar18 * 2;
      uVar28 = uVar23 + 1;
    } while (uVar23 + 1 < uVar25);
    unaff_x22 = uVar23 + 1;
    if (uVar19 == 0) {
      if (bVar8) goto LAB_00125920;
      goto LAB_00125f44;
    }
    if (bVar8) goto LAB_00125920;
  }
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  lVar18 = lVar34 + (ulong)*(ushort *)(param_2 + 0x4e) * 2;
  uVar19 = *(ushort *)(lVar18 + 0x1fe0);
  uVar33 = *(ushort *)(lVar18 + 0x1fde);
  uVar25 = (ulong)uVar33;
  if (*(char *)(param_2 + 0x50) == '\x06') {
    lVar18 = *(long *)(param_3 + 0xc);
    if (lVar18 == 0) goto LAB_00125920;
    unaff_x22 = lVar18 + ((ulong)*(byte *)(lVar18 + 0x10) << 0x18 |
                          (ulong)*(byte *)(lVar18 + 0x11) << 0x10 |
                          (ulong)*(byte *)(lVar18 + 0x12) << 8 | (ulong)*(byte *)(lVar18 + 0x13));
  }
  if (0xff < uVar19) {
    return 0xada0;
  }
  if (0xfe < uVar33) {
    return 0xada0;
  }
  if (*(char *)(param_2 + 0x50) == '\x06') {
    if (uVar19 <= uVar33) goto LAB_00125920;
    uVar28 = 0;
    uVar30 = 0xffffd8f0;
    do {
      lVar27 = lVar34 + uVar25 * 0x20;
      uVar24 = 0xffffd8f0;
      uVar26 = *(uint *)(lVar27 + 0x14);
      uVar31 = *(uint *)(lVar27 + 0x18);
      if (uVar26 <= uVar31) {
        uVar24 = 0xffffd8f0;
        do {
          uVar22 = uVar26 * 4 - 4;
          while ((local_68 = (byte *)(unaff_x22 + (ulong)uVar22), -1 < *(char *)(param_2 + 0x53) &&
                 ((-1 < (char)*local_68 ||
                  (cVar9 = FUN_0012b800(*(undefined8 *)(param_3 + 4),
                                        (uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 |
                                        (uint)local_68[3],*(undefined1 *)(param_1 + 0x6d648),
                                        *(undefined1 *)(param_1 + 0x6d649)), cVar9 == '\0'))))) {
            uVar26 = uVar26 + 1;
            uVar22 = uVar22 + 4;
            if (uVar31 < uVar26) goto LAB_001260c4;
          }
          bVar5 = *local_68;
          if ((int)uVar24 < (int)(bVar5 & 0x3f)) {
            *(uint *)(lVar27 + 0x10) = uVar26;
            uVar24 = bVar5 & 0x3f;
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 <= uVar31);
      }
LAB_001260c4:
      uVar26 = (uint)uVar25;
      if ((int)uVar24 <= (int)uVar30) {
        uVar26 = (uint)uVar28;
        uVar24 = uVar30;
      }
      uVar30 = uVar24;
      uVar28 = (ulong)uVar26;
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar19);
  }
  else {
    if (uVar19 <= uVar33) goto LAB_00125920;
    uVar26 = (*(uint *)(lVar27 + 0x38) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar27 + 0x38) & 0xff00ff) << 8;
    uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
    uVar28 = 0;
    uVar31 = 0xffffd8f0;
    do {
      lVar27 = lVar34 + uVar25 * 0x20;
      uVar30 = *(uint *)(lVar27 + 0x14);
      *(uint *)(lVar27 + 0x10) = uVar30;
      iVar14 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,(uVar26 - 4) + uVar30 * 4,4,&local_68);
      if (iVar14 < 0) {
        return 0xbda0;
      }
      uVar30 = *local_68 & 0x7f;
      if (*(char *)(param_2 + 0x50) == '\x04') {
        uVar22 = *(uint *)(lVar27 + 0x14);
        uVar4 = *(uint *)(lVar27 + 0x18);
        uVar24 = uVar22 + 1;
        if (uVar24 <= uVar4) {
          iVar14 = uVar26 + uVar22 * 4;
          do {
            iVar15 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,iVar14,4,&local_68);
            if (iVar15 < 0) {
              return 0xbda0;
            }
            bVar5 = *local_68;
            if (uVar30 < (bVar5 & 0x7f)) {
              *(uint *)(lVar27 + 0x10) = uVar24;
              uVar30 = bVar5 & 0x7f;
            }
            uVar24 = uVar24 + 1;
            iVar14 = iVar14 + 4;
          } while (uVar24 <= uVar4);
        }
      }
      uVar24 = (uint)uVar25;
      if ((int)uVar30 <= (int)uVar31) {
        uVar24 = (uint)uVar28;
      }
      uVar28 = (ulong)uVar24;
      uVar25 = uVar25 + 1;
      if ((int)uVar30 <= (int)uVar31) {
        uVar30 = uVar31;
      }
      uVar31 = uVar30;
    } while (uVar25 < uVar19);
  }
  if (-10000 < (int)uVar30) {
    lVar27 = lVar34 + (uVar28 & 0xffff) * 0x20;
    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar27 + 0x14);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar27 + 0x18);
    iVar14 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar30;
    sVar10 = param_3[2] +
             ((short)((ulong)((long)iVar14 * 0x51eb851f) >> 0x25) - (short)(iVar14 >> 0x1f));
    *param_3 = sVar10;
    sVar11 = param_3[0x35];
    if ((sVar11 <= sVar10) && (sVar11 = param_3[0x34], sVar10 <= param_3[0x34])) {
      sVar11 = sVar10;
    }
    *param_3 = sVar11;
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(lVar27 + 0x10);
    param_3[0x2e] = (short)uVar28;
    *(undefined1 *)(lVar34 + 0x2051) = 1;
    *pbVar1 = *pbVar1 & 0xfd;
    return 1;
  }
LAB_00125920:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
}

