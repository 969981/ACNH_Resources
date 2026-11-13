
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011937b0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  int iVar14;
  uint *puVar15;
  ulong uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  int iVar23;
  uint *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  
  if ((param_1 != (uint *)0x0) && (uVar11 = *param_1, uVar11 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar2,0x8d,0x4c11db7);
    uVar27 = 0;
    uVar4 = crc32b(uVar3,0x97,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar3 = crc32b(uVar3,0x9d,0x4c11db7);
    uVar5 = crc32b(uVar3,0xb1,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe8,0x4c11db7);
    uVar3 = crc32b(uVar3,0xa5,0x4c11db7);
    uVar6 = crc32b(uVar3,0xbf,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4f,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar8 = crc32b(0xffffffff,0x45,0x4c11db7);
    uVar9 = crc32b(0xffffffff,0x57,0x4c11db7);
    pcVar22 = PTR_DAT_04bbb910;
    puVar24 = (uint *)PTR_DAT_04bbb918;
    do {
      if (((uVar27 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar27 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar17 = *pcVar22;
            do {
              if (cVar17 == '\0') {
                puVar24[0] = 0xffffffff;
                puVar24[1] = 0xffffffff;
                puVar24[2] = 0xffffffff;
                puVar24[3] = 0xffffffff;
                cVar17 = '\x01';
                puVar24[4] = 0xffffffff;
                uVar31 = *puVar1;
                *pcVar22 = '\x01';
              }
              else {
                uVar18 = *puVar24;
                if (-1 < (int)uVar18) {
                  if ((uint *)((long)puVar1 + (ulong)uVar18) != (uint *)0x0) {
                    uVar31 = *(uint *)((long)puVar1 + (ulong)uVar18);
                    goto LAB_011939f0;
                  }
                  break;
                }
                if (uVar18 != 0xffffffff) break;
              }
              puVar30 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar30 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar30)) goto LAB_011939f0;
              lVar12 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar30)) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar1 + (lVar12 - (long)puVar30);
              if (lVar12 == 0) break;
              uVar16 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar30));
              *puVar24 = 0xfffffffe;
              if (uVar16 == 0) break;
              puVar30 = (uint *)(lVar12 + 4);
              while (puVar30[-1] != 0xc150fba5) {
                puVar30 = puVar30 + 2;
                uVar16 = uVar16 - 1;
                if (uVar16 == 0) goto LAB_011939ec;
              }
              uVar31 = 0;
              if (*puVar30 != 0xffffffff) {
                uVar31 = *puVar30;
              }
              *puVar24 = uVar31;
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_011939ec:
          uVar31 = 0;
LAB_011939f0:
          if (((*puVar1 == 0) || (lVar12 = (long)puVar1 - (ulong)*puVar1, lVar12 == 0)) ||
             (*(char *)(lVar12 + 0xb) == '\0')) {
            if ((DAT_050ce270 == '\x01') && (DAT_050ce274 == uVar31)) {
              uVar18 = DAT_050ce278;
              if (3 < DAT_050ce278) goto LAB_01193e08;
            }
            else {
              if ((DAT_050ce2b0 & 1) == 0) {
                iVar14 = __cxa_guard_acquire(&DAT_050ce2b0);
                pcVar22 = PTR_DAT_04bbb910;
                puVar24 = (uint *)PTR_DAT_04bbb918;
                if (iVar14 != 0) {
                  DAT_050ce280 = 0x400000000;
                  DAT_050ce288 = (undefined8 *)&DAT_050ce290;
                  __cxa_guard_release(&DAT_050ce2b0);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                }
              }
              if ((DAT_050ce2b8 & 1) == 0) {
                DAT_050ce2b8 = 1;
                if ((DAT_050ce2e0 & 1) == 0) {
                  iVar14 = __cxa_guard_acquire(&DAT_050ce2e0);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                  if (iVar14 != 0) {
                    _DAT_050ce2bc = 0xffffffff00000000;
                    DAT_050ce2c4 = 0xffffffff00000000;
                    DAT_050ce2cc = 0xffffffff00000000;
                    DAT_050ce2d4 = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_050ce2e0);
                    pcVar22 = PTR_DAT_04bbb910;
                    puVar24 = (uint *)PTR_DAT_04bbb918;
                  }
                }
                _DAT_050ce2bc = (ulong)~uVar4;
                iVar14 = (int)DAT_050ce280;
                iVar23 = DAT_050ce280._4_4_;
                if ((int)DAT_050ce280 < DAT_050ce280._4_4_) {
                  DAT_050ce288[(int)DAT_050ce280] = &DAT_050ce2bc;
                  iVar14 = (int)DAT_050ce280 + 1;
                  DAT_050ce280 = CONCAT44(DAT_050ce280._4_4_,iVar14);
                  iVar23 = DAT_050ce280._4_4_;
                }
                DAT_050ce2c4 = CONCAT44(1,~uVar5);
                if (iVar14 < iVar23) {
                  DAT_050ce288[iVar14] = &DAT_050ce2c4;
                  iVar14 = (int)DAT_050ce280 + 1;
                  DAT_050ce280 = CONCAT44(DAT_050ce280._4_4_,iVar14);
                  iVar23 = DAT_050ce280._4_4_;
                }
                uVar10 = crc32b(uVar2,0x8c,0x4c11db7);
                uVar18 = crc32b(uVar10,0x97,0x4c11db7);
                DAT_050ce2cc = CONCAT44(2,~uVar18);
                if (iVar14 < iVar23) {
                  DAT_050ce288[iVar14] = &DAT_050ce2cc;
                  iVar14 = (int)DAT_050ce280 + 1;
                  DAT_050ce280 = CONCAT44(DAT_050ce280._4_4_,iVar14);
                  iVar23 = DAT_050ce280._4_4_;
                }
                DAT_050ce2d4 = CONCAT44(3,~uVar6);
                if (iVar14 < iVar23) {
                  DAT_050ce288[iVar14] = &DAT_050ce2d4;
                  iVar14 = (int)DAT_050ce280 + 1;
                  DAT_050ce280 = CONCAT44(DAT_050ce280._4_4_,iVar14);
                }
                puVar26 = DAT_050ce288;
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar18 = iVar14 - 1;
                  do {
                    if ((int)uVar18 <= (int)uVar19) break;
                    puVar30 = (uint *)puVar26[uVar19];
                    uVar16 = (ulong)uVar19;
                    if ((uVar18 - uVar19 & 1) == 0) {
                      uVar21 = uVar16;
                      puVar29 = puVar30;
                    }
                    else {
                      uVar21 = uVar16 + 1;
                      puVar29 = (uint *)puVar26[uVar21];
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar30)) {
                        puVar26[uVar21] = puVar30;
                        puVar26[uVar16] = puVar29;
                        puVar29 = puVar30;
                      }
                    }
                    uVar20 = (ulong)uVar18;
                    uVar18 = uVar19;
                    if (~uVar16 + uVar20 != 0) {
                      puVar25 = puVar26 + uVar21 + 1;
                      do {
                        puVar30 = (uint *)*puVar25;
                        uVar28 = (uint)uVar21;
                        if (((puVar29 == (uint *)0x0) || (puVar30 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar30)) {
                          puVar15 = (uint *)puVar25[1];
                          if (puVar30 != (uint *)0x0) goto LAB_01193dc0;
LAB_01193d70:
                          puVar30 = puVar15;
                        }
                        else {
                          puVar25[-1] = puVar30;
                          *puVar25 = puVar29;
                          puVar15 = (uint *)puVar25[1];
                          puVar30 = puVar29;
                          uVar18 = uVar28;
                          if (puVar29 == (uint *)0x0) goto LAB_01193d70;
LAB_01193dc0:
                          if ((puVar15 == (uint *)0x0) || (*puVar30 <= *puVar15)) goto LAB_01193d70;
                          uVar18 = uVar28 + 1;
                          *puVar25 = puVar15;
                          puVar25[1] = puVar30;
                        }
                        uVar21 = uVar21 + 2;
                        puVar25 = puVar25 + 2;
                        puVar29 = puVar30;
                      } while (uVar20 != uVar21);
                    }
                    if ((int)uVar18 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar18;
                    puVar30 = (uint *)puVar26[uVar18];
                    uVar19 = uVar18;
                    do {
                      puVar29 = (uint *)puVar26[uVar21 - 1];
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar30 < *puVar29)) {
                        uVar19 = (uint)uVar21;
                        puVar26[uVar21 - 1] = puVar30;
                        puVar26[uVar21] = puVar29;
                        puVar29 = puVar30;
                      }
                      uVar21 = uVar21 - 1;
                      puVar30 = puVar29;
                    } while ((long)uVar16 < (long)uVar21);
                  } while (uVar19 != uVar18);
                }
                DAT_050ce27c = '\x01';
              }
              else if (DAT_050ce27c != '\x01') goto LAB_01193e08;
              if ((int)DAT_050ce280 == 0) goto LAB_01193e08;
              if ((int)DAT_050ce280 < 2) {
                uVar18 = 0;
                puVar30 = (uint *)*DAT_050ce288;
                if (puVar30 != (uint *)0x0) goto LAB_01193c24;
LAB_01193dec:
                uVar19 = uVar18;
                if (uVar18 < 4) {
LAB_01193df8:
                  uVar18 = *(uint *)(DAT_050ce288[uVar19] + 4);
                  if (uVar18 < 4) {
                    DAT_050ce270 = '\x01';
                    DAT_050ce274 = uVar31;
                    DAT_050ce278 = uVar18;
                    goto LAB_0119415c;
                  }
                }
              }
              else {
                uVar18 = 0;
                iVar14 = (int)DAT_050ce280 + -1;
                do {
                  iVar23 = iVar14 + uVar18;
                  if (iVar23 < 0 != SCARRY4(iVar14,uVar18)) {
                    iVar23 = iVar23 + 1;
                  }
                  uVar19 = iVar23 >> 1;
                  if ((uint *)DAT_050ce288[(int)uVar19] == (uint *)0x0) goto LAB_01193c34;
                  uVar28 = *(uint *)DAT_050ce288[(int)uVar19];
                  if (uVar28 == uVar31) goto LAB_01193c34;
                  if (uVar28 < uVar31) {
                    uVar18 = uVar19 + 1;
                  }
                  else {
                    iVar14 = uVar19 - 1;
                  }
                } while ((int)uVar18 < iVar14);
                puVar30 = (uint *)DAT_050ce288[(int)uVar18];
                if (puVar30 == (uint *)0x0) goto LAB_01193dec;
LAB_01193c24:
                uVar19 = uVar18;
                if (*puVar30 == uVar31) {
LAB_01193c34:
                  if (3 < uVar19) goto LAB_01193e08;
                  goto LAB_01193df8;
                }
              }
