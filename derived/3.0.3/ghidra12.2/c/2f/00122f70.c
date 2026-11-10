
undefined8 FUN_00122f70(long param_1,long param_2,short *param_3,ulong param_4)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  short sVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ushort uVar20;
  undefined4 *puVar21;
  ushort uVar22;
  short *psVar23;
  uint *puVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  ushort uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  byte *pbVar31;
  byte *pbVar32;
  ulong uVar33;
  ushort uVar34;
  uint uVar35;
  uint local_1bc;
  ushort local_180 [2];
  ushort local_17c [2];
  char local_178 [4];
  undefined1 auStack_174 [8];
  undefined1 auStack_16c [112];
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
  
  uVar29 = param_4 & 0xffff;
  lVar27 = *(long *)(*(long *)(param_2 + 0x28) + uVar29 * 0x50 + 0x40);
  local_f8 = 0;
  local_fc = 0;
  local_178[0] = '\0';
  if (*(char *)(param_2 + 0x51) != '\0') goto LAB_00122fb8;
  pbVar1 = (byte *)(lVar27 + 0x2050);
  lVar18 = *(long *)(*(long *)(param_3 + 4) + 0x60);
  uVar6 = *(ushort *)(param_2 + 0x4e);
  uVar19 = (ulong)uVar6;
  if (uVar6 == 0) {
LAB_001237a8:
    if (*(short *)(lVar27 + 0x1fe0 + (long)(int)(uVar6 - 1) * 2) ==
        *(short *)(lVar27 + 0x1fe0 + uVar19 * 2)) goto LAB_00122fb8;
  }
  else {
    iVar3 = *(int *)(*(long *)(param_3 + 4) + 0x70);
    bVar4 = *pbVar1;
    pbVar32 = *(byte **)(param_2 + 0x30);
    pbVar31 = (byte *)(*(long *)(param_2 + 0x28) + 0x65c);
    uVar25 = 0;
    bVar8 = false;
    bVar9 = false;
LAB_00123054:
    do {
      if (bVar8) {
LAB_00123098:
        FUN_001005e0(auStack_174,pbVar32,1);
        uVar13 = FUN_001003e0(auStack_174);
        if (uVar25 == 0) {
          *(undefined2 *)(lVar27 + 0x1fe0) = 0;
          sVar10 = FUN_00128940(*(undefined8 *)(param_3 + 4),auStack_174,uVar13,(long)&local_f8 + 4,
                                &local_f8);
          if (sVar10 < 0) {
LAB_001236f0:
            uVar20 = 0;
          }
          else {
            if (iVar3 == 0x40050001) {
              sVar10 = FUN_00128a70();
            }
            else {
              sVar10 = FUN_00129300(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                    *(undefined1 *)(param_2 + 0x50),local_f8._4_4_,
                                    local_f8 & 0xffffffff,auStack_174,uVar13,0,1,&local_6c,local_68,
                                    &local_fc);
            }
            if (sVar10 < 0) goto LAB_001236f0;
            *(undefined4 *)(lVar27 + 0x14) = local_6c;
            *(undefined4 *)(lVar27 + 0x18) = local_68[0];
            uVar20 = 1;
            *(short *)(lVar27 + 0x1c) = (short)(char)uVar13;
          }
          uVar34 = uVar20;
          if ((((bVar4 & 1) == 0) && (*(long *)(param_2 + 0x40) != 0)) &&
             ((sVar10 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar31,local_17c,local_180),
              sVar10 == 1 && (local_17c[0] <= local_180[0])))) {
            uVar22 = local_17c[0];
            if (iVar3 == 0x40050001) {
              do {
                FUN_00100350(auStack_16c,
                             *(undefined8 *)(*(long *)(param_2 + 0x40) + (ulong)uVar22 * 8 + 0x800))
                ;
                uVar13 = FUN_001003e0(auStack_16c);
                sVar10 = FUN_00128940(*(undefined8 *)(param_3 + 4),auStack_16c,uVar13,
                                      (long)&local_f8 + 4,&local_f8);
                if (-1 < sVar10) {
                  sVar10 = FUN_00128a70(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                        *(undefined1 *)(param_2 + 0x50),local_f8._4_4_,
                                        local_f8 & 0xffffffff,auStack_16c,uVar13,0,1,&local_6c,
                                        local_68,&local_fc);
                  if (-1 < sVar10) {
                    if (0xfe < uVar20) goto LAB_00123858;
                    uVar33 = (ulong)uVar20;
                    uVar20 = uVar20 + 1;
                    lVar17 = lVar27 + uVar33 * 0x20;
                    *(undefined4 *)(lVar17 + 0x14) = local_6c;
                    uVar34 = uVar34 + 1;
                    *(undefined4 *)(lVar17 + 0x18) = local_68[0];
                    *(short *)(lVar17 + 0x1c) = (short)(char)uVar13;
                  }
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 <= local_180[0]);
            }
            else {
              do {
                FUN_00100350(auStack_16c,
                             *(undefined8 *)(*(long *)(param_2 + 0x40) + (ulong)uVar22 * 8 + 0x800))
                ;
                uVar13 = FUN_001003e0(auStack_16c);
                sVar10 = FUN_00128940(*(undefined8 *)(param_3 + 4),auStack_16c,uVar13,
                                      (long)&local_f8 + 4,&local_f8);
                if (-1 < sVar10) {
                  sVar10 = FUN_00129300(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                        *(undefined1 *)(param_2 + 0x50),local_f8._4_4_,
                                        local_f8 & 0xffffffff,auStack_16c,uVar13,0,1,&local_6c,
                                        local_68,&local_fc);
                  if (-1 < sVar10) {
                    if (0xfe < uVar20) {
LAB_00123858:
                      *(undefined2 *)(lVar27 + 0x1fe2) = 0;
                      return 0xaca0;
                    }
                    uVar33 = (ulong)uVar20;
                    uVar20 = uVar20 + 1;
                    lVar17 = lVar27 + uVar33 * 0x20;
                    *(undefined4 *)(lVar17 + 0x14) = local_6c;
                    uVar34 = uVar34 + 1;
                    *(undefined4 *)(lVar17 + 0x18) = local_68[0];
                    *(short *)(lVar17 + 0x1c) = (short)(char)uVar13;
                  }
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 <= local_180[0]);
            }
          }
          *(ushort *)(lVar27 + 0x1fe2) = uVar20;
        }
        else {
          lVar17 = lVar27 + uVar25 * 2;
          uVar20 = *(ushort *)(lVar17 + 0x1fde);
          uVar33 = (ulong)uVar20;
          uVar22 = *(ushort *)(lVar17 + 0x1fe0);
          if (uVar22 == uVar20) {
            *(ushort *)(lVar17 + 0x1fe2) = uVar22;
            bVar9 = true;
            bVar5 = *pbVar32;
            goto joined_r0x001230f8;
          }
          uVar28 = uVar22;
          if ((*pbVar1 & 1) != 0) {
            *(ushort *)(lVar17 + 0x1fe0) = uVar20;
            uVar28 = uVar20;
          }
          if (0xfe < uVar20) {
            return 0xada0;
          }
          if (0xff < (uVar28 | uVar22)) {
            return 0xada0;
          }
          if (uVar20 < uVar22) {
            uVar34 = 0;
            do {
              lVar2 = lVar27 + uVar33 * 0x20;
              puVar30 = (undefined4 *)(lVar2 + 0x14);
              puVar21 = (undefined4 *)(lVar2 + 0x18);
              psVar23 = (short *)(lVar2 + 0x1c);
              if (iVar3 == 0x40050001) {
                sVar10 = FUN_00128a70();
              }
              else {
                sVar10 = FUN_00129300(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                      *(undefined1 *)(param_2 + 0x50),*puVar30,*puVar21,auStack_174,
                                      uVar13,*psVar23,1,&local_6c,local_68,&local_fc);
              }
              if (-1 < sVar10) {
                if (0xfe < uVar28) {
code_r0x00123838:
                  *(undefined2 *)(lVar27 + (ulong)((int)uVar25 + 1) * 2 + 0x1fe0) = 0;
                  return 0xaca0;
                }
                uVar16 = (ulong)uVar28;
                uVar28 = uVar28 + 1;
                lVar2 = lVar27 + uVar16 * 0x20;
                *(undefined4 *)(lVar2 + 0x14) = local_6c;
                *(undefined4 *)(lVar2 + 0x18) = local_68[0];
                uVar34 = uVar34 + 1;
                *(short *)(lVar2 + 0x1c) = *psVar23 + (short)uVar13;
              }
              if ((((bVar4 & 1) == 0) && (*(long *)(param_2 + 0x40) != 0)) &&
                 ((sVar10 = FUN_00113bf0(*(long *)(param_2 + 0x40),pbVar31,local_17c,local_180),
                  sVar10 == 1 && (local_17c[0] <= local_180[0])))) {
                uVar20 = local_17c[0];
                if (iVar3 == 0x40050001) {
                  do {
                    FUN_00100350(auStack_16c,
                                 *(undefined8 *)
                                  (*(long *)(param_2 + 0x40) + (ulong)uVar20 * 8 + 0x800));
                    uVar11 = FUN_001003e0(auStack_16c);
                    sVar10 = FUN_00128a70(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                          *(undefined1 *)(param_2 + 0x50),*puVar30,*puVar21,
                                          auStack_16c,uVar11,*psVar23,1,&local_6c,local_68,&local_fc
                                         );
                    if (-1 < sVar10) {
                      if (0xfe < uVar28) goto code_r0x00123838;
                      uVar16 = (ulong)uVar28;
                      uVar28 = uVar28 + 1;
                      lVar2 = lVar27 + uVar16 * 0x20;
                      *(undefined4 *)(lVar2 + 0x14) = local_6c;
                      *(undefined4 *)(lVar2 + 0x18) = local_68[0];
                      uVar34 = uVar34 + 1;
                      *(short *)(lVar2 + 0x1c) = *psVar23 + (short)uVar11;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar20 <= local_180[0]);
                }
                else {
                  do {
                    FUN_00100350(auStack_16c,
                                 *(undefined8 *)
                                  (*(long *)(param_2 + 0x40) + (ulong)uVar20 * 8 + 0x800));
                    uVar11 = FUN_001003e0(auStack_16c);
                    sVar10 = FUN_00129300(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                                          *(undefined1 *)(param_2 + 0x50),*puVar30,*puVar21,
                                          auStack_16c,uVar11,*psVar23,1,&local_6c,local_68,&local_fc
                                         );
                    if (-1 < sVar10) {
                      if (0xfe < uVar28) goto code_r0x00123838;
                      uVar16 = (ulong)uVar28;
                      uVar28 = uVar28 + 1;
                      lVar2 = lVar27 + uVar16 * 0x20;
                      *(undefined4 *)(lVar2 + 0x14) = local_6c;
                      *(undefined4 *)(lVar2 + 0x18) = local_68[0];
                      uVar34 = uVar34 + 1;
                      *(short *)(lVar2 + 0x1c) = *psVar23 + (short)uVar11;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar20 <= local_180[0]);
                }
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 < uVar22);
          }
          else {
            uVar34 = 0;
          }
          *(ushort *)(lVar17 + 0x1fe2) = uVar28;
        }
        if ((*pbVar32 & 0xfc) == 0xd8) goto LAB_0012371c;
LAB_001230fc:
        lVar17 = 1;
      }
      else {
        if (((uVar25 != 0) && (*(short *)(lVar27 + uVar25 * 2 + 0x1fe0) == 0)) ||
           (*(short *)(lVar27 + uVar25 * 2 + 0x1fe2) == 0)) {
          bVar8 = true;
          goto LAB_00123098;
        }
        bVar8 = false;
        bVar5 = *pbVar32;
joined_r0x001230f8:
        uVar34 = 0;
        if ((bVar5 & 0xfc) != 0xd8) goto LAB_001230fc;
LAB_0012371c:
        lVar17 = 1;
        if (*(short *)(pbVar32 + 2) != 0) {
          lVar17 = 2;
        }
      }
      pbVar32 = pbVar32 + lVar17 * 2;
      if ((*pbVar31 & 0xfc) != 0xd8) {
        pbVar31 = pbVar31 + 2;
        uVar25 = uVar25 + 1;
        if (uVar19 <= uVar25) break;
        goto LAB_00123054;
      }
      lVar17 = 1;
      if (*(short *)(pbVar31 + 2) != 0) {
        lVar17 = 2;
      }
      pbVar31 = pbVar31 + lVar17 * 2;
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar19);
    if (uVar34 == 0) {
      if (bVar9) goto LAB_00122fb8;
      goto LAB_001237a8;
    }
    if (bVar9) goto LAB_00122fb8;
  }
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  lVar17 = lVar27 + (ulong)*(ushort *)(param_2 + 0x4e) * 2;
  uVar20 = *(ushort *)(lVar17 + 0x1fe0);
  if (0xff < (ulong)uVar20) {
    return 0xada0;
  }
  uVar34 = *(ushort *)(lVar17 + 0x1fde);
  uVar19 = (ulong)uVar34;
  if (0xfe < uVar34) {
    return 0xada0;
  }
  if (*(long *)(param_3 + 8) == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(param_3 + 4) + 8);
    lVar17 = *(long *)(param_3 + 8) +
             ((ulong)*(byte *)(lVar17 + 0x10) << 0x18 | (ulong)*(byte *)(lVar17 + 0x11) << 0x10 |
              (ulong)*(byte *)(lVar17 + 0x12) << 8 | (ulong)*(byte *)(lVar17 + 0x13)) + 0x3c;
  }
  if (((*(char *)(param_2 + 0x50) == '\x01') && (*(char *)(param_1 + 0x62751) != '\0')) &&
     (sVar10 = FUN_00126b50(param_1,param_2,param_3,param_4), 0 < sVar10)) {
    *(undefined4 *)(param_1 + uVar29 * 8 + 0x641ec) = *(undefined4 *)(param_3 + 0x1e);
    uVar13 = *(undefined4 *)(param_3 + 0x20);
  }
  else {
    uVar13 = 0;
    *(undefined4 *)(param_1 + uVar29 * 8 + 0x641ec) = 0;
  }
  *(undefined4 *)(param_1 + uVar29 * 8 + 0x641f0) = uVar13;
  *(undefined1 *)((long)param_3 + 0x5f) = 1;
  uVar22 = (ushort)*(byte *)(param_1 + 0x6d648);
  if (*(byte *)(param_1 + 0x6d648) <= uVar6) {
    uVar22 = uVar6;
  }
  if (uVar34 < uVar20) {
    local_1bc = 0;
    iVar3 = -10000;
LAB_0012396c:
    lVar2 = lVar27 + uVar19 * 0x20;
    uVar26 = *(uint *)(lVar2 + 0x14);
    puVar24 = (uint *)(lVar2 + 0x18);
    uVar14 = *puVar24;
    if (uVar26 <= uVar14) {
LAB_00123990:
      uVar35 = uVar26 * 2 - 1;
      do {
        if (*(char *)(param_2 + 0x53) < '\0') {
          if (lVar17 != 0) {
            uVar15 = (uint)*(char *)(lVar17 + (ulong)(uVar26 - 1));
            if ((uVar15 >> 6 & 1) != 0) goto LAB_00123b20;
            if ((int)uVar15 < 0) goto LAB_00123a18;
          }
LAB_00123a0c:
          if (0x3f < *(byte *)(lVar18 + (ulong)uVar35)) {
LAB_00123a18:
            iVar12 = FUN_0012a7e0(param_1,uVar26,*(byte *)(lVar18 + (ulong)uVar35) & 0x3f,param_3,
                                  local_178,param_4);
            if (iVar12 <= iVar3) goto LAB_00123b50;
            if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00123b34;
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
            local_b0 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20),*puVar24);
            sVar7 = *param_3;
            sVar10 = param_3[0x35];
            if ((sVar10 <= sVar7) && (sVar10 = param_3[0x34], sVar7 <= param_3[0x34])) {
              sVar10 = sVar7;
            }
            local_f0 = CONCAT62((int6)((ulong)*(undefined8 *)param_3 >> 0x10),sVar10);
            local_b8 = CONCAT44(*(uint *)(lVar2 + 0x14),uVar26);
            uVar13 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar26);
            local_98._0_6_ = CONCAT24((short)uVar19,uVar13);
            sVar10 = FUN_0012ab00(param_1,&local_f0);
            if (sVar10 != 0) goto LAB_00123b34;
            uVar14 = *puVar24;
          }
        }
        else if (lVar17 == 0) {
LAB_001239b4:
          if (uVar22 == 2) {
            if (-1 < (char)(*(char *)(lVar18 + (ulong)uVar35) + -0x40)) goto LAB_00123a18;
          }
          else if (uVar22 == 1) {
            if ((*(byte *)(lVar18 + (ulong)uVar35) & 0xc0) == 0x40) goto LAB_00123a18;
          }
          else if (2 < uVar22) goto LAB_00123a0c;
        }
        else {
          uVar15 = (uint)*(char *)(lVar17 + (ulong)(uVar26 - 1));
          if ((uVar15 >> 6 & 1) == 0) {
            if (-1 < (int)uVar15) goto LAB_001239b4;
            goto LAB_00123a18;
          }
        }
LAB_00123b20:
        uVar26 = uVar26 + 1;
        uVar35 = uVar35 + 2;
        if (uVar14 < uVar26) goto LAB_00123b64;
      } while( true );
    }
    goto LAB_00123b80;
  }
