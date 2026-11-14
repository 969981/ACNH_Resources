
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017ce2f0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  char cVar15;
  undefined2 uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint *puVar30;
  long lVar31;
  uint uVar32;
  byte *pbVar33;
  uint uVar34;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar12 = *param_1, uVar12 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe7,0x4c11db7);
    uVar2 = crc32b(uVar2,0x84,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x43,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa1,0x4c11db7);
    uVar32 = 0;
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar4 = crc32b(uVar2,0x97,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9b,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9b,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe8,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa7,0x4c11db7);
    uVar5 = crc32b(uVar2,0x92,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe4,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar6 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar7 = crc32b(uVar7,0x71,0x4c11db7);
    uVar7 = crc32b(uVar7,0x75,0x4c11db7);
    uVar7 = crc32b(uVar7,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar7 = crc32b(uVar7,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,99,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar8 = crc32b(uVar2,0x65,0x4c11db7);
    uVar9 = crc32b(uVar7,0x65,0x4c11db7);
    uVar10 = crc32b(uVar3,0x65,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar2 = crc32b(uVar2,99,0x4c11db7);
    uVar11 = crc32b(uVar2,0x68,0x4c11db7);
    do {
      if (((uVar32 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar32 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar34 = *puVar1;
          if (uVar34 != 0) {
            cVar15 = DAT_05292f60;
            do {
              if (cVar15 == '\0') {
                DAT_05292f64 = 0xffffffffffffffff;
                DAT_05292f6c = 0xffffffffffffffff;
                cVar15 = '\x01';
                DAT_05292f74 = 0xffffffff;
                uVar34 = *puVar1;
                DAT_05292f60 = '\x01';
              }
              else {
                if (-1 < (int)DAT_05292f64) {
                  puVar25 = (uint *)((long)puVar1 + (DAT_05292f64 & 0xffffffff));
                  if (puVar25 != (uint *)0x0) {
                    uVar34 = *puVar25;
                    goto LAB_017ce5f4;
                  }
                  break;
                }
                if ((int)DAT_05292f64 != -1) break;
              }
              puVar25 = (uint *)(ulong)uVar34;
              uVar34 = 0;
              if ((puVar25 == (uint *)0x0) || (uVar34 = 0, puVar1 == puVar25)) goto LAB_017ce5f4;
              lVar31 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar25)) != '\0') {
                lVar31 = 0x1c;
              }
              lVar31 = (long)puVar1 + (lVar31 - (long)puVar25);
              if (lVar31 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar25));
              DAT_05292f64._4_4_ = (uint)(DAT_05292f64 >> 0x20);
              DAT_05292f64 = CONCAT44(DAT_05292f64._4_4_,0xfffffffe);
              if (uVar21 == 0) break;
              piVar20 = (int *)(lVar31 + 4);
              while (piVar20[-1] != -0x36f54b3c) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_017ce5f0;
              }
              iVar14 = 0;
              if (*piVar20 != -1) {
                iVar14 = *piVar20;
              }
              DAT_05292f64 = CONCAT44(DAT_05292f64._4_4_,iVar14);
              uVar34 = *puVar1;
              if (uVar34 == 0) break;
            } while( true );
          }
LAB_017ce5f0:
          uVar34 = 0;
LAB_017ce5f4:
          if (((*puVar1 == 0) || (lVar31 = (long)puVar1 - (ulong)*puVar1, lVar31 == 0)) ||
             (*(char *)(lVar31 + 0xb) == '\0')) {
            if ((DAT_05293520 == '\x01') && (DAT_05293524 == uVar34)) {
              uVar17 = DAT_05293528;
              if (4 < DAT_05293528) goto LAB_017ce8a0;
            }
            else {
              if (((DAT_05293568 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_05293568), iVar14 != 0)) {
                DAT_05293530 = 0x500000000;
                DAT_05293538 = (undefined8 *)&DAT_05293540;
                __cxa_guard_release(&DAT_05293568);
              }
              if ((DAT_05293570 & 1) == 0) {
                DAT_05293570 = 1;
                if (((DAT_052935a0 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_052935a0), iVar14 != 0)) {
                  DAT_05293594 = 0xffffffff00000000;
                  DAT_05293574 = 0xffffffff00000000;
                  DAT_0529357c = 0xffffffff00000000;
                  DAT_05293584 = 0xffffffff00000000;
                  DAT_0529358c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_052935a0);
                }
                lVar31 = 0;
                do {
                  local_75 = 0;
                  pbVar33 = (&PTR_DAT_049c4128)[lVar31];
                  if (local_174 != pbVar33) {
                    lVar19 = 0;
                    do {
                      if (pbVar33[lVar19] == 0) {
LAB_017ce734:
                        iVar14 = (int)lVar19;
joined_r0x017ce738:
                        if (0xff < iVar14) {
                          iVar14 = 0xff;
                        }
                        goto LAB_017ce740;
                      }
                      if (pbVar33[lVar19 + 1] == 0) {
                        lVar19 = lVar19 + 1;
                        goto LAB_017ce734;
                      }
                      if (pbVar33[lVar19 + 2] == 0) {
                        iVar14 = (int)lVar19 + 2;
                        goto joined_r0x017ce738;
                      }
                      lVar19 = lVar19 + 3;
                    } while (lVar19 != 0x80001);
                    iVar14 = 0;
LAB_017ce740:
                    memcpy(local_174,pbVar33,(long)iVar14);
                    local_174[iVar14] = 0;
                  }
                  uVar17 = (uint)*pbVar33;
                  if (*pbVar33 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 0xffffffff;
                    do {
                      pbVar33 = pbVar33 + 1;
                      uVar23 = crc32b(uVar23,uVar17,0x4c11db7);
                      uVar17 = (uint)*pbVar33;
                    } while (uVar17 != 0);
                    uVar23 = ~uVar23;
                  }
                  *(uint *)(&DAT_05293574 + lVar31) = uVar23;
                  *(int *)((long)&DAT_05293574 + lVar31 * 8 + 4) = (int)lVar31;
                  iVar14 = (int)DAT_05293530;
                  if ((int)DAT_05293530 < DAT_05293530._4_4_) {
                    DAT_05293538[(int)DAT_05293530] = &DAT_05293574 + lVar31;
                    iVar14 = (int)DAT_05293530 + 1;
                    DAT_05293530 = CONCAT44(DAT_05293530._4_4_,iVar14);
                  }
                  puVar29 = DAT_05293538;
                  lVar31 = lVar31 + 1;
                } while (lVar31 != 5);
                if (1 < iVar14) {
                  uVar23 = 0;
                  uVar17 = iVar14 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = (uint *)puVar29[uVar23];
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = (uint *)puVar29[uVar24];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        puVar29[uVar24] = puVar25;
                        puVar29[uVar21] = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar28 = puVar29 + uVar24 + 1;
                      do {
                        puVar25 = (uint *)*puVar28;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar28[1];
                          if (puVar25 != (uint *)0x0) goto LAB_017cea20;
LAB_017ce9d0:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar28[-1] = puVar25;
                          *puVar28 = puVar27;
                          puVar30 = (uint *)puVar28[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_017ce9d0;
LAB_017cea20:
                          if (puVar30 == (uint *)0x0) goto LAB_017ce9d0;
                          if (*puVar25 <= *puVar30) goto LAB_017ce9d0;
                          uVar17 = uVar22 + 1;
                          *puVar28 = puVar30;
                          puVar28[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar28 = puVar28 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = (uint *)puVar29[uVar17];
                    uVar23 = uVar17;
                    do {
                      puVar27 = (uint *)puVar29[uVar24 - 1];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        puVar29[uVar24 - 1] = puVar25;
                        puVar29[uVar24] = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_0529352c = '\x01';
              }
              else if (DAT_0529352c != '\x01') goto LAB_017ce8a0;
              if ((int)DAT_05293530 != 0) {
                if ((int)DAT_05293530 < 2) {
                  uVar23 = 0;
                  puVar25 = (uint *)*DAT_05293538;
                  uVar17 = uVar23;
                  if (puVar25 != (uint *)0x0) goto LAB_017ce870;
joined_r0x017cea54:
                  if (uVar17 < 5) {
                    uVar17 = *(uint *)(DAT_05293538[uVar17] + 4);
                    if (uVar17 < 5) {
                      DAT_05293520 = '\x01';
                      DAT_05293524 = uVar34;
                      DAT_05293528 = uVar17;
                      goto LAB_017ce8a4;
                    }
                    goto LAB_017ce8a0;
                  }
                }
                else {
                  uVar23 = 0;
                  iVar14 = (int)DAT_05293530 + -1;
                  do {
                    iVar18 = iVar14 + uVar23;
                    if (iVar18 < 0 != SCARRY4(iVar14,uVar23)) {
                      iVar18 = iVar18 + 1;
                    }
                    uVar17 = iVar18 >> 1;
                    if ((uint *)DAT_05293538[(int)uVar17] == (uint *)0x0) goto joined_r0x017cea54;
                    uVar22 = *(uint *)DAT_05293538[(int)uVar17];
                    if (uVar22 == uVar34) goto joined_r0x017cea54;
                    if (uVar22 < uVar34) {
                      uVar23 = uVar17 + 1;
                    }
                    else {
                      iVar14 = uVar17 - 1;
                    }
                  } while ((int)uVar23 < iVar14);
                  puVar25 = (uint *)DAT_05293538[(int)uVar23];
                  uVar17 = uVar23;
                  if (puVar25 == (uint *)0x0) goto joined_r0x017cea54;
LAB_017ce870:
                  uVar17 = uVar23;
                  if (*puVar25 == uVar34) goto joined_r0x017cea54;
                }
                uVar16 = 0;
                goto LAB_017cee0c;
              }
LAB_017ce8a0:
              uVar17 = 0;
            }
LAB_017ce8a4:
            uVar16 = (undefined2)uVar17;
          }
          else {
            if ((DAT_05293498 == '\x01') && (DAT_0529349c == uVar34)) {
              uVar17 = DAT_052934a0;
              if (4 < DAT_052934a0) goto LAB_017cedfc;
            }
            else {
              if (((DAT_052934e0 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_052934e0), iVar14 != 0)) {
                DAT_052934a8 = 0x500000000;
                DAT_052934b0 = &DAT_052934b8;
                __cxa_guard_release(&DAT_052934e0);
              }
              if ((DAT_052934e8 & 1) == 0) {
                DAT_052934e8 = 1;
                if (((DAT_05293518 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_05293518), iVar14 != 0)) {
                  DAT_0529350c = 0xffffffff00000000;
                  DAT_052934ec = 0xffffffff00000000;
                  DAT_052934f4 = 0xffffffff00000000;
                  DAT_052934fc = 0xffffffff00000000;
                  DAT_05293504 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05293518);
                }
                lVar31 = 0;
                do {
                  local_75 = 0;
                  pbVar33 = (&PTR_DAT_049c40d0)[lVar31];
                  if (local_174 != pbVar33) {
                    lVar19 = 0;
                    do {
                      if (pbVar33[lVar19] == 0) {
LAB_017ceb14:
                        iVar14 = (int)lVar19;
joined_r0x017ceb18:
                        if (0xff < iVar14) {
                          iVar14 = 0xff;
                        }
                        goto LAB_017ceb20;
                      }
                      if (pbVar33[lVar19 + 1] == 0) {
                        lVar19 = lVar19 + 1;
                        goto LAB_017ceb14;
                      }
                      if (pbVar33[lVar19 + 2] == 0) {
                        iVar14 = (int)lVar19 + 2;
                        goto joined_r0x017ceb18;
                      }
                      lVar19 = lVar19 + 3;
                    } while (lVar19 != 0x80001);
                    iVar14 = 0;
LAB_017ceb20:
                    memcpy(local_174,pbVar33,(long)iVar14);
                    local_174[iVar14] = 0;
                  }
                  uVar17 = (uint)*pbVar33;
                  if (*pbVar33 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 0xffffffff;
                    do {
                      pbVar33 = pbVar33 + 1;
                      uVar23 = crc32b(uVar23,uVar17,0x4c11db7);
                      uVar17 = (uint)*pbVar33;
                    } while (uVar17 != 0);
                    uVar23 = ~uVar23;
                  }
                  *(uint *)(&DAT_052934ec + lVar31) = uVar23;
                  *(int *)((long)&DAT_052934ec + lVar31 * 8 + 4) = (int)lVar31;
                  iVar14 = (int)DAT_052934a8;
                  if ((int)DAT_052934a8 < DAT_052934a8._4_4_) {
                    *(undefined8 **)(DAT_052934b0 + (long)(int)DAT_052934a8 * 8) =
                         &DAT_052934ec + lVar31;
                    iVar14 = (int)DAT_052934a8 + 1;
                    DAT_052934a8 = CONCAT44(DAT_052934a8._4_4_,iVar14);
                  }
                  puVar13 = DAT_052934b0;
                  lVar31 = lVar31 + 1;
                } while (lVar31 != 5);
                if (1 < iVar14) {
                  uVar23 = 0;
                  uVar17 = iVar14 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar23 * 8);
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        *(uint **)(puVar13 + uVar24 * 8) = puVar25;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar29 = (undefined8 *)(puVar13 + uVar24 * 8 + 8);
                      do {
                        puVar25 = (uint *)*puVar29;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar29[1];
                          if (puVar25 != (uint *)0x0) goto LAB_017ceda0;
LAB_017ced50:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar29[-1] = puVar25;
                          *puVar29 = puVar27;
                          puVar30 = (uint *)puVar29[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_017ced50;
LAB_017ceda0:
                          if (puVar30 == (uint *)0x0) goto LAB_017ced50;
                          if (*puVar25 <= *puVar30) goto LAB_017ced50;
                          uVar17 = uVar22 + 1;
                          *puVar29 = puVar30;
                          puVar29[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar17 * 8);
                    uVar23 = uVar17;
                    do {
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8 + -8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        *(uint **)(puVar13 + uVar24 * 8 + -8) = puVar25;
                        *(uint **)(puVar13 + uVar24 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_052934a4 = '\x01';
              }
              else if (DAT_052934a4 != '\x01') goto LAB_017cedfc;
              if ((int)DAT_052934a8 != 0) {
                if ((int)DAT_052934a8 < 2) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  iVar14 = (int)DAT_052934a8 + -1;
                  do {
                    iVar18 = iVar14 + uVar17;
                    if (iVar18 < 0 != SCARRY4(iVar14,uVar17)) {
                      iVar18 = iVar18 + 1;
                    }
                    uVar23 = iVar18 >> 1;
                    if (*(uint **)(DAT_052934b0 + (long)(int)uVar23 * 8) == (uint *)0x0)
                    goto joined_r0x017cf73c;
                    uVar22 = **(uint **)(DAT_052934b0 + (long)(int)uVar23 * 8);
                    if (uVar22 == uVar34) goto joined_r0x017cf73c;
                    if (uVar22 < uVar34) {
                      uVar17 = uVar23 + 1;
                    }
                    else {
                      iVar14 = uVar23 - 1;
                    }
                  } while ((int)uVar17 < iVar14);
                }
                uVar23 = uVar17;
                if ((*(uint **)(DAT_052934b0 + (long)(int)uVar17 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_052934b0 + (long)(int)uVar17 * 8) == uVar34)) {
joined_r0x017cf73c:
                  if (uVar23 < 5) {
                    uVar17 = *(uint *)(*(long *)(DAT_052934b0 + (ulong)uVar23 * 8) + 4);
                    if (uVar17 < 5) {
                      DAT_05293498 = '\x01';
                      DAT_0529349c = uVar34;
                      DAT_052934a0 = uVar17;
                      goto LAB_017cee00;
                    }
                    goto LAB_017cedfc;
                  }
                }
                uVar16 = 0;
                goto LAB_017cee0c;
              }
LAB_017cedfc:
              uVar17 = 0;
            }
LAB_017cee00:
            uVar16 = (undefined2)uVar17;
          }
LAB_017cee0c:
          puVar25 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar25 != (uint *)0x0)) && (*puVar25 != 0)) &&
             ((uVar34 = puVar25[1], uVar34 != 0 && ((ulong)(ushort)puVar25[2] != 0)))) {
            lVar31 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar31 = 0x1c;
            }
            lVar31 = (long)puVar25 + lVar31 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar31 != 0) {
              uVar17 = 0;
              if ((ulong)uVar34 != 0) {
                uVar17 = (uint)((ulong)((long)puVar1 - lVar31) / (ulong)uVar34);
              }
              if (*puVar25 <= uVar17) {
                uVar17 = 0xffffffff;
              }
              if (uVar17 < DAT_05293028) {
                *(undefined2 *)(DAT_05293030 + (long)(int)uVar17 * 2) = uVar16;
              }
            }
          }
          uVar34 = *puVar1;
          if (uVar34 != 0) {
            cVar15 = DAT_05292f60;
            do {
              if (cVar15 == '\0') {
                DAT_05292f64 = 0xffffffffffffffff;
                DAT_05292f6c = 0xffffffffffffffff;
                cVar15 = '\x01';
                DAT_05292f74 = 0xffffffff;
                uVar34 = *puVar1;
                DAT_05292f60 = '\x01';
              }
              else {
                if (-1 < (long)DAT_05292f64) {
                  if ((uint *)((long)puVar1 + (ulong)DAT_05292f64._4_4_) != (uint *)0x0) {
                    uVar34 = *(uint *)((long)puVar1 + (ulong)DAT_05292f64._4_4_);
                    goto LAB_017cef80;
                  }
                  break;
                }
                if (DAT_05292f64._4_4_ != 0xffffffff) break;
              }
              puVar25 = (uint *)(ulong)uVar34;
              uVar34 = 0;
              if ((puVar25 == (uint *)0x0) || (uVar34 = 0, puVar1 == puVar25)) goto LAB_017cef80;
              lVar31 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar25)) != '\0') {
                lVar31 = 0x1c;
              }
              lVar31 = (long)puVar1 + (lVar31 - (long)puVar25);
              if (lVar31 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar25));
              DAT_05292f64 = CONCAT44(0xfffffffe,(int)DAT_05292f64);
              if (uVar21 == 0) break;
              piVar20 = (int *)(lVar31 + 4);
              while (piVar20[-1] != -0x343fe0f3) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_017cef7c;
              }
              iVar14 = 0;
              if (*piVar20 != -1) {
                iVar14 = *piVar20;
              }
              DAT_05292f64 = CONCAT44(iVar14,(int)DAT_05292f64);
              uVar34 = *puVar1;
              if (uVar34 == 0) break;
            } while( true );
          }
