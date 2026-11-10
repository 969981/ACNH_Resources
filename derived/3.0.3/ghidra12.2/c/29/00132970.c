
/* WARNING: Removing unreachable block (ram,0x001353a8) */
/* WARNING: Removing unreachable block (ram,0x00132ef4) */
/* WARNING: Removing unreachable block (ram,0x00134b74) */
/* WARNING: Removing unreachable block (ram,0x001349e4) */
/* WARNING: Removing unreachable block (ram,0x00134ff0) */
/* WARNING: Removing unreachable block (ram,0x0013455c) */

ulong FUN_00132970(long param_1,long *param_2,short *param_3,char param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ushort uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined1 uVar19;
  ushort uVar20;
  bool bVar21;
  char cVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  ushort uVar33;
  byte *pbVar34;
  byte *pbVar35;
  ushort uVar36;
  byte bVar37;
  undefined1 uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  byte *pbVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  ulong uVar55;
  uint uVar56;
  int *piVar57;
  ulong uVar58;
  uint local_158;
  uint local_140;
  ulong local_138;
  ulong local_130;
  ulong local_108;
  int local_100;
  char local_d4 [4];
  undefined8 local_d0 [4];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(byte *)(param_2 + 10) < 7) {
    pbVar47 = (byte *)(param_1 + 0x6d648);
    uVar51 = param_5 & 0xffffffff;
    switch(*(byte *)(param_2 + 10)) {
    case 0:
      if (((*(char *)((long)param_2 + 0x51) == '\0') && (*(ushort *)((long)param_2 + 0x4c) != 0)) &&
         (lVar41 = *(long *)(param_3 + 4),
         *(ushort *)((long)param_2 + 0x4c) <=
         (ushort)(CONCAT11(*(undefined1 *)(lVar41 + 0x16),*(undefined1 *)(lVar41 + 0x17)) >> 1))) {
        bVar37 = *(byte *)((long)param_3 + 0x5f);
        if ((bVar37 & 0xf) == 1) {
          sVar23 = FUN_001353b0(param_1,param_2,param_3,uVar51);
          if (sVar23 < 1) {
            return (ulong)(uint)(int)sVar23;
          }
          lVar41 = *(long *)(param_3 + 4);
          bVar37 = *(byte *)((long)param_3 + 0x5f);
        }
        uVar44 = (*(uint *)(lVar41 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar41 + 8) & 0xff00ff) << 8
        ;
        uVar44 = uVar44 >> 0x10 | uVar44 << 0x10;
        iVar25 = 10;
        if (uVar44 == 0x50001) {
          iVar25 = 6;
        }
        uVar49 = *(uint *)(param_3 + 0x1c);
        if ((bVar37 & 0xf) == 1) {
          uVar56 = *(uint *)(param_3 + 0x20);
          bVar21 = uVar49 <= uVar56;
          uVar46 = uVar49;
          uVar49 = uVar49 - 1;
          if (bVar21) goto LAB_0013305c;
        }
        else {
          uVar56 = *(uint *)(param_3 + 0x20);
          if ((uVar49 != uVar56) && (uVar46 = uVar49 + 1, uVar46 <= uVar56)) {
LAB_0013305c:
            bVar37 = *(byte *)(lVar41 + 0x4a);
            bVar8 = *(byte *)(lVar41 + 0x4e);
            lVar43 = 8;
            if (uVar44 == 0x50001) {
              lVar43 = 4;
            }
            lVar48 = 9;
            if (uVar44 == 0x50001) {
              lVar48 = 5;
            }
            pcVar3 = (char *)(lVar41 + ((ulong)*(byte *)(lVar41 + 0x20) << 0x18 |
                                        (ulong)*(byte *)(lVar41 + 0x21) << 0x10 |
                                        (ulong)*(byte *)(lVar41 + 0x22) << 8 |
                                       (ulong)*(byte *)(lVar41 + 0x23)));
            lVar41 = lVar41 + ((ulong)*(byte *)(lVar41 + 0x28) << 0x18 |
                               (ulong)*(byte *)(lVar41 + 0x29) << 0x10 |
                               (ulong)*(byte *)(lVar41 + 0x2a) << 8 |
                              (ulong)*(byte *)(lVar41 + 0x2b));
            do {
              uVar44 = uVar46;
              if ((*(byte *)(lVar41 + (ulong)(uVar49 << 1)) >> 6 & 1) != 0) {
                uVar56 = uVar49 * iVar25;
                if (*param_2 == 0) {
                  uVar33 = 0;
LAB_00133168:
                  if (param_2[1] == 0) goto LAB_0013314c;
LAB_00133170:
                  lVar42 = *(long *)(param_3 + 4);
                  if (*(byte *)(lVar42 + 0x4f) == 0) {
                    uVar56 = 0;
                  }
                  else {
                    uVar46 = 0x10 - *(byte *)(lVar42 + 0x4f);
                    uVar56 = (uint)(ushort)(CONCAT11(pcVar3[lVar43 + (ulong)uVar56],
                                                     pcVar3[lVar48 + (ulong)uVar56]) >>
                                           (ulong)(uVar46 - *(byte *)(lVar42 + 0x4b) & 0x1f)) &
                             0xffffU >> (ulong)(uVar46 & 0x1f);
                  }
                  pbVar47 = (byte *)(lVar42 + ((ulong)*(byte *)(lVar42 + 0x44) << 0x18 |
                                               (ulong)*(byte *)(lVar42 + 0x45) << 0x10 |
                                               (ulong)*(byte *)(lVar42 + 0x46) << 8 |
                                              (ulong)*(byte *)(lVar42 + 0x47)) +
                                    (ulong)(uVar56 * bVar8 +
                                           ((int)(short)((ushort)*(byte *)(lVar42 + 0x48) << 8) |
                                           (uint)*(byte *)(lVar42 + 0x49)) * (uint)bVar37));
                  bVar9 = *pbVar47;
                  uVar36 = (ushort)bVar9;
                  if (bVar8 == 2) {
                    uVar36 = CONCAT11(bVar9,pbVar47[1]);
                  }
                  sVar23 = FUN_001139a0(param_2,uVar33,uVar36);
                }
                else {
                  lVar42 = *(long *)(param_3 + 4);
                  bVar9 = *(byte *)(lVar42 + 0x4b);
                  uVar51 = (ulong)bVar9;
                  if (bVar9 != 0) {
                    uVar51 = (ulong)(ushort)(CONCAT11(pcVar3[lVar43 + (ulong)uVar56],
                                                      pcVar3[lVar48 + (ulong)uVar56]) >>
                                            (ulong)(0x10 - bVar9 & 0x1f));
                  }
                  pbVar47 = (byte *)(lVar42 + ((ulong)*(byte *)(lVar42 + 0x44) << 0x18 |
                                               (ulong)*(byte *)(lVar42 + 0x45) << 0x10 |
                                               (ulong)*(byte *)(lVar42 + 0x46) << 8 |
                                              (ulong)*(byte *)(lVar42 + 0x47)) + uVar51 * bVar37);
                  bVar9 = *pbVar47;
                  uVar33 = (ushort)bVar9;
                  if (bVar37 != 2) goto LAB_00133168;
                  uVar33 = CONCAT11(bVar9,pbVar47[1]);
                  if (param_2[1] != 0) goto LAB_00133170;
LAB_0013314c:
                  sVar23 = FUN_001139a0(param_2,uVar33,0);
                }
                if (sVar23 != 0) {
                  *(undefined1 *)((long)param_3 + 0x5f) = 2;
                  *(uint *)(param_3 + 0x1c) = uVar44;
                  uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar44);
                  *(undefined4 *)(param_3 + 0x2c) = uVar27;
                  *(undefined1 *)(param_3 + 0x2f) = 0x10;
                  iVar28 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) *
                           (*(byte *)(lVar41 + (ulong)(uVar49 << 1)) & 0x3f);
                  sVar24 = param_3[2] +
                           ((short)((ulong)((long)iVar28 * 0x51eb851f) >> 0x25) -
                           (short)(iVar28 >> 0x1f));
                  *param_3 = sVar24;
                  sVar23 = param_3[0x35];
                  if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34])) {
                    sVar23 = sVar24;
                  }
                  *param_3 = sVar23;
                  if (*(long *)(param_1 + 0x6f4b8) != 0) {
                    local_d0[0] = *(undefined8 *)param_3;
                    local_d0[1] = *(undefined8 *)(param_3 + 4);
                    local_d0[2] = *(undefined8 *)(param_3 + 8);
                    local_d0[3] = *(undefined8 *)(param_3 + 0xc);
                    local_b0 = *(undefined8 *)(param_3 + 0x10);
                    uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                    local_a0 = *(undefined8 *)(param_3 + 0x18);
                    local_98 = *(undefined8 *)(param_3 + 0x1c);
                    local_90 = *(undefined8 *)(param_3 + 0x20);
                    uStack_88 = *(undefined8 *)(param_3 + 0x24);
                    local_80 = *(undefined8 *)(param_3 + 0x28);
                    local_78 = *(undefined8 *)(param_3 + 0x2c);
                    local_70 = *(undefined8 *)(param_3 + 0x30);
                    uStack_68 = *(undefined8 *)(param_3 + 0x34);
                    sVar23 = FUN_0013c020(param_1,local_d0);
                    if (sVar23 == 0) goto LAB_001332f4;
                  }
                  if (param_4 != '\x01') {
                    return 1;
                  }
                  lVar41 = param_2[6];
                  local_130 = (ulong)*(ushort *)((long)param_2 + 0x4c);
                  if (*(short *)(lVar41 + local_130 * 2) == 0) {
                    return 1;
                  }
                  lVar43 = *(long *)(param_3 + 4);
                  uVar44 = (*(uint *)(lVar43 + 0x5c) & 0xff00ff00) >> 8 |
                           (*(uint *)(lVar43 + 0x5c) & 0xff00ff) << 8;
                  uVar44 = uVar44 >> 0x10 | uVar44 << 0x10;
                  if (uVar44 != 0) {
                    uVar49 = *(uint *)(param_3 + 0x1c);
                    uVar56 = *(uint *)(lVar43 + 8);
                    uVar33 = FUN_001003e0();
                    if (uVar33 != 0) {
                      bVar37 = *(byte *)(lVar43 + 0x2c);
                      bVar8 = *(byte *)(lVar43 + 0x2d);
                      bVar9 = *(byte *)(lVar43 + 0x20);
                      bVar10 = *(byte *)(lVar43 + 0x21);
                      uVar56 = (uVar56 & 0xff00ff00) >> 8 | (uVar56 & 0xff00ff) << 8;
                      uVar56 = uVar56 >> 0x10 | uVar56 << 0x10;
                      bVar11 = *(byte *)(lVar43 + 0x2e);
                      uVar51 = 1;
                      bVar12 = *(byte *)(lVar43 + 0x22);
                      lVar48 = lVar43 + ((ulong)*(byte *)(lVar43 + 0x34) << 0x18 |
                                         (ulong)*(byte *)(lVar43 + 0x35) << 0x10 |
                                         (ulong)*(byte *)(lVar43 + 0x36) << 8 |
                                        (ulong)*(byte *)(lVar43 + 0x37));
                      bVar13 = *(byte *)(lVar43 + 0x2f);
                      bVar14 = *(byte *)(lVar43 + 0x23);
                      bVar15 = *(byte *)(lVar43 + 0x25);
                      bVar16 = *(byte *)(lVar43 + 0x24);
                      bVar17 = *(byte *)(lVar43 + 0x26);
                      bVar18 = *(byte *)(lVar43 + 0x27);
                      param_3[0x2a] = 0;
                      param_3[0x2b] = 0;
                      param_3[0x26] = 0;
                      param_3[0x27] = 0;
                      param_3[0x28] = 0;
                      param_3[0x29] = 0;
                      param_3[0x22] = 0;
                      param_3[0x23] = 0;
                      param_3[0x24] = 0;
                      param_3[0x25] = 0;
                      lVar42 = lVar43 + ((ulong)bVar37 << 0x18 | (ulong)bVar8 << 0x10 |
                                         (ulong)bVar11 << 8 | (ulong)bVar13);
                      lVar4 = lVar43 + ((ulong)bVar16 << 0x18 | (ulong)bVar15 << 0x10 |
                                        (ulong)bVar17 << 8 | (ulong)bVar18);
                      lVar5 = lVar43 + ((ulong)bVar9 << 0x18 | (ulong)bVar10 << 0x10 |
                                        (ulong)bVar12 << 8 | (ulong)bVar14);
                      local_158 = 0;
                      iVar25 = 10;
                      if (uVar56 == 0x50001) {
                        iVar25 = 6;
                      }
                      goto LAB_001338c4;
                    }
                  }
                  return 1;
                }
LAB_001332f4:
                if (*pcVar3 < '\0') break;
                uVar56 = *(uint *)(param_3 + 0x20);
              }
              uVar46 = uVar44 + 1;
              uVar49 = uVar44;
            } while (uVar44 + 1 <= uVar56);
          }
        }
        uVar38 = 3;
        uVar30 = 0;
        *(undefined1 *)((long)param_3 + 0x5f) = 3;
        goto LAB_00132e60;
      }
      break;
    case 1:
      if (((*(char *)((long)param_2 + 0x51) != '\x02') && (*(ushort *)((long)param_2 + 0x4c) != 0))
         && (*(ushort *)((long)param_2 + 0x4c) <=
             (ushort)(CONCAT11(*(undefined1 *)(*(long *)(param_3 + 4) + 0x16),
                               *(undefined1 *)(*(long *)(param_3 + 4) + 0x17)) >> 1))) {
        param_5 = param_5 & 0xffff;
        lVar41 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
        if (((lVar41 == 0) || (*(char *)((long)param_2 + 0x51) != '\0')) ||
           ((*(ushort *)(param_2[5] + 0x658) & 3) == 0)) {
          bVar37 = *(byte *)((long)param_3 + 0x5f);
          if ((bVar37 & 0xf) == 1) {
            sVar23 = FUN_001353b0(param_1,param_2,param_3,uVar51);
            if (sVar23 < 1) {
              return (ulong)(uint)(int)sVar23;
            }
            bVar37 = *(byte *)((long)param_3 + 0x5f);
          }
          uVar44 = *(uint *)(param_3 + 0x1c);
          local_d4[0] = '\0';
          if ((bVar37 & 0xf) == 1) goto LAB_00132edc;
          lVar41 = *(long *)(param_3 + 4);
          uVar49 = *(uint *)(lVar41 + 8);
          if (*(long *)(param_3 + 8) == 0) {
            lVar43 = 0;
          }
          else {
            lVar43 = *(long *)(param_3 + 8) +
                     ((ulong)*(byte *)(lVar41 + 0x10) << 0x18 |
                      (ulong)*(byte *)(lVar41 + 0x11) << 0x10 | (ulong)*(byte *)(lVar41 + 0x12) << 8
                     | (ulong)*(byte *)(lVar41 + 0x13)) + 0x3c;
          }
          lVar48 = lVar41 + ((ulong)*(byte *)(lVar41 + 0x28) << 0x18 |
                             (ulong)*(byte *)(lVar41 + 0x29) << 0x10 |
                             (ulong)*(byte *)(lVar41 + 0x2a) << 8 | (ulong)*(byte *)(lVar41 + 0x2b))
          ;
          if (*(char *)((long)param_2 + 0x51) == '\0') {
            iVar25 = FUN_0013bc70(param_1,uVar44,*(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1)) & 0x3f,
                                  param_3,local_d4,uVar51);
            uVar56 = *(uint *)(param_3 + 0x20);
            if (uVar44 < uVar56) {
              uVar44 = uVar44 + 1;
            }
            else {
              uVar44 = *(uint *)(param_3 + 0x1e);
            }
            uVar33 = (ushort)*pbVar47;
            if ((ushort)*pbVar47 <= *(ushort *)((long)param_2 + 0x4e)) {
              uVar33 = *(ushort *)((long)param_2 + 0x4e);
            }
            if (uVar44 <= uVar56) {
              uVar49 = (uVar49 & 0xff00ff00) >> 8 | (uVar49 & 0xff00ff) << 8;
              uVar49 = uVar49 >> 0x10 | uVar49 << 0x10;
              bVar21 = false;
              puVar6 = (undefined1 *)(param_1 + param_5 + 0x6f4fc);
              uVar46 = 0;
              local_100 = -10000;
              do {
                if (-1 < *(char *)((long)param_2 + 0x53)) {
                  if (lVar43 == 0) {
                    do {
                      if (uVar33 == 1) {
                        if ((*(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1)) & 0xc0) == 0x40)
                        goto LAB_001341a4;
                      }
                      else if (uVar33 == 2) {
                        if (-1 < (char)(*(char *)(lVar48 + (ulong)(uVar44 * 2 - 1)) + -0x40))
                        goto LAB_001341a4;
                      }
                      else if ((2 < uVar33) && (0x3f < *(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1))))
                      {
LAB_001341a4:
                        lVar41 = *(long *)(param_3 + 4);
                        if (uVar49 == 0x50001) {
                          if (((*pbVar47 == 0) && (*(byte *)(param_1 + 0x6d649) == 0x37)) ||
                             (bVar37 = *(byte *)(lVar41 + ((ulong)*(byte *)(lVar41 + 0x20) << 0x18 |
                                                           (ulong)*(byte *)(lVar41 + 0x21) << 0x10 |
                                                           (ulong)*(byte *)(lVar41 + 0x22) << 8 |
                                                          (ulong)*(byte *)(lVar41 + 0x23)) +
                                                (ulong)(uVar44 * 6 - 6)) & 0x7f,
                             bVar37 <= *(byte *)(param_1 + 0x6d649) && *pbVar47 <= bVar37))
                          goto LAB_001342f0;
                        }
                        else {
                          cVar22 = FUN_0013c1f0(lVar41,uVar44);
                          if (cVar22 != '\0') goto LAB_001342f0;
                        }
                      }
                      uVar44 = uVar44 + 1;
                      if ((!bVar21) && (uVar56 < uVar44)) {
                        uVar56 = *(uint *)(param_3 + 0x1c);
                        uVar44 = *(uint *)(param_3 + 0x1e);
                        bVar21 = true;
                      }
                      if (uVar56 < uVar44) goto LAB_001344c8;
                    } while( true );
                  }
                  do {
                    uVar39 = (uint)*(char *)(lVar43 + (ulong)(uVar44 - 1));
                    if ((uVar39 >> 6 & 1) != 0) goto LAB_00134118;
                    if ((int)uVar39 < 0) {
LAB_0013407c:
                      lVar41 = *(long *)(param_3 + 4);
                      if (uVar49 == 0x50001) {
                        if (((*pbVar47 == 0) && (*(byte *)(param_1 + 0x6d649) == 0x37)) ||
                           (bVar37 = *(byte *)(lVar41 + ((ulong)*(byte *)(lVar41 + 0x20) << 0x18 |
                                                         (ulong)*(byte *)(lVar41 + 0x21) << 0x10 |
                                                         (ulong)*(byte *)(lVar41 + 0x22) << 8 |
                                                        (ulong)*(byte *)(lVar41 + 0x23)) +
                                              (ulong)(uVar44 * 6 - 6)) & 0x7f,
                           bVar37 <= *(byte *)(param_1 + 0x6d649) && *pbVar47 <= bVar37))
                        goto LAB_001342f0;
                      }
                      else {
                        cVar22 = FUN_0013c1f0(lVar41,uVar44);
                        if (cVar22 != '\0') goto LAB_001342f0;
                      }
                    }
                    else {
                      if (uVar33 == 1) {
                        if ((*(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1)) & 0xc0) != 0x40)
                        goto LAB_00134118;
                        goto LAB_0013407c;
                      }
                      if (uVar33 == 2) {
                        if (-1 < (char)(*(char *)(lVar48 + (ulong)(uVar44 * 2 - 1)) + -0x40))
                        goto LAB_0013407c;
                      }
                      else if ((2 < uVar33) && (0x3f < *(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1))))
                      goto LAB_0013407c;
                    }
LAB_00134118:
                    uVar44 = uVar44 + 1;
                    if ((!bVar21) && (uVar56 < uVar44)) {
                      uVar56 = *(uint *)(param_3 + 0x1c);
                      uVar44 = *(uint *)(param_3 + 0x1e);
                      bVar21 = true;
                    }
                    if (uVar56 < uVar44) goto LAB_001344c8;
                  } while( true );
                }
                if (lVar43 == 0) {
                  while (*(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1)) < 0x40) {
                    uVar44 = uVar44 + 1;
                    if ((!bVar21) && (uVar56 < uVar44)) {
                      uVar56 = *(uint *)(param_3 + 0x1c);
                      uVar44 = *(uint *)(param_3 + 0x1e);
                      bVar21 = true;
                    }
                    if (uVar56 < uVar44) goto LAB_001344c8;
                  }
                }
                else {
                  while ((uVar39 = (uint)*(char *)(lVar43 + (ulong)(uVar44 - 1)),
                         (uVar39 >> 6 & 1) != 0 ||
                         ((-1 < (int)uVar39 && (*(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1)) < 0x40))
                         ))) {
                    uVar44 = uVar44 + 1;
                    if ((!bVar21) && (uVar56 < uVar44)) {
                      uVar56 = *(uint *)(param_3 + 0x1c);
                      uVar44 = *(uint *)(param_3 + 0x1e);
                      bVar21 = true;
                    }
                    if (uVar56 < uVar44) goto LAB_001344c8;
                  }
                }
