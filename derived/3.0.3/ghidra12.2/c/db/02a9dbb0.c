
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a9dbb0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  uint *puVar16;
  long *plVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  char *pcVar23;
  uint uVar24;
  undefined8 *puVar25;
  
  if ((param_1 != (uint *)0x0) && (uVar4 = *param_1, uVar4 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x82,0x4c11db7);
    uVar12 = 0;
    uVar2 = crc32b(uVar2,0xbf,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x82,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa4,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x83,0x4c11db7);
    uVar2 = crc32b(uVar2,0x97,0x4c11db7);
    uVar3 = crc32b(uVar2,0x41,0x4c11db7);
    pcVar23 = PTR_DAT_04bb5bc8;
    puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
    do {
      if (((uVar12 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar7 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar12 + (uint)(ushort)param_1[2] * 8 + iVar7) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar24 = *puVar1;
          if (uVar24 != 0) {
            cVar8 = *pcVar23;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *puVar25 = 0xffffffffffffffff;
                puVar25[1] = 0xffffffffffffffff;
                *pcVar23 = '\x01';
                puVar25[8] = 0xffffffffffffffff;
                *(undefined4 *)(puVar25 + 9) = 0xffffffff;
                puVar25[2] = 0xffffffffffffffff;
                puVar25[3] = 0xffffffffffffffff;
                puVar25[4] = 0xffffffffffffffff;
                puVar25[5] = 0xffffffffffffffff;
                puVar25[6] = 0xffffffffffffffff;
                puVar25[7] = 0xffffffffffffffff;
                uVar24 = *puVar1;
              }
              else {
                uVar22 = *(uint *)(puVar25 + 1);
                if (-1 < (int)uVar22) {
                  if ((uint *)((long)puVar1 + (ulong)uVar22) != (uint *)0x0) {
                    uVar24 = *(uint *)((long)puVar1 + (ulong)uVar22);
                    goto LAB_02a9dda0;
                  }
                  break;
                }
                if (uVar22 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)uVar24;
              uVar24 = 0;
              if ((puVar19 == (uint *)0x0) || (uVar24 = 0, puVar1 == puVar19)) goto LAB_02a9dda0;
              lVar5 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar19)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar1 + (lVar5 - (long)puVar19);
              if (lVar5 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar19));
              *(undefined4 *)(puVar25 + 1) = 0xfffffffe;
              if (uVar21 == 0) break;
              piVar14 = (int *)(lVar5 + 4);
              while (piVar14[-1] != -0x2269e85e) {
                piVar14 = piVar14 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_02a9dd9c;
              }
              iVar7 = 0;
              if (*piVar14 != -1) {
                iVar7 = *piVar14;
              }
              *(int *)(puVar25 + 1) = iVar7;
              uVar24 = *puVar1;
              if (uVar24 == 0) break;
            } while( true );
          }
LAB_02a9dd9c:
          uVar24 = 0;
LAB_02a9dda0:
          if (((*puVar1 == 0) || (lVar5 = (long)puVar1 - (ulong)*puVar1, lVar5 == 0)) ||
             (*(char *)(lVar5 + 0xb) == '\0')) {
            if ((DAT_0560b1e0 != '\x01') || (DAT_0560b1e4 != uVar24)) {
              if ((DAT_0560b208 & 1) == 0) {
                iVar7 = __cxa_guard_acquire(&DAT_0560b208);
                pcVar23 = PTR_DAT_04bb5bc8;
                puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                if (iVar7 != 0) {
                  DAT_0560b1f0 = 0x100000000;
                  DAT_0560b1f8 = (long *)&DAT_0560b200;
                  __cxa_guard_release(&DAT_0560b208);
                  puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                }
              }
              if ((DAT_0560b210 & 1) == 0) {
                DAT_0560b210 = 1;
                if ((DAT_0560b220 & 1) == 0) {
                  iVar7 = __cxa_guard_acquire(&DAT_0560b220);
                  pcVar23 = PTR_DAT_04bb5bc8;
                  puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                  if (iVar7 != 0) {
                    _DAT_0560b214 = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_0560b220);
                    puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                  }
                }
                _DAT_0560b214 = (ulong)~uVar3;
                iVar7 = (int)DAT_0560b1f0;
                if ((int)DAT_0560b1f0 < DAT_0560b1f0._4_4_) {
                  DAT_0560b1f8[(int)DAT_0560b1f0] = (long)&DAT_0560b214;
                  iVar7 = (int)DAT_0560b1f0 + 1;
                  DAT_0560b1f0 = CONCAT44(DAT_0560b1f0._4_4_,iVar7);
                }
                plVar6 = DAT_0560b1f8;
                if (1 < iVar7) {
                  uVar9 = 0;
                  uVar22 = iVar7 - 1;
                  do {
                    if ((int)uVar22 <= (int)uVar9) break;
                    puVar19 = (uint *)plVar6[uVar9];
                    uVar21 = (ulong)uVar9;
                    if ((uVar22 - uVar9 & 1) == 0) {
                      puVar16 = puVar19;
                      uVar10 = uVar21;
                    }
                    else {
                      uVar10 = uVar21 + 1;
                      puVar16 = (uint *)plVar6[uVar10];
                      if (((puVar19 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar16 < *puVar19)) {
                        plVar6[uVar10] = (long)puVar19;
                        plVar6[uVar21] = (long)puVar16;
                        puVar16 = puVar19;
                      }
                    }
                    uVar15 = (ulong)uVar22;
                    uVar22 = uVar9;
                    if (~uVar21 + uVar15 != 0) {
                      plVar17 = plVar6 + uVar10 + 1;
                      do {
                        puVar19 = (uint *)*plVar17;
                        uVar20 = (uint)uVar10;
                        if (((puVar16 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                           (*puVar16 <= *puVar19)) {
                          puVar18 = (uint *)plVar17[1];
                          if (puVar19 != (uint *)0x0) goto LAB_02a9e060;
LAB_02a9e010:
                          puVar19 = puVar18;
                        }
                        else {
                          plVar17[-1] = (long)puVar19;
                          *plVar17 = (long)puVar16;
                          puVar18 = (uint *)plVar17[1];
                          puVar19 = puVar16;
                          uVar22 = uVar20;
                          if (puVar16 == (uint *)0x0) goto LAB_02a9e010;
LAB_02a9e060:
                          if (puVar18 == (uint *)0x0) goto LAB_02a9e010;
                          if (*puVar19 <= *puVar18) goto LAB_02a9e010;
                          uVar22 = uVar20 + 1;
                          *plVar17 = (long)puVar18;
                          plVar17[1] = (long)puVar19;
                        }
                        uVar10 = uVar10 + 2;
                        plVar17 = plVar17 + 2;
                        puVar16 = puVar19;
                      } while (uVar15 != uVar10);
                    }
                    if ((int)uVar22 <= (int)uVar9) break;
                    uVar10 = (ulong)uVar22;
                    puVar19 = (uint *)plVar6[uVar22];
                    uVar9 = uVar22;
                    do {
                      puVar16 = (uint *)plVar6[uVar10 - 1];
                      if (((puVar19 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar19 < *puVar16)) {
                        uVar9 = (uint)uVar10;
                        plVar6[uVar10 - 1] = (long)puVar19;
                        plVar6[uVar10] = (long)puVar16;
                        puVar16 = puVar19;
                      }
                      uVar10 = uVar10 - 1;
                      puVar19 = puVar16;
                    } while ((long)uVar21 < (long)uVar10);
                  } while (uVar9 != uVar22);
                }
                DAT_0560b1e8 = '\x01';
              }
              else if (DAT_0560b1e8 != '\x01') goto LAB_02a9e33c;
              if ((int)DAT_0560b1f0 != 0) {
                if ((int)DAT_0560b1f0 < 2) {
                  puVar19 = (uint *)*DAT_0560b1f8;
                  iVar7 = 0;
                }
                else {
                  iVar11 = 0;
                  iVar13 = (int)DAT_0560b1f0 + -1;
                  do {
                    iVar7 = iVar13 + iVar11;
                    if (iVar7 < 0 != SCARRY4(iVar13,iVar11)) {
                      iVar7 = iVar7 + 1;
                    }
                    iVar7 = iVar7 >> 1;
                    if (((uint *)DAT_0560b1f8[iVar7] == (uint *)0x0) ||
                       (uVar22 = *(uint *)DAT_0560b1f8[iVar7], uVar22 == uVar24))
                    goto joined_r0x02a9df10;
                    if (uVar22 < uVar24) {
                      iVar11 = iVar7 + 1;
                    }
                    else {
                      iVar13 = iVar7 + -1;
                    }
                  } while (iVar11 < iVar13);
                  puVar19 = (uint *)DAT_0560b1f8[iVar11];
                  iVar7 = iVar11;
                }
                if ((puVar19 == (uint *)0x0) || (*puVar19 == uVar24)) {
joined_r0x02a9df10:
                  if ((iVar7 == 0) && (*(int *)(*DAT_0560b1f8 + 4) == 0)) {
                    DAT_0560b1e0 = '\x01';
                    DAT_0560b1e4 = uVar24;
                  }
                }
              }
            }
          }
          else {
            if ((DAT_0560b198 != '\x01') || (DAT_0560b19c != uVar24)) {
              if ((DAT_0560b1c0 & 1) == 0) {
                iVar7 = __cxa_guard_acquire(&DAT_0560b1c0);
                pcVar23 = PTR_DAT_04bb5bc8;
                puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                if (iVar7 != 0) {
                  _DAT_0560b1a8 = 0x100000000;
                  DAT_0560b1b0 = (long *)&DAT_0560b1b8;
                  __cxa_guard_release(&DAT_0560b1c0);
                  puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                }
              }
              if ((DAT_0560b1c8 & 1) == 0) {
                DAT_0560b1c8 = 1;
                if ((DAT_0560b1d8 & 1) == 0) {
                  iVar7 = __cxa_guard_acquire(&DAT_0560b1d8);
                  pcVar23 = PTR_DAT_04bb5bc8;
                  puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                  if (iVar7 != 0) {
                    _DAT_0560b1cc = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_0560b1d8);
                    puVar25 = (undefined8 *)PTR_DAT_04bb5bd0;
                  }
                }
                uVar22 = crc32b(0xffffffff,0x41,0x4c11db7);
                _DAT_0560b1cc = (ulong)~uVar22;
                iVar7 = DAT_0560b1a8;
                if (DAT_0560b1a8 < _DAT_0560b1ac) {
                  DAT_0560b1b0[DAT_0560b1a8] = (long)&DAT_0560b1cc;
                  iVar7 = DAT_0560b1a8 + 1;
                  _DAT_0560b1a8 = CONCAT44(_DAT_0560b1ac,iVar7);
                }
                plVar6 = DAT_0560b1b0;
                if (1 < iVar7) {
                  uVar9 = 0;
                  uVar22 = iVar7 - 1;
                  do {
                    if ((int)uVar22 <= (int)uVar9) break;
                    puVar19 = (uint *)plVar6[uVar9];
                    uVar21 = (ulong)uVar9;
                    if ((uVar22 - uVar9 & 1) == 0) {
                      uVar10 = uVar21;
                      puVar16 = puVar19;
                    }
                    else {
                      uVar10 = uVar21 + 1;
                      puVar16 = (uint *)plVar6[uVar10];
                      if (((puVar19 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar16 < *puVar19)) {
                        plVar6[uVar10] = (long)puVar19;
                        plVar6[uVar21] = (long)puVar16;
                        puVar16 = puVar19;
                      }
                    }
                    uVar15 = (ulong)uVar22;
                    uVar22 = uVar9;
                    if (~uVar21 + uVar15 != 0) {
                      plVar17 = plVar6 + uVar10 + 1;
                      do {
                        puVar19 = (uint *)*plVar17;
                        uVar20 = (uint)uVar10;
                        if (((puVar16 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                           (*puVar16 <= *puVar19)) {
                          puVar18 = (uint *)plVar17[1];
                          if (puVar19 != (uint *)0x0) goto LAB_02a9e2d0;
LAB_02a9e280:
                          puVar19 = puVar18;
                        }
                        else {
                          plVar17[-1] = (long)puVar19;
                          *plVar17 = (long)puVar16;
                          puVar18 = (uint *)plVar17[1];
                          puVar19 = puVar16;
                          uVar22 = uVar20;
                          if (puVar16 == (uint *)0x0) goto LAB_02a9e280;
LAB_02a9e2d0:
                          if ((puVar18 == (uint *)0x0) || (*puVar19 <= *puVar18)) goto LAB_02a9e280;
                          uVar22 = uVar20 + 1;
                          *plVar17 = (long)puVar18;
                          plVar17[1] = (long)puVar19;
                        }
                        uVar10 = uVar10 + 2;
                        plVar17 = plVar17 + 2;
                        puVar16 = puVar19;
                      } while (uVar15 != uVar10);
                    }
                    if ((int)uVar22 <= (int)uVar9) break;
                    uVar10 = (ulong)uVar22;
                    puVar19 = (uint *)plVar6[uVar22];
                    uVar9 = uVar22;
                    do {
                      puVar16 = (uint *)plVar6[uVar10 - 1];
                      if (((puVar19 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar19 < *puVar16)) {
                        uVar9 = (uint)uVar10;
                        plVar6[uVar10 - 1] = (long)puVar19;
                        plVar6[uVar10] = (long)puVar16;
                        puVar16 = puVar19;
                      }
                      uVar10 = uVar10 - 1;
                      puVar19 = puVar16;
                    } while ((long)uVar21 < (long)uVar10);
                  } while (uVar9 != uVar22);
                }
                DAT_0560b1a0 = '\x01';
              }
              else if (DAT_0560b1a0 != '\x01') goto LAB_02a9e334;
              if (DAT_0560b1a8 != 0) {
                if (DAT_0560b1a8 < 2) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = 0;
                  iVar11 = DAT_0560b1a8 + -1;
                  do {
                    iVar13 = iVar11 + iVar7;
                    if (iVar13 < 0 != SCARRY4(iVar11,iVar7)) {
                      iVar13 = iVar13 + 1;
                    }
                    iVar13 = iVar13 >> 1;
                    if ((uint *)DAT_0560b1b0[iVar13] == (uint *)0x0) goto LAB_02a9e314;
                    uVar22 = *(uint *)DAT_0560b1b0[iVar13];
                    if (uVar22 == uVar24) goto LAB_02a9e314;
                    if (uVar22 < uVar24) {
                      iVar7 = iVar13 + 1;
                    }
                    else {
                      iVar11 = iVar13 + -1;
                    }
                  } while (iVar7 < iVar11);
                }
                iVar13 = iVar7;
                if (((uint *)DAT_0560b1b0[iVar7] == (uint *)0x0) ||
                   (*(uint *)DAT_0560b1b0[iVar7] == uVar24)) {
LAB_02a9e314:
                  if ((iVar13 == 0) && (*(int *)(*DAT_0560b1b0 + 4) == 0)) {
                    DAT_0560b198 = '\x01';
                    DAT_0560b19c = uVar24;
                  }
                }
              }
            }
LAB_02a9e334:
          }
LAB_02a9e33c:
          puVar19 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar19 != (uint *)0x0)) &&
             ((*puVar19 != 0 &&
              ((uVar24 = puVar19[1], uVar24 != 0 && ((ulong)(ushort)puVar19[2] != 0)))))) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar19 + lVar5 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar5 != 0) {
              uVar22 = 0;
              if ((ulong)uVar24 != 0) {
                uVar22 = (uint)((ulong)((long)puVar1 - lVar5) / (ulong)uVar24);
              }
              if (*puVar19 <= uVar22) {
                uVar22 = 0xffffffff;
              }
              if (uVar22 < DAT_0560b188) {
                *(undefined2 *)(DAT_0560b190 + (long)(int)uVar22 * 2) = 0;
              }
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  return;
}