LAB_01193e08:
              uVar18 = 0;
            }
          }
          else {
            if ((DAT_050ce1f8 == '\x01') && (DAT_050ce1fc == uVar31)) {
              uVar18 = DAT_050ce200;
              if (3 < DAT_050ce200) goto LAB_01194150;
            }
            else {
              if ((DAT_050ce238 & 1) == 0) {
                iVar14 = __cxa_guard_acquire(&DAT_050ce238);
                pcVar22 = PTR_DAT_04bbb910;
                puVar24 = (uint *)PTR_DAT_04bbb918;
                if (iVar14 != 0) {
                  DAT_050ce208 = 0x400000000;
                  DAT_050ce210 = &DAT_050ce218;
                  __cxa_guard_release(&DAT_050ce238);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                }
              }
              if ((DAT_050ce240 & 1) == 0) {
                DAT_050ce240 = 1;
                if ((DAT_050ce268 & 1) == 0) {
                  iVar14 = __cxa_guard_acquire(&DAT_050ce268);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                  if (iVar14 != 0) {
                    _DAT_050ce244 = 0xffffffff00000000;
                    DAT_050ce24c = 0xffffffff00000000;
                    DAT_050ce254 = 0xffffffff00000000;
                    DAT_050ce25c = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_050ce268);
                    pcVar22 = PTR_DAT_04bbb910;
                    puVar24 = (uint *)PTR_DAT_04bbb918;
                  }
                }
                _DAT_050ce244 = (ulong)~uVar7;
                iVar14 = (int)DAT_050ce208;
                iVar23 = DAT_050ce208._4_4_;
                if ((int)DAT_050ce208 < DAT_050ce208._4_4_) {
                  *(undefined4 **)(DAT_050ce210 + (long)(int)DAT_050ce208 * 8) = &DAT_050ce244;
                  iVar14 = (int)DAT_050ce208 + 1;
                  DAT_050ce208 = CONCAT44(DAT_050ce208._4_4_,iVar14);
                  iVar23 = DAT_050ce208._4_4_;
                }
                DAT_050ce24c = CONCAT44(1,~uVar8);
                if (iVar14 < iVar23) {
                  *(undefined8 **)(DAT_050ce210 + (long)iVar14 * 8) = &DAT_050ce24c;
                  iVar14 = (int)DAT_050ce208 + 1;
                  DAT_050ce208 = CONCAT44(DAT_050ce208._4_4_,iVar14);
                  iVar23 = DAT_050ce208._4_4_;
                }
                uVar18 = crc32b(0xffffffff,0x4e,0x4c11db7);
                DAT_050ce254 = CONCAT44(2,~uVar18);
                if (iVar14 < iVar23) {
                  *(undefined8 **)(DAT_050ce210 + (long)iVar14 * 8) = &DAT_050ce254;
                  iVar14 = (int)DAT_050ce208 + 1;
                  DAT_050ce208 = CONCAT44(DAT_050ce208._4_4_,iVar14);
                  iVar23 = DAT_050ce208._4_4_;
                }
                DAT_050ce25c = CONCAT44(3,~uVar9);
                if (iVar14 < iVar23) {
                  *(undefined8 **)(DAT_050ce210 + (long)iVar14 * 8) = &DAT_050ce25c;
                  iVar14 = (int)DAT_050ce208 + 1;
                  DAT_050ce208 = CONCAT44(DAT_050ce208._4_4_,iVar14);
                }
                puVar13 = DAT_050ce210;
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar18 = iVar14 - 1;
                  do {
                    if ((int)uVar18 <= (int)uVar19) break;
                    puVar30 = *(uint **)(puVar13 + (ulong)uVar19 * 8);
                    uVar16 = (ulong)uVar19;
                    if ((uVar18 - uVar19 & 1) == 0) {
                      puVar29 = puVar30;
                      uVar21 = uVar16;
                    }
                    else {
                      uVar21 = uVar16 + 1;
                      puVar29 = *(uint **)(puVar13 + uVar21 * 8);
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar30)) {
                        *(uint **)(puVar13 + uVar21 * 8) = puVar30;
                        *(uint **)(puVar13 + uVar16 * 8) = puVar29;
                        puVar29 = puVar30;
                      }
                    }
                    uVar20 = (ulong)uVar18;
                    uVar18 = uVar19;
                    if (~uVar16 + uVar20 != 0) {
                      puVar26 = (undefined8 *)(puVar13 + uVar21 * 8 + 8);
                      do {
                        puVar30 = (uint *)*puVar26;
                        uVar28 = (uint)uVar21;
                        if (((puVar29 == (uint *)0x0) || (puVar30 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar30)) {
                          puVar15 = (uint *)puVar26[1];
                          if (puVar30 != (uint *)0x0) goto LAB_011940d0;
LAB_01194080:
                          puVar30 = puVar15;
                        }
                        else {
                          puVar26[-1] = puVar30;
                          *puVar26 = puVar29;
                          puVar15 = (uint *)puVar26[1];
                          puVar30 = puVar29;
                          uVar18 = uVar28;
                          if (puVar29 == (uint *)0x0) goto LAB_01194080;
LAB_011940d0:
                          if (puVar15 == (uint *)0x0) goto LAB_01194080;
                          if (*puVar30 <= *puVar15) goto LAB_01194080;
                          uVar18 = uVar28 + 1;
                          *puVar26 = puVar15;
                          puVar26[1] = puVar30;
                        }
                        uVar21 = uVar21 + 2;
                        puVar26 = puVar26 + 2;
                        puVar29 = puVar30;
                      } while (uVar20 != uVar21);
                    }
                    if ((int)uVar18 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar18;
                    puVar30 = *(uint **)(puVar13 + (ulong)uVar18 * 8);
                    uVar19 = uVar18;
                    do {
                      puVar29 = *(uint **)(puVar13 + uVar21 * 8 + -8);
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar30 < *puVar29)) {
                        uVar19 = (uint)uVar21;
                        *(uint **)(puVar13 + uVar21 * 8 + -8) = puVar30;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar29;
                        puVar29 = puVar30;
                      }
                      uVar21 = uVar21 - 1;
                      puVar30 = puVar29;
                    } while ((long)uVar16 < (long)uVar21);
                  } while (uVar19 != uVar18);
                }
                DAT_050ce204 = '\x01';
              }
              else if (DAT_050ce204 != '\x01') goto LAB_01194150;
              if ((int)DAT_050ce208 != 0) {
                if ((int)DAT_050ce208 < 2) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  iVar14 = (int)DAT_050ce208 + -1;
                  do {
                    iVar23 = iVar14 + uVar18;
                    if (iVar23 < 0 != SCARRY4(iVar14,uVar18)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar19 = iVar23 >> 1;
                    if (*(uint **)(DAT_050ce210 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x0119413c;
                    uVar28 = **(uint **)(DAT_050ce210 + (long)(int)uVar19 * 8);
                    if (uVar28 == uVar31) goto joined_r0x0119413c;
                    if (uVar28 < uVar31) {
                      uVar18 = uVar19 + 1;
                    }
                    else {
                      iVar14 = uVar19 - 1;
                    }
                  } while ((int)uVar18 < iVar14);
                }
                uVar19 = uVar18;
                if ((*(uint **)(DAT_050ce210 + (long)(int)uVar18 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_050ce210 + (long)(int)uVar18 * 8) == uVar31)) {
joined_r0x0119413c:
                  if ((uVar19 < 4) &&
                     (uVar18 = *(uint *)(*(long *)(DAT_050ce210 + (ulong)uVar19 * 8) + 4),
                     uVar18 < 4)) {
                    DAT_050ce1f8 = '\x01';
                    DAT_050ce1fc = uVar31;
                    DAT_050ce200 = uVar18;
                    goto LAB_01194154;
                  }
                }
              }
LAB_01194150:
              uVar18 = 0;
            }
LAB_01194154:
          }