LAB_001342f0:
                iVar28 = FUN_0013bc70(param_1,uVar44,
                                      *(byte *)(lVar48 + (ulong)(uVar44 * 2 - 1)) & 0x3f,param_3,
                                      local_d4,uVar51);
                if ((iVar28 == iVar25 && *(uint *)(param_3 + 0x1c) <= uVar44) &&
                    (iVar28 != iVar25 || uVar44 != *(uint *)(param_3 + 0x1c))) {
                  param_3[0x2f] = 0x210;
                  *(uint *)(param_3 + 0x1c) = uVar44;
                  uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar44);
                  *(undefined4 *)(param_3 + 0x2c) = uVar27;
                  *puVar6 = local_d4[0] == '\x01';
                  if (*(long *)(param_1 + 0x6f4b8) == 0) {
                    return 1;
                  }
                  local_d0[0] = *(undefined8 *)param_3;
                  local_d0[1] = *(undefined8 *)(param_3 + 4);
                  local_d0[2] = *(undefined8 *)(param_3 + 8);
                  local_d0[3] = *(undefined8 *)(param_3 + 0xc);
                  local_b0 = *(undefined8 *)(param_3 + 0x10);
                  uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                  local_a0 = *(undefined8 *)(param_3 + 0x18);
                  local_98 = *(undefined8 *)(param_3 + 0x1c);
                  local_90 = *(undefined8 *)(param_3 + 0x20);
                  uStack_88 = *(undefined8 *)(param_3 + 0x24);
                  local_80 = *(undefined8 *)(param_3 + 0x28);
                  local_78 = *(undefined8 *)(param_3 + 0x2c);
                  local_70 = *(undefined8 *)(param_3 + 0x30);
                  uStack_68 = *(undefined8 *)(param_3 + 0x34);
                  sVar23 = FUN_0013c020(param_1,local_d0);
                  if (sVar23 != 0) {
                    return 1;
                  }
                }
                else if (iVar28 < iVar25) {
                  if (local_100 < iVar28) {
LAB_00134360:
                    if (*(long *)(param_1 + 0x6f4b8) != 0) {
                      local_80 = *(undefined8 *)(param_3 + 0x28);
                      local_70 = *(undefined8 *)(param_3 + 0x30);
                      uStack_68 = *(undefined8 *)(param_3 + 0x34);
                      local_d0[0] = *(undefined8 *)param_3;
                      local_d0[1] = *(undefined8 *)(param_3 + 4);
                      local_d0[2] = *(undefined8 *)(param_3 + 8);
                      local_d0[3] = *(undefined8 *)(param_3 + 0xc);
                      local_b0 = *(undefined8 *)(param_3 + 0x10);
                      uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                      local_a0 = *(undefined8 *)(param_3 + 0x18);
                      local_98 = *(undefined8 *)(param_3 + 0x1c);
                      local_90 = *(undefined8 *)(param_3 + 0x20);
                      uStack_88 = *(undefined8 *)(param_3 + 0x24);
                      local_78._0_6_ = (undefined6)*(undefined8 *)(param_3 + 0x2c);
                      local_78 = CONCAT26(0x210,(undefined6)local_78);
                      uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar44);
                      local_78 = CONCAT44(local_78._4_4_,uVar27);
                      local_98 = CONCAT44(local_98._4_4_,uVar44);
                      sVar23 = FUN_0013c020(param_1,local_d0);
                      if (sVar23 == 0) goto joined_r0x001344ac;
                    }
                    local_100 = iVar28;
                    uVar46 = uVar44;
                    if (local_d4[0] == '\x01') {
                      *puVar6 = 1;
                    }
                    else {
                      *puVar6 = 0;
                    }
                  }
                  else if (uVar44 < uVar46) {
                    if (local_100 == iVar28) goto LAB_00134360;
                  }
                }
