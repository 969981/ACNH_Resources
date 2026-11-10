
undefined8 FUN_00135c20(long param_1,long param_2,short *param_3,ulong param_4)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  short sVar11;
  bool bVar12;
  bool bVar13;
  short sVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ushort uVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  ushort uVar27;
  uint uVar28;
  short *psVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  ushort uVar33;
  long lVar34;
  undefined4 *puVar35;
  byte *pbVar36;
  ulong uVar37;
  uint *puVar38;
  ushort uVar39;
  uint local_1bc;
  char local_180 [4];
  undefined1 auStack_17c [8];
  undefined1 auStack_174 [112];
  ushort local_104 [2];
  ushort local_100 [2];
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_6c;
  undefined4 local_68 [2];
  
  uVar23 = param_4 & 0xffff;
  lVar32 = *(long *)(*(long *)(param_2 + 0x28) + uVar23 * 0x50 + 0x40);
  local_f8 = 0;
  local_fc = 0;
  local_180[0] = '\0';
  if (*(char *)(param_2 + 0x51) != '\0') goto LAB_00135c68;
  lVar34 = *(long *)(param_3 + 4);
  pbVar1 = (byte *)(lVar32 + 0x2050);
  uVar9 = *(ushort *)(param_2 + 0x4e);
  uVar20 = (ulong)uVar9;
  bVar3 = *(byte *)(lVar34 + 0x28);
  bVar4 = *(byte *)(lVar34 + 0x29);
  bVar5 = *(byte *)(lVar34 + 0x2a);
  bVar6 = *(byte *)(lVar34 + 0x2b);
  if (uVar9 == 0) {
LAB_00136488:
    if (*(short *)(lVar32 + 0x1fe0 + (long)(int)(uVar9 - 1) * 2) ==
        *(short *)(lVar32 + 0x1fe0 + uVar20 * 2)) goto LAB_00135c68;
  }
  else {
    pbVar36 = (byte *)(*(long *)(param_2 + 0x28) + 0x65c);
    uVar30 = 0;
    bVar12 = false;
    bVar13 = false;
    bVar7 = *pbVar1;
    pbVar25 = *(byte **)(param_2 + 0x30);
    uVar31 = (*(uint *)(lVar34 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar34 + 8) & 0xff00ff) << 8;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
LAB_00135d20:
    do {
      if (bVar12) {
LAB_00135d64:
        FUN_001005e0(auStack_17c,pbVar25,1);
        uVar17 = FUN_001003e0(auStack_17c);
        if (uVar30 == 0) {
          *(undefined2 *)(lVar32 + 0x1fe0) = 0;
          sVar14 = FUN_0013a8b0(*(undefined8 *)(param_3 + 4),auStack_17c,uVar17,(long)&local_f8 + 4,
                                &local_f8);
          if (sVar14 < 0) {
LAB_001363c0:
            uVar24 = 0;
          }
          else {
            if (uVar31 == 0x50001) {
              sVar14 = FUN_0013aa00();
            }
            else {
              sVar14 = FUN_0013b1c0(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                    *(undefined1 *)(param_2 + 0x50),local_f8._4_4_,
                                    local_f8 & 0xffffffff,auStack_17c,uVar17,0,1,&local_6c,local_68,
                                    &local_fc);
            }
            if (sVar14 < 0) goto LAB_001363c0;
            *(undefined4 *)(lVar32 + 0x14) = local_6c;
            *(undefined4 *)(lVar32 + 0x18) = local_68[0];
            uVar24 = 1;
            *(short *)(lVar32 + 0x1c) = (short)(char)uVar17;
          }
          uVar39 = uVar24;
          if ((((bVar7 & 1) == 0) && (*(long *)(param_2 + 0x40) != 0)) &&
             ((sVar14 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar36,local_100,local_104),
              sVar14 == 1 && (local_100[0] <= local_104[0])))) {
            uVar27 = local_100[0];
            if (uVar31 == 0x50001) {
              do {
                FUN_00100350(auStack_174,
                             *(undefined8 *)(*(long *)(param_2 + 0x40) + (ulong)uVar27 * 8 + 0x800))
                ;
                uVar17 = FUN_001003e0(auStack_174);
                sVar14 = FUN_0013a8b0(*(undefined8 *)(param_3 + 4),auStack_174,uVar17,
                                      (long)&local_f8 + 4,&local_f8);
                if (-1 < sVar14) {
                  sVar14 = FUN_0013aa00(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                        *(undefined1 *)(param_2 + 0x50),local_f8._4_4_,
                                        local_f8 & 0xffffffff,auStack_174,uVar17,0,1,&local_6c,
                                        local_68,&local_fc);
                  if (-1 < sVar14) {
                    if (0xfe < uVar24) goto LAB_00136544;
                    uVar37 = (ulong)uVar24;
                    uVar24 = uVar24 + 1;
                    lVar22 = lVar32 + uVar37 * 0x20;
                    *(undefined4 *)(lVar22 + 0x14) = local_6c;
                    uVar39 = uVar39 + 1;
                    *(undefined4 *)(lVar22 + 0x18) = local_68[0];
                    *(short *)(lVar22 + 0x1c) = (short)(char)uVar17;
                  }
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 <= local_104[0]);
            }
            else {
              do {
                FUN_00100350(auStack_174,
                             *(undefined8 *)(*(long *)(param_2 + 0x40) + (ulong)uVar27 * 8 + 0x800))
                ;
                uVar17 = FUN_001003e0(auStack_174);
                sVar14 = FUN_0013a8b0(*(undefined8 *)(param_3 + 4),auStack_174,uVar17,
                                      (long)&local_f8 + 4,&local_f8);
                if (-1 < sVar14) {
                  sVar14 = FUN_0013b1c0(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                        *(undefined1 *)(param_2 + 0x50),local_f8._4_4_,
                                        local_f8 & 0xffffffff,auStack_174,uVar17,0,1,&local_6c,
                                        local_68,&local_fc);
                  if (-1 < sVar14) {
                    if (0xfe < uVar24) {
LAB_00136544:
                      *(undefined2 *)(lVar32 + 0x1fe2) = 0;
                      return 0xac80;
                    }
                    uVar37 = (ulong)uVar24;
                    uVar24 = uVar24 + 1;
                    lVar22 = lVar32 + uVar37 * 0x20;
                    *(undefined4 *)(lVar22 + 0x14) = local_6c;
                    uVar39 = uVar39 + 1;
                    *(undefined4 *)(lVar22 + 0x18) = local_68[0];
                    *(short *)(lVar22 + 0x1c) = (short)(char)uVar17;
                  }
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 <= local_104[0]);
            }
          }
          *(ushort *)(lVar32 + 0x1fe2) = uVar24;
        }
        else {
          lVar22 = lVar32 + uVar30 * 2;
          uVar24 = *(ushort *)(lVar22 + 0x1fde);
          uVar37 = (ulong)uVar24;
          uVar27 = *(ushort *)(lVar22 + 0x1fe0);
          if (uVar27 == uVar24) {
            *(ushort *)(lVar22 + 0x1fe2) = uVar27;
            bVar13 = true;
            bVar8 = *pbVar25;
            goto joined_r0x00135dc4;
          }
          uVar33 = uVar27;
          if ((*pbVar1 & 1) != 0) {
            *(ushort *)(lVar22 + 0x1fe0) = uVar24;
            uVar33 = uVar24;
          }
          if (0xfe < uVar24) {
            return 0xad80;
          }
          if (0xff < (uVar33 | uVar27)) {
            return 0xad80;
          }
          if (uVar24 < uVar27) {
            uVar39 = 0;
            do {
              lVar2 = lVar32 + uVar37 * 0x20;
              puVar35 = (undefined4 *)(lVar2 + 0x14);
              puVar26 = (undefined4 *)(lVar2 + 0x18);
              psVar29 = (short *)(lVar2 + 0x1c);
              if (uVar31 == 0x50001) {
                sVar14 = FUN_0013aa00();
              }
              else {
                sVar14 = FUN_0013b1c0(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                      *(undefined1 *)(param_2 + 0x50),*puVar35,*puVar26,auStack_17c,
                                      uVar17,*psVar29,1,&local_6c,local_68,&local_fc);
              }
              if (-1 < sVar14) {
                if (0xfe < uVar33) {
code_r0x00136524:
                  *(undefined2 *)(lVar32 + (ulong)((int)uVar30 + 1) * 2 + 0x1fe0) = 0;
                  return 0xac80;
                }
                uVar21 = (ulong)uVar33;
                uVar33 = uVar33 + 1;
                lVar2 = lVar32 + uVar21 * 0x20;
                *(undefined4 *)(lVar2 + 0x14) = local_6c;
                *(undefined4 *)(lVar2 + 0x18) = local_68[0];
                uVar39 = uVar39 + 1;
                *(short *)(lVar2 + 0x1c) = *psVar29 + (short)uVar17;
              }
              if ((((bVar7 & 1) == 0) && (*(long *)(param_2 + 0x40) != 0)) &&
                 ((sVar14 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar36,local_100,local_104),
                  sVar14 == 1 && (local_100[0] <= local_104[0])))) {
                uVar24 = local_100[0];
                if (uVar31 == 0x50001) {
                  do {
                    FUN_00100350(auStack_174,
                                 *(undefined8 *)
                                  (*(long *)(param_2 + 0x40) + (ulong)uVar24 * 8 + 0x800));
                    uVar15 = FUN_001003e0(auStack_174);
                    sVar14 = FUN_0013aa00(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                          *(undefined1 *)(param_2 + 0x50),*puVar35,*puVar26,
                                          auStack_174,uVar15,*psVar29,1,&local_6c,local_68,&local_fc
                                         );
                    if (-1 < sVar14) {
                      if (0xfe < uVar33) goto code_r0x00136524;
                      uVar21 = (ulong)uVar33;
                      uVar33 = uVar33 + 1;
                      lVar2 = lVar32 + uVar21 * 0x20;
                      *(undefined4 *)(lVar2 + 0x14) = local_6c;
                      *(undefined4 *)(lVar2 + 0x18) = local_68[0];
                      uVar39 = uVar39 + 1;
                      *(short *)(lVar2 + 0x1c) = *psVar29 + (short)uVar15;
                    }
                    uVar24 = uVar24 + 1;
                  } while (uVar24 <= local_104[0]);
                }
                else {
                  do {
                    FUN_00100350(auStack_174,
                                 *(undefined8 *)
                                  (*(long *)(param_2 + 0x40) + (ulong)uVar24 * 8 + 0x800));
                    uVar15 = FUN_001003e0(auStack_174);
                    sVar14 = FUN_0013b1c0(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                          *(undefined1 *)(param_2 + 0x50),*puVar35,*puVar26,
                                          auStack_174,uVar15,*psVar29,1,&local_6c,local_68,&local_fc
                                         );
                    if (-1 < sVar14) {
                      if (0xfe < uVar33) goto code_r0x00136524;
                      uVar21 = (ulong)uVar33;
                      uVar33 = uVar33 + 1;
                      lVar2 = lVar32 + uVar21 * 0x20;
                      *(undefined4 *)(lVar2 + 0x14) = local_6c;
                      *(undefined4 *)(lVar2 + 0x18) = local_68[0];
                      uVar39 = uVar39 + 1;
                      *(short *)(lVar2 + 0x1c) = *psVar29 + (short)uVar15;
                    }
                    uVar24 = uVar24 + 1;
                  } while (uVar24 <= local_104[0]);
                }
              }
              uVar37 = uVar37 + 1;
            } while (uVar37 < uVar27);
          }
          else {
            uVar39 = 0;
          }
          *(ushort *)(lVar22 + 0x1fe2) = uVar33;
        }
        if ((*pbVar25 & 0xfc) == 0xd8) goto LAB_001363f0;
LAB_00135dc8:
        lVar22 = 1;
      }
      else {
        if (((uVar30 != 0) && (*(short *)(lVar32 + uVar30 * 2 + 0x1fe0) == 0)) ||
           (*(short *)(lVar32 + uVar30 * 2 + 0x1fe2) == 0)) {
          bVar12 = true;
          goto LAB_00135d64;
        }
        bVar12 = false;
        bVar8 = *pbVar25;
joined_r0x00135dc4:
        uVar39 = 0;
        if ((bVar8 & 0xfc) != 0xd8) goto LAB_00135dc8;
LAB_001363f0:
        lVar22 = 1;
        if (*(short *)(pbVar25 + 2) != 0) {
          lVar22 = 2;
        }
      }
      pbVar25 = pbVar25 + lVar22 * 2;
      if ((*pbVar36 & 0xfc) != 0xd8) {
        pbVar36 = pbVar36 + 2;
        uVar30 = uVar30 + 1;
        if (uVar20 <= uVar30) break;
        goto LAB_00135d20;
      }
      lVar22 = 1;
      if (*(short *)(pbVar36 + 2) != 0) {
        lVar22 = 2;
      }
      pbVar36 = pbVar36 + lVar22 * 2;
      uVar30 = uVar30 + 1;
    } while (uVar30 < uVar20);
    if (uVar39 == 0) {
      if (bVar13) goto LAB_00135c68;
      goto LAB_00136488;
    }
    if (bVar13) goto LAB_00135c68;
  }
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  lVar22 = lVar32 + (ulong)*(ushort *)(param_2 + 0x4e) * 2;
  uVar24 = *(ushort *)(lVar22 + 0x1fe0);
  if (0xff < (ulong)uVar24) {
    return 0xad80;
  }
  uVar39 = *(ushort *)(lVar22 + 0x1fde);
  uVar20 = (ulong)uVar39;
  if (0xfe < uVar39) {
    return 0xad80;
  }
  if (*(long *)(param_3 + 8) == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(param_3 + 4);
    lVar22 = *(long *)(param_3 + 8) +
             ((ulong)*(byte *)(lVar22 + 0x10) << 0x18 | (ulong)*(byte *)(lVar22 + 0x11) << 0x10 |
              (ulong)*(byte *)(lVar22 + 0x12) << 8 | (ulong)*(byte *)(lVar22 + 0x13)) + 0x3c;
  }
  if (((*(char *)(param_2 + 0x50) == '\x01') && (*(char *)(param_1 + 0x62751) != '\0')) &&
     (sVar14 = FUN_001385b0(param_1,param_2,param_3,param_4), 0 < sVar14)) {
    *(undefined4 *)(param_1 + uVar23 * 8 + 0x641ec) = *(undefined4 *)(param_3 + 0x1e);
    uVar17 = *(undefined4 *)(param_3 + 0x20);
  }
  else {
    uVar17 = 0;
    *(undefined4 *)(param_1 + uVar23 * 8 + 0x641ec) = 0;
  }
  *(undefined4 *)(param_1 + uVar23 * 8 + 0x641f0) = uVar17;
  *(undefined1 *)((long)param_3 + 0x5f) = 1;
  uVar27 = (ushort)*(byte *)(param_1 + 0x6d648);
  if (*(byte *)(param_1 + 0x6d648) <= uVar9) {
    uVar27 = uVar9;
  }
  if (uVar39 < uVar24) {
    iVar10 = -10000;
    lVar34 = lVar34 + ((ulong)bVar3 << 0x18 | (ulong)bVar4 << 0x10 | (ulong)bVar5 << 8 |
                      (ulong)bVar6);
    local_1bc = 0;
LAB_0013667c:
    lVar2 = lVar32 + uVar20 * 0x20;
    uVar31 = *(uint *)(lVar2 + 0x14);
    puVar38 = (uint *)(lVar2 + 0x18);
    uVar18 = *puVar38;
    if (uVar31 <= uVar18) {
LAB_001366a4:
      uVar28 = uVar31 * 2 - 1;
      do {
        if (*(char *)(param_2 + 0x53) < '\0') {
          if (lVar22 != 0) {
            uVar19 = (uint)*(char *)(lVar22 + (ulong)(uVar31 - 1));
            if ((uVar19 >> 6 & 1) != 0) goto LAB_00136830;
            if ((int)uVar19 < 0) goto LAB_0013672c;
          }
LAB_00136720:
          if (0x3f < *(byte *)(lVar34 + (ulong)uVar28)) {
LAB_0013672c:
            iVar16 = FUN_0013bc70(param_1,uVar31,*(byte *)(lVar34 + (ulong)uVar28) & 0x3f,param_3,
                                  local_180,param_4);
            if (iVar16 <= iVar10) goto LAB_00136860;
            if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00136844;
            uStack_e8 = *(undefined8 *)(param_3 + 4);
            local_e0 = *(undefined8 *)(param_3 + 8);
            uStack_d8 = *(undefined8 *)(param_3 + 0xc);
            local_d0 = *(undefined8 *)(param_3 + 0x10);
            uStack_c8 = *(undefined8 *)(param_3 + 0x14);
            local_c0 = *(undefined8 *)(param_3 + 0x18);
            uStack_a8 = *(undefined8 *)(param_3 + 0x24);
            local_a0 = *(undefined8 *)(param_3 + 0x28);
            local_98 = *(undefined8 *)(param_3 + 0x2c);
            local_90 = *(undefined8 *)(param_3 + 0x30);
            uStack_88 = *(undefined8 *)(param_3 + 0x34);
            local_b0 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20),*puVar38);
            sVar11 = *param_3;
            sVar14 = param_3[0x35];
            if ((sVar14 <= sVar11) && (sVar14 = param_3[0x34], sVar11 <= param_3[0x34])) {
              sVar14 = sVar11;
            }
            local_f0 = CONCAT62((int6)((ulong)*(undefined8 *)param_3 >> 0x10),sVar14);
            local_b8 = CONCAT44(*(uint *)(lVar2 + 0x14),uVar31);
            uVar17 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar31);
            local_98._0_6_ = CONCAT24((short)uVar20,uVar17);
            sVar14 = FUN_0013c020(param_1,&local_f0);
            if (sVar14 != 0) goto LAB_00136844;
            uVar18 = *puVar38;
          }
        }
        else if (lVar22 == 0) {
LAB_001366c8:
          if (uVar27 == 2) {
            if (-1 < (char)(*(char *)(lVar34 + (ulong)uVar28) + -0x40)) goto LAB_0013672c;
          }
          else if (uVar27 == 1) {
            if ((*(byte *)(lVar34 + (ulong)uVar28) & 0xc0) == 0x40) goto LAB_0013672c;
          }
          else if (2 < uVar27) goto LAB_00136720;
        }
        else {
          uVar19 = (uint)*(char *)(lVar22 + (ulong)(uVar31 - 1));
          if ((uVar19 >> 6 & 1) == 0) {
            if (-1 < (int)uVar19) goto LAB_001366c8;
            goto LAB_0013672c;
          }
        }