LAB_00122fb8:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
LAB_00123b34:
  *(bool *)(param_1 + uVar29 + 0x6f4fc) = local_178[0] == '\x01';
  local_1bc = uVar26;
  iVar3 = iVar12;
LAB_00123b50:
  uVar14 = *puVar24;
  uVar26 = uVar26 + 1;
  if (uVar14 < uVar26) goto LAB_00123b64;
  goto LAB_00123990;
LAB_00123b64:
  if (-10000 < iVar3) {
    *(uint *)(lVar2 + 0x10) = local_1bc;
    lVar18 = lVar27 + (uVar19 & 0xffff) * 0x20;
    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar18 + 0x14);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar18 + 0x18);
    iVar3 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * iVar3;
    sVar7 = param_3[2] +
            ((short)((ulong)((long)iVar3 * 0x51eb851f) >> 0x25) - (short)(iVar3 >> 0x1f));
    *param_3 = sVar7;
    sVar10 = param_3[0x35];
    if ((sVar10 <= sVar7) && (sVar10 = param_3[0x34], sVar7 <= param_3[0x34])) {
      sVar10 = sVar7;
    }
    *param_3 = sVar10;
    *(uint *)(param_3 + 0x1c) = local_1bc;
    uVar13 = FUN_0012a960(*(undefined8 *)(param_3 + 4));
    *(undefined4 *)(param_3 + 0x2c) = uVar13;
    param_3[0x2e] = (short)uVar19;
    *(undefined1 *)(lVar27 + 0x2051) = 1;
    *pbVar1 = *pbVar1 | 2;
    return 1;
  }
LAB_00123b80:
  uVar19 = uVar19 + 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
  if (uVar20 <= uVar19) goto LAB_00122fb8;
  goto LAB_0012396c;
}