joined_r0x001344ac:
                uVar39 = uVar44 + 1;
                if ((uVar56 < uVar44 + 1) && (uVar39 = uVar44 + 1, !bVar21)) {
                  uVar56 = *(uint *)(param_3 + 0x1c);
                  bVar21 = true;
                  uVar39 = *(uint *)(param_3 + 0x1e);
                }
                uVar44 = uVar39;
              } while (uVar44 <= uVar56);
LAB_001344c8:
              if (uVar46 != 0) {
                local_100 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * local_100;
                sVar24 = param_3[2] +
                         ((short)((ulong)((long)local_100 * 0x51eb851f) >> 0x25) -
                         (short)(local_100 >> 0x1f));
                *param_3 = sVar24;
                sVar23 = param_3[0x35];
                if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34])) {
                  sVar23 = sVar24;
                }
                *param_3 = sVar23;
                param_3[0x2f] = 0x210;
                *(uint *)(param_3 + 0x1c) = uVar46;
                uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4));
                *(undefined4 *)(param_3 + 0x2c) = uVar27;
                *puVar6 = local_d4[0] == '\x01';
                return 1;
              }
            }
          }
          else {
            uVar49 = *(uint *)(param_3 + 0x20);
            if (uVar44 + 1 <= uVar49) {
              if (*(char *)((long)param_2 + 0x53) < '\0') {
                uVar56 = uVar44 << 1 | 1;
                if (lVar43 == 0) {
                  do {
                    if (0x3f < *(byte *)(lVar48 + (ulong)uVar56)) goto LAB_00134a44;
                    uVar46 = uVar44 + 2;
                    uVar44 = uVar44 + 1;
                    uVar56 = uVar56 + 2;
                  } while (uVar46 <= uVar49);
                }
                else {
                  do {
                    if ((((uint)(int)*(char *)(lVar43 + (ulong)uVar44) >> 6 & 1) == 0) &&
                       ((*(char *)(lVar43 + (ulong)uVar44) < 0 ||
                        (0x3f < *(byte *)(lVar48 + (ulong)uVar56))))) goto LAB_00134a44;
                    uVar46 = uVar44 + 2;
                    uVar44 = uVar44 + 1;
                    uVar56 = uVar56 + 2;
                  } while (uVar46 <= uVar49);
                }
              }
              else {
                uVar33 = *(ushort *)((long)param_2 + 0x4e);
                if (lVar43 == 0) {
                  if (uVar33 != 1) {
                    uVar56 = uVar44 << 1 | 1;
                    do {
                      if (uVar33 == 2) {
                        if (-1 < (char)(*(char *)(lVar48 + (ulong)uVar56) + -0x40))
                        goto LAB_00134a44;
                      }
                      else if ((2 < uVar33) && (0x3f < *(byte *)(lVar48 + (ulong)uVar56)))
                      goto LAB_00134a44;
                      uVar46 = uVar44 + 2;
                      uVar44 = uVar44 + 1;
                      uVar56 = uVar56 + 2;
                    } while (uVar46 <= uVar49);
                  }
                  else {
                    uVar56 = uVar44 << 1 | 1;
                    do {
                      if ((*(byte *)(lVar48 + (ulong)uVar56) & 0xc0) == 0x40) goto LAB_00134a44;
                      uVar46 = uVar44 + 2;
                      uVar44 = uVar44 + 1;
                      uVar56 = uVar56 + 2;
                    } while (uVar46 <= uVar49);
                  }
                }
                else if (uVar33 != 1) {
                  uVar56 = uVar44 << 1 | 1;
                  do {
                    if (((uint)(int)*(char *)(lVar43 + (ulong)uVar44) >> 6 & 1) == 0) {
                      if (*(char *)(lVar43 + (ulong)uVar44) < 0) goto LAB_00134a44;
                      if (uVar33 == 2) {
                        if (-1 < (char)(*(char *)(lVar48 + (ulong)uVar56) + -0x40))
                        goto LAB_00134a44;
                      }
                      else if ((2 < uVar33) && (0x3f < *(byte *)(lVar48 + (ulong)uVar56)))
                      goto LAB_00134a44;
                    }
                    uVar46 = uVar44 + 2;
                    uVar44 = uVar44 + 1;
                    uVar56 = uVar56 + 2;
                  } while (uVar46 <= uVar49);
                }
                else {
                  uVar56 = uVar44 << 1 | 1;
                  do {
                    if ((((uint)(int)*(char *)(lVar43 + (ulong)uVar44) >> 6 & 1) == 0) &&
                       ((*(char *)(lVar43 + (ulong)uVar44) < 0 ||
                        ((*(byte *)(lVar48 + (ulong)uVar56) & 0xc0) == 0x40)))) goto LAB_00134a44;
                    uVar46 = uVar44 + 2;
                    uVar44 = uVar44 + 1;
                    uVar56 = uVar56 + 2;
                  } while (uVar46 <= uVar49);
                }
              }
            }
          }