LAB_00136830:
        uVar31 = uVar31 + 1;
        uVar28 = uVar28 + 2;
        if (uVar18 < uVar31) goto LAB_00136870;
      } while( true );
    }
    goto LAB_00136890;
  }
LAB_00135c68:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
LAB_00136844:
  *(bool *)(param_1 + uVar23 + 0x6f4fc) = local_180[0] == '\x01';
  local_1bc = uVar31;
  iVar10 = iVar16;
LAB_00136860:
  uVar18 = *puVar38;
  uVar31 = uVar31 + 1;
  if (uVar18 < uVar31) goto LAB_00136870;
  goto LAB_001366a4;
LAB_00136870:
  if (-10000 < iVar10) {
    *(uint *)(lVar2 + 0x10) = local_1bc;
    lVar34 = lVar32 + (uVar20 & 0xffff) * 0x20;
    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar34 + 0x14);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar34 + 0x18);
    iVar10 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * iVar10;
    sVar11 = param_3[2] +
             ((short)((ulong)((long)iVar10 * 0x51eb851f) >> 0x25) - (short)(iVar10 >> 0x1f));
    *param_3 = sVar11;
    sVar14 = param_3[0x35];
    if ((sVar14 <= sVar11) && (sVar14 = param_3[0x34], sVar11 <= param_3[0x34])) {
      sVar14 = sVar11;
    }
    *param_3 = sVar14;
    *(uint *)(param_3 + 0x1c) = local_1bc;
    uVar17 = FUN_0013be30(*(undefined8 *)(param_3 + 4));
    *(undefined4 *)(param_3 + 0x2c) = uVar17;
    param_3[0x2e] = (short)uVar20;
    *(undefined1 *)(lVar32 + 0x2051) = 1;
    *pbVar1 = *pbVar1 | 2;
    return 1;
  }
LAB_00136890:
  uVar20 = uVar20 + 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
  if (uVar24 <= uVar20) goto LAB_00135c68;
  goto LAB_0013667c;
}

