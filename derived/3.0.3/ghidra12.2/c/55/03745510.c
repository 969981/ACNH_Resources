
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03745510(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  ulong uVar21;
  uint *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  
  if ((param_1 != (uint *)0x0) && (uVar8 = *param_1, uVar8 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe4,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar18 = 0;
    uVar2 = crc32b(uVar2,0xad,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x43,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa4,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar4 = crc32b(uVar2,0xae,0x4c11db7);
    uVar2 = crc32b(uVar3,0x6e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar5 = crc32b(uVar2,0x72,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4c,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0x66,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar6 = crc32b(uVar2,0x74,0x4c11db7);
    uVar2 = crc32b(uVar3,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0x67,0x4c11db7);
    uVar2 = crc32b(uVar2,0x68,0x4c11db7);
    uVar7 = crc32b(uVar2,0x74,0x4c11db7);
    do {
      if (((uVar18 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar11 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar18 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar23 = *puVar1;
          if (uVar23 != 0) {
            cVar15 = DAT_05abc380;
            do {
              if (cVar15 == '\0') {
                DAT_05abc384 = 0xffffffffffffffff;
                DAT_05abc38c = 0xffffffffffffffff;
                cVar15 = '\x01';
                DAT_05abc3f4 = 0xffffffffffffffff;
                DAT_05abc380 = '\x01';
                DAT_05abc394 = 0xffffffffffffffff;
                DAT_05abc39c = 0xffffffffffffffff;
                DAT_05abc3a4 = 0xffffffffffffffff;
                DAT_05abc3ac = 0xffffffffffffffff;
                DAT_05abc3b4 = 0xffffffffffffffff;
                DAT_05abc3bc = 0xffffffffffffffff;
                DAT_05abc3c4 = 0xffffffffffffffff;
                DAT_05abc3cc = 0xffffffffffffffff;
                DAT_05abc3d4 = 0xffffffffffffffff;
                DAT_05abc3dc = 0xffffffffffffffff;
                DAT_05abc3e4 = 0xffffffffffffffff;
                DAT_05abc3ec = 0xffffffffffffffff;
                uVar23 = *puVar1;
              }
              else {
                if (-1 < (int)DAT_05abc384) {
                  puVar14 = (uint *)((long)puVar1 + (DAT_05abc384 & 0xffffffff));
                  if (puVar14 != (uint *)0x0) {
                    uVar23 = *puVar14;
                    goto LAB_03745770;
                  }
                  break;
                }
                if ((int)DAT_05abc384 != -1) break;
              }
              puVar14 = (uint *)(ulong)uVar23;
              uVar23 = 0;
              if ((puVar14 == (uint *)0x0) || (uVar23 = 0, puVar1 == puVar14)) goto LAB_03745770;
              lVar9 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar14)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar1 + (lVar9 - (long)puVar14);
              if (lVar9 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar14));
              DAT_05abc384._4_4_ = (undefined4)(DAT_05abc384 >> 0x20);
              DAT_05abc384 = CONCAT44(DAT_05abc384._4_4_,0xfffffffe);
              if (uVar13 == 0) break;
              piVar20 = (int *)(lVar9 + 4);
              while (piVar20[-1] != 0x721fe9fc) {
                piVar20 = piVar20 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_0374576c;
              }
              iVar11 = 0;
              if (*piVar20 != -1) {
                iVar11 = *piVar20;
              }
              DAT_05abc384 = CONCAT44(DAT_05abc384._4_4_,iVar11);
              uVar23 = *puVar1;
              if (uVar23 == 0) break;
            } while( true );
          }
LAB_0374576c:
          uVar23 = 0;
LAB_03745770:
          if (((*puVar1 == 0) || (lVar9 = (long)puVar1 - (ulong)*puVar1, lVar9 == 0)) ||
             (*(char *)(lVar9 + 0xb) == '\0')) {
            if ((DAT_05abc488 == '\x01') && (DAT_05abc48c == uVar23)) {
              uVar16 = DAT_05abc490;
              if (2 < DAT_05abc490) goto LAB_03745b78;
            }
            else {
              if (((DAT_05abc4c0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05abc4c0), iVar11 != 0)) {
                DAT_05abc498 = 0x300000000;
                DAT_05abc4a0 = (undefined8 *)&DAT_05abc4a8;
                __cxa_guard_release(&DAT_05abc4c0);
              }
              if ((DAT_05abc4c8 & 1) == 0) {
                DAT_05abc4c8 = 1;
                if (((DAT_05abc4e8 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05abc4e8), iVar11 != 0)) {
                  DAT_05abc4dc = 0xffffffff00000000;
                  _DAT_05abc4cc = 0xffffffff00000000;
                  DAT_05abc4d4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05abc4e8);
                }
                _DAT_05abc4cc = (ulong)~uVar4;
                iVar11 = (int)DAT_05abc498;
                iVar17 = DAT_05abc498._4_4_;
                if ((int)DAT_05abc498 < DAT_05abc498._4_4_) {
                  DAT_05abc4a0[(int)DAT_05abc498] = &DAT_05abc4cc;
                  iVar11 = (int)DAT_05abc498 + 1;
                  DAT_05abc498 = CONCAT44(DAT_05abc498._4_4_,iVar11);
                  iVar17 = DAT_05abc498._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar2,0xb7,0x4c11db7);
                uVar16 = crc32b(uVar3,0xa6,0x4c11db7);
                DAT_05abc4d4 = CONCAT44(1,~uVar16);
                if (iVar11 < iVar17) {
                  DAT_05abc4a0[iVar11] = &DAT_05abc4d4;
                  iVar11 = (int)DAT_05abc498 + 1;
                  DAT_05abc498 = CONCAT44(DAT_05abc498._4_4_,iVar11);
                  iVar17 = DAT_05abc498._4_4_;
                }
                uVar2 = crc32b(uVar2,0x8f,0x4c11db7);
                uVar16 = crc32b(uVar2,0xb3,0x4c11db7);
                DAT_05abc4dc = CONCAT44(2,~uVar16);
                if (iVar11 < iVar17) {
                  DAT_05abc4a0[iVar11] = &DAT_05abc4dc;
                  iVar11 = (int)DAT_05abc498 + 1;
                  DAT_05abc498 = CONCAT44(DAT_05abc498._4_4_,iVar11);
                }
                puVar26 = DAT_05abc4a0;
                if (1 < iVar11) {
                  uVar19 = 0;
                  uVar16 = iVar11 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar19) break;
                    puVar14 = (uint *)puVar26[uVar19];
                    uVar13 = (ulong)uVar19;
                    if ((uVar16 - uVar19 & 1) == 0) {
                      uVar21 = uVar13;
                      puVar25 = puVar14;
                    }
                    else {
                      uVar21 = uVar13 + 1;
                      puVar25 = (uint *)puVar26[uVar21];
                      if (((puVar14 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar14)) {
                        puVar26[uVar21] = puVar14;
                        puVar26[uVar13] = puVar25;
                        puVar25 = puVar14;
                      }
                    }
                    uVar27 = (ulong)uVar16;
                    uVar16 = uVar19;
                    if (~uVar13 + uVar27 != 0) {
                      puVar24 = puVar26 + uVar21 + 1;
                      do {
                        puVar14 = (uint *)*puVar24;
                        uVar12 = (uint)uVar21;
                        if (((puVar25 == (uint *)0x0) || (puVar14 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar14)) {
                          puVar22 = (uint *)puVar24[1];
                          if (puVar14 != (uint *)0x0) goto LAB_03745b30;
LAB_03745ae0:
                          puVar14 = puVar22;
                        }
                        else {
                          puVar24[-1] = puVar14;
                          *puVar24 = puVar25;
                          puVar22 = (uint *)puVar24[1];
                          puVar14 = puVar25;
                          uVar16 = uVar12;
                          if (puVar25 == (uint *)0x0) goto LAB_03745ae0;
LAB_03745b30:
                          if ((puVar22 == (uint *)0x0) || (*puVar14 <= *puVar22)) goto LAB_03745ae0;
                          uVar16 = uVar12 + 1;
                          *puVar24 = puVar22;
                          puVar24[1] = puVar14;
                        }
                        uVar21 = uVar21 + 2;
                        puVar24 = puVar24 + 2;
                        puVar25 = puVar14;
                      } while (uVar27 != uVar21);
                    }
                    if ((int)uVar16 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar16;
                    puVar14 = (uint *)puVar26[uVar16];
                    uVar19 = uVar16;
                    do {
                      puVar25 = (uint *)puVar26[uVar21 - 1];
                      if (((puVar14 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar14 < *puVar25)) {
                        uVar19 = (uint)uVar21;
                        puVar26[uVar21 - 1] = puVar14;
                        puVar26[uVar21] = puVar25;
                        puVar25 = puVar14;
                      }
                      uVar21 = uVar21 - 1;
                      puVar14 = puVar25;
                    } while ((long)uVar13 < (long)uVar21);
                  } while (uVar19 != uVar16);
                }
                DAT_05abc494 = '\x01';
              }
              else if (DAT_05abc494 != '\x01') goto LAB_03745b78;
              if ((int)DAT_05abc498 == 0) goto LAB_03745b78;
              if ((int)DAT_05abc498 < 2) {
                uVar16 = 0;
                puVar14 = (uint *)*DAT_05abc4a0;
                if (puVar14 != (uint *)0x0) goto LAB_037459a0;
LAB_03745b5c:
                uVar19 = uVar16;
                if (uVar16 < 3) {
LAB_03745b68:
                  uVar16 = *(uint *)(DAT_05abc4a0[uVar19] + 4);
                  if (uVar16 < 3) {
                    DAT_05abc488 = '\x01';
                    DAT_05abc48c = uVar23;
                    DAT_05abc490 = uVar16;
                    goto LAB_03745eb0;
                  }
                }
              }
              else {
                uVar16 = 0;
                iVar11 = (int)DAT_05abc498 + -1;
                do {
                  iVar17 = iVar11 + uVar16;
                  if (iVar17 < 0 != SCARRY4(iVar11,uVar16)) {
                    iVar17 = iVar17 + 1;
                  }
                  uVar19 = iVar17 >> 1;
                  if ((uint *)DAT_05abc4a0[(int)uVar19] == (uint *)0x0) goto LAB_037459b0;
                  uVar12 = *(uint *)DAT_05abc4a0[(int)uVar19];
                  if (uVar12 == uVar23) goto LAB_037459b0;
                  if (uVar12 < uVar23) {
                    uVar16 = uVar19 + 1;
                  }
                  else {
                    iVar11 = uVar19 - 1;
                  }
                } while ((int)uVar16 < iVar11);
                puVar14 = (uint *)DAT_05abc4a0[(int)uVar16];
                if (puVar14 == (uint *)0x0) goto LAB_03745b5c;
LAB_037459a0:
                uVar19 = uVar16;
                if (*puVar14 == uVar23) {
LAB_037459b0:
                  if (2 < uVar19) goto LAB_03745b78;
                  goto LAB_03745b68;
                }
              }
LAB_03745b78:
              uVar16 = 0;
            }
          }
          else {
            if ((DAT_05abc420 == '\x01') && (DAT_05abc424 == uVar23)) {
              uVar16 = DAT_05abc428;
              if (2 < DAT_05abc428) goto LAB_03745ea4;
            }
            else {
              if (((DAT_05abc458 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05abc458), iVar11 != 0)) {
                DAT_05abc430 = 0x300000000;
                DAT_05abc438 = &DAT_05abc440;
                __cxa_guard_release(&DAT_05abc458);
              }
              if ((DAT_05abc460 & 1) == 0) {
                DAT_05abc460 = 1;
                if (((DAT_05abc480 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05abc480), iVar11 != 0)) {
                  DAT_05abc474 = 0xffffffff00000000;
                  _DAT_05abc464 = 0xffffffff00000000;
                  DAT_05abc46c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05abc480);
                }
                _DAT_05abc464 = (ulong)~uVar5;
                iVar11 = (int)DAT_05abc430;
                iVar17 = DAT_05abc430._4_4_;
                if ((int)DAT_05abc430 < DAT_05abc430._4_4_) {
                  *(undefined4 **)(DAT_05abc438 + (long)(int)DAT_05abc430 * 8) = &DAT_05abc464;
                  iVar11 = (int)DAT_05abc430 + 1;
                  DAT_05abc430 = CONCAT44(DAT_05abc430._4_4_,iVar11);
                  iVar17 = DAT_05abc430._4_4_;
                }
                DAT_05abc46c = CONCAT44(1,~uVar6);
                if (iVar11 < iVar17) {
                  *(undefined8 **)(DAT_05abc438 + (long)iVar11 * 8) = &DAT_05abc46c;
                  iVar11 = (int)DAT_05abc430 + 1;
                  DAT_05abc430 = CONCAT44(DAT_05abc430._4_4_,iVar11);
                  iVar17 = DAT_05abc430._4_4_;
                }
                DAT_05abc474 = CONCAT44(2,~uVar7);
                puVar10 = DAT_05abc438;
                if (iVar11 < iVar17) {
                  *(undefined8 **)(DAT_05abc438 + (long)iVar11 * 8) = &DAT_05abc474;
                  iVar11 = (int)DAT_05abc430 + 1;
                  DAT_05abc430 = CONCAT44(DAT_05abc430._4_4_,iVar11);
                  puVar10 = DAT_05abc438;
                }
                DAT_05abc438 = puVar10;
                if (1 < iVar11) {
                  uVar19 = 0;
                  uVar16 = iVar11 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar19) break;
                    puVar14 = *(uint **)(puVar10 + (ulong)uVar19 * 8);
                    uVar13 = (ulong)uVar19;
                    if ((uVar16 - uVar19 & 1) == 0) {
                      puVar25 = puVar14;
                      uVar21 = uVar13;
                    }
                    else {
                      uVar21 = uVar13 + 1;
                      puVar25 = *(uint **)(puVar10 + uVar21 * 8);
                      if (((puVar14 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar14)) {
                        *(uint **)(puVar10 + uVar21 * 8) = puVar14;
                        *(uint **)(puVar10 + uVar13 * 8) = puVar25;
                        puVar25 = puVar14;
                      }
                    }
                    uVar27 = (ulong)uVar16;
                    uVar16 = uVar19;
                    if (~uVar13 + uVar27 != 0) {
                      puVar26 = (undefined8 *)(puVar10 + uVar21 * 8 + 8);
                      do {
                        puVar14 = (uint *)*puVar26;
                        uVar12 = (uint)uVar21;
                        if (((puVar25 == (uint *)0x0) || (puVar14 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar14)) {
                          puVar22 = (uint *)puVar26[1];
                          if (puVar14 != (uint *)0x0) goto LAB_03745e20;
LAB_03745dd0:
                          puVar14 = puVar22;
                        }
                        else {
                          puVar26[-1] = puVar14;
                          *puVar26 = puVar25;
                          puVar22 = (uint *)puVar26[1];
                          puVar14 = puVar25;
                          uVar16 = uVar12;
                          if (puVar25 == (uint *)0x0) goto LAB_03745dd0;
LAB_03745e20:
                          if (puVar22 == (uint *)0x0) goto LAB_03745dd0;
                          if (*puVar14 <= *puVar22) goto LAB_03745dd0;
                          uVar16 = uVar12 + 1;
                          *puVar26 = puVar22;
                          puVar26[1] = puVar14;
                        }
                        uVar21 = uVar21 + 2;
                        puVar26 = puVar26 + 2;
                        puVar25 = puVar14;
                      } while (uVar27 != uVar21);
                    }
                    if ((int)uVar16 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar16;
                    puVar14 = *(uint **)(puVar10 + (ulong)uVar16 * 8);
                    uVar19 = uVar16;
                    do {
                      puVar25 = *(uint **)(puVar10 + uVar21 * 8 + -8);
                      if (((puVar14 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar14 < *puVar25)) {
                        uVar19 = (uint)uVar21;
                        *(uint **)(puVar10 + uVar21 * 8 + -8) = puVar14;
                        *(uint **)(puVar10 + uVar21 * 8) = puVar25;
                        puVar25 = puVar14;
                      }
                      uVar21 = uVar21 - 1;
                      puVar14 = puVar25;
                    } while ((long)uVar13 < (long)uVar21);
                  } while (uVar19 != uVar16);
                }
                DAT_05abc42c = '\x01';
              }
              else if (DAT_05abc42c != '\x01') goto LAB_03745ea4;
              if ((int)DAT_05abc430 != 0) {
                if ((int)DAT_05abc430 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar11 = (int)DAT_05abc430 + -1;
                  do {
                    iVar17 = iVar11 + uVar16;
                    if (iVar17 < 0 != SCARRY4(iVar11,uVar16)) {
                      iVar17 = iVar17 + 1;
                    }
                    uVar19 = iVar17 >> 1;
                    if (*(uint **)(DAT_05abc438 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x03745e90;
                    uVar12 = **(uint **)(DAT_05abc438 + (long)(int)uVar19 * 8);
                    if (uVar12 == uVar23) goto joined_r0x03745e90;
                    if (uVar12 < uVar23) {
                      uVar16 = uVar19 + 1;
                    }
                    else {
                      iVar11 = uVar19 - 1;
                    }
                  } while ((int)uVar16 < iVar11);
                }
                uVar19 = uVar16;
                if ((*(uint **)(DAT_05abc438 + (long)(int)uVar16 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05abc438 + (long)(int)uVar16 * 8) == uVar23)) {
joined_r0x03745e90:
                  if ((uVar19 < 3) &&
                     (uVar16 = *(uint *)(*(long *)(DAT_05abc438 + (ulong)uVar19 * 8) + 4),
                     uVar16 < 3)) {
                    DAT_05abc420 = '\x01';
                    DAT_05abc424 = uVar23;
                    DAT_05abc428 = uVar16;
                    goto LAB_03745ea8;
                  }
                }
              }
LAB_03745ea4:
              uVar16 = 0;
            }
LAB_03745ea8:
          }
LAB_03745eb0:
          puVar14 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar14 != (uint *)0x0)) && (*puVar14 != 0)) &&
             ((uVar23 = puVar14[1], uVar23 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar9 != 0) {
              uVar19 = 0;
              if ((ulong)uVar23 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar9) / (ulong)uVar23);
              }
              if (*puVar14 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < DAT_05abc400) {
                *(short *)(DAT_05abc408 + (long)(int)uVar19 * 2) = (short)uVar16;
              }
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar8);
  }
  return;
}