LAB_0013502c:
          uVar30 = 0;
          *(undefined1 *)((long)param_3 + 0x5f) = 3;
        }
        else {
          if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
            uVar30 = FUN_00135c20(param_1,param_2,param_3,uVar51);
            if (((uint)uVar30 & 0xffff) == 0xac80) {
              lVar41 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
              *(byte *)(lVar41 + 0x2050) = *(byte *)(lVar41 + 0x2050) | 1;
              uVar30 = FUN_00135c20(param_1,param_2,param_3,uVar51);
            }
            if ((short)uVar30 < 1) {
              return uVar30;
            }
            lVar41 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
            uVar33 = *(ushort *)((long)param_2 + 0x4e);
            if (*(char *)((long)param_2 + 0x51) != '\0') goto LAB_0013502c;
          }
          else {
            uVar33 = *(ushort *)((long)param_2 + 0x4e);
          }
          local_d4[0] = '\0';
          uVar58 = (ulong)uVar33;
          if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
LAB_00132edc:
            param_3[0x2f] = 0x210;
            return 1;
          }
          pbVar47 = (byte *)(lVar41 + 0x2050);
          lVar43 = *(long *)(param_3 + 4);
          if (*(long *)(param_3 + 8) == 0) {
            lVar48 = 0;
            bVar37 = *pbVar47;
          }
          else {
            lVar48 = *(long *)(param_3 + 8) +
                     ((ulong)*(byte *)(lVar43 + 0x10) << 0x18 |
                      (ulong)*(byte *)(lVar43 + 0x11) << 0x10 | (ulong)*(byte *)(lVar43 + 0x12) << 8
                     | (ulong)*(byte *)(lVar43 + 0x13)) + 0x3c;
            bVar37 = *pbVar47;
          }
          if ((bVar37 >> 1 & 1) == 0) {
            lVar48 = lVar41 + uVar58 * 2;
            uVar33 = *(ushort *)(lVar48 + 0x1fe0);
            uVar30 = 0xad80;
            if ((uVar33 < 0x100) && (uVar36 = *(ushort *)(lVar48 + 0x1fde), uVar36 < 0xff)) {
              uVar49 = (uint)uVar36;
              uVar56 = (uint)uVar33;
              uVar44 = uVar56 - uVar49;
              if ((uVar44 & 0xffff) != 0) {
                bVar37 = *(byte *)(lVar43 + 0x28);
                bVar8 = *(byte *)(lVar43 + 0x29);
                bVar9 = *(byte *)(lVar43 + 0x2a);
                bVar10 = *(byte *)(lVar43 + 0x2b);
                uVar46 = uVar49;
                if (uVar49 <= (ushort)param_3[0x2e]) {
                  uVar46 = (uint)(ushort)param_3[0x2e];
                }
                uVar30 = (ulong)uVar46;
                uVar26 = FUN_0013ce20(param_1,param_3,lVar41,uVar30,uVar58,uVar51,
                                      *(undefined1 *)((long)param_2 + 0x53));
                uVar39 = *(byte *)(lVar43 + ((ulong)bVar37 << 0x18 | (ulong)bVar8 << 0x10 |
                                             (ulong)bVar9 << 8 | (ulong)bVar10) +
                                  (ulong)(*(int *)(param_3 + 0x1c) * 2 - 1)) & 0x3f;
                lVar43 = *(long *)(param_3 + 4);
                if ((*(long *)(param_3 + 8) != 0) &&
                   (uVar39 = (*(byte *)(*(long *)(param_3 + 8) +
                                        ((ulong)*(byte *)(lVar43 + 0x10) << 0x18 |
                                         (ulong)*(byte *)(lVar43 + 0x11) << 0x10 |
                                         (ulong)*(byte *)(lVar43 + 0x12) << 8 |
                                        (ulong)*(byte *)(lVar43 + 0x13)) +
                                        (ulong)(*(int *)(param_3 + 0x1c) - 1) + 0x3c) & 0x3f) +
                             uVar39, 99 < uVar39)) {
                  uVar39 = 100;
                }
                iVar25 = FUN_0013be30();
                if (iVar25 != 0) {
                  iVar25 = FUN_00113a80(param_1,iVar25);
                  iVar28 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
                  if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar28 != 0) {
                    iVar45 = iVar25 * 100;
                    iVar25 = 0;
                    if (iVar28 != 0) {
                      iVar25 = iVar45 / iVar28;
                    }
                  }
                  uVar39 = iVar25 + uVar39;
                }
                if ((int)uVar26 < (int)uVar39) {
                  bVar21 = false;
                  uVar54 = (uint)((int)uVar26 < -9999);
                  local_108 = uVar30;
                }
                else {
                  bVar37 = *(char *)(lVar41 + 0x2051) + 1;
                  *(byte *)(lVar41 + 0x2051) = bVar37;
                  if (bVar37 < 3) {
                    param_3[0x2f] = 0x210;
                    lVar41 = lVar41 + uVar30 * 0x20;
                    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(lVar41 + 0x10);
                    uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),
                                          *(undefined4 *)(lVar41 + 0x10));
                    *(undefined4 *)(param_3 + 0x2c) = uVar27;
                    param_3[0x2e] = (short)uVar46;
                    return 1;
                  }
                  local_108 = 0;
                  uVar54 = 0;
                  *(undefined1 *)(lVar41 + 0x2051) = 0;
                  bVar21 = true;
                  uVar26 = 0xffffd8f0;
                }
                uVar52 = uVar49;
                if ((uVar46 + 1 & 0xffff) < uVar56) {
                  uVar52 = uVar46 + 1;
                }
                uVar55 = (ulong)uVar52;
                if (uVar54 != (uVar44 & 0xffff)) {
                  lVar43 = param_1 + param_5 + 0x6f4fc;
                  if (bVar21) {
                    do {
                      uVar52 = (uint)uVar55;
                      uVar53 = uVar55 & 0xffff;
                      lVar48 = lVar41 + uVar53 * 0x20;
                      piVar57 = (int *)(lVar48 + 0x10);
                      iVar25 = *piVar57;
                      if (iVar25 == -1) {
                        uVar26 = 0xffffd8f0;
                        if (uVar39 == 0xffffd8f0) goto LAB_001350f0;
                      }
                      else {
                        lVar42 = *(long *)(param_3 + 4);
                        uVar26 = FUN_0013bc70(param_1,iVar25,
                                              *(byte *)(lVar42 + ((ulong)*(byte *)(lVar42 + 0x28) <<
                                                                  0x18 | (ulong)*(byte *)(lVar42 + 
                                                  0x29) << 0x10 |
                                                  (ulong)*(byte *)(lVar42 + 0x2a) << 8 |
                                                  (ulong)*(byte *)(lVar42 + 0x2b)) +
                                                  (ulong)(iVar25 * 2 - 1)) & 0x3f,param_3,lVar43,
                                              uVar51);
                        if (uVar26 == uVar39) {
LAB_001350f0:
                          if ((*(int *)(param_3 + 0x1e) != *(int *)(lVar48 + 0x14)) ||
                             (*(int *)(param_3 + 0x1c) != *piVar57)) goto LAB_001352ac;
                          uVar26 = FUN_0013ce20(param_1,param_3,lVar41,uVar55,uVar58,uVar51,
                                                *(undefined1 *)((long)param_2 + 0x53));
                        }
                      }
                      if (uVar26 == uVar39) goto LAB_001352ac;
                      if ((int)uVar26 < -9999) {
                        uVar54 = uVar54 + 1;
                      }
                      uVar26 = uVar49;
                      if ((uVar52 + 1 & 0xffff) < uVar56) {
                        uVar26 = uVar52 + 1;
                      }
                      uVar55 = (ulong)uVar26;
                      if (uVar46 == (uVar26 & 0xffff)) {
                        param_3[0x2f] = 0x210;
                        uVar51 = uVar30;
                        goto LAB_00135364;
                      }
                    } while ((uVar54 & 0xffff) != (uVar44 & 0xffff));
                  }
                  else {
                    do {
                      uVar52 = (uint)uVar55;
                      uVar53 = uVar55 & 0xffff;
                      lVar48 = lVar41 + uVar53 * 0x20;
                      piVar57 = (int *)(lVar48 + 0x10);
                      iVar25 = *piVar57;
                      if (iVar25 == -1) {
                        uVar29 = 0xffffd8f0;
                        if (uVar39 == 0xffffd8f0) goto LAB_00135200;
                      }
                      else {
                        lVar42 = *(long *)(param_3 + 4);
                        uVar29 = FUN_0013bc70(param_1,iVar25,
                                              *(byte *)(lVar42 + ((ulong)*(byte *)(lVar42 + 0x28) <<
                                                                  0x18 | (ulong)*(byte *)(lVar42 + 
                                                  0x29) << 0x10 |
                                                  (ulong)*(byte *)(lVar42 + 0x2a) << 8 |
                                                  (ulong)*(byte *)(lVar42 + 0x2b)) +
                                                  (ulong)(iVar25 * 2 - 1)) & 0x3f,param_3,lVar43,
                                              uVar51);
                        if (uVar29 == uVar39) {
LAB_00135200:
                          if ((*(int *)(param_3 + 0x1e) != *(int *)(lVar48 + 0x14)) ||
                             (*(int *)(param_3 + 0x1c) != *piVar57)) {
LAB_001352ac:
                            param_3[0x2f] = 0x210;
                            lVar43 = lVar41 + uVar53 * 0x20;
                            *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar43 + 0x14);
                            *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar43 + 0x18);
                            *(int *)(param_3 + 0x1c) = *piVar57;
                            uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),*piVar57);
                            param_3[0x2e] = (short)uVar52;
LAB_0013538c:
                            *(undefined4 *)(param_3 + 0x2c) = uVar27;
                            *(undefined1 *)(lVar41 + 0x2051) = 1;
                            return 1;
                          }
                          uVar29 = FUN_0013ce20(param_1,param_3,lVar41,uVar55,uVar58,uVar51,
                                                *(undefined1 *)((long)param_2 + 0x53));
                        }
                      }
                      if (uVar29 == uVar39) goto LAB_001352ac;
                      if ((int)uVar29 < -9999) {
                        uVar54 = uVar54 + 1;
                      }
                      uVar40 = uVar52;
                      if ((int)uVar29 <= (int)uVar26) {
                        uVar40 = (uint)local_108;
                        uVar29 = uVar26;
                      }
                      uVar26 = uVar29;
                      uVar30 = (ulong)uVar40;
                      uVar29 = uVar49;
                      if ((uVar52 + 1 & 0xffff) < uVar56) {
                        uVar29 = uVar52 + 1;
                      }
                      uVar55 = (ulong)uVar29;
                      if ((uVar46 == (uVar29 & 0xffff)) && (uVar26 != 0xffffd8f0)) {
                        iVar25 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar26;
                        sVar24 = param_3[2] +
                                 ((short)((ulong)((long)iVar25 * 0x51eb851f) >> 0x25) -
                                 (short)(iVar25 >> 0x1f));
                        *param_3 = sVar24;
                        sVar23 = param_3[0x35];
                        if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34]))
                        {
                          sVar23 = sVar24;
                        }
                        *param_3 = sVar23;
                        param_3[0x2f] = 0x210;
                        uVar51 = uVar30 & 0xffff;
