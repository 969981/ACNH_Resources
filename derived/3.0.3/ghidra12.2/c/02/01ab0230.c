
void FUN_01ab0230(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  uint *puVar21;
  byte *__src;
  long lVar22;
  uint uVar23;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar23 = 0;
    puVar13 = (uint *)PTR_DAT_04bbff60;
    do {
      if (((uVar23 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar10 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar2 = (uint *)((ulong)(param_1[1] * uVar23 + (uint)(ushort)param_1[2] * 8 + iVar10) +
                         (long)param_1);
        if (puVar2 != (uint *)0x0) {
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bbff58;
            do {
              if (cVar8 == '\0') {
                puVar13[4] = 0xffffffff;
                puVar13[5] = 0xffffffff;
                puVar13[0] = 0xffffffff;
                puVar13[1] = 0xffffffff;
                puVar13[2] = 0xffffffff;
                puVar13[3] = 0xffffffff;
                cVar8 = '\x01';
                puVar13[6] = 0xffffffff;
                uVar7 = *puVar2;
                *PTR_DAT_04bbff58 = 1;
                puVar13 = (uint *)PTR_DAT_04bbff60;
              }
              else {
                uVar5 = *puVar13;
                if (-1 < (int)uVar5) {
                  if ((uint *)((long)puVar2 + (ulong)uVar5) != (uint *)0x0) {
                    uVar7 = *(uint *)((long)puVar2 + (ulong)uVar5);
                    goto LAB_01ab0400;
                  }
                  break;
                }
                puVar13 = (uint *)PTR_DAT_04bbff60;
                if (uVar5 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)uVar7;
              uVar7 = 0;
              PTR_DAT_04bbff60 = (undefined *)puVar13;
              if ((puVar19 == (uint *)0x0) || (uVar7 = 0, puVar2 == puVar19)) goto LAB_01ab0400;
              lVar22 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar19)) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar2 + (lVar22 - (long)puVar19);
              if (lVar22 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar19));
              *puVar13 = 0xfffffffe;
              if (uVar12 == 0) break;
              puVar19 = (uint *)(lVar22 + 4);
              while (puVar19[-1] != 0x90466afd) {
                puVar19 = puVar19 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01ab03fc;
              }
              uVar7 = 0;
              if (*puVar19 != 0xffffffff) {
                uVar7 = *puVar19;
              }
              *puVar13 = uVar7;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_01ab03fc:
          uVar7 = 0;
LAB_01ab0400:
          if (((*puVar2 == 0) || (lVar22 = (long)puVar2 - (ulong)*puVar2, lVar22 == 0)) ||
             (*(char *)(lVar22 + 0xb) == '\0')) {
            if ((DAT_05323e50 == '\x01') && (DAT_05323e54 == uVar7)) {
              uVar5 = DAT_05323e58;
              if (0xb < DAT_05323e58) goto LAB_01ab0818;
            }
            else {
              if (((DAT_05323ed0 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_05323ed0), iVar10 != 0)) {
                DAT_05323e60 = 0xc00000000;
                DAT_05323e68 = (undefined8 *)&DAT_05323e70;
                __cxa_guard_release(&DAT_05323ed0);
              }
              if ((DAT_05323ed8 & 1) == 0) {
                DAT_05323ed8 = 1;
                if (((DAT_05323f40 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_05323f40), iVar10 != 0)) {
                  DAT_05323edc = 0xffffffff00000000;
                  DAT_05323ee4 = 0xffffffff00000000;
                  DAT_05323eec = 0xffffffff00000000;
                  DAT_05323ef4 = 0xffffffff00000000;
                  DAT_05323efc = 0xffffffff00000000;
                  DAT_05323f04 = 0xffffffff00000000;
                  DAT_05323f0c = 0xffffffff00000000;
                  DAT_05323f14 = 0xffffffff00000000;
                  DAT_05323f1c = 0xffffffff00000000;
                  DAT_05323f24 = 0xffffffff00000000;
                  DAT_05323f2c = 0xffffffff00000000;
                  DAT_05323f34 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05323f40);
                }
                lVar22 = 0;
                do {
                  local_75 = 0;
                  __src = (&PTR_DAT_04a33f00)[lVar22];
                  if (local_174 != __src) {
                    lVar11 = 0;
                    do {
                      if (__src[lVar11] == 0) {
LAB_01ab0544:
                        iVar10 = (int)lVar11;
joined_r0x01ab0548:
                        if (0xff < iVar10) {
                          iVar10 = 0xff;
                        }
                        goto LAB_01ab0550;
                      }
                      if (__src[lVar11 + 1] == 0) {
                        lVar11 = lVar11 + 1;
                        goto LAB_01ab0544;
                      }
                      if (__src[lVar11 + 2] == 0) {
                        iVar10 = (int)lVar11 + 2;
                        goto joined_r0x01ab0548;
                      }
                      lVar11 = lVar11 + 3;
                    } while (lVar11 != 0x80001);
                    iVar10 = 0;
LAB_01ab0550:
                    memcpy(local_174,__src,(long)iVar10);
                    local_174[iVar10] = 0;
                  }
                  uVar5 = (uint)*__src;
                  if (*__src == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = 0xffffffff;
                    do {
                      __src = __src + 1;
                      uVar15 = crc32b(uVar15,uVar5,0x4c11db7);
                      uVar5 = (uint)*__src;
                    } while (uVar5 != 0);
                    uVar15 = ~uVar15;
                  }
                  *(uint *)(&DAT_05323edc + lVar22) = uVar15;
                  *(int *)((long)&DAT_05323edc + lVar22 * 8 + 4) = (int)lVar22;
                  iVar10 = (int)DAT_05323e60;
                  if ((int)DAT_05323e60 < DAT_05323e60._4_4_) {
                    DAT_05323e68[(int)DAT_05323e60] = &DAT_05323edc + lVar22;
                    iVar10 = (int)DAT_05323e60 + 1;
                    DAT_05323e60 = CONCAT44(DAT_05323e60._4_4_,iVar10);
                  }
                  puVar4 = DAT_05323e68;
                  lVar22 = lVar22 + 1;
                } while (lVar22 != 0xc);
                if (1 < iVar10) {
                  uVar15 = 0;
                  uVar5 = iVar10 - 1;
                  do {
                    if ((int)uVar5 <= (int)uVar15) break;
                    puVar13 = (uint *)puVar4[uVar15];
                    uVar12 = (ulong)uVar15;
                    if ((uVar5 - uVar15 & 1) == 0) {
                      uVar17 = uVar12;
                      puVar19 = puVar13;
                    }
                    else {
                      uVar17 = uVar12 + 1;
                      puVar19 = (uint *)puVar4[uVar17];
                      if (((puVar13 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar19 < *puVar13)) {
                        puVar4[uVar17] = puVar13;
                        puVar4[uVar12] = puVar19;
                        puVar19 = puVar13;
                      }
                    }
                    uVar18 = (ulong)uVar5;
                    uVar5 = uVar15;
                    if (~uVar12 + uVar18 != 0) {
                      puVar20 = puVar4 + uVar17 + 1;
                      do {
                        puVar13 = (uint *)*puVar20;
                        uVar16 = (uint)uVar17;
                        if (((puVar19 == (uint *)0x0) || (puVar13 == (uint *)0x0)) ||
                           (*puVar19 <= *puVar13)) {
                          puVar21 = (uint *)puVar20[1];
                          if (puVar13 != (uint *)0x0) goto LAB_01ab07d0;
LAB_01ab0780:
                          puVar13 = puVar21;
                        }
                        else {
                          puVar20[-1] = puVar13;
                          *puVar20 = puVar19;
                          puVar21 = (uint *)puVar20[1];
                          puVar13 = puVar19;
                          uVar5 = uVar16;
                          if (puVar19 == (uint *)0x0) goto LAB_01ab0780;
LAB_01ab07d0:
                          if (puVar21 == (uint *)0x0) goto LAB_01ab0780;
                          if (*puVar13 <= *puVar21) goto LAB_01ab0780;
                          uVar5 = uVar16 + 1;
                          *puVar20 = puVar21;
                          puVar20[1] = puVar13;
                        }
                        uVar17 = uVar17 + 2;
                        puVar20 = puVar20 + 2;
                        puVar19 = puVar13;
                      } while (uVar18 != uVar17);
                    }
                    if ((int)uVar5 <= (int)uVar15) break;
                    uVar17 = (ulong)uVar5;
                    puVar13 = (uint *)puVar4[uVar5];
                    uVar15 = uVar5;
                    do {
                      puVar19 = (uint *)puVar4[uVar17 - 1];
                      if (((puVar13 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar13 < *puVar19)) {
                        uVar15 = (uint)uVar17;
                        puVar4[uVar17 - 1] = puVar13;
                        puVar4[uVar17] = puVar19;
                        puVar19 = puVar13;
                      }
                      uVar17 = uVar17 - 1;
                      puVar13 = puVar19;
                    } while ((long)uVar12 < (long)uVar17);
                  } while (uVar15 != uVar5);
                }
                DAT_05323e5c = '\x01';
              }
              else if (DAT_05323e5c != '\x01') goto LAB_01ab0818;
              if ((int)DAT_05323e60 == 0) goto LAB_01ab0818;
              if ((int)DAT_05323e60 < 2) {
                uVar5 = 0;
                puVar13 = (uint *)*DAT_05323e68;
                if (puVar13 != (uint *)0x0) goto LAB_01ab0670;
LAB_01ab07fc:
                if (uVar5 < 0xc) {
LAB_01ab0808:
                  uVar5 = *(uint *)(DAT_05323e68[uVar5] + 4);
                  if (uVar5 < 0xc) {
                    DAT_05323e50 = '\x01';
                    DAT_05323e54 = uVar7;
                    DAT_05323e58 = uVar5;
                    goto LAB_01ab081c;
                  }
                }
              }
              else {
                uVar5 = 0;
                iVar10 = (int)DAT_05323e60 + -1;
                do {
                  iVar1 = iVar10 + uVar5;
                  if (iVar1 < 0 != SCARRY4(iVar10,uVar5)) {
                    iVar1 = iVar1 + 1;
                  }
                  uVar15 = iVar1 >> 1;
                  if ((uint *)DAT_05323e68[(int)uVar15] == (uint *)0x0) goto LAB_01ab0680;
                  uVar16 = *(uint *)DAT_05323e68[(int)uVar15];
                  if (uVar16 == uVar7) goto LAB_01ab0680;
                  if (uVar16 < uVar7) {
                    uVar5 = uVar15 + 1;
                  }
                  else {
                    iVar10 = uVar15 - 1;
                  }
                } while ((int)uVar5 < iVar10);
                puVar13 = (uint *)DAT_05323e68[(int)uVar5];
                if (puVar13 == (uint *)0x0) goto LAB_01ab07fc;
LAB_01ab0670:
                uVar15 = uVar5;
                if (*puVar13 == uVar7) {
LAB_01ab0680:
                  uVar5 = uVar15;
                  if (0xb < uVar15) goto LAB_01ab0818;
                  goto LAB_01ab0808;
                }
              }
LAB_01ab0818:
              uVar5 = 0;
            }
          }
          else {
            uVar5 = FUN_01ab0cc0(uVar7,0);
            if (0xb < uVar5) {
              uVar5 = 0;
            }
          }
LAB_01ab081c:
          puVar13 = (uint *)PTR_DAT_04bbff60;
          lVar22 = 0xc;
          puVar19 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar19 != (uint *)0x0)) && (*puVar19 != 0)) &&
             ((uVar7 = puVar19[1], uVar7 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
            lVar11 = lVar22;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar19 + lVar11 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar11 != 0) {
              uVar15 = 0;
              if ((ulong)uVar7 != 0) {
                uVar15 = (uint)((ulong)((long)puVar2 - lVar11) / (ulong)uVar7);
              }
              if (*puVar19 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < *(uint *)PTR_DAT_04bc02f8) {
                *(short *)(*(long *)(PTR_DAT_04bc02f8 + 8) + (long)(int)uVar15 * 2) = (short)uVar5;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bbff58;
            do {
              if (cVar8 == '\0') {
                *(undefined8 *)((long)puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)((long)puVar13 + 8) = 0xffffffffffffffff;
                cVar8 = '\x01';
                *(undefined4 *)((long)puVar13 + 0x18) = 0xffffffff;
                uVar7 = *puVar2;
                *PTR_DAT_04bbff58 = 1;
              }
              else {
                uVar5 = *(uint *)((long)puVar13 + 4);
                if (-1 < (int)uVar5) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar5) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar5);
                    goto LAB_01ab09a0;
                  }
                  break;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar19 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar19)) goto LAB_01ab09a0;
              lVar11 = lVar22;
              if (*(char *)((long)puVar2 + (10 - (long)puVar19)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar2 + (lVar11 - (long)puVar19);
              if (lVar11 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar19));
              *(undefined4 *)((long)puVar13 + 4) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar14 = (int *)(lVar11 + 4);
              while (piVar14[-1] != -0x594e5803) {
                piVar14 = piVar14 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01ab099c;
              }
              iVar10 = 0;
              if (*piVar14 != -1) {
                iVar10 = *piVar14;
              }
              *(int *)((long)puVar13 + 4) = iVar10;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_01ab099c:
          uVar6 = 0;
LAB_01ab09a0:
          if (((*puVar2 == 0) || (lVar11 = (long)puVar2 - (ulong)*puVar2, lVar11 == 0)) ||
             (*(char *)(lVar11 + 0xb) == '\0')) {
            uVar7 = FUN_01a85c60(uVar6);
            if (0xe < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_01a85690(uVar6,0);
            if (0xe < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar19 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar19 != (uint *)0x0)) &&
             ((*puVar19 != 0 &&
              ((uVar7 = puVar19[1], uVar7 != 0 && ((ulong)(ushort)puVar19[2] != 0)))))) {
            lVar11 = lVar22;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar19 + lVar11 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar11 != 0) {
              uVar5 = 0;
              if ((ulong)uVar7 != 0) {
                uVar5 = (uint)((ulong)((long)puVar2 - lVar11) / (ulong)uVar7);
              }
              if (*puVar19 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if (uVar5 < *(uint *)PTR_DAT_04bc0300) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0300 + 8) + (long)(int)uVar5 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bbff58;
            do {
              if (cVar8 == '\0') {
                *(undefined8 *)((long)puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)((long)puVar13 + 8) = 0xffffffffffffffff;
                cVar8 = '\x01';
                *(undefined4 *)((long)puVar13 + 0x18) = 0xffffffff;
                uVar7 = *puVar2;
                *PTR_DAT_04bbff58 = 1;
              }
              else {
                uVar5 = *(uint *)((long)puVar13 + 8);
                if (-1 < (int)uVar5) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar5) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar5);
                    goto LAB_01ab0b50;
                  }
                  break;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar19 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar19)) goto LAB_01ab0b50;
              lVar11 = lVar22;
              if (*(char *)((long)puVar2 + (10 - (long)puVar19)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar2 + (lVar11 - (long)puVar19);
              if (lVar11 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar19));
              *(undefined4 *)((long)puVar13 + 8) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar14 = (int *)(lVar11 + 4);
              while (piVar14[-1] != -0x4833327c) {
                piVar14 = piVar14 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01ab0b4c;
              }
              iVar10 = 0;
              if (*piVar14 != -1) {
                iVar10 = *piVar14;
              }
              *(int *)((long)puVar13 + 8) = iVar10;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_01ab0b4c:
          uVar6 = 0;
LAB_01ab0b50:
          if (((*puVar2 == 0) || (lVar11 = (long)puVar2 - (ulong)*puVar2, lVar11 == 0)) ||
             (*(char *)(lVar11 + 0xb) == '\0')) {
            uVar7 = FUN_01a85c60(uVar6);
            if (0xe < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_01a85690(uVar6,0);
            if (0xe < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar19 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar19 != (uint *)0x0)) &&
             ((*puVar19 != 0 &&
              ((uVar7 = puVar19[1], uVar7 != 0 && ((ulong)(ushort)puVar19[2] != 0)))))) {
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar22 = 0x1c;
            }
            lVar22 = (long)puVar19 + lVar22 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar22 != 0) {
              uVar5 = 0;
              if ((ulong)uVar7 != 0) {
                uVar5 = (uint)((ulong)((long)puVar2 - lVar22) / (ulong)uVar7);
              }
              if (*puVar19 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if (uVar5 < *(uint *)PTR_DAT_04bc0308) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0308 + 8) + (long)(int)uVar5 * 2) = uVar9;
              }
            }
          }
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar3);
  }
  return;
}

