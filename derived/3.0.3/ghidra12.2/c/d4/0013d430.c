
undefined8 FUN_0013d430(undefined8 param_1,long param_2,short *param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  short sVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  undefined1 uVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong local_88;
  uint local_68;
  uint local_64;
  
  if (*(char *)(param_2 + 0x50) == '\x01') {
    sVar12 = FUN_001003e0(*(undefined8 *)(param_2 + 0x30));
    if (sVar12 == 0) goto LAB_0013d55c;
  }
  else if (*(char *)(param_2 + 0x50) != '\x02') goto LAB_0013d55c;
  uVar5 = *(ushort *)(param_2 + 0x20);
  if ((uVar5 == 0) || (*(char *)(param_2 + 0x51) != '\0')) goto LAB_0013d55c;
  bVar19 = *(byte *)((long)param_3 + 0x5f);
  if ((bVar19 & 0xf) == 1) {
    lVar22 = *(long *)(param_3 + 4);
    uVar20 = (*(uint *)(lVar22 + 0x20) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar22 + 0x20) & 0xff00ff) << 8;
    if ((((uint)uVar5 <= (uVar20 >> 0x10 | uVar20 << 0x10)) &&
        (uVar20 = *(uint *)(lVar22 + ((ulong)*(byte *)(lVar22 + 0x30) << 0x18 |
                                      (ulong)*(byte *)(lVar22 + 0x31) << 0x10 |
                                      (ulong)*(byte *)(lVar22 + 0x32) << 8 |
                                     (ulong)*(byte *)(lVar22 + 0x33)) + (ulong)((uint)uVar5 * 4 - 4)
                           ), uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8,
        uVar20 = uVar20 >> 0x10 | uVar20 << 0x10, uVar20 != 0)) &&
       (uVar29 = (*(uint *)(lVar22 + 0x24) & 0xff00ff00) >> 8 |
                 (*(uint *)(lVar22 + 0x24) & 0xff00ff) << 8,
       uVar20 <= (uVar29 >> 0x10 | uVar29 << 0x10))) {
      lVar15 = lVar22 + ((ulong)*(byte *)(lVar22 + 0x34) << 0x18 |
                         (ulong)*(byte *)(lVar22 + 0x35) << 0x10 |
                         (ulong)*(byte *)(lVar22 + 0x36) << 8 | (ulong)*(byte *)(lVar22 + 0x37));
      uVar24 = *(undefined8 *)(param_2 + 0x30);
      uVar5 = *(ushort *)(param_2 + 0x4c);
      *(uint *)(param_3 + 0x1e) = uVar20;
      pcVar1 = (char *)(lVar15 + (ulong)(uVar20 * 4 - 4));
      if (*pcVar1 < '\0') {
        uVar29 = (uVar20 + ((uint)(byte)pcVar1[1] << 0x10 | (uint)(byte)pcVar1[2] << 8 |
                           (uint)(byte)pcVar1[3])) - 1;
        *(uint *)(param_3 + 0x20) = uVar29;
        if ((*(char *)(param_2 + 0x50) == '\x01') && (*(short *)(param_2 + 0x4c) != 0)) {
          uVar25 = 0;
          bVar11 = false;
          lVar2 = lVar22 + ((ulong)*(byte *)(lVar22 + 0x28) << 0x18 |
                            (ulong)*(byte *)(lVar22 + 0x29) << 0x10 |
                            (ulong)*(byte *)(lVar22 + 0x2a) << 8 | (ulong)*(byte *)(lVar22 + 0x2b));
          do {
            uVar18 = (uint)uVar5;
            if (uVar29 < uVar20) break;
            uVar28 = uVar29 + uVar20 >> 1;
            lVar3 = lVar15 + (ulong)(uVar28 << 2);
            pbVar4 = (byte *)(lVar2 + (ulong)(((uint)*(byte *)(lVar3 + 1) << 0x10 |
                                               (uint)*(byte *)(lVar3 + 2) << 8 |
                                              (uint)*(byte *)(lVar3 + 3)) * 10 - 10));
            uVar23 = *pbVar4 >> 1 & 0x3f;
            uVar21 = (uint)uVar5;
            if (uVar23 <= uVar5) {
              uVar21 = uVar23;
            }
            sVar12 = FUN_001006e0(lVar22 + ((ulong)*(byte *)(lVar22 + 0x2c) << 0x18 |
                                            (ulong)*(byte *)(lVar22 + 0x2d) << 0x10 |
                                            (ulong)*(byte *)(lVar22 + 0x2e) << 8 |
                                           (ulong)*(byte *)(lVar22 + 0x2f)) +
                                  ((ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[2] << 8 |
                                  (ulong)pbVar4[3]),uVar24,uVar21 << 1);
            if (sVar12 < 0) {
LAB_0013d6ec:
              uVar20 = uVar28 + 1;
              if (*(uint *)(param_3 + 0x20) < uVar29) break;
            }
            else if (sVar12 == 0) {
              uVar21 = uVar25;
              bVar8 = bVar11;
              if (uVar18 <= uVar23) {
                bVar8 = true;
                uVar21 = uVar28;
              }
              if (uVar29 == uVar20) {
                uVar25 = uVar21;
                bVar11 = bVar8;
                break;
              }
              if (uVar18 == uVar23) {
                uVar29 = uVar28;
                uVar25 = uVar21;
                bVar11 = bVar8;
                if (*(uint *)(param_3 + 0x20) < uVar28) break;
              }
              else {
                if (uVar23 < uVar18) goto LAB_0013d6ec;
                uVar29 = uVar28 - 1;
                bVar11 = true;
                uVar25 = uVar28;
                if (*(uint *)(param_3 + 0x20) < uVar29) break;
              }
            }
            else {
              uVar29 = uVar28 - 1;
              if (*(uint *)(param_3 + 0x20) < uVar28 - 1) break;
            }
          } while (*(uint *)(param_3 + 0x1e) <= uVar20);
          if (bVar11) {
            uVar20 = *(uint *)(param_3 + 0x20);
            *(uint *)(param_3 + 0x1e) = uVar25;
            if (uVar25 <= uVar20) {
              bVar11 = false;
              uVar29 = uVar25;
              do {
                while( true ) {
                  uVar28 = uVar25 + uVar20 >> 1;
                  lVar3 = lVar15 + (ulong)(uVar28 << 2);
                  pbVar4 = (byte *)(lVar2 + (ulong)(((uint)*(byte *)(lVar3 + 1) << 0x10 |
                                                     (uint)*(byte *)(lVar3 + 2) << 8 |
                                                    (uint)*(byte *)(lVar3 + 3)) * 10 - 10));
                  uVar23 = *pbVar4 >> 1 & 0x3f;
                  uVar21 = uVar18;
                  if (uVar23 <= uVar18) {
                    uVar21 = uVar23;
                  }
                  sVar12 = FUN_001006e0(lVar22 + ((ulong)*(byte *)(lVar22 + 0x2c) << 0x18 |
                                                  (ulong)*(byte *)(lVar22 + 0x2d) << 0x10 |
                                                  (ulong)*(byte *)(lVar22 + 0x2e) << 8 |
                                                 (ulong)*(byte *)(lVar22 + 0x2f)) +
                                        ((ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[2] << 8 |
                                        (ulong)pbVar4[3]),uVar24,uVar21 << 1);
                  if (sVar12 < 0) break;
                  if (sVar12 == 0) {
                    if ((uVar18 == uVar23) || (uVar18 <= uVar23)) {
                      uVar25 = uVar28 + 1;
                    }
                    else {
                      uVar20 = uVar28 - 1;
                    }
                    bVar11 = true;
                    uVar29 = uVar28;
                    if (uVar20 < uVar25) goto LAB_0013d9ac;
                  }
                  else {
                    uVar20 = uVar28 - 1;
                    if (uVar20 < uVar25) goto LAB_0013d9ac;
                  }
                }
                uVar25 = uVar28 + 1;
              } while (uVar25 <= uVar20);
LAB_0013d9ac:
              if (bVar11) {
                lVar22 = *(long *)(param_3 + 4);
                *(uint *)(param_3 + 0x20) = uVar29;
                uVar20 = (*(uint *)(lVar22 + 4) & 0xff00ff00) >> 8 |
                         (*(uint *)(lVar22 + 4) & 0xff00ff) << 8;
                if ((uVar20 >> 0x10 | uVar20 << 0x10) == 0x20000) goto LAB_0013d740;
                goto LAB_0013d9d0;
              }
            }
          }
        }
        else {
          uVar20 = (*(uint *)(lVar22 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar22 + 4) & 0xff00ff) << 8;
          if ((uVar20 >> 0x10 | uVar20 << 0x10) == 0x20000) {
LAB_0013d740:
            local_68 = *(uint *)(param_2 + 0x48);
            uVar20 = local_68 >> 6 & 1;
            uVar25 = local_68 >> 0x18;
            if ((uVar25 & 0x7e) != 0) {
              uVar20 = 2;
            }
            if (uVar20 != 0) {
              bVar11 = (uVar25 & 0x7e) != 0;
              uVar18 = 0;
              if (bVar11) {
                uVar18 = 3;
              }
              uVar21 = 0;
              uVar23 = 0;
              uVar28 = 0x40;
              if (bVar11) {
                uVar28 = uVar25;
              }
              do {
                local_88 = (ulong)uVar18;
                uVar25 = *(uint *)(param_3 + 0x1e);
                if (uVar25 <= uVar29) {
                  uVar18 = uVar25 << 2;
                  uVar26 = 0xffffd8f0;
                  do {
                    pbVar4 = (byte *)(lVar15 + (ulong)uVar18);
                    uVar27 = *pbVar4 & 0x7f;
                    iVar13 = FUN_0013e820(*(undefined8 *)(param_3 + 4),
                                          (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 |
                                          (uint)pbVar4[3]);
                    if (iVar13 != 0) {
                      iVar13 = FUN_00113a80(param_1,iVar13);
                      iVar7 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
                      if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar7 != 0) {
                        iVar9 = iVar13 * 0x3f;
                        iVar13 = 0;
                        if (iVar7 != 0) {
                          iVar13 = iVar9 / iVar7;
                        }
                      }
                      uVar27 = iVar13 + uVar27;
                    }
                    local_68 = FUN_0013e820(*(undefined8 *)(param_3 + 4),
                                            (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 |
                                            (uint)pbVar4[3]);
                    uVar29 = *(uint *)(param_3 + 0x20);
                    uVar10 = uVar25;
                    if ((int)uVar27 <= (int)uVar26 ||
                        (*(byte *)((long)&local_68 + local_88) & uVar28) == 0) {
                      uVar27 = uVar26;
                      uVar10 = uVar23;
                    }
                    uVar23 = uVar10;
                    uVar25 = uVar25 + 1;
                    uVar18 = uVar18 + 4;
                    uVar26 = uVar27;
                  } while (uVar25 <= uVar29);
                  if (uVar27 != 0xffffd8f0) goto LAB_0013da84;
                }
                uVar21 = uVar21 + 1;
                uVar18 = 0;
                uVar28 = 0x40;
              } while ((uVar21 & 0xff) < uVar20);
            }
          }
          else {
LAB_0013d9d0:
            uVar20 = *(uint *)(param_3 + 0x1e);
            if (uVar20 <= uVar29) {
              uVar23 = 0;
              uVar29 = uVar20 << 2;
              uVar25 = 0xffffd8f0;
              while( true ) {
                pbVar4 = (byte *)(lVar15 + (ulong)uVar29);
                uVar27 = *pbVar4 & 0x7f;
                iVar13 = FUN_0013e820(lVar22,(uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 |
                                             (uint)pbVar4[3]);
                if (iVar13 != 0) {
                  iVar13 = FUN_00113a80(param_1,iVar13);
                  iVar7 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
                  if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar7 != 0) {
                    iVar9 = iVar13 * 0x3f;
                    iVar13 = 0;
                    if (iVar7 != 0) {
                      iVar13 = iVar9 / iVar7;
                    }
                  }
                  uVar27 = iVar13 + uVar27;
                }
                uVar18 = uVar20;
                if ((int)uVar27 <= (int)uVar25) {
                  uVar27 = uVar25;
                  uVar18 = uVar23;
                }
                uVar23 = uVar18;
                uVar20 = uVar20 + 1;
                if (*(uint *)(param_3 + 0x20) < uVar20) break;
                lVar22 = *(long *)(param_3 + 4);
                uVar29 = uVar29 + 4;
                uVar25 = uVar27;
              }
              if (uVar27 != 0xffffd8f0) {
                local_88 = 0;
LAB_0013da84:
                uVar20 = *(uint *)(*(long *)(param_3 + 4) + 4);
                *(uint *)(param_3 + 0x1c) = uVar23;
                uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
                uVar16 = 0x10;
                if ((uVar20 >> 0x10 | uVar20 << 0x10) == 0x20000 && local_88 != 0) {
                  uVar16 = 0x90;
                }
                *(undefined1 *)(param_3 + 0x2f) = uVar16;
                lVar15 = lVar15 + (ulong)(uVar23 << 2);
                uVar14 = FUN_0013e820(*(long *)(param_3 + 4),
                                      (uint)*(byte *)(lVar15 + 1) << 0x10 |
                                      (uint)*(byte *)(lVar15 + 2) << 8 | (uint)*(byte *)(lVar15 + 3)
                                     );
                iVar13 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar27;
                sVar6 = param_3[2] +
                        ((short)((ulong)((long)iVar13 * 0x82082083) >> 0x25) -
                        (short)(iVar13 >> 0x1f));
                *(undefined4 *)(param_3 + 0x2c) = uVar14;
                *param_3 = sVar6;
                sVar12 = param_3[0x35];
                if ((sVar12 <= sVar6) && (sVar12 = param_3[0x34], sVar6 <= param_3[0x34])) {
                  sVar12 = sVar6;
                }
                *param_3 = sVar12;
                bVar19 = *(byte *)((long)param_3 + 0x5f);
                goto LAB_0013db3c;
              }
            }
          }
        }
      }
    }
    *(undefined1 *)((long)param_3 + 0x5f) = 3;
  }
  else {
LAB_0013db3c:
    if ((bVar19 & 0xf) == 1) {
      *(undefined1 *)((long)param_3 + 0x5f) = 2;
      return 1;
    }
    lVar15 = *(long *)(param_3 + 4);
    uVar20 = *(uint *)(param_3 + 0x1c);
    lVar22 = lVar15 + ((ulong)*(byte *)(lVar15 + 0x34) << 0x18 |
                       (ulong)*(byte *)(lVar15 + 0x35) << 0x10 |
                       (ulong)*(byte *)(lVar15 + 0x36) << 8 | (ulong)*(byte *)(lVar15 + 0x37));
    pbVar4 = (byte *)(lVar22 + (ulong)(uVar20 << 2));
    uVar29 = *pbVar4 & 0x7f;
    iVar13 = FUN_0013e820(lVar15,(uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 | (uint)pbVar4[3]);
    if (iVar13 != 0) {
      iVar13 = FUN_00113a80(param_1,iVar13);
      iVar7 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
      if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar7 != 0) {
        iVar9 = iVar13 * 0x3f;
        iVar13 = 0;
        if (iVar7 != 0) {
          iVar13 = iVar9 / iVar7;
        }
      }
      uVar29 = iVar13 + uVar29;
    }
    uVar25 = *(uint *)(param_3 + 0x20);
    if (uVar20 < uVar25) {
      uVar20 = uVar20 + 1;
    }
    else {
      uVar20 = *(uint *)(param_3 + 0x1e);
    }
    lVar15 = *(long *)(param_3 + 4);
    uVar18 = (*(uint *)(lVar15 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar15 + 4) & 0xff00ff) << 8;
    if ((uVar18 >> 0x10 | uVar18 << 0x10) == 0x20000) {
      bVar19 = 1;
      if ((char)param_3[0x2f] == -0x70) {
        local_64 = *(uint *)(param_2 + 0x48);
        bVar19 = 1;
        if ((local_64 & 0x40) != 0) {
          bVar19 = 2;
        }
        uVar28 = local_64 >> 0x18;
        lVar15 = 3;
      }
      else {
        lVar15 = 0;
        uVar28 = 0x40;
      }
      bVar17 = 0;
      bVar8 = false;
      uVar18 = 0;
      do {
        if (uVar20 <= uVar25) {
          bVar11 = false;
          uVar21 = 0xffffd8f0;
          do {
            pbVar4 = (byte *)(lVar22 + (ulong)(uVar20 << 2));
            uVar23 = *pbVar4 & 0x7f;
            iVar13 = FUN_0013e820(*(undefined8 *)(param_3 + 4),
                                  (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 | (uint)pbVar4[3]);
            if (iVar13 != 0) {
              iVar13 = FUN_00113a80(param_1,iVar13);
              iVar7 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
              if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar7 != 0) {
                iVar9 = iVar13 * 0x3f;
                iVar13 = 0;
                if (iVar7 != 0) {
                  iVar13 = iVar9 / iVar7;
                }
              }
              uVar23 = iVar13 + uVar23;
            }
            local_64 = FUN_0013e820(*(undefined8 *)(param_3 + 4),
                                    (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 | (uint)pbVar4[3]
                                   );
            if ((*(byte *)((long)&local_64 + lVar15) & uVar28) != 0) {
              if ((uVar23 == uVar29) && (*(uint *)(param_3 + 0x1c) < uVar20)) {
                *(undefined1 *)((long)param_3 + 0x5f) = 2;
                uVar16 = 0x10;
                if (lVar15 != 0) {
                  uVar16 = 0x90;
                }
                *(undefined1 *)(param_3 + 0x2f) = uVar16;
                *(uint *)(param_3 + 0x1c) = uVar20;
                uVar24 = *(undefined8 *)(param_3 + 4);
                uVar20 = (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8;
                bVar19 = pbVar4[3];
                goto LAB_0013df10;
              }
              if ((int)uVar23 < (int)uVar29) {
                if ((int)uVar21 < (int)uVar23) {
LAB_0013de2c:
                  bVar8 = true;
                  uVar21 = uVar23;
                  uVar18 = uVar20;
                }
                else if (uVar20 < uVar18) {
                  if (uVar21 == uVar23) goto LAB_0013de2c;
                }
              }
            }
            uVar20 = uVar20 + 1;
            if ((!bVar11) && (uVar25 < uVar20)) {
              uVar20 = *(uint *)(param_3 + 0x1e);
              uVar25 = *(int *)(param_3 + 0x1c) - 1;
              bVar11 = true;
            }
          } while (uVar20 <= uVar25);
          if (uVar21 != 0xffffd8f0) {
            if (!bVar8) goto LAB_0013d55c;
            goto LAB_0013df34;
          }
          uVar25 = *(uint *)(param_3 + 0x20);
        }
        uVar20 = *(uint *)(param_3 + 0x1e);
        bVar17 = bVar17 + 1;
        lVar15 = 0;
        uVar28 = 0x40;
        uVar29 = 0x3e9;
      } while (bVar17 < bVar19);
      uVar21 = 0xffffd8f0;
joined_r0x0013dd24:
      lVar15 = 0;
      if (bVar8) {
LAB_0013df34:
        uVar20 = *(uint *)(*(long *)(param_3 + 4) + 4);
        uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
        uVar16 = 0x10;
        if ((uVar20 >> 0x10 | uVar20 << 0x10) == 0x20000 && lVar15 != 0) {
          uVar16 = 0x90;
        }
        *(undefined1 *)(param_3 + 0x2f) = uVar16;
        *(undefined1 *)((long)param_3 + 0x5f) = 2;
        *(uint *)(param_3 + 0x1c) = uVar18;
        lVar22 = lVar22 + (ulong)(uVar18 << 2);
        uVar14 = FUN_0013e820(*(long *)(param_3 + 4),
                              (uint)*(byte *)(lVar22 + 1) << 0x10 | (uint)*(byte *)(lVar22 + 2) << 8
                              | (uint)*(byte *)(lVar22 + 3));
        iVar13 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar21;
        sVar6 = param_3[2] +
                ((short)((ulong)((long)iVar13 * 0x82082083) >> 0x25) - (short)(iVar13 >> 0x1f));
        *(undefined4 *)(param_3 + 0x2c) = uVar14;
        *param_3 = sVar6;
        sVar12 = param_3[0x35];
        if ((sVar12 <= sVar6) && (sVar12 = param_3[0x34], sVar6 <= param_3[0x34])) {
          sVar12 = sVar6;
        }
        *param_3 = sVar12;
        return 1;
      }
    }
    else if (uVar20 <= uVar25) {
      bVar11 = false;
      bVar8 = false;
      uVar21 = 0xffffd8f0;
      uVar18 = 0;
      do {
        pbVar4 = (byte *)(lVar22 + (ulong)(uVar20 << 2));
        uVar28 = *pbVar4 & 0x7f;
        iVar13 = FUN_0013e820(lVar15,(uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 |
                                     (uint)pbVar4[3]);
        if (iVar13 != 0) {
          iVar13 = FUN_00113a80(param_1,iVar13);
          iVar7 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
          if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar7 != 0) {
            iVar9 = iVar13 * 0x3f;
            iVar13 = 0;
            if (iVar7 != 0) {
              iVar13 = iVar9 / iVar7;
            }
          }
          uVar28 = iVar13 + uVar28;
        }
        uVar23 = *(uint *)(param_3 + 0x1c);
        if ((uVar28 == uVar29 && uVar23 <= uVar20) && (uVar28 != uVar29 || uVar20 != uVar23)) {
          param_3[0x2f] = 0x210;
          *(uint *)(param_3 + 0x1c) = uVar20;
          uVar24 = *(undefined8 *)(param_3 + 4);
          uVar20 = (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8;
          bVar19 = pbVar4[3];
LAB_0013df10:
          uVar14 = FUN_0013e820(uVar24,uVar20 | bVar19);
          *(undefined4 *)(param_3 + 0x2c) = uVar14;
          return 1;
        }
        if ((int)uVar28 < (int)uVar29) {
          if ((int)uVar21 < (int)uVar28) {
LAB_0013dce8:
            bVar8 = true;
            uVar21 = uVar28;
            uVar18 = uVar20;
          }
          else if (uVar20 < uVar18) {
            if (uVar21 == uVar28) goto LAB_0013dce8;
          }
        }
        uVar20 = uVar20 + 1;
        if ((!bVar11) && (uVar25 < uVar20)) {
          uVar20 = *(uint *)(param_3 + 0x1e);
          uVar25 = uVar23 - 1;
          bVar11 = true;
        }
        if (uVar25 < uVar20) goto joined_r0x0013dd24;
        lVar15 = *(long *)(param_3 + 4);
      } while( true );
    }
  }
LAB_0013d55c:
  *(undefined1 *)((long)param_3 + 0x5f) = 3;
  return 0;
}