LAB_00135364:
                        lVar43 = lVar41 + uVar51 * 0x20;
                        *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar43 + 0x14);
                        *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar43 + 0x18);
                        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(lVar43 + 0x10);
                        uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),
                                              *(undefined4 *)(lVar43 + 0x10));
                        param_3[0x2e] = (short)uVar30;
                        goto LAB_0013538c;
                      }
                      local_108 = uVar30;
                    } while ((uVar54 & 0xffff) != (uVar44 & 0xffff));
                  }
                }
              }
              goto LAB_0013502c;
            }
          }
          else {
            *pbVar47 = bVar37 & 0xfd;
            if ((char)param_2[10] != '\x01') {
              return 1;
            }
            lVar43 = *(long *)(param_3 + 4);
            lVar43 = lVar43 + ((ulong)*(byte *)(lVar43 + 0x28) << 0x18 |
                               (ulong)*(byte *)(lVar43 + 0x29) << 0x10 |
                               (ulong)*(byte *)(lVar43 + 0x2a) << 8 |
                              (ulong)*(byte *)(lVar43 + 0x2b));
            if (*(short *)((long)param_2 + 0x4c) == 0) {
              uVar49 = *(uint *)(param_3 + 0x20);
              if (*(uint *)(param_3 + 0x1c) < uVar49) {
                uVar56 = *(uint *)(param_3 + 0x1c) + 1;
              }
              else {
                uVar56 = *(uint *)(param_3 + 0x1e);
              }
              if (uVar49 < uVar56) {
                uVar44 = 0;
                iVar25 = -10000;
              }
              else {
                bVar21 = false;
                uVar44 = 0;
                puVar6 = (undefined1 *)(param_1 + param_5 + 0x6f4fc);
                iVar25 = -10000;
                uVar46 = uVar49;
                do {
                  if (-1 < *(char *)((long)param_2 + 0x53)) {
                    if (lVar48 == 0) {
                      uVar33 = *(ushort *)((long)param_2 + 0x4e);
                      do {
                        if (uVar33 == 1) {
                          if ((*(byte *)(lVar43 + (ulong)(uVar56 * 2 - 1)) & 0xc0) == 0x40)
                          goto LAB_00134da0;
                        }
                        else if (uVar33 == 2) {
                          if (-1 < (char)(*(char *)(lVar43 + (ulong)(uVar56 * 2 - 1)) + -0x40))
                          goto LAB_00134da0;
                        }
                        else if ((2 < uVar33) &&
                                (0x3f < *(byte *)(lVar43 + (ulong)(uVar56 * 2 - 1))))
                        goto LAB_00134da0;
                        uVar56 = uVar56 + 1;
                        if ((!bVar21) && (uVar46 < uVar56)) {
                          uVar46 = *(uint *)(param_3 + 0x1c);
                          uVar56 = *(uint *)(param_3 + 0x1e);
                          bVar21 = true;
                        }
                        if (uVar49 < uVar56) goto LAB_00134ee4;
                      } while( true );
                    }
                    do {
                      uVar39 = (uint)*(char *)(lVar48 + (ulong)(uVar56 - 1));
                      if ((uVar39 >> 6 & 1) == 0) {
                        if ((int)uVar39 < 0) goto LAB_00134da0;
                        uVar33 = *(ushort *)((long)param_2 + 0x4e);
                        if (uVar33 == 1) {
                          if ((*(byte *)(lVar43 + (ulong)(uVar56 * 2 - 1)) & 0xc0) == 0x40)
                          goto LAB_00134da0;
                        }
                        else if (uVar33 == 2) {
                          if (-1 < (char)(*(char *)(lVar43 + (ulong)(uVar56 * 2 - 1)) + -0x40))
                          goto LAB_00134da0;
                        }
                        else if ((2 < uVar33) &&
                                (0x3f < *(byte *)(lVar43 + (ulong)(uVar56 * 2 - 1))))
                        goto LAB_00134da0;
                      }
                      uVar56 = uVar56 + 1;
                      if ((!bVar21) && (uVar46 < uVar56)) {
                        uVar46 = *(uint *)(param_3 + 0x1c);
                        uVar56 = *(uint *)(param_3 + 0x1e);
                        bVar21 = true;
                      }
                      if (uVar49 < uVar56) goto LAB_00134ee4;
                    } while( true );
                  }
                  if (lVar48 == 0) {
                    while (*(byte *)(lVar43 + (ulong)(uVar56 * 2 - 1)) < 0x40) {
                      uVar56 = uVar56 + 1;
                      if ((!bVar21) && (uVar46 < uVar56)) {
                        uVar46 = *(uint *)(param_3 + 0x1c);
                        uVar56 = *(uint *)(param_3 + 0x1e);
                        bVar21 = true;
                      }
                      if (uVar49 < uVar56) goto LAB_00134ee4;
                    }
                  }
                  else {
                    while ((uVar39 = (uint)*(char *)(lVar48 + (ulong)(uVar56 - 1)),
                           (uVar39 >> 6 & 1) != 0 ||
                           ((-1 < (int)uVar39 &&
                            (*(byte *)(lVar43 + (ulong)(uVar56 * 2 - 1)) < 0x40))))) {
                      uVar56 = uVar56 + 1;
                      if ((!bVar21) && (uVar46 < uVar56)) {
                        uVar46 = *(uint *)(param_3 + 0x1c);
                        uVar56 = *(uint *)(param_3 + 0x1e);
                        bVar21 = true;
                      }
                      if (uVar49 < uVar56) goto LAB_00134ee4;
                    }
                  }
LAB_00134da0:
                  iVar28 = FUN_0013bc70(param_1,uVar56,
                                        *(byte *)(lVar43 + (ulong)(uVar56 * 2 - 1)) & 0x3f,param_3,
                                        local_d4,uVar51);
                  if (iVar25 < iVar28) {
                    if (*(long *)(param_1 + 0x6f4b8) != 0) {
                      local_d0[1] = *(undefined8 *)(param_3 + 4);
                      local_d0[2] = *(undefined8 *)(param_3 + 8);
                      local_d0[3] = *(undefined8 *)(param_3 + 0xc);
                      local_b0 = *(undefined8 *)(param_3 + 0x10);
                      uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                      local_a0 = *(undefined8 *)(param_3 + 0x18);
                      local_90 = *(undefined8 *)(param_3 + 0x20);
                      uStack_88 = *(undefined8 *)(param_3 + 0x24);
                      local_80 = *(undefined8 *)(param_3 + 0x28);
                      local_78 = *(undefined8 *)(param_3 + 0x2c);
                      local_70 = *(undefined8 *)(param_3 + 0x30);
                      uStack_68 = *(undefined8 *)(param_3 + 0x34);
                      sVar24 = *param_3;
                      sVar23 = param_3[0x35];
                      if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34])) {
                        sVar23 = sVar24;
                      }
                      local_d0[0] = CONCAT62((int6)((ulong)*(undefined8 *)param_3 >> 0x10),sVar23);
                      local_98._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
                      local_98 = CONCAT44(local_98._4_4_,uVar56);
                      uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),iVar28);
                      local_78 = CONCAT44(local_78._4_4_,uVar27);
                      sVar23 = FUN_0013c020(param_1,local_d0);
                      if (sVar23 == 0) goto LAB_00134ebc;
                    }
                    if (local_d4[0] == '\x01') {
                      *puVar6 = 1;
                    }
                    else {
                      *puVar6 = 0;
                    }
                    iVar25 = iVar28;
                    uVar44 = uVar56;
                  }
LAB_00134ebc:
                  uVar56 = uVar56 + 1;
                  if ((uVar46 < uVar56) && (!bVar21)) {
                    uVar46 = *(uint *)(param_3 + 0x1c);
                    uVar56 = *(uint *)(param_3 + 0x1e);
                    bVar21 = true;
                  }
                  uVar49 = *(uint *)(param_3 + 0x20);
                } while (uVar56 <= uVar49);
              }
LAB_00134ee4:
              iVar25 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * iVar25;
              sVar24 = param_3[2] +
                       ((short)((ulong)((long)iVar25 * 0x51eb851f) >> 0x25) -
                       (short)(iVar25 >> 0x1f));
              *param_3 = sVar24;
              sVar23 = param_3[0x35];
              if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34])) {
                sVar23 = sVar24;
              }
              lVar41 = *(long *)(param_3 + 4);
              *param_3 = sVar23;
              *(uint *)(param_3 + 0x1c) = uVar44;
