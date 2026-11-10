
undefined8 FUN_001251b0(long param_1,short *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  short sVar13;
  bool bVar14;
  bool bVar15;
  short sVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  byte *pbVar26;
  short *psVar27;
  ushort uVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ushort uVar33;
  long lVar34;
  ushort uVar35;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [112];
  ushort local_70 [2];
  ushort local_6c [2];
  undefined8 local_68;
  
  lVar34 = *(long *)(*(long *)(param_1 + 0x28) + (param_3 & 0xffff) * 0x50 + 0x40);
  local_68 = 0;
  if (*(char *)(param_1 + 0x51) != '\0') goto LAB_001251f0;
  lVar22 = *(long *)(param_2 + 0x10);
  bVar6 = *(byte *)(lVar22 + 0x10);
  bVar7 = *(byte *)(lVar22 + 0x11);
  bVar8 = *(byte *)(lVar22 + 0x12);
  bVar9 = *(byte *)(lVar22 + 0x13);
  uVar30 = (ulong)*(ushort *)(param_1 + 0x4e);
  pbVar1 = (byte *)(lVar34 + 0x2050);
  if (uVar30 == 0) {
LAB_001256f4:
    lVar20 = lVar34 + uVar30 * 2;
    if (*(short *)(lVar20 + 0x1fde) == *(short *)(lVar20 + 0x1fe0)) goto LAB_001251f0;
  }
  else {
    uVar32 = 0;
    bVar14 = false;
    pbVar29 = (byte *)(*(long *)(param_1 + 0x28) + 0x65c);
    bVar15 = false;
    bVar10 = *pbVar1;
    pbVar26 = *(byte **)(param_1 + 0x30);
LAB_00125278:
    do {
      if (bVar14) {
LAB_001252bc:
        FUN_001005e0(auStack_e8,pbVar26,1);
        uVar17 = FUN_001003e0(auStack_e8);
        if (uVar32 == 0) {
          *(undefined2 *)(lVar34 + 0x1fe0) = 0;
          uVar23 = (*(uint *)(*(long *)(param_2 + 0x10) + 0x18) & 0xff00ff00) >> 8 |
                   (*(uint *)(*(long *)(param_2 + 0x10) + 0x18) & 0xff00ff) << 8;
          sVar16 = FUN_0012bab0(param_2,*(undefined1 *)(param_1 + 0x50),auStack_e8,uVar17,1,
                                uVar23 >> 0x10 | uVar23 << 0x10,0,(long)&local_68 + 4,&local_68);
          if (-1 < sVar16) {
            *(undefined4 *)(lVar34 + 0x14) = local_68._4_4_;
            *(short *)(lVar34 + 0x1c) = (short)uVar17;
            *(undefined4 *)(lVar34 + 0x18) = (undefined4)local_68;
          }
          uVar25 = (ushort)(-1 < sVar16);
          uVar35 = uVar25;
          if ((((bVar10 & 1) == 0) && (*(long *)(param_1 + 0x40) != 0)) &&
             ((sVar16 = FUN_00113bf0(*(long *)(param_1 + 0x40),pbVar29,local_6c,local_70),
              sVar16 == 1 && (uVar28 = local_6c[0], local_6c[0] <= local_70[0])))) {
            do {
              FUN_00100350(auStack_e0,
                           *(undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)uVar28 * 8 + 0x800));
              uVar17 = FUN_001003e0(auStack_e0);
              uVar23 = (*(uint *)(*(long *)(param_2 + 0x10) + 0x18) & 0xff00ff00) >> 8 |
                       (*(uint *)(*(long *)(param_2 + 0x10) + 0x18) & 0xff00ff) << 8;
              sVar16 = FUN_0012bab0(param_2,*(undefined1 *)(param_1 + 0x50),auStack_e0,uVar17,1,
                                    uVar23 >> 0x10 | uVar23 << 0x10,0,(long)&local_68 + 4,&local_68)
              ;
              if (-1 < sVar16) {
                lVar20 = lVar34 + (ulong)uVar25 * 0x20;
                *(undefined4 *)(lVar20 + 0x14) = local_68._4_4_;
                *(short *)(lVar20 + 0x1c) = (short)uVar17;
                *(undefined4 *)(lVar20 + 0x18) = (undefined4)local_68;
                if (0xfe < uVar25) {
                  *(undefined2 *)(lVar34 + 0x1fe2) = 0;
                  return 0xaca0;
                }
                uVar35 = uVar35 + 1;
                uVar25 = uVar25 + 1;
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 <= local_70[0]);
          }
          *(ushort *)(lVar34 + 0x1fe2) = uVar25;
        }
        else {
          lVar20 = lVar34 + uVar32 * 2;
          uVar25 = *(ushort *)(lVar20 + 0x1fe0);
          uVar35 = *(ushort *)(lVar20 + 0x1fde);
          uVar31 = (ulong)uVar35;
          if (uVar25 == uVar35) {
            *(ushort *)(lVar20 + 0x1fe2) = uVar25;
            bVar15 = true;
            bVar11 = *pbVar26;
            goto joined_r0x00125314;
          }
          uVar28 = uVar25;
          if ((*pbVar1 & 1) != 0) {
            *(ushort *)(lVar20 + 0x1fe0) = uVar35;
            uVar28 = uVar35;
          }
          if (0xfe < uVar35) {
            return 0xada0;
          }
          if (0xff < (uVar28 | uVar25)) {
            return 0xada0;
          }
          if (uVar35 < uVar25) {
            uVar35 = 0;
            do {
              lVar2 = lVar34 + uVar31 * 0x20;
              psVar27 = (short *)(lVar2 + 0x1c);
              sVar16 = FUN_0012bab0(param_2,*(undefined1 *)(param_1 + 0x50),auStack_e8,uVar17,
                                    *(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),
                                    *psVar27,(long)&local_68 + 4,&local_68);
              if (-1 < sVar16) {
                if (0xfe < uVar28) {
code_r0x0012588c:
                  *(undefined2 *)(lVar34 + (ulong)((int)uVar32 + 1) * 2 + 0x1fe0) = 0;
                  return 0xaca0;
                }
                uVar21 = (ulong)uVar28;
                uVar28 = uVar28 + 1;
                lVar3 = lVar34 + uVar21 * 0x20;
                *(undefined4 *)(lVar3 + 0x14) = local_68._4_4_;
                *(undefined4 *)(lVar3 + 0x18) = (undefined4)local_68;
                uVar35 = uVar35 + 1;
                *(short *)(lVar3 + 0x1c) = *psVar27 + (short)uVar17;
              }
              if ((((bVar10 & 1) == 0) && (*(long *)(param_1 + 0x40) != 0)) &&
                 ((sVar16 = FUN_00113bf0(*(long *)(param_1 + 0x40),pbVar29,local_6c,local_70),
                  sVar16 == 1 && (uVar33 = local_6c[0], local_6c[0] <= local_70[0])))) {
                do {
                  FUN_00100350(auStack_e0,
                               *(undefined8 *)
                                (*(long *)(param_1 + 0x40) + (ulong)uVar33 * 8 + 0x800));
                  uVar18 = FUN_001003e0(auStack_e0);
                  sVar16 = FUN_0012bab0(param_2,*(undefined1 *)(param_1 + 0x50),auStack_e0,uVar18,
                                        *(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),
                                        *psVar27,(long)&local_68 + 4,&local_68);
                  if (-1 < sVar16) {
                    if (0xfe < uVar28) goto code_r0x0012588c;
                    uVar21 = (ulong)uVar28;
                    uVar28 = uVar28 + 1;
                    lVar3 = lVar34 + uVar21 * 0x20;
                    *(undefined4 *)(lVar3 + 0x14) = local_68._4_4_;
                    *(undefined4 *)(lVar3 + 0x18) = (undefined4)local_68;
                    uVar35 = uVar35 + 1;
                    *(short *)(lVar3 + 0x1c) = *psVar27 + (short)uVar18;
                  }
                  uVar33 = uVar33 + 1;
                } while (uVar33 <= local_70[0]);
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 < uVar25);
          }
          else {
            uVar35 = 0;
          }
          *(ushort *)(lVar20 + 0x1fe2) = uVar28;
        }
        if ((*pbVar26 & 0xfc) != 0xd8) goto LAB_00125318;
LAB_0012566c:
        lVar20 = 1;
        if (*(short *)(pbVar26 + 2) != 0) {
          lVar20 = 2;
        }
      }
      else {
        if (((uVar32 != 0) && (*(short *)(lVar34 + uVar32 * 2 + 0x1fe0) == 0)) ||
           (*(short *)(lVar34 + uVar32 * 2 + 0x1fe2) == 0)) {
          bVar14 = true;
          goto LAB_001252bc;
        }
        bVar14 = false;
        bVar11 = *pbVar26;
joined_r0x00125314:
        uVar35 = 0;
        if ((bVar11 & 0xfc) == 0xd8) goto LAB_0012566c;
LAB_00125318:
        lVar20 = 1;
      }
      pbVar26 = pbVar26 + lVar20 * 2;
      if ((*pbVar29 & 0xfc) != 0xd8) {
        pbVar29 = pbVar29 + 2;
        uVar32 = uVar32 + 1;
        if (uVar30 <= uVar32) break;
        goto LAB_00125278;
      }
      lVar20 = 1;
      if (*(short *)(pbVar29 + 2) != 0) {
        lVar20 = 2;
      }
      pbVar29 = pbVar29 + lVar20 * 2;
      uVar32 = uVar32 + 1;
    } while (uVar32 < uVar30);
    if (uVar35 == 0) {
      if (bVar15) goto LAB_001251f0;
      goto LAB_001256f4;
    }
    if (bVar15) goto LAB_001251f0;
  }
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  lVar20 = lVar34 + (ulong)*(ushort *)(param_1 + 0x4e) * 2;
  uVar25 = *(ushort *)(lVar20 + 0x1fe0);
  if (0xff < (ulong)uVar25) {
    return 0xada0;
  }
  uVar35 = *(ushort *)(lVar20 + 0x1fde);
  uVar30 = (ulong)uVar35;
  if (0xfe < uVar35) {
    return 0xada0;
  }
  if (uVar35 < uVar25) {
    uVar32 = 0;
    lVar22 = lVar22 + ((ulong)bVar6 << 0x18 | (ulong)bVar7 << 0x10 | (ulong)bVar8 << 8 |
                      (ulong)bVar9);
    uVar23 = 0xffffd8f0;
    do {
      lVar20 = lVar34 + uVar30 * 0x20;
      uVar5 = *(uint *)(lVar20 + 0x14);
      uVar19 = uVar5 * 4;
      *(uint *)(lVar20 + 0x10) = uVar5;
      uVar24 = *(byte *)(lVar22 + (ulong)(uVar19 - 4)) & 0x3f;
      if (*(char *)(param_1 + 0x50) == '\x04') {
        while (uVar5 = uVar5 + 1, uVar5 <= *(uint *)(lVar20 + 0x18)) {
          uVar4 = *(byte *)(lVar22 + (ulong)uVar19) & 0x3f;
          if (uVar24 < uVar4) {
            *(uint *)(lVar20 + 0x10) = uVar5;
            uVar24 = uVar4;
          }
          uVar19 = uVar19 + 4;
        }
      }
      uVar19 = (uint)uVar30;
      if ((int)uVar24 <= (int)uVar23) {
        uVar19 = (uint)uVar32;
      }
      uVar32 = (ulong)uVar19;
      uVar30 = uVar30 + 1;
      if ((int)uVar24 <= (int)uVar23) {
        uVar24 = uVar23;
      }
      uVar23 = uVar24;
    } while (uVar30 != uVar25);
    if (-10000 < (int)uVar24) {
      lVar22 = lVar34 + (uVar32 & 0xffff) * 0x20;
      *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar22 + 0x14);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar22 + 0x18);
      iVar12 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) * uVar24;
      sVar13 = param_2[2] +
               ((short)((ulong)((long)iVar12 * 0x51eb851f) >> 0x25) - (short)(iVar12 >> 0x1f));
      *param_2 = sVar13;
      sVar16 = param_2[0x35];
      if ((sVar16 <= sVar13) && (sVar16 = param_2[0x34], sVar13 <= param_2[0x34])) {
        sVar16 = sVar13;
      }
      *param_2 = sVar16;
      uVar17 = *(undefined4 *)(lVar22 + 0x10);
      param_2[0x2e] = (short)uVar19;
      *(undefined4 *)(param_2 + 0x1c) = uVar17;
      *(undefined1 *)(lVar34 + 0x2051) = 1;
      *pbVar1 = *pbVar1 & 0xfd;
      return 1;
    }
  }
LAB_001251f0:
  *(undefined1 *)((long)param_2 + 0x5f) = 3;
  return 0;
}

