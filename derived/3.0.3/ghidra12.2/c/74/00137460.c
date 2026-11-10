
undefined8 FUN_00137460(long param_1,long param_2,short *param_3,ulong param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  short sVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  short sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  short *psVar21;
  uint uVar22;
  ushort uVar23;
  uint uVar24;
  byte *pbVar25;
  ushort uVar26;
  ushort uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ushort uVar33;
  uint uVar34;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [112];
  ushort local_70 [2];
  ushort local_6c [2];
  undefined8 local_68;
  
  lVar30 = *(long *)(*(long *)(param_2 + 0x28) + (param_4 & 0xffff) * 0x50 + 0x40);
  local_68 = 0;
  if (*(char *)(param_2 + 0x51) != '\0') goto LAB_001374a0;
  uVar32 = (ulong)*(ushort *)(param_2 + 0x4e);
  pbVar2 = (byte *)(lVar30 + 0x2050);
  if (uVar32 == 0) {
    bVar11 = false;
LAB_00137518:
    lVar19 = lVar30 + uVar32 * 2;
    if (*(short *)(lVar19 + 0x1fde) == *(short *)(lVar19 + 0x1fe0)) goto LAB_001374a0;
  }
  else {
    bVar6 = *pbVar2;
    bVar10 = false;
    pbVar20 = *(byte **)(param_2 + 0x30);
    uVar31 = 0;
    pbVar25 = (byte *)(*(long *)(param_2 + 0x28) + 0x65c);
    bVar11 = false;
LAB_00137550:
    do {
      if (bVar10) {
LAB_0013759c:
        FUN_001005e0(auStack_e8,pbVar20,1);
        uVar14 = FUN_001003e0(auStack_e8);
        if (uVar31 == 0) {
          *(undefined2 *)(lVar30 + 0x1fe0) = 0;
          if (*(char *)(param_2 + 0x50) == '\x06') {
            lVar19 = *(long *)(param_3 + 0xc);
            if (lVar19 == 0) goto LAB_001374a0;
LAB_001377ec:
            uVar16 = (uint)*(byte *)(lVar19 + 0x18) << 0x18 | (uint)*(byte *)(lVar19 + 0x19) << 0x10
            ;
            bVar7 = *(byte *)(lVar19 + 0x1a);
            pbVar18 = (byte *)(lVar19 + 0x1b);
          }
          else {
            lVar19 = *(long *)(param_3 + 0x10);
            if (lVar19 != 0) goto LAB_001377ec;
            lVar19 = *(long *)(param_3 + 4);
            uVar16 = (uint)*(byte *)(lVar19 + 0x60) << 0x18 | (uint)*(byte *)(lVar19 + 0x61) << 0x10
            ;
            bVar7 = *(byte *)(lVar19 + 0x62);
            pbVar18 = (byte *)(lVar19 + 99);
          }
          sVar13 = FUN_0013c470(param_3,*(char *)(param_2 + 0x50),auStack_e8,uVar14,1,
                                uVar16 | (uint)bVar7 << 8 | (uint)*pbVar18,0,(long)&local_68 + 4,
                                &local_68);
          if (-1 < sVar13) {
            *(undefined4 *)(lVar30 + 0x14) = local_68._4_4_;
            *(short *)(lVar30 + 0x1c) = (short)uVar14;
            *(undefined4 *)(lVar30 + 0x18) = (undefined4)local_68;
          }
          uVar23 = (ushort)(-1 < sVar13);
          uVar33 = uVar23;
          if ((((bVar6 & 1) == 0) && (*(long *)(param_2 + 0x40) != 0)) &&
             ((sVar13 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar25,local_6c,local_70),
              sVar13 == 1 && (uVar27 = local_6c[0], local_6c[0] <= local_70[0])))) {
            do {
              FUN_00100350(auStack_e0,
                           *(undefined8 *)(*(long *)(param_2 + 0x40) + (ulong)uVar27 * 8 + 0x800));
              uVar14 = FUN_001003e0(auStack_e0);
              if (*(char *)(param_2 + 0x50) == '\x06') {
                lVar19 = *(long *)(param_3 + 0xc);
                if (lVar19 == 0) goto LAB_001378f8;
LAB_001378d4:
                uVar16 = (uint)*(byte *)(lVar19 + 0x18) << 0x18 |
                         (uint)*(byte *)(lVar19 + 0x19) << 0x10;
                bVar7 = *(byte *)(lVar19 + 0x1a);
                pbVar18 = (byte *)(lVar19 + 0x1b);
              }
              else {
                lVar19 = *(long *)(param_3 + 0x10);
                if (lVar19 != 0) goto LAB_001378d4;
LAB_001378f8:
                lVar19 = *(long *)(param_3 + 4);
                uVar16 = (uint)*(byte *)(lVar19 + 0x60) << 0x18 |
                         (uint)*(byte *)(lVar19 + 0x61) << 0x10;
                bVar7 = *(byte *)(lVar19 + 0x62);
                pbVar18 = (byte *)(lVar19 + 99);
              }
              sVar13 = FUN_0013c470(param_3,*(char *)(param_2 + 0x50),auStack_e0,uVar14,1,
                                    uVar16 | (uint)bVar7 << 8 | (uint)*pbVar18,0,(long)&local_68 + 4
                                    ,&local_68);
              if (-1 < sVar13) {
                lVar19 = lVar30 + (ulong)uVar23 * 0x20;
                *(undefined4 *)(lVar19 + 0x14) = local_68._4_4_;
                *(short *)(lVar19 + 0x1c) = (short)uVar14;
                *(undefined4 *)(lVar19 + 0x18) = (undefined4)local_68;
                if (0xfe < uVar23) {
                  *(undefined2 *)(lVar30 + 0x1fe2) = 0;
                  return 0xac80;
                }
                uVar33 = uVar33 + 1;
                uVar23 = uVar23 + 1;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 <= local_70[0]);
          }
          *(ushort *)(lVar30 + 0x1fe2) = uVar23;
        }
        else {
          lVar19 = lVar30 + uVar31 * 2;
          uVar23 = *(ushort *)(lVar19 + 0x1fe0);
          uVar33 = *(ushort *)(lVar19 + 0x1fde);
          uVar28 = (ulong)uVar33;
          if (uVar23 == uVar33) {
            *(ushort *)(lVar19 + 0x1fe2) = uVar23;
            bVar11 = true;
            bVar7 = *pbVar20;
            goto joined_r0x001375f4;
          }
          uVar27 = uVar23;
          if ((*pbVar2 & 1) != 0) {
            *(ushort *)(lVar19 + 0x1fe0) = uVar33;
            uVar27 = uVar33;
          }
          if (0xfe < uVar33) {
            return 0xad80;
          }
          if (0xff < (uVar27 | uVar23)) {
            return 0xad80;
          }
          if (uVar33 < uVar23) {
            uVar33 = 0;
            do {
              lVar4 = lVar30 + uVar28 * 0x20;
              psVar21 = (short *)(lVar4 + 0x1c);
              sVar13 = FUN_0013c470(param_3,*(undefined1 *)(param_2 + 0x50),auStack_e8,uVar14,
                                    *(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x18),
                                    *psVar21,(long)&local_68 + 4,&local_68);
              if (-1 < sVar13) {
                if (0xfe < uVar27) {
LAB_00137a80:
                  *(undefined2 *)(lVar30 + (ulong)((int)uVar31 + 1) * 2 + 0x1fe0) = 0;
                  return 0xac80;
                }
                uVar17 = (ulong)uVar27;
                uVar27 = uVar27 + 1;
                lVar3 = lVar30 + uVar17 * 0x20;
                *(undefined4 *)(lVar3 + 0x14) = local_68._4_4_;
                *(undefined4 *)(lVar3 + 0x18) = (undefined4)local_68;
                uVar33 = uVar33 + 1;
                *(short *)(lVar3 + 0x1c) = *psVar21 + (short)uVar14;
              }
              if ((((bVar6 & 1) == 0) && (*(long *)(param_2 + 0x40) != 0)) &&
                 ((sVar13 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar25,local_6c,local_70),
                  sVar13 == 1 && (uVar26 = local_6c[0], local_6c[0] <= local_70[0])))) {
                do {
                  FUN_00100350(auStack_e0,
                               *(undefined8 *)
                                (*(long *)(param_2 + 0x40) + (ulong)uVar26 * 8 + 0x800));
                  uVar15 = FUN_001003e0(auStack_e0);
                  sVar13 = FUN_0013c470(param_3,*(undefined1 *)(param_2 + 0x50),auStack_e0,uVar15,
                                        *(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x18),
                                        *psVar21,(long)&local_68 + 4,&local_68);
                  if (-1 < sVar13) {
                    if (0xfe < uVar27) goto LAB_00137a80;
                    uVar17 = (ulong)uVar27;
                    uVar27 = uVar27 + 1;
                    lVar3 = lVar30 + uVar17 * 0x20;
                    *(undefined4 *)(lVar3 + 0x14) = local_68._4_4_;
                    *(undefined4 *)(lVar3 + 0x18) = (undefined4)local_68;
                    uVar33 = uVar33 + 1;
                    *(short *)(lVar3 + 0x1c) = *psVar21 + (short)uVar15;
                  }
                  uVar26 = uVar26 + 1;
                } while (uVar26 <= local_70[0]);
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 < uVar23);
          }
          else {
            uVar33 = 0;
          }
          *(ushort *)(lVar19 + 0x1fe2) = uVar27;
        }
        if ((*pbVar20 & 0xfc) != 0xd8) goto LAB_001375f8;
LAB_001379e0:
        lVar19 = 1;
        if (*(short *)(pbVar20 + 2) != 0) {
          lVar19 = 2;
        }
      }
      else {
        if (((uVar31 != 0) && (*(short *)(lVar30 + uVar31 * 2 + 0x1fe0) == 0)) ||
           (*(short *)(lVar30 + uVar31 * 2 + 0x1fe2) == 0)) {
          bVar10 = true;
          goto LAB_0013759c;
        }
        bVar10 = false;
        bVar7 = *pbVar20;
joined_r0x001375f4:
        uVar33 = 0;
        if ((bVar7 & 0xfc) == 0xd8) goto LAB_001379e0;
LAB_001375f8:
        lVar19 = 1;
      }
      pbVar20 = pbVar20 + lVar19 * 2;
      if ((*pbVar25 & 0xfc) != 0xd8) {
        pbVar25 = pbVar25 + 2;
        uVar31 = uVar31 + 1;
        if (uVar32 <= uVar31) break;
        goto LAB_00137550;
      }
      lVar19 = 1;
      if (*(short *)(pbVar25 + 2) != 0) {
        lVar19 = 2;
      }
      pbVar25 = pbVar25 + lVar19 * 2;
      uVar31 = uVar31 + 1;
    } while (uVar31 < uVar32);
    if (uVar33 == 0) goto LAB_00137518;
  }
  if (bVar11) {
LAB_001374a0:
    *(undefined1 *)((long)param_3 + 0x5f) = 3;
    return 0;
  }
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  lVar19 = lVar30 + (ulong)*(ushort *)(param_2 + 0x4e) * 2;
  uVar33 = *(ushort *)(lVar19 + 0x1fe0);
  uVar23 = *(ushort *)(lVar19 + 0x1fde);
  uVar32 = (ulong)uVar23;
  if (*(char *)(param_2 + 0x50) == '\x06') {
    lVar19 = *(long *)(param_3 + 0xc);
    if (lVar19 == 0) goto LAB_001374a0;
LAB_00137aac:
    uVar31 = (ulong)*(byte *)(lVar19 + 0x10) << 0x18 | (ulong)*(byte *)(lVar19 + 0x11) << 0x10 |
             (ulong)*(byte *)(lVar19 + 0x12) << 8;
    pbVar25 = (byte *)(lVar19 + 0x13);
  }
  else {
    lVar19 = *(long *)(param_3 + 0x10);
    if (lVar19 != 0) goto LAB_00137aac;
    lVar19 = *(long *)(param_3 + 4);
    uVar31 = (ulong)*(byte *)(lVar19 + 0x38) << 0x18 | (ulong)*(byte *)(lVar19 + 0x39) << 0x10 |
             (ulong)*(byte *)(lVar19 + 0x3a) << 8;
    pbVar25 = (byte *)(lVar19 + 0x3b);
  }
  if (0xff < uVar33) {
    return 0xad80;
  }
  if (0xfe < uVar23) {
    return 0xad80;
  }
  lVar19 = lVar19 + (uVar31 | *pbVar25);
  if (*(char *)(param_2 + 0x50) == '\x06') {
    if (uVar33 <= uVar23) goto LAB_00137cc0;
    uVar31 = 0;
    uVar16 = 0xffffd8f0;
    do {
      lVar4 = lVar30 + uVar32 * 0x20;
      uVar24 = *(uint *)(lVar4 + 0x14);
      uVar5 = *(uint *)(lVar4 + 0x18);
      uVar34 = 0xffffd8f0;
      if (uVar24 <= uVar5) {
        uVar34 = 0xffffd8f0;
        do {
          if (*(char *)(param_2 + 0x53) < '\0') {
            uVar22 = (uint)*(byte *)(lVar19 + (ulong)(uVar24 * 4 - 4));
          }
          else {
            uVar29 = uVar24 * 4 - 4;
            while( true ) {
              pcVar1 = (char *)(lVar19 + (ulong)uVar29);
              uVar22 = (uint)*pcVar1;
              if ((*pcVar1 < '\0') &&
                 (cVar12 = FUN_0013cbb0(*(undefined8 *)(param_3 + 4),
                                        (uint)(byte)pcVar1[1] << 0x10 | (uint)(byte)pcVar1[2] << 8 |
                                        (uint)(byte)pcVar1[3],*(undefined1 *)(param_1 + 0x6d648),
                                        *(undefined1 *)(param_1 + 0x6d649)), cVar12 != '\0')) break;
              uVar24 = uVar24 + 1;
              uVar29 = uVar29 + 4;
              if (uVar5 < uVar24) goto LAB_00137c04;
            }
          }
          if ((int)uVar34 < (int)(uVar22 & 0x3f)) {
            *(uint *)(lVar4 + 0x10) = uVar24;
            uVar34 = uVar22 & 0x3f;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 <= uVar5);
      }
LAB_00137c04:
      uVar24 = (uint)uVar32;
      if ((int)uVar34 <= (int)uVar16) {
        uVar24 = (uint)uVar31;
      }
      uVar31 = (ulong)uVar24;
      uVar32 = uVar32 + 1;
      if ((int)uVar34 <= (int)uVar16) {
        uVar34 = uVar16;
      }
      uVar16 = uVar34;
    } while (uVar32 != uVar33);
  }
  else {
    if (uVar33 <= uVar23) goto LAB_00137cc0;
    uVar31 = 0;
    uVar16 = 0xffffd8f0;
    do {
      lVar4 = lVar30 + uVar32 * 0x20;
      uVar5 = *(uint *)(lVar4 + 0x14);
      uVar24 = uVar5 * 4;
      *(uint *)(lVar4 + 0x10) = uVar5;
      uVar34 = *(byte *)(lVar19 + (ulong)(uVar24 - 4)) & 0x7f;
      if (*(char *)(param_2 + 0x50) == '\x04') {
        while (uVar5 = uVar5 + 1, uVar5 <= *(uint *)(lVar4 + 0x18)) {
          uVar22 = *(byte *)(lVar19 + (ulong)uVar24) & 0x7f;
          if (uVar34 < uVar22) {
            *(uint *)(lVar4 + 0x10) = uVar5;
            uVar34 = uVar22;
          }
          uVar24 = uVar24 + 4;
        }
      }
      uVar24 = (uint)uVar32;
      if ((int)uVar34 <= (int)uVar16) {
        uVar24 = (uint)uVar31;
      }
      uVar31 = (ulong)uVar24;
      uVar32 = uVar32 + 1;
      if ((int)uVar34 <= (int)uVar16) {
        uVar34 = uVar16;
      }
      uVar16 = uVar34;
    } while (uVar32 != uVar33);
  }
  if (-10000 < (int)uVar34) {
    lVar19 = lVar30 + (uVar31 & 0xffff) * 0x20;
    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar19 + 0x14);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar19 + 0x18);
    iVar8 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar34;
    sVar9 = param_3[2] +
            ((short)((ulong)((long)iVar8 * 0x51eb851f) >> 0x25) - (short)(iVar8 >> 0x1f));
    *param_3 = sVar9;
    sVar13 = param_3[0x35];
    if ((sVar13 <= sVar9) && (sVar13 = param_3[0x34], sVar9 <= param_3[0x34])) {
      sVar13 = sVar9;
    }
    *param_3 = sVar13;
    uVar14 = *(undefined4 *)(lVar19 + 0x10);
    param_3[0x2e] = (short)uVar31;
    *(undefined4 *)(param_3 + 0x1c) = uVar14;
    *(undefined1 *)(lVar30 + 0x2051) = 1;
    *pbVar2 = *pbVar2 & 0xfd;
    return 1;
  }
LAB_00137cc0:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
}