LAB_00134ab4:
              uVar27 = FUN_0013be30(lVar41,uVar44);
              *(undefined4 *)(param_3 + 0x2c) = uVar27;
              return 1;
            }
            uVar33 = *(ushort *)((long)param_2 + 0x4e);
            lVar42 = lVar41 + (ulong)uVar33 * 2;
            uVar36 = *(ushort *)(lVar42 + 0x1fe0);
            uVar30 = 0xad80;
            if ((ulong)uVar36 < 0x100) {
              uVar20 = *(ushort *)(lVar42 + 0x1fde);
              uVar58 = (ulong)uVar20;
              if (uVar20 < 0xff) {
                uVar7 = (ushort)*(byte *)(param_1 + 0x6d648);
                if (*(byte *)(param_1 + 0x6d648) <= uVar33) {
                  uVar7 = uVar33;
                }
                local_138 = uVar58;
                if (uVar36 <= uVar20) {
                  local_140 = 0;
                  local_130._0_4_ = -10000;
LAB_00134f50:
                  lVar43 = lVar41 + (local_138 & 0xffff) * 0x20;
                  *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar43 + 0x14);
                  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar43 + 0x18);
                  local_130._0_4_ =
                       ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * (int)local_130;
                  sVar24 = param_3[2] +
                           ((short)((ulong)((long)(int)local_130 * 0x51eb851f) >> 0x25) -
                           (short)((int)local_130 >> 0x1f));
                  *param_3 = sVar24;
                  sVar23 = param_3[0x35];
                  if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34])) {
                    sVar23 = sVar24;
                  }
                  *param_3 = sVar23;
                  *(uint *)(param_3 + 0x1c) = local_140;
                  uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4));
                  *(undefined4 *)(param_3 + 0x2c) = uVar27;
                  param_3[0x2e] = (short)local_138;
                  *(undefined1 *)(lVar41 + 0x2051) = 1;
                  return 1;
                }
                puVar6 = (undefined1 *)(param_1 + param_5 + 0x6f4fc);
                local_140 = 0;
                local_130._0_4_ = -10000;
LAB_001346c0:
                lVar42 = lVar41 + uVar58 * 0x20;
                uVar44 = *(uint *)(lVar42 + 0x14);
                uVar49 = *(uint *)(lVar42 + 0x18);
                if (uVar44 <= uVar49) {
                  bVar21 = false;
                  uVar56 = 0;
                  iVar25 = -10000;
LAB_001346fc:
                  uVar46 = uVar44 * 2 - 1;
                  do {
                    if (*(char *)((long)param_2 + 0x53) < '\0') {
                      if (lVar48 != 0) {
                        uVar39 = (uint)*(char *)(lVar48 + (ulong)(uVar44 - 1));
                        if ((uVar39 >> 6 & 1) != 0) goto LAB_001348a0;
                        if ((int)uVar39 < 0) goto LAB_00134794;
                      }
LAB_00134784:
                      if (0x3f < *(byte *)(lVar43 + (ulong)uVar46)) {
LAB_00134794:
                        iVar28 = FUN_0013bc70(param_1,uVar44,
                                              *(byte *)(lVar43 + (ulong)uVar46) & 0x3f,param_3,
                                              local_d4,uVar51);
                        if (iVar28 <= iVar25) goto joined_r0x001348e8;
                        if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_001348b4;
                        local_d0[1] = *(undefined8 *)(param_3 + 4);
                        local_d0[2] = *(undefined8 *)(param_3 + 8);
                        local_d0[3] = *(undefined8 *)(param_3 + 0xc);
                        local_b0 = *(undefined8 *)(param_3 + 0x10);
                        uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                        local_a0 = *(undefined8 *)(param_3 + 0x18);
                        uStack_88 = *(undefined8 *)(param_3 + 0x24);
                        local_80 = *(undefined8 *)(param_3 + 0x28);
                        local_78 = *(undefined8 *)(param_3 + 0x2c);
                        local_70 = *(undefined8 *)(param_3 + 0x30);
                        uStack_68 = *(undefined8 *)(param_3 + 0x34);
                        local_90 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20),
                                            *(uint *)(lVar42 + 0x18));
                        sVar24 = *param_3;
                        sVar23 = param_3[0x35];
                        if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34]))
                        {
                          sVar23 = sVar24;
                        }
                        local_d0[0] = CONCAT62((int6)((ulong)*(undefined8 *)param_3 >> 0x10),sVar23)
                        ;
                        local_98 = CONCAT44(*(uint *)(lVar42 + 0x14),uVar44);
                        uVar27 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar44);
                        local_78._0_6_ = CONCAT24((short)uVar58,uVar27);
                        sVar23 = FUN_0013c020(param_1,local_d0);
                        if (sVar23 != 0) goto LAB_001348b4;
                      }
                    }
                    else if (lVar48 == 0) {
LAB_00134720:
                      if (uVar7 == 2) {
                        if (-1 < (char)(*(char *)(lVar43 + (ulong)uVar46) + -0x40))
                        goto LAB_00134794;
                      }
                      else if (uVar7 == 1) {
                        if ((*(byte *)(lVar43 + (ulong)uVar46) & 0xc0) == 0x40) goto LAB_00134794;
                      }
                      else if (2 < uVar7) goto LAB_00134784;
                    }
                    else {
                      uVar39 = (uint)*(char *)(lVar48 + (ulong)(uVar44 - 1));
                      if ((uVar39 >> 6 & 1) == 0) {
                        if (-1 < (int)uVar39) goto LAB_00134720;
                        goto LAB_00134794;
                      }
                    }
LAB_001348a0:
                    uVar44 = uVar44 + 1;
                    uVar46 = uVar46 + 2;
                    if (uVar49 < uVar44) goto LAB_001348ec;
                  } while( true );
                }
                goto LAB_00134934;
              }
            }
          }
        }
        if (0 < (short)uVar30) {
          return 1;
        }
LAB_00134acc:
        uVar38 = 3;
        goto LAB_00132e60;
      }
      break;
    case 2:
      if (*(char *)((long)param_2 + 0x51) == '\0') {
        bVar37 = *(byte *)((long)param_3 + 0x5f);
        if ((bVar37 & 0xf) == 1) {
          sVar23 = FUN_001385b0(param_1,param_2,param_3,uVar51);
          if (sVar23 < 1) {
            return (ulong)(uint)(int)sVar23;
          }
          bVar37 = *(byte *)((long)param_3 + 0x5f);
        }
        if ((bVar37 & 0xf) == 1) {
          param_3[0x2f] = 0x210;
          return 1;
        }
        if (*(char *)((long)param_2 + 0x51) == '\0') {
          lVar43 = *(long *)(param_3 + 4);
          lVar41 = lVar43 + ((ulong)*(byte *)(lVar43 + 0x2c) << 0x18 |
                             (ulong)*(byte *)(lVar43 + 0x2d) << 0x10 |
                             (ulong)*(byte *)(lVar43 + 0x2e) << 8 | (ulong)*(byte *)(lVar43 + 0x2f))
          ;
          pbVar47 = (byte *)(lVar41 + (ulong)(*(int *)(param_3 + 0x1c) * 4 - 4));
          uVar49 = *(uint *)(param_3 + 0x20);
          uVar44 = *pbVar47 & 0x3f;
          if ((*(long *)(param_3 + 8) != 0) &&
             (uVar44 = (*(byte *)(*(long *)(param_3 + 8) +
                                  ((ulong)*(byte *)(lVar43 + 0x10) << 0x18 |
                                   (ulong)*(byte *)(lVar43 + 0x11) << 0x10 |
                                   (ulong)*(byte *)(lVar43 + 0x12) << 8 |
                                  (ulong)*(byte *)(lVar43 + 0x13)) +
                                  (ulong)(((uint)pbVar47[1] << 0x10 | (uint)pbVar47[2] << 8 |
                                          (uint)pbVar47[3]) - 1) + 0x3c) & 0x3f) + uVar44,
             99 < uVar44)) {
            uVar44 = 100;
          }
          iVar25 = FUN_0013be30();
          if (iVar25 != 0) {
            iVar25 = FUN_00113a80(param_1,iVar25);
            iVar28 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
            if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar28 != 0) {
              iVar45 = iVar25 * 100;
              iVar25 = 0;
              if (iVar28 != 0) {
                iVar25 = iVar45 / iVar28;
              }
            }
            uVar44 = iVar25 + uVar44;
          }
          uVar56 = *(uint *)(param_3 + 0x1c);
          if (uVar56 < uVar49) {
            uVar46 = uVar56 + 1;
          }
          else {
            uVar46 = *(uint *)(param_3 + 0x1e);
          }
          if (uVar46 <= uVar49) {
            bVar21 = false;
            uVar26 = 0;
            uVar39 = 0xffffd8f0;
            do {
              pbVar47 = (byte *)(lVar41 + (ulong)(uVar46 * 4 - 4));
              if ((*pbVar47 >> 6 & 1) != 0) {
                lVar43 = *(long *)(param_3 + 4);
                uVar54 = *pbVar47 & 0x3f;
                if ((*(long *)(param_3 + 8) != 0) &&
                   (uVar54 = (*(byte *)(*(long *)(param_3 + 8) +
                                        ((ulong)*(byte *)(lVar43 + 0x10) << 0x18 |
                                         (ulong)*(byte *)(lVar43 + 0x11) << 0x10 |
                                         (ulong)*(byte *)(lVar43 + 0x12) << 8 |
                                        (ulong)*(byte *)(lVar43 + 0x13)) +
                                        (ulong)(((uint)pbVar47[1] << 0x10 | (uint)pbVar47[2] << 8 |
                                                (uint)pbVar47[3]) - 1) + 0x3c) & 0x3f) + uVar54,
                   99 < uVar54)) {
                  uVar54 = 100;
                }
                iVar25 = FUN_0013be30();
                if (iVar25 != 0) {
                  iVar25 = FUN_00113a80(param_1,iVar25);
                  iVar28 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
                  if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar28 != 0) {
                    iVar45 = iVar25 * 100;
                    iVar25 = 0;
                    if (iVar28 != 0) {
                      iVar25 = iVar45 / iVar28;
                    }
                  }
                  uVar54 = iVar25 + uVar54;
                }
                uVar56 = *(uint *)(param_3 + 0x1c);
                if ((uVar54 == uVar44) && (uVar56 < uVar46)) {
                  param_3[0x2f] = 0x210;
                  *(uint *)(param_3 + 0x1c) = uVar46;
                  uVar31 = *(undefined8 *)(param_3 + 4);
                  uVar44 = (uint)pbVar47[1] << 0x10 | (uint)pbVar47[2] << 8 | (uint)pbVar47[3];
                  goto LAB_00133fa0;
                }
                if ((int)uVar54 < (int)uVar44) {
                  if ((int)uVar39 < (int)uVar54) {
LAB_00133454:
                    uVar39 = uVar54;
                    uVar26 = uVar46;
                  }
                  else if (uVar46 < uVar26) {
                    if (uVar39 == uVar54) goto LAB_00133454;
                  }
                }
              }
              uVar46 = uVar46 + 1;
              if ((!bVar21) && (uVar49 < uVar46)) {
                uVar46 = *(uint *)(param_3 + 0x1e);
                bVar21 = true;
                uVar49 = uVar56;
              }
            } while (uVar46 <= uVar49);
            if (uVar26 != 0) {
              iVar25 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar39;
              sVar24 = param_3[2] +
                       ((short)((ulong)((long)iVar25 * 0x51eb851f) >> 0x25) -
                       (short)(iVar25 >> 0x1f));
              *param_3 = sVar24;
              sVar23 = param_3[0x35];
              if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34])) {
                sVar23 = sVar24;
              }
              param_3[0x2f] = 0x210;
              *param_3 = sVar23;
              *(uint *)(param_3 + 0x1c) = uVar26;
              uVar31 = *(undefined8 *)(param_3 + 4);
              lVar41 = lVar41 + (ulong)(uVar26 * 4 - 4);
              uVar44 = (uint)*(byte *)(lVar41 + 1) << 0x10 | (uint)*(byte *)(lVar41 + 2) << 8 |
                       (uint)*(byte *)(lVar41 + 3);