LAB_0119415c:
          puVar30 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar30 != (uint *)0x0)) && (*puVar30 != 0)) &&
             ((uVar31 = puVar30[1], uVar31 != 0 && ((ulong)(ushort)puVar30[2] != 0)))) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar30 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar30 + lVar12 + (ulong)(ushort)puVar30[2] * 8;
            if (lVar12 != 0) {
              uVar19 = 0;
              if ((ulong)uVar31 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar12) / (ulong)uVar31);
              }
              if (*puVar30 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bbb938) {
                *(short *)(*(long *)(PTR_DAT_04bbb938 + 8) + (long)(int)uVar19 * 2) = (short)uVar18;
              }
            }
          }
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar17 = *pcVar22;
            do {
              if (cVar17 == '\0') {
                puVar24[0] = 0xffffffff;
                puVar24[1] = 0xffffffff;
                puVar24[2] = 0xffffffff;
                puVar24[3] = 0xffffffff;
                cVar17 = '\x01';
                puVar24[4] = 0xffffffff;
                uVar31 = *puVar1;
                *pcVar22 = '\x01';
              }
              else {
                uVar18 = puVar24[1];
                if (-1 < (int)uVar18) {
                  if ((uint *)((long)puVar1 + (ulong)uVar18) != (uint *)0x0) {
                    uVar31 = *(uint *)((long)puVar1 + (ulong)uVar18);
                    goto LAB_011942a0;
                  }
                  break;
                }
                if (uVar18 != 0xffffffff) break;
              }
              puVar30 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar30 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar30)) goto LAB_011942a0;
              lVar12 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar30)) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar1 + (lVar12 - (long)puVar30);
              if (lVar12 == 0) break;
              uVar16 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar30));
              puVar24[1] = 0xfffffffe;
              if (uVar16 == 0) break;
              puVar30 = (uint *)(lVar12 + 4);
              while (puVar30[-1] != 0x24726310) {
                puVar30 = puVar30 + 2;
                uVar16 = uVar16 - 1;
                if (uVar16 == 0) goto LAB_0119429c;
              }
              uVar31 = 0;
              if (*puVar30 != 0xffffffff) {
                uVar31 = *puVar30;
              }
              puVar24[1] = uVar31;
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_0119429c:
          uVar31 = 0;
