
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017de4a0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint *puVar22;
  char cVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  uint *puVar31;
  char *pcVar32;
  
  puVar13 = PTR_DAT_04bb7d28;
  if ((param_1 != (uint *)0x0) && (uVar11 = *param_1, uVar11 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x45,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar5 = crc32b(uVar2,0x8d,0x4c11db7);
    uVar25 = 0;
    uVar6 = crc32b(uVar5,0x97,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar5 = crc32b(uVar5,0x9d,0x4c11db7);
    uVar7 = crc32b(uVar5,0xb1,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0xe8,0x4c11db7);
    uVar5 = crc32b(uVar5,0xa5,0x4c11db7);
    uVar8 = crc32b(uVar5,0xbf,0x4c11db7);
    uVar9 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar10 = crc32b(0xffffffff,0x57,0x4c11db7);
    pcVar32 = PTR_DAT_04bb7d20;
    do {
      if (((uVar25 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar15 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar15 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar25 + (uint)(ushort)param_1[2] * 8 + iVar15) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar28 = *puVar1;
          if (uVar28 != 0) {
            cVar23 = *pcVar32;
            do {
              if (cVar23 == '\0') {
                cVar23 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *pcVar32 = '\x01';
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                uVar28 = *puVar1;
              }
              else {
                uVar16 = *(uint *)puVar13;
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar28 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_017de6e0;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar28;
              uVar28 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar28 = 0, puVar1 == puVar31)) goto LAB_017de6e0;
              lVar12 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar1 + (lVar12 - (long)puVar31);
              if (lVar12 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)puVar13 = 0xfffffffe;
              if (uVar17 == 0) break;
              piVar27 = (int *)(lVar12 + 4);
              while (piVar27[-1] != -0x2a574082) {
                piVar27 = piVar27 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_017de6dc;
              }
              iVar15 = 0;
              if (*piVar27 != -1) {
                iVar15 = *piVar27;
              }
              *(int *)puVar13 = iVar15;
              uVar28 = *puVar1;
              if (uVar28 == 0) break;
            } while( true );
          }
LAB_017de6dc:
          uVar28 = 0;
LAB_017de6e0:
          if (((*puVar1 == 0) || (lVar12 = (long)puVar1 - (ulong)*puVar1, lVar12 == 0)) ||
             (*(char *)(lVar12 + 0xb) == '\0')) {
            if ((DAT_052937f0 == '\x01') && (DAT_052937f4 == uVar28)) {
              uVar16 = DAT_052937f8;
              if (3 < DAT_052937f8) goto LAB_017dead8;
            }
            else {
              if ((DAT_05293830 & 1) == 0) {
                iVar15 = __cxa_guard_acquire(&DAT_05293830);
                pcVar32 = PTR_DAT_04bb7d20;
                if (iVar15 != 0) {
                  DAT_05293800 = 0x400000000;
                  DAT_05293808 = (undefined8 *)&DAT_05293810;
                  __cxa_guard_release(&DAT_05293830);
                  pcVar32 = PTR_DAT_04bb7d20;
                }
              }
              if ((DAT_05293838 & 1) == 0) {
                DAT_05293838 = 1;
                if ((DAT_05293860 & 1) == 0) {
                  iVar15 = __cxa_guard_acquire(&DAT_05293860);
                  pcVar32 = PTR_DAT_04bb7d20;
                  if (iVar15 != 0) {
                    _DAT_0529383c = 0xffffffff00000000;
                    DAT_05293844 = 0xffffffff00000000;
                    DAT_0529384c = 0xffffffff00000000;
                    DAT_05293854 = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_05293860);
                    pcVar32 = PTR_DAT_04bb7d20;
                  }
                }
                _DAT_0529383c = (ulong)~uVar6;
                iVar15 = (int)DAT_05293800;
                iVar24 = DAT_05293800._4_4_;
                if ((int)DAT_05293800 < DAT_05293800._4_4_) {
                  DAT_05293808[(int)DAT_05293800] = &DAT_0529383c;
                  iVar15 = (int)DAT_05293800 + 1;
                  DAT_05293800 = CONCAT44(DAT_05293800._4_4_,iVar15);
                  iVar24 = DAT_05293800._4_4_;
                }
                DAT_05293844 = CONCAT44(1,~uVar7);
                if (iVar15 < iVar24) {
                  DAT_05293808[iVar15] = &DAT_05293844;
                  iVar15 = (int)DAT_05293800 + 1;
                  DAT_05293800 = CONCAT44(DAT_05293800._4_4_,iVar15);
                  iVar24 = DAT_05293800._4_4_;
                }
                uVar5 = crc32b(uVar2,0x8c,0x4c11db7);
                uVar16 = crc32b(uVar5,0x97,0x4c11db7);
                DAT_0529384c = CONCAT44(2,~uVar16);
                if (iVar15 < iVar24) {
                  DAT_05293808[iVar15] = &DAT_0529384c;
                  iVar15 = (int)DAT_05293800 + 1;
                  DAT_05293800 = CONCAT44(DAT_05293800._4_4_,iVar15);
                  iVar24 = DAT_05293800._4_4_;
                }
                DAT_05293854 = CONCAT44(3,~uVar8);
                if (iVar15 < iVar24) {
                  DAT_05293808[iVar15] = &DAT_05293854;
                  iVar15 = (int)DAT_05293800 + 1;
                  DAT_05293800 = CONCAT44(DAT_05293800._4_4_,iVar15);
                }
                puVar30 = DAT_05293808;
                if (1 < iVar15) {
                  uVar18 = 0;
                  uVar16 = iVar15 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar18) break;
                    puVar31 = (uint *)puVar30[uVar18];
                    uVar17 = (ulong)uVar18;
                    if ((uVar16 - uVar18 & 1) == 0) {
                      puVar21 = puVar31;
                      uVar19 = uVar17;
                    }
                    else {
                      uVar19 = uVar17 + 1;
                      puVar21 = (uint *)puVar30[uVar19];
                      if (((puVar31 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                         (*puVar21 < *puVar31)) {
                        puVar30[uVar19] = puVar31;
                        puVar30[uVar17] = puVar21;
                        puVar21 = puVar31;
                      }
                    }
                    uVar20 = (ulong)uVar16;
                    uVar16 = uVar18;
                    if (~uVar17 + uVar20 != 0) {
                      puVar29 = puVar30 + uVar19 + 1;
                      do {
                        puVar31 = (uint *)*puVar29;
                        uVar26 = (uint)uVar19;
                        if (((puVar21 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar21 <= *puVar31)) {
                          puVar22 = (uint *)puVar29[1];
                          if (puVar31 != (uint *)0x0) goto LAB_017dea90;
LAB_017dea40:
                          puVar31 = puVar22;
                        }
                        else {
                          puVar29[-1] = puVar31;
                          *puVar29 = puVar21;
                          puVar22 = (uint *)puVar29[1];
                          puVar31 = puVar21;
                          uVar16 = uVar26;
                          if (puVar21 == (uint *)0x0) goto LAB_017dea40;
LAB_017dea90:
                          if (puVar22 == (uint *)0x0) goto LAB_017dea40;
                          if (*puVar31 <= *puVar22) goto LAB_017dea40;
                          uVar16 = uVar26 + 1;
                          *puVar29 = puVar22;
                          puVar29[1] = puVar31;
                        }
                        uVar19 = uVar19 + 2;
                        puVar29 = puVar29 + 2;
                        puVar21 = puVar31;
                      } while (uVar20 != uVar19);
                    }
                    if ((int)uVar16 <= (int)uVar18) break;
                    uVar19 = (ulong)uVar16;
                    puVar31 = (uint *)puVar30[uVar16];
                    uVar18 = uVar16;
                    do {
                      puVar21 = (uint *)puVar30[uVar19 - 1];
                      if (((puVar31 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                         (*puVar31 < *puVar21)) {
                        uVar18 = (uint)uVar19;
                        puVar30[uVar19 - 1] = puVar31;
                        puVar30[uVar19] = puVar21;
                        puVar21 = puVar31;
                      }
                      uVar19 = uVar19 - 1;
                      puVar31 = puVar21;
                    } while ((long)uVar17 < (long)uVar19);
                  } while (uVar18 != uVar16);
                }
                DAT_052937fc = '\x01';
              }
              else if (DAT_052937fc != '\x01') goto LAB_017dead8;
              if ((int)DAT_05293800 == 0) goto LAB_017dead8;
              if ((int)DAT_05293800 < 2) {
                uVar16 = 0;
                puVar31 = (uint *)*DAT_05293808;
                if (puVar31 != (uint *)0x0) goto LAB_017de900;
LAB_017deabc:
                uVar17 = (ulong)uVar16;
                if (uVar16 < 4) {
LAB_017deac8:
                  uVar16 = *(uint *)(DAT_05293808[uVar17] + 4);
                  if (uVar16 < 4) {
                    DAT_052937f0 = '\x01';
                    DAT_052937f4 = uVar28;
                    DAT_052937f8 = uVar16;
                    goto LAB_017dee14;
                  }
                }
              }
              else {
                uVar16 = 0;
                iVar15 = (int)DAT_05293800 + -1;
                do {
                  iVar24 = iVar15 + uVar16;
                  if (iVar24 < 0 != SCARRY4(iVar15,uVar16)) {
                    iVar24 = iVar24 + 1;
                  }
                  uVar18 = iVar24 >> 1;
                  uVar17 = (ulong)uVar18;
                  if (((uint *)DAT_05293808[(int)uVar18] == (uint *)0x0) ||
                     (uVar26 = *(uint *)DAT_05293808[(int)uVar18], uVar26 == uVar28))
                  goto LAB_017de910;
                  if (uVar26 < uVar28) {
                    uVar16 = uVar18 + 1;
                  }
                  else {
                    iVar15 = uVar18 - 1;
                  }
                } while ((int)uVar16 < iVar15);
                puVar31 = (uint *)DAT_05293808[(int)uVar16];
                if (puVar31 == (uint *)0x0) goto LAB_017deabc;
LAB_017de900:
                uVar17 = (ulong)uVar16;
                if (*puVar31 == uVar28) {
LAB_017de910:
                  if (3 < (uint)uVar17) goto LAB_017dead8;
                  goto LAB_017deac8;
                }
              }
LAB_017dead8:
              uVar16 = 0;
            }
          }
          else {
            if ((DAT_05293778 == '\x01') && (DAT_0529377c == uVar28)) {
              uVar16 = DAT_05293780;
              if (3 < DAT_05293780) goto LAB_017dee08;
            }
            else {
              if ((DAT_052937b8 & 1) == 0) {
                iVar15 = __cxa_guard_acquire(&DAT_052937b8);
                pcVar32 = PTR_DAT_04bb7d20;
                if (iVar15 != 0) {
                  DAT_05293788 = 0x400000000;
                  DAT_05293790 = &DAT_05293798;
                  __cxa_guard_release(&DAT_052937b8);
                  pcVar32 = PTR_DAT_04bb7d20;
                }
              }
              if ((DAT_052937c0 & 1) == 0) {
                DAT_052937c0 = 1;
                if ((DAT_052937e8 & 1) == 0) {
                  iVar15 = __cxa_guard_acquire(&DAT_052937e8);
                  pcVar32 = PTR_DAT_04bb7d20;
                  if (iVar15 != 0) {
                    _DAT_052937c4 = 0xffffffff00000000;
                    DAT_052937cc = 0xffffffff00000000;
                    DAT_052937d4 = 0xffffffff00000000;
                    DAT_052937dc = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_052937e8);
                    pcVar32 = PTR_DAT_04bb7d20;
                  }
                }
                _DAT_052937c4 = (ulong)~uVar9;
                iVar15 = (int)DAT_05293788;
                iVar24 = DAT_05293788._4_4_;
                if ((int)DAT_05293788 < DAT_05293788._4_4_) {
                  *(undefined4 **)(DAT_05293790 + (long)(int)DAT_05293788 * 8) = &DAT_052937c4;
                  iVar15 = (int)DAT_05293788 + 1;
                  DAT_05293788 = CONCAT44(DAT_05293788._4_4_,iVar15);
                  iVar24 = DAT_05293788._4_4_;
                }
                DAT_052937cc = CONCAT44(1,~uVar3);
                if (iVar15 < iVar24) {
                  *(undefined8 **)(DAT_05293790 + (long)iVar15 * 8) = &DAT_052937cc;
                  iVar15 = (int)DAT_05293788 + 1;
                  DAT_05293788 = CONCAT44(DAT_05293788._4_4_,iVar15);
                  iVar24 = DAT_05293788._4_4_;
                }
                DAT_052937d4 = CONCAT44(2,~uVar4);
                if (iVar15 < iVar24) {
                  *(undefined8 **)(DAT_05293790 + (long)iVar15 * 8) = &DAT_052937d4;
                  iVar15 = (int)DAT_05293788 + 1;
                  DAT_05293788 = CONCAT44(DAT_05293788._4_4_,iVar15);
                  iVar24 = DAT_05293788._4_4_;
                }
                DAT_052937dc = CONCAT44(3,~uVar10);
                if (iVar15 < iVar24) {
                  *(undefined8 **)(DAT_05293790 + (long)iVar15 * 8) = &DAT_052937dc;
                  iVar15 = (int)DAT_05293788 + 1;
                  DAT_05293788 = CONCAT44(DAT_05293788._4_4_,iVar15);
                }
                puVar14 = DAT_05293790;
                if (1 < iVar15) {
                  uVar18 = 0;
                  uVar16 = iVar15 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar18) break;
                    puVar31 = *(uint **)(puVar14 + (ulong)uVar18 * 8);
                    uVar17 = (ulong)uVar18;
                    if ((uVar16 - uVar18 & 1) == 0) {
                      uVar19 = uVar17;
                      puVar21 = puVar31;
                    }
                    else {
                      uVar19 = uVar17 + 1;
                      puVar21 = *(uint **)(puVar14 + uVar19 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                         (*puVar21 < *puVar31)) {
                        *(uint **)(puVar14 + uVar19 * 8) = puVar31;
                        *(uint **)(puVar14 + uVar17 * 8) = puVar21;
                        puVar21 = puVar31;
                      }
                    }
                    uVar20 = (ulong)uVar16;
                    uVar16 = uVar18;
                    if (~uVar17 + uVar20 != 0) {
                      puVar30 = (undefined8 *)(puVar14 + uVar19 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar30;
                        uVar26 = (uint)uVar19;
                        if (((puVar21 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar21 <= *puVar31)) {
                          puVar22 = (uint *)puVar30[1];
                          if (puVar31 != (uint *)0x0) goto LAB_017ded90;
LAB_017ded40:
                          puVar31 = puVar22;
                        }
                        else {
                          puVar30[-1] = puVar31;
                          *puVar30 = puVar21;
                          puVar22 = (uint *)puVar30[1];
                          puVar31 = puVar21;
                          uVar16 = uVar26;
                          if (puVar21 == (uint *)0x0) goto LAB_017ded40;
LAB_017ded90:
                          if ((puVar22 == (uint *)0x0) || (*puVar31 <= *puVar22)) goto LAB_017ded40;
                          uVar16 = uVar26 + 1;
                          *puVar30 = puVar22;
                          puVar30[1] = puVar31;
                        }
                        uVar19 = uVar19 + 2;
                        puVar30 = puVar30 + 2;
                        puVar21 = puVar31;
                      } while (uVar20 != uVar19);
                    }
                    if ((int)uVar16 <= (int)uVar18) break;
                    uVar19 = (ulong)uVar16;
                    puVar31 = *(uint **)(puVar14 + (ulong)uVar16 * 8);
                    uVar18 = uVar16;
                    do {
                      puVar21 = *(uint **)(puVar14 + uVar19 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                         (*puVar31 < *puVar21)) {
                        uVar18 = (uint)uVar19;
                        *(uint **)(puVar14 + uVar19 * 8 + -8) = puVar31;
                        *(uint **)(puVar14 + uVar19 * 8) = puVar21;
                        puVar21 = puVar31;
                      }
                      uVar19 = uVar19 - 1;
                      puVar31 = puVar21;
                    } while ((long)uVar17 < (long)uVar19);
                  } while (uVar18 != uVar16);
                }
                DAT_05293784 = '\x01';
              }
              else if (DAT_05293784 != '\x01') goto LAB_017dee08;
              if ((int)DAT_05293788 != 0) {
                if ((int)DAT_05293788 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar15 = (int)DAT_05293788 + -1;
                  do {
                    iVar24 = iVar15 + uVar16;
                    if (iVar24 < 0 != SCARRY4(iVar15,uVar16)) {
                      iVar24 = iVar24 + 1;
                    }
                    uVar18 = iVar24 >> 1;
                    uVar17 = (ulong)uVar18;
                    if ((*(uint **)(DAT_05293790 + (long)(int)uVar18 * 8) == (uint *)0x0) ||
                       (uVar26 = **(uint **)(DAT_05293790 + (long)(int)uVar18 * 8), uVar26 == uVar28
                       )) goto LAB_017dedcc;
                    if (uVar26 < uVar28) {
                      uVar16 = uVar18 + 1;
                    }
                    else {
                      iVar15 = uVar18 - 1;
                    }
                  } while ((int)uVar16 < iVar15);
                }
                if (*(uint **)(DAT_05293790 + (long)(int)uVar16 * 8) == (uint *)0x0) {
                  uVar17 = (ulong)uVar16;
                }
                else {
                  uVar17 = (ulong)uVar16;
                  if (**(uint **)(DAT_05293790 + (long)(int)uVar16 * 8) != uVar28)
                  goto LAB_017dee08;
LAB_017dedcc:
                  uVar16 = (uint)uVar17;
                }
                if ((uVar16 < 4) &&
                   (uVar16 = *(uint *)(*(long *)(DAT_05293790 + uVar17 * 8) + 4), uVar16 < 4)) {
                  DAT_05293778 = '\x01';
                  DAT_0529377c = uVar28;
                  DAT_05293780 = uVar16;
                  goto LAB_017dee0c;
                }
              }
LAB_017dee08:
              uVar16 = 0;
            }
LAB_017dee0c:
          }
LAB_017dee14:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar28 = puVar31[1], uVar28 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar31 + lVar12 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar12 != 0) {
              uVar18 = 0;
              if ((ulong)uVar28 != 0) {
                uVar18 = (uint)((ulong)((long)puVar1 - lVar12) / (ulong)uVar28);
              }
              if (*puVar31 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 < *(uint *)PTR_DAT_04bbe500) {
                *(short *)(*(long *)(PTR_DAT_04bbe500 + 8) + (long)(int)uVar18 * 2) = (short)uVar16;
              }
            }
          }
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar11);
  }
  return;
}