LAB_00133fa0:
              uVar27 = FUN_0013be30(uVar31,uVar44);
              *(undefined4 *)(param_3 + 0x2c) = uVar27;
              return 1;
            }
          }
        }
        uVar30 = 0;
        goto LAB_00134acc;
      }
      break;
    case 3:
      if (((*(char *)((long)param_2 + 0x51) == '\0') && (*(ushort *)((long)param_2 + 0x4c) != 0)) &&
         (*(ushort *)((long)param_2 + 0x4c) <=
          (ushort)(CONCAT11(*(undefined1 *)(*(long *)(param_3 + 4) + 0x1a),
                            *(undefined1 *)(*(long *)(param_3 + 4) + 0x1b)) >> 1))) {
LAB_00132d1c:
        if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
          sVar23 = FUN_00136960(param_1,param_2,param_3);
          if (sVar23 < 1) {
            return (ulong)(uint)(int)sVar23;
          }
        }
        sVar23 = FUN_00136d10(param_1,param_2,param_3);
joined_r0x00132e50:
        uVar30 = (ulong)(uint)(int)sVar23;
        if (0 < sVar23) {
          return uVar30;
        }
        goto LAB_00134acc;
      }
      break;
    case 4:
      if ((*(ushort *)((long)param_2 + 0x4c) != 0) &&
         (*(ushort *)((long)param_2 + 0x4c) <=
          (ushort)(CONCAT11(*(undefined1 *)(*(long *)(param_3 + 4) + 0x1a),
                            *(undefined1 *)(*(long *)(param_3 + 4) + 0x1b)) >> 1))) {
        if ((*(long *)(param_2[5] + (param_5 & 0xffff) * 0x50 + 0x40) != 0) &&
           (((*(byte *)(param_2[5] + 0x658) >> 1 & 1) != 0 &&
            (*(char *)((long)param_2 + 0x51) == '\0')))) {
          if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
            uVar30 = FUN_00137460(param_1,param_2,param_3,uVar51);
            if (((uint)uVar30 & 0xffff) == 0xac80) {
              lVar41 = *(long *)(param_2[5] + (param_5 & 0xffff) * 0x50 + 0x40);
              *(byte *)(lVar41 + 0x2050) = *(byte *)(lVar41 + 0x2050) | 1;
              uVar30 = FUN_00137460(param_1,param_2,param_3,uVar51);
            }
            if ((short)uVar30 < 1) {
              return uVar30;
            }
          }
          uVar51 = FUN_00137d70(param_1,param_2,param_3,uVar51);
          return uVar51;
        }
        goto LAB_00132d1c;
      }
      break;
    case 5:
      if (((*(char *)((long)param_2 + 0x51) == '\0') && (*(ushort *)((long)param_2 + 0x4c) != 0)) &&
         ((*(ushort *)((long)param_2 + 0x4c) <=
           (ushort)(CONCAT11(*(undefined1 *)(*(long *)(param_3 + 4) + 0x1a),
                             *(undefined1 *)(*(long *)(param_3 + 4) + 0x1b)) >> 1) &&
          (*(long *)(param_3 + 0xc) != 0)))) goto LAB_00132d1c;
      break;
    case 6:
      if ((((*(char *)((long)param_2 + 0x51) != '\x02') && (*(ushort *)((long)param_2 + 0x4c) != 0))
          && (*(ushort *)((long)param_2 + 0x4c) <=
              (ushort)(CONCAT11(*(undefined1 *)(*(long *)(param_3 + 4) + 0x1a),
                                *(undefined1 *)(*(long *)(param_3 + 4) + 0x1b)) >> 1))) &&
         (*(long *)(param_3 + 0xc) != 0)) {
        if (((*(long *)(param_2[5] + (param_5 & 0xffff) * 0x50 + 0x40) == 0) ||
            (*(char *)((long)param_2 + 0x51) != '\0')) ||
           ((*(ushort *)(param_2[5] + 0x658) & 3) == 0)) {
          if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
            sVar23 = FUN_00136960(param_1,param_2,param_3);
            if (sVar23 < 1) {
              return (ulong)(uint)(int)sVar23;
            }
          }
          sVar23 = FUN_00136d10(param_1,param_2,param_3);
          uVar30 = (ulong)(uint)(int)sVar23;
          if (0 < sVar23) {
            return uVar30;
          }
          *(undefined1 *)((long)param_3 + 0x5f) = 3;
          goto LAB_00134acc;
        }
        if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
          uVar30 = FUN_00137460(param_1,param_2,param_3,uVar51);
          if (((uint)uVar30 & 0xffff) == 0xac80) {
            lVar41 = *(long *)(param_2[5] + (param_5 & 0xffff) * 0x50 + 0x40);
            *(byte *)(lVar41 + 0x2050) = *(byte *)(lVar41 + 0x2050) | 1;
            uVar30 = FUN_00137460(param_1,param_2,param_3,uVar51);
          }
          if ((short)uVar30 < 1) {
            return uVar30;
          }
        }
        sVar23 = FUN_00137d70(param_1,param_2,param_3,uVar51);
        goto joined_r0x00132e50;
      }
    }
  }
  uVar30 = 0;
  uVar38 = 4;
LAB_00132e60:
  *(undefined1 *)((long)param_3 + 0x5f) = uVar38;
  return uVar30;
LAB_00134a44:
  iVar25 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) *
           (*(byte *)(lVar48 + ((ulong)(uVar44 << 1) | 1)) & 0x3f);
  sVar24 = param_3[2] +
           ((short)((ulong)((long)iVar25 * 0x51eb851f) >> 0x25) - (short)(iVar25 >> 0x1f));
  *param_3 = sVar24;
  sVar23 = param_3[0x35];
  uVar44 = uVar44 + 1;
  if ((sVar23 <= sVar24) && (sVar23 = param_3[0x34], sVar24 <= param_3[0x34])) {
    sVar23 = sVar24;
  }
  *param_3 = sVar23;
  *(uint *)(param_3 + 0x1c) = uVar44;
  param_3[0x2f] = 0x210;
  goto LAB_00134ab4;
LAB_001348b4:
  bVar21 = local_d4[0] == '\x01';
  iVar25 = iVar28;
  uVar56 = uVar44;
joined_r0x001348e8:
  uVar44 = uVar44 + 1;
  if (uVar49 < uVar44) goto LAB_001348ec;
  goto LAB_001346fc;
LAB_001348ec:
  if (uVar56 == 0) {
LAB_00134934:
    *(undefined4 *)(lVar42 + 0x10) = 0xffffffff;
  }
  else {
    *(uint *)(lVar42 + 0x10) = uVar56;
    if ((int)local_130 < iVar25) {
      if (bVar21) {
        *puVar6 = 1;
      }
      else {
        *puVar6 = 0;
      }
      local_138 = uVar58 & 0xffffffff;
      local_130._0_4_ = iVar25;
      local_140 = uVar56;
    }
  }
  uVar58 = uVar58 + 1;
  if (uVar58 == uVar36) goto LAB_00134f50;
  goto LAB_001346c0;