LAB_011942a0:
          if (((*puVar1 == 0) || (lVar12 = (long)puVar1 - (ulong)*puVar1, lVar12 == 0)) ||
             (*(char *)(lVar12 + 0xb) == '\0')) {
            if ((DAT_050ce340 == '\x01') && (DAT_050ce344 == uVar31)) {
              uVar18 = DAT_050ce348;
              if (1 < DAT_050ce348) goto LAB_01194648;
            }
            else {
              if ((DAT_050ce370 & 1) == 0) {
                iVar14 = __cxa_guard_acquire(&DAT_050ce370);
                pcVar22 = PTR_DAT_04bbb910;
                puVar24 = (uint *)PTR_DAT_04bbb918;
                if (iVar14 != 0) {
                  DAT_050ce350 = 0x200000000;
                  DAT_050ce358 = (undefined8 *)&DAT_050ce360;
                  __cxa_guard_release(&DAT_050ce370);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                }
              }
              if ((DAT_050ce378 & 1) == 0) {
                DAT_050ce378 = 1;
                if ((DAT_050ce390 & 1) == 0) {
                  iVar14 = __cxa_guard_acquire(&DAT_050ce390);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                  if (iVar14 != 0) {
                    _DAT_050ce37c = 0xffffffff00000000;
                    DAT_050ce384 = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_050ce390);
                    pcVar22 = PTR_DAT_04bbb910;
                    puVar24 = (uint *)PTR_DAT_04bbb918;
                  }
                }
                uVar10 = crc32b(uVar3,0x46,0x4c11db7);
                uVar18 = crc32b(uVar10,0x46,0x4c11db7);
                _DAT_050ce37c = (ulong)~uVar18;
                iVar14 = (int)DAT_050ce350;
                iVar23 = DAT_050ce350._4_4_;
                if ((int)DAT_050ce350 < DAT_050ce350._4_4_) {
                  DAT_050ce358[(int)DAT_050ce350] = &DAT_050ce37c;
                  iVar14 = (int)DAT_050ce350 + 1;
                  DAT_050ce350 = CONCAT44(DAT_050ce350._4_4_,iVar14);
                  iVar23 = DAT_050ce350._4_4_;
                }
                uVar18 = crc32b(uVar3,0x4e,0x4c11db7);
                DAT_050ce384 = CONCAT44(1,~uVar18);
                if (iVar14 < iVar23) {
                  DAT_050ce358[iVar14] = &DAT_050ce384;
                  iVar14 = (int)DAT_050ce350 + 1;
                  DAT_050ce350 = CONCAT44(DAT_050ce350._4_4_,iVar14);
                }
                puVar26 = DAT_050ce358;
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar18 = iVar14 - 1;
                  do {
                    if ((int)uVar18 <= (int)uVar19) break;
                    puVar30 = (uint *)puVar26[uVar19];
                    uVar16 = (ulong)uVar19;
                    if ((uVar18 - uVar19 & 1) == 0) {
                      uVar21 = uVar16;
                      puVar29 = puVar30;
                    }
                    else {
                      uVar21 = uVar16 + 1;
                      puVar29 = (uint *)puVar26[uVar21];
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar30)) {
                        puVar26[uVar21] = puVar30;
                        puVar26[uVar16] = puVar29;
                        puVar29 = puVar30;
                      }
                    }
                    uVar20 = (ulong)uVar18;
                    uVar18 = uVar19;
                    if (~uVar16 + uVar20 != 0) {
                      puVar25 = puVar26 + uVar21 + 1;
                      do {
                        puVar30 = (uint *)*puVar25;
                        uVar28 = (uint)uVar21;
                        if (((puVar29 == (uint *)0x0) || (puVar30 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar30)) {
                          puVar15 = (uint *)puVar25[1];
                          if (puVar30 != (uint *)0x0) goto LAB_01194600;
LAB_011945b0:
                          puVar30 = puVar15;
                        }
                        else {
                          puVar25[-1] = puVar30;
                          *puVar25 = puVar29;
                          puVar15 = (uint *)puVar25[1];
                          puVar30 = puVar29;
                          uVar18 = uVar28;
                          if (puVar29 == (uint *)0x0) goto LAB_011945b0;
LAB_01194600:
                          if ((puVar15 == (uint *)0x0) || (*puVar30 <= *puVar15)) goto LAB_011945b0;
                          uVar18 = uVar28 + 1;
                          *puVar25 = puVar15;
                          puVar25[1] = puVar30;
                        }
                        uVar21 = uVar21 + 2;
                        puVar25 = puVar25 + 2;
                        puVar29 = puVar30;
                      } while (uVar20 != uVar21);
                    }
                    if ((int)uVar18 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar18;
                    puVar30 = (uint *)puVar26[uVar18];
                    uVar19 = uVar18;
                    do {
                      puVar29 = (uint *)puVar26[uVar21 - 1];
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar30 < *puVar29)) {
                        uVar19 = (uint)uVar21;
                        puVar26[uVar21 - 1] = puVar30;
                        puVar26[uVar21] = puVar29;
                        puVar29 = puVar30;
                      }
                      uVar21 = uVar21 - 1;
                      puVar30 = puVar29;
                    } while ((long)uVar16 < (long)uVar21);
                  } while (uVar19 != uVar18);
                }
                DAT_050ce34c = '\x01';
              }
              else if (DAT_050ce34c != '\x01') goto LAB_01194648;
              if ((int)DAT_050ce350 == 0) goto LAB_01194648;
              if ((int)DAT_050ce350 < 2) {
                uVar18 = 0;
                puVar30 = (uint *)*DAT_050ce358;
                if (puVar30 != (uint *)0x0) goto LAB_01194470;
LAB_0119462c:
                uVar19 = uVar18;
                if (uVar18 < 2) {
LAB_01194638:
                  uVar18 = *(uint *)(DAT_050ce358[uVar19] + 4);
                  if (uVar18 < 2) {
                    DAT_050ce340 = '\x01';
                    DAT_050ce344 = uVar31;
                    DAT_050ce348 = uVar18;
                    goto LAB_0119494c;
                  }
                }
              }
              else {
                uVar18 = 0;
                iVar14 = (int)DAT_050ce350 + -1;
                do {
                  iVar23 = iVar14 + uVar18;
                  if (iVar23 < 0 != SCARRY4(iVar14,uVar18)) {
                    iVar23 = iVar23 + 1;
                  }
                  uVar19 = iVar23 >> 1;
                  if ((uint *)DAT_050ce358[(int)uVar19] == (uint *)0x0) goto LAB_01194480;
                  uVar28 = *(uint *)DAT_050ce358[(int)uVar19];
                  if (uVar28 == uVar31) goto LAB_01194480;
                  if (uVar28 < uVar31) {
                    uVar18 = uVar19 + 1;
                  }
                  else {
                    iVar14 = uVar19 - 1;
                  }
                } while ((int)uVar18 < iVar14);
                puVar30 = (uint *)DAT_050ce358[(int)uVar18];
                if (puVar30 == (uint *)0x0) goto LAB_0119462c;
LAB_01194470:
                uVar19 = uVar18;
                if (*puVar30 == uVar31) {
LAB_01194480:
                  if (1 < uVar19) goto LAB_01194648;
                  goto LAB_01194638;
                }
              }