LAB_017cef7c:
          uVar34 = 0;
LAB_017cef80:
          if (((*puVar1 == 0) || (lVar31 = (long)puVar1 - (ulong)*puVar1, lVar31 == 0)) ||
             (*(char *)(lVar31 + 0xb) == '\0')) {
            if ((DAT_05293620 == '\x01') && (DAT_05293624 == uVar34)) {
              uVar17 = DAT_05293628;
              if (3 < DAT_05293628) goto LAB_017cf230;
            }
            else {
              if (((DAT_05293660 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_05293660), iVar14 != 0)) {
                DAT_05293630 = 0x400000000;
                DAT_05293638 = (undefined8 *)&DAT_05293640;
                __cxa_guard_release(&DAT_05293660);
              }
              if ((DAT_05293668 & 1) == 0) {
                DAT_05293668 = 1;
                if (((DAT_05293690 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_05293690), iVar14 != 0)) {
                  _DAT_0529366c = 0xffffffff00000000;
                  DAT_05293674 = 0xffffffff00000000;
                  DAT_0529367c = 0xffffffff00000000;
                  DAT_05293684 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05293690);
                }
                _DAT_0529366c = (ulong)~uVar4;
                iVar14 = (int)DAT_05293630;
                iVar18 = DAT_05293630._4_4_;
                if ((int)DAT_05293630 < DAT_05293630._4_4_) {
                  DAT_05293638[(int)DAT_05293630] = &DAT_0529366c;
                  iVar14 = (int)DAT_05293630 + 1;
                  DAT_05293630 = CONCAT44(DAT_05293630._4_4_,iVar14);
                  iVar18 = DAT_05293630._4_4_;
                }
                DAT_05293674 = CONCAT44(1,~uVar5);
                if (iVar14 < iVar18) {
                  DAT_05293638[iVar14] = &DAT_05293674;
                  iVar14 = (int)DAT_05293630 + 1;
                  DAT_05293630 = CONCAT44(DAT_05293630._4_4_,iVar14);
                  iVar18 = DAT_05293630._4_4_;
                }
                DAT_0529367c = CONCAT44(2,~uVar6);
                if (iVar14 < iVar18) {
                  DAT_05293638[iVar14] = &DAT_0529367c;
                  iVar14 = (int)DAT_05293630 + 1;
                  DAT_05293630 = CONCAT44(DAT_05293630._4_4_,iVar14);
                  iVar18 = DAT_05293630._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar2 = crc32b(uVar2,0xa2,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x83,0x4c11db7);
                uVar2 = crc32b(uVar2,0xbc,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x83,0x4c11db7);
                uVar17 = crc32b(uVar2,0x81,0x4c11db7);
                DAT_05293684 = CONCAT44(3,~uVar17);
                if (iVar14 < iVar18) {
                  DAT_05293638[iVar14] = &DAT_05293684;
                  iVar14 = (int)DAT_05293630 + 1;
                  DAT_05293630 = CONCAT44(DAT_05293630._4_4_,iVar14);
                }
                puVar29 = DAT_05293638;
                if (1 < iVar14) {
                  uVar23 = 0;
                  uVar17 = iVar14 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = (uint *)puVar29[uVar23];
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = (uint *)puVar29[uVar24];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        puVar29[uVar24] = puVar25;
                        puVar29[uVar21] = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar28 = puVar29 + uVar24 + 1;
                      do {
                        puVar25 = (uint *)*puVar28;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar28[1];
                          if (puVar25 != (uint *)0x0) goto LAB_017cf3b0;
LAB_017cf360:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar28[-1] = puVar25;
                          *puVar28 = puVar27;
                          puVar30 = (uint *)puVar28[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_017cf360;
LAB_017cf3b0:
                          if (puVar30 == (uint *)0x0) goto LAB_017cf360;
                          if (*puVar25 <= *puVar30) goto LAB_017cf360;
                          uVar17 = uVar22 + 1;
                          *puVar28 = puVar30;
                          puVar28[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar28 = puVar28 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = (uint *)puVar29[uVar17];
                    uVar23 = uVar17;
                    do {
                      puVar27 = (uint *)puVar29[uVar24 - 1];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        puVar29[uVar24 - 1] = puVar25;
                        puVar29[uVar24] = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_0529362c = '\x01';
              }
              else if (DAT_0529362c != '\x01') goto LAB_017cf230;
              if ((int)DAT_05293630 == 0) {
LAB_017cf230:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_05293630 < 2) {
                  uVar23 = 0;
                  puVar25 = (uint *)*DAT_05293638;
                  uVar17 = uVar23;
                  if (puVar25 != (uint *)0x0) goto LAB_017cf200;
joined_r0x017cf214:
                  if (uVar17 < 4) {
                    uVar17 = *(uint *)(DAT_05293638[uVar17] + 4);
                    if (uVar17 < 4) {
                      DAT_05293620 = '\x01';
                      DAT_05293624 = uVar34;
                      DAT_05293628 = uVar17;
                      goto LAB_017cf7b4;
                    }
                    goto LAB_017cf230;
                  }
                }
                else {
                  uVar23 = 0;
                  iVar14 = (int)DAT_05293630 + -1;
                  do {
                    iVar18 = iVar14 + uVar23;
                    if (iVar18 < 0 != SCARRY4(iVar14,uVar23)) {
                      iVar18 = iVar18 + 1;
                    }
                    uVar17 = iVar18 >> 1;
                    if ((uint *)DAT_05293638[(int)uVar17] == (uint *)0x0) goto joined_r0x017cf214;
                    uVar22 = *(uint *)DAT_05293638[(int)uVar17];
                    if (uVar22 == uVar34) goto joined_r0x017cf214;
                    if (uVar22 < uVar34) {
                      uVar23 = uVar17 + 1;
                    }
                    else {
                      iVar14 = uVar17 - 1;
                    }
                  } while ((int)uVar23 < iVar14);
                  puVar25 = (uint *)DAT_05293638[(int)uVar23];
                  uVar17 = uVar23;
                  if (puVar25 == (uint *)0x0) goto joined_r0x017cf214;
LAB_017cf200:
                  uVar17 = uVar23;
                  if (*puVar25 == uVar34) goto joined_r0x017cf214;
                }
                uVar17 = 0;
              }
            }
          }
          else {
            if ((DAT_052935a8 == '\x01') && (DAT_052935ac == uVar34)) {
              uVar17 = DAT_052935b0;
              if (3 < DAT_052935b0) goto LAB_017cf70c;
            }
            else {
              if (((DAT_052935e8 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_052935e8), iVar14 != 0)) {
                DAT_052935b8 = 0x400000000;
                DAT_052935c0 = &DAT_052935c8;
                __cxa_guard_release(&DAT_052935e8);
              }
              if ((DAT_052935f0 & 1) == 0) {
                DAT_052935f0 = 1;
                if (((DAT_05293618 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_05293618), iVar14 != 0)) {
                  _DAT_052935f4 = 0xffffffff00000000;
                  DAT_052935fc = 0xffffffff00000000;
                  DAT_05293604 = 0xffffffff00000000;
                  DAT_0529360c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05293618);
                }
                _DAT_052935f4 = (ulong)~uVar8;
                iVar14 = (int)DAT_052935b8;
                iVar18 = DAT_052935b8._4_4_;
                if ((int)DAT_052935b8 < DAT_052935b8._4_4_) {
                  *(undefined4 **)(DAT_052935c0 + (long)(int)DAT_052935b8 * 8) = &DAT_052935f4;
                  iVar14 = (int)DAT_052935b8 + 1;
                  DAT_052935b8 = CONCAT44(DAT_052935b8._4_4_,iVar14);
                  iVar18 = DAT_052935b8._4_4_;
                }
                DAT_052935fc = CONCAT44(1,~uVar9);
                if (iVar14 < iVar18) {
                  *(undefined8 **)(DAT_052935c0 + (long)iVar14 * 8) = &DAT_052935fc;
                  iVar14 = (int)DAT_052935b8 + 1;
                  DAT_052935b8 = CONCAT44(DAT_052935b8._4_4_,iVar14);
                  iVar18 = DAT_052935b8._4_4_;
                }
                DAT_05293604 = CONCAT44(2,~uVar10);
                if (iVar14 < iVar18) {
                  *(undefined8 **)(DAT_052935c0 + (long)iVar14 * 8) = &DAT_05293604;
                  iVar14 = (int)DAT_052935b8 + 1;
                  DAT_052935b8 = CONCAT44(DAT_052935b8._4_4_,iVar14);
                  iVar18 = DAT_052935b8._4_4_;
                }
                DAT_0529360c = CONCAT44(3,~uVar11);
                if (iVar14 < iVar18) {
                  *(undefined8 **)(DAT_052935c0 + (long)iVar14 * 8) = &DAT_0529360c;
                  iVar14 = (int)DAT_052935b8 + 1;
                  DAT_052935b8 = CONCAT44(DAT_052935b8._4_4_,iVar14);
                }
                puVar13 = DAT_052935c0;
                if (1 < iVar14) {
                  uVar23 = 0;
                  uVar17 = iVar14 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar23 * 8);
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        *(uint **)(puVar13 + uVar24 * 8) = puVar25;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar29 = (undefined8 *)(puVar13 + uVar24 * 8 + 8);
                      do {
                        puVar25 = (uint *)*puVar29;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar29[1];
                          if (puVar25 != (uint *)0x0) goto LAB_017cf6b0;
LAB_017cf660:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar29[-1] = puVar25;
                          *puVar29 = puVar27;
                          puVar30 = (uint *)puVar29[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_017cf660;
LAB_017cf6b0:
                          if (puVar30 == (uint *)0x0) goto LAB_017cf660;
                          if (*puVar25 <= *puVar30) goto LAB_017cf660;
                          uVar17 = uVar22 + 1;
                          *puVar29 = puVar30;
                          puVar29[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar17 * 8);
                    uVar23 = uVar17;
                    do {
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8 + -8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        *(uint **)(puVar13 + uVar24 * 8 + -8) = puVar25;
                        *(uint **)(puVar13 + uVar24 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_052935b4 = '\x01';
              }
              else if (DAT_052935b4 != '\x01') goto LAB_017cf70c;
              if ((int)DAT_052935b8 == 0) {
LAB_017cf70c:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_052935b8 < 2) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  iVar14 = (int)DAT_052935b8 + -1;
                  do {
                    iVar18 = iVar14 + uVar17;
                    if (iVar18 < 0 != SCARRY4(iVar14,uVar17)) {
                      iVar18 = iVar18 + 1;
                    }
                    uVar23 = iVar18 >> 1;
                    if (*(uint **)(DAT_052935c0 + (long)(int)uVar23 * 8) == (uint *)0x0)
                    goto joined_r0x017cf75c;
                    uVar22 = **(uint **)(DAT_052935c0 + (long)(int)uVar23 * 8);
                    if (uVar22 == uVar34) goto joined_r0x017cf75c;
                    if (uVar22 < uVar34) {
                      uVar17 = uVar23 + 1;
                    }
                    else {
                      iVar14 = uVar23 - 1;
                    }
                  } while ((int)uVar17 < iVar14);
                }
                uVar23 = uVar17;
                if ((*(uint **)(DAT_052935c0 + (long)(int)uVar17 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_052935c0 + (long)(int)uVar17 * 8) == uVar34)) {
joined_r0x017cf75c:
                  if (uVar23 < 4) {
                    uVar17 = *(uint *)(*(long *)(DAT_052935c0 + (ulong)uVar23 * 8) + 4);
                    if (uVar17 < 4) {
                      DAT_052935a8 = '\x01';
                      DAT_052935ac = uVar34;
                      DAT_052935b0 = uVar17;
                      goto LAB_017cf7ac;
                    }
                    goto LAB_017cf70c;
                  }
                }
                uVar17 = 0;
              }
            }
LAB_017cf7ac:
          }
LAB_017cf7b4:
          puVar25 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar25 != (uint *)0x0)) && (*puVar25 != 0)) &&
             ((uVar34 = puVar25[1], uVar34 != 0 && ((ulong)(ushort)puVar25[2] != 0)))) {
            lVar31 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar31 = 0x1c;
            }
            lVar31 = (long)puVar25 + lVar31 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar31 != 0) {
              uVar23 = 0;
              if ((ulong)uVar34 != 0) {
                uVar23 = (uint)((ulong)((long)puVar1 - lVar31) / (ulong)uVar34);
              }
              if (*puVar25 <= uVar23) {
                uVar23 = 0xffffffff;
              }
              if (uVar23 < DAT_05292ff8) {
                *(short *)(DAT_05293000 + (long)(int)uVar23 * 2) = (short)uVar17;
              }
            }
          }
        }
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar12);
  }
  return;
}