LAB_001338c4:
  uVar46 = 1;
  uVar39 = uVar44;
  do {
    sVar23 = (short)local_130;
    iVar28 = uVar46 + (uVar39 - uVar46 >> 1);
    uVar54 = iVar28 - 1;
    uVar26 = uVar54 * 6;
    puVar6 = (undefined1 *)(lVar48 + (ulong)uVar26);
    uVar26 = (uint)CONCAT21(CONCAT11(*puVar6,puVar6[1]),
                            *(undefined1 *)(lVar48 + (ulong)(uVar26 + 2)));
    if (uVar26 == uVar49) {
      uVar39 = (uint)CONCAT12(puVar6[3],CONCAT11(puVar6[4],puVar6[5]));
      if (uVar39 != 0) goto LAB_00133bf4;
      break;
    }
    pbVar47 = (byte *)(lVar5 + (ulong)((uVar26 - 1) * iVar25));
    uVar52 = (*pbVar47 & 0x7f) >> (ulong)(uVar56 != 0x50001);
    uVar26 = uVar52 & 0xff;
    uVar30 = (ulong)uVar26;
    if (uVar56 == 0x50001) {
      if (uVar26 < 0x38) {
        uVar29 = (*(uint *)(lVar43 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar43 + 8) & 0xff00ff) << 8
        ;
        pbVar47 = (byte *)(lVar43 + ((ulong)*(byte *)(lVar43 + 0x24) << 0x18 |
                                     (ulong)*(byte *)(lVar43 + 0x25) << 0x10 |
                                     (ulong)*(byte *)(lVar43 + 0x26) << 8 |
                                    (ulong)*(byte *)(lVar43 + 0x27)) +
                          ((ulong)pbVar47[1] << 0x10 | (ulong)pbVar47[2] << 8 | (ulong)pbVar47[3]));
        if ((uVar29 >> 0x10 | uVar29 << 0x10) == 0x50001) {
          uVar52 = 0;
          if (uVar26 == 0) {
            puVar32 = local_d0;
          }
          else {
            uVar38 = *(undefined1 *)(lVar43 + 0x76);
            uVar19 = *(undefined1 *)(lVar43 + 0x77);
            bVar37 = *(byte *)(lVar43 + 0x70);
            bVar8 = *(byte *)(lVar43 + 0x71);
            bVar9 = *(byte *)(lVar43 + 0x72);
            bVar10 = *(byte *)(lVar43 + 0x73);
            uVar29 = 0;
            puVar32 = local_d0;
            do {
              pbVar34 = (byte *)(lVar43 + ((ulong)bVar37 << 0x18 | (ulong)bVar8 << 0x10 |
                                           (ulong)bVar9 << 8 | (ulong)bVar10) +
                                (ulong)CONCAT11(uVar38,uVar19) * (ulong)*pbVar47);
              if ((*pbVar34 & 0xfc) == 0xd8) {
                iVar45 = 1;
                if (*(short *)(pbVar34 + 2) != 0) {
                  iVar45 = 2;
                }
              }
              else {
                iVar45 = 1;
              }
              uVar40 = iVar45 * 2 + (uVar52 & 0xffff);
              if (0x6f < uVar40) break;
              FUN_00100660(puVar32,pbVar34,iVar45 * 2);
              puVar32 = (undefined8 *)((long)puVar32 + (ulong)(byte)iVar45 * 2);
              uVar29 = uVar29 + 1;
              pbVar47 = pbVar47 + 1;
              uVar52 = uVar40;
            } while ((uVar29 & 0xffff) < uVar26);
          }
          *(undefined2 *)puVar32 = 0;
          uVar30 = (ulong)(uVar52 >> 1 & 0x7fff);
        }
        else {
          FUN_00100660(local_d0,pbVar47,(uVar52 & 0x7f) << 1);
        }
        puVar32 = local_d0;
        *(undefined2 *)((long)puVar32 + uVar30 * 2) = 0;
        if ((int)sVar23 <= (int)uVar30) goto LAB_00133afc;
        goto LAB_00133acc;
      }
      puVar32 = local_d0;
      uVar30 = 0x38;
      if (0x38 < sVar23) goto LAB_00133acc;
LAB_00133afc:
      sVar24 = FUN_001006e0(puVar32,lVar41,(int)local_130 << 1);
    }
    else {
      puVar32 = (undefined8 *)
                (lVar4 + ((ulong)pbVar47[1] << 0x10 | (ulong)pbVar47[2] << 8 | (ulong)pbVar47[3]));
      if ((int)sVar23 <= (int)uVar26) goto LAB_00133afc;
LAB_00133acc:
      sVar24 = FUN_001006e0(puVar32,lVar41,(int)uVar30 << 1);
      if (sVar24 == 0) {
        sVar24 = -1;
      }
    }
    if (sVar24 < 0) {
      uVar46 = iVar28 + 1;
      uVar54 = uVar39;
    }
    uVar39 = uVar54;
  } while (uVar46 <= uVar54);
  if ((int)uVar46 < (int)uVar44) {
    uVar39 = uVar46 * 6 - 6;
    while( true ) {
      uVar46 = uVar46 + 1;
      puVar6 = (undefined1 *)(lVar48 + (ulong)uVar39);
      uVar26 = (uint)CONCAT21(CONCAT11(*puVar6,puVar6[1]),
                              *(undefined1 *)(lVar48 + (ulong)(uVar39 + 2)));
      if (uVar26 == uVar49) break;
      if (((int)uVar44 <= (int)uVar46) ||
         (uVar39 = uVar39 + 6,
         (*(byte *)(lVar5 + (ulong)((uVar26 - 1) * iVar25)) & 0x7f) >> (uVar56 != 0x50001) !=
         (int)sVar23)) goto LAB_00134ad4;
    }
    uVar39 = (uint)CONCAT12(puVar6[3],CONCAT11(puVar6[4],puVar6[5]));
    if (uVar39 != 0) {
LAB_00133bf4:
      pbVar47 = (byte *)(lVar42 + (ulong)(uVar39 * 4 - 4));
      uVar46 = (uint)pbVar47[1] << 0x10 | (uint)pbVar47[2] << 8 | (uint)pbVar47[3];
      if (uVar46 != 0) {
        lVar41 = lVar41 + (long)sVar23 * 2;
        local_130 = 0;
        uVar26 = 0;
        uVar54 = 0xffffd8f0;
        uVar49 = 0;
LAB_00133c3c:
        uVar52 = uVar39 << 2;
        do {
          if ((char)*pbVar47 < '\0') {
            uVar29 = (uVar46 - 1) * iVar25;
            uVar30 = ((ulong)*(byte *)(lVar5 + (ulong)uVar29) & 0x7f) >> (uVar56 != 0x50001);
            uVar40 = (uint)uVar30;
            if (uVar40 <= uVar33) goto LAB_00133ca0;
          }
          pbVar47 = (byte *)(lVar42 + (ulong)uVar52);
          uVar52 = uVar52 + 4;
          uVar39 = uVar39 + 1;
          uVar46 = (uint)pbVar47[1] << 0x10 | (uint)pbVar47[2] << 8 | (uint)pbVar47[3];
          if (uVar46 == 0) goto LAB_00133f28;
        } while( true );
      }
    }
  }
  goto LAB_00134ad4;
LAB_00133ca0:
  lVar2 = lVar5 + (ulong)uVar29;
  uVar29 = uVar40 & 0xff;
  if (uVar56 == 0x50001) {
    if (uVar29 < 0x38) {
      uVar50 = (*(uint *)(lVar43 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar43 + 8) & 0xff00ff) << 8;
      pbVar34 = (byte *)(lVar43 + ((ulong)*(byte *)(lVar43 + 0x24) << 0x18 |
                                   (ulong)*(byte *)(lVar43 + 0x25) << 0x10 |
                                   (ulong)*(byte *)(lVar43 + 0x26) << 8 |
                                  (ulong)*(byte *)(lVar43 + 0x27)) +
                        ((ulong)*(byte *)(lVar2 + 1) << 0x10 | (ulong)*(byte *)(lVar2 + 2) << 8 |
                        (ulong)*(byte *)(lVar2 + 3)));
      if ((uVar50 >> 0x10 | uVar50 << 0x10) == 0x50001) {
        if ((uVar30 & 0xff) == 0) {
          uVar40 = 0;
          puVar32 = local_d0;
        }
        else {
          uVar38 = *(undefined1 *)(lVar43 + 0x76);
          uVar19 = *(undefined1 *)(lVar43 + 0x77);
          bVar37 = *(byte *)(lVar43 + 0x70);
          bVar8 = *(byte *)(lVar43 + 0x71);
          bVar9 = *(byte *)(lVar43 + 0x72);
          bVar10 = *(byte *)(lVar43 + 0x73);
          uVar50 = 0;
          puVar32 = local_d0;
          uVar40 = 0;
          do {
            pbVar35 = (byte *)(lVar43 + ((ulong)bVar37 << 0x18 | (ulong)bVar8 << 0x10 |
                                         (ulong)bVar9 << 8 | (ulong)bVar10) +
                              (ulong)CONCAT11(uVar38,uVar19) * (ulong)*pbVar34);
            if ((*pbVar35 & 0xfc) == 0xd8) {
              iVar28 = 1;
              if (*(short *)(pbVar35 + 2) != 0) {
                iVar28 = 2;
              }
            }
            else {
              iVar28 = 1;
            }
            uVar1 = iVar28 * 2 + (uVar40 & 0xffff);
            if (0x6f < uVar1) break;
            FUN_00100660(puVar32,pbVar35,iVar28 * 2);
            puVar32 = (undefined8 *)((long)puVar32 + (ulong)(byte)iVar28 * 2);
            uVar50 = uVar50 + 1;
            pbVar34 = pbVar34 + 1;
            uVar40 = uVar1;
          } while ((uVar50 & 0xffff) < uVar29);
        }
        uVar29 = uVar40 >> 1 & 0x7fff;
        uVar30 = (ulong)uVar29;
        *(undefined2 *)puVar32 = 0;
      }
      else {
        FUN_00100660(local_d0,pbVar34,(uVar40 & 0x7f) << 1);
      }
      puVar32 = local_d0;
      *(undefined2 *)((long)puVar32 + uVar30 * 2) = 0;
    }
    else {
      puVar32 = local_d0;
      uVar29 = 0x38;
    }
  }
  else {
    puVar32 = (undefined8 *)
              (lVar4 + ((ulong)*(byte *)(lVar2 + 1) << 0x10 | (ulong)*(byte *)(lVar2 + 2) << 8 |
                       (ulong)*(byte *)(lVar2 + 3)));
  }
  sVar23 = FUN_001006e0(lVar41,puVar32,uVar29 << 1);
  if (sVar23 == 0) {
    if (uVar29 <= (uint)local_130) {
      if ((uint)local_130 != uVar29) goto LAB_00133e68;
      if ((int)(*pbVar47 & 0x3f) <= (int)uVar54) goto LAB_00133ec0;
    }
    local_130 = (ulong)uVar29;
    uVar54 = *pbVar47 & 0x3f;
    uVar49 = uVar46;
    uVar26 = uVar39;
    if (uVar33 == uVar29) {
      local_130 = (ulong)uVar29;
      goto LAB_00133f28;
    }
  }
  else {
LAB_00133e68:
  }
LAB_00133ec0:
  pbVar47 = (byte *)(lVar42 + (ulong)uVar52);
  uVar39 = uVar39 + 1;
  uVar46 = (uint)pbVar47[1] << 0x10 | (uint)pbVar47[2] << 8 | (uint)pbVar47[3];
  if (uVar46 == 0) goto LAB_00133f28;
  goto LAB_00133c3c;
LAB_00133f28:
  if (uVar49 == 0) {
LAB_00134ad4:
    if ((short)uVar51 < 2) goto LAB_00134aec;
LAB_00134ae4:
    *(char *)(param_3 + 0x2f) = (char)((int)uVar51 << 4);
LAB_00134aec:
    return uVar51 & 0xffffffff;
  }
  *(uint *)(param_3 + uVar51 * 2 + 0x20) = uVar26;
  uVar51 = uVar51 + 1;
  uVar33 = FUN_001003e0(lVar41 + (long)(short)local_130 * 2);
  if ((uVar33 == 0) || (local_158 = local_158 + 1, 4 < local_158)) goto LAB_00134ae4;
  goto LAB_001338c4;
}