LAB_01194648:
              uVar18 = 0;
            }
          }
          else {
            if ((DAT_050ce2e8 == '\x01') && (DAT_050ce2ec == uVar31)) {
              uVar18 = DAT_050ce2f0;
              if (1 < DAT_050ce2f0) goto LAB_01194940;
            }
            else {
              if ((DAT_050ce318 & 1) == 0) {
                iVar14 = __cxa_guard_acquire(&DAT_050ce318);
                pcVar22 = PTR_DAT_04bbb910;
                puVar24 = (uint *)PTR_DAT_04bbb918;
                if (iVar14 != 0) {
                  DAT_050ce2f8 = 0x200000000;
                  DAT_050ce300 = &DAT_050ce308;
                  __cxa_guard_release(&DAT_050ce318);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                }
              }
              if ((DAT_050ce320 & 1) == 0) {
                DAT_050ce320 = 1;
                if ((DAT_050ce338 & 1) == 0) {
                  iVar14 = __cxa_guard_acquire(&DAT_050ce338);
                  pcVar22 = PTR_DAT_04bbb910;
                  puVar24 = (uint *)PTR_DAT_04bbb918;
                  if (iVar14 != 0) {
                    _DAT_050ce324 = 0xffffffff00000000;
                    DAT_050ce32c = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_050ce338);
                    pcVar22 = PTR_DAT_04bbb910;
                    puVar24 = (uint *)PTR_DAT_04bbb918;
                  }
                }
                uVar10 = crc32b(uVar3,0x46,0x4c11db7);
                uVar18 = crc32b(uVar10,0x46,0x4c11db7);
                _DAT_050ce324 = (ulong)~uVar18;
                iVar14 = (int)DAT_050ce2f8;
                iVar23 = DAT_050ce2f8._4_4_;
                if ((int)DAT_050ce2f8 < DAT_050ce2f8._4_4_) {
                  *(undefined4 **)(DAT_050ce300 + (long)(int)DAT_050ce2f8 * 8) = &DAT_050ce324;
                  iVar14 = (int)DAT_050ce2f8 + 1;
                  DAT_050ce2f8 = CONCAT44(DAT_050ce2f8._4_4_,iVar14);
                  iVar23 = DAT_050ce2f8._4_4_;
                }
                uVar18 = crc32b(uVar3,0x4e,0x4c11db7);
                DAT_050ce32c = CONCAT44(1,~uVar18);
                if (iVar14 < iVar23) {
                  *(undefined8 **)(DAT_050ce300 + (long)iVar14 * 8) = &DAT_050ce32c;
                  iVar14 = (int)DAT_050ce2f8 + 1;
                  DAT_050ce2f8 = CONCAT44(DAT_050ce2f8._4_4_,iVar14);
                }
                puVar13 = DAT_050ce300;
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar18 = iVar14 - 1;
                  do {
                    if ((int)uVar18 <= (int)uVar19) break;
                    puVar30 = *(uint **)(puVar13 + (ulong)uVar19 * 8);
                    uVar16 = (ulong)uVar19;
                    if ((uVar18 - uVar19 & 1) == 0) {
                      uVar21 = uVar16;
                      puVar29 = puVar30;
                    }
                    else {
                      uVar21 = uVar16 + 1;
                      puVar29 = *(uint **)(puVar13 + uVar21 * 8);
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar30)) {
                        *(uint **)(puVar13 + uVar21 * 8) = puVar30;
                        *(uint **)(puVar13 + uVar16 * 8) = puVar29;
                        puVar29 = puVar30;
                      }
                    }
                    uVar20 = (ulong)uVar18;
                    uVar18 = uVar19;
                    if (~uVar16 + uVar20 != 0) {
                      puVar26 = (undefined8 *)(puVar13 + uVar21 * 8 + 8);
                      do {
                        puVar30 = (uint *)*puVar26;
                        uVar28 = (uint)uVar21;
                        if (((puVar29 == (uint *)0x0) || (puVar30 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar30)) {
                          puVar15 = (uint *)puVar26[1];
                          if (puVar30 != (uint *)0x0) goto LAB_011948c0;
LAB_01194870:
                          puVar30 = puVar15;
                        }
                        else {
                          puVar26[-1] = puVar30;
                          *puVar26 = puVar29;
                          puVar15 = (uint *)puVar26[1];
                          puVar30 = puVar29;
                          uVar18 = uVar28;
                          if (puVar29 == (uint *)0x0) goto LAB_01194870;
LAB_011948c0:
                          if ((puVar15 == (uint *)0x0) || (*puVar30 <= *puVar15)) goto LAB_01194870;
                          uVar18 = uVar28 + 1;
                          *puVar26 = puVar15;
                          puVar26[1] = puVar30;
                        }
                        uVar21 = uVar21 + 2;
                        puVar26 = puVar26 + 2;
                        puVar29 = puVar30;
                      } while (uVar20 != uVar21);
                    }
                    if ((int)uVar18 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar18;
                    puVar30 = *(uint **)(puVar13 + (ulong)uVar18 * 8);
                    uVar19 = uVar18;
                    do {
                      puVar29 = *(uint **)(puVar13 + uVar21 * 8 + -8);
                      if (((puVar30 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar30 < *puVar29)) {
                        uVar19 = (uint)uVar21;
                        *(uint **)(puVar13 + uVar21 * 8 + -8) = puVar30;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar29;
                        puVar29 = puVar30;
                      }
                      uVar21 = uVar21 - 1;
                      puVar30 = puVar29;
                    } while ((long)uVar16 < (long)uVar21);
                  } while (uVar19 != uVar18);
                }
                DAT_050ce2f4 = '\x01';
              }
              else if (DAT_050ce2f4 != '\x01') goto LAB_01194940;
              if ((int)DAT_050ce2f8 != 0) {
                if ((int)DAT_050ce2f8 < 2) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  iVar14 = (int)DAT_050ce2f8 + -1;
                  do {
                    iVar23 = iVar14 + uVar18;
                    if (iVar23 < 0 != SCARRY4(iVar14,uVar18)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar19 = iVar23 >> 1;
                    if (*(uint **)(DAT_050ce300 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x0119492c;
                    uVar28 = **(uint **)(DAT_050ce300 + (long)(int)uVar19 * 8);
                    if (uVar28 == uVar31) goto joined_r0x0119492c;
                    if (uVar28 < uVar31) {
                      uVar18 = uVar19 + 1;
                    }
                    else {
                      iVar14 = uVar19 - 1;
                    }
                  } while ((int)uVar18 < iVar14);
                }
                uVar19 = uVar18;
                if ((*(uint **)(DAT_050ce300 + (long)(int)uVar18 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_050ce300 + (long)(int)uVar18 * 8) == uVar31)) {
joined_r0x0119492c:
                  if ((uVar19 < 2) &&
                     (uVar18 = *(uint *)(*(long *)(DAT_050ce300 + (ulong)uVar19 * 8) + 4),
                     uVar18 < 2)) {
                    DAT_050ce2e8 = '\x01';
                    DAT_050ce2ec = uVar31;
                    DAT_050ce2f0 = uVar18;
                    goto LAB_01194944;
                  }
                }
              }
LAB_01194940:
              uVar18 = 0;
            }
LAB_01194944:
          }
LAB_0119494c:
          puVar30 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar30 != (uint *)0x0)) &&
             ((*puVar30 != 0 &&
              ((uVar31 = puVar30[1], uVar31 != 0 && ((ulong)(ushort)puVar30[2] != 0)))))) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar30 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar30 + lVar12 + (ulong)(ushort)puVar30[2] * 8;
            if (lVar12 != 0) {
              uVar19 = 0;
              if ((ulong)uVar31 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar12) / (ulong)uVar31);
              }
              if (*puVar30 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bbb940) {
                *(short *)(*(long *)(PTR_DAT_04bbb940 + 8) + (long)(int)uVar19 * 2) = (short)uVar18;
              }
            }
          }
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar11);
  }
  return;
}

