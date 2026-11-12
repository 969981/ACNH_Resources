
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088e7c0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  char cVar29;
  long lVar30;
  byte *pbVar31;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar11 = *param_1, uVar11 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe4,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9c,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb8,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0xe7,0x4c11db7);
    uVar2 = crc32b(uVar2,0xaa,0x4c11db7);
    uVar28 = 0;
    uVar4 = crc32b(uVar4,0xbf,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe8,0x4c11db7);
    uVar4 = crc32b(uVar4,0x8c,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa8,0x4c11db7);
    uVar3 = crc32b(uVar3,0xad,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
    uVar2 = crc32b(uVar2,0xad,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe6,0x4c11db7);
    uVar4 = crc32b(uVar4,0x97,0x4c11db7);
    uVar3 = crc32b(uVar3,0xad,0x4c11db7);
    uVar5 = crc32b(uVar3,0xa2,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar6 = crc32b(uVar4,0xa5,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x42,0x4c11db7);
    uVar2 = crc32b(uVar2,0xae,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar7 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar2 = crc32b(uVar3,0x66,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar4 = crc32b(uVar3,0x6b,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar8 = crc32b(uVar4,0x70,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar4 = crc32b(uVar4,0x66,0x4c11db7);
    uVar4 = crc32b(uVar4,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,0x65,0x4c11db7);
    uVar9 = crc32b(uVar4,0x72,0x4c11db7);
    uVar10 = crc32b(uVar2,0x65,0x4c11db7);
    puVar21 = (uint *)PTR_DAT_04bb3250;
    do {
      if (((uVar28 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar13 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar28 + (uint)(ushort)param_1[2] * 8 + iVar13) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar27 = *puVar1;
          if (uVar27 != 0) {
            cVar29 = *PTR_DAT_04bb3248;
            do {
              if (cVar29 == '\0') {
                cVar29 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(puVar21,0xff,0x288);
                uVar27 = *puVar1;
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else {
                uVar14 = *puVar21;
                if (-1 < (int)uVar14) {
                  if ((uint *)((long)puVar1 + (ulong)uVar14) != (uint *)0x0) {
                    uVar27 = *(uint *)((long)puVar1 + (ulong)uVar14);
                    goto LAB_0088eae0;
                  }
                  break;
                }
                if (uVar14 != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar27;
              uVar27 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar27 = 0, puVar1 == puVar23)) goto LAB_0088eae0;
              lVar30 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar1 + (lVar30 - (long)puVar23);
              if (lVar30 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              *puVar21 = 0xfffffffe;
              if (uVar17 == 0) break;
              puVar23 = (uint *)(lVar30 + 4);
              while (puVar23[-1] != 0x70703269) {
                puVar23 = puVar23 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0088eadc;
              }
              uVar27 = 0;
              if (*puVar23 != 0xffffffff) {
                uVar27 = *puVar23;
              }
              *puVar21 = uVar27;
              uVar27 = *puVar1;
              if (uVar27 == 0) break;
            } while( true );
          }
LAB_0088eadc:
          uVar27 = 0;
LAB_0088eae0:
          if (((*puVar1 == 0) || (lVar30 = (long)puVar1 - (ulong)*puVar1, lVar30 == 0)) ||
             (*(char *)(lVar30 + 0xb) == '\0')) {
            if ((DAT_04ce98f0 == '\x01') && (DAT_04ce98f4 == uVar27)) {
              uVar14 = DAT_04ce98f8;
              if (5 < DAT_04ce98f8) goto LAB_0088ef28;
            }
            else {
              if ((DAT_04ce9940 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce9940);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9900 = 0x600000000;
                  DAT_04ce9908 = (undefined8 *)&DAT_04ce9910;
                  __cxa_guard_release(&DAT_04ce9940);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce9948 & 1) == 0) {
                DAT_04ce9948 = 1;
                if (((DAT_04ce9980 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce9980), iVar13 != 0)) {
                  DAT_04ce994c = 0xffffffff00000000;
                  DAT_04ce9954 = 0xffffffff00000000;
                  DAT_04ce995c = 0xffffffff00000000;
                  DAT_04ce9964 = 0xffffffff00000000;
                  DAT_04ce996c = 0xffffffff00000000;
                  DAT_04ce9974 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce9980);
                }
                lVar30 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_DAT_0491dd68)[lVar30];
                  if (local_174 != pbVar31) {
                    lVar16 = 0;
                    do {
                      if (pbVar31[lVar16] == 0) {
LAB_0088ec24:
                        iVar13 = (int)lVar16;
joined_r0x0088ec28:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_0088ec30;
                      }
                      if (pbVar31[lVar16 + 1] == 0) {
                        lVar16 = lVar16 + 1;
                        goto LAB_0088ec24;
                      }
                      if (pbVar31[lVar16 + 2] == 0) {
                        iVar13 = (int)lVar16 + 2;
                        goto joined_r0x0088ec28;
                      }
                      lVar16 = lVar16 + 3;
                    } while (lVar16 != 0x80001);
                    iVar13 = 0;
LAB_0088ec30:
                    memcpy(local_174,pbVar31,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar14 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar19 = crc32b(uVar19,uVar14,0x4c11db7);
                      uVar14 = (uint)*pbVar31;
                    } while (uVar14 != 0);
                    uVar19 = ~uVar19;
                  }
                  *(uint *)(&DAT_04ce994c + lVar30) = uVar19;
                  *(int *)((long)&DAT_04ce994c + lVar30 * 8 + 4) = (int)lVar30;
                  iVar13 = (int)DAT_04ce9900;
                  if ((int)DAT_04ce9900 < DAT_04ce9900._4_4_) {
                    DAT_04ce9908[(int)DAT_04ce9900] = &DAT_04ce994c + lVar30;
                    iVar13 = (int)DAT_04ce9900 + 1;
                    DAT_04ce9900 = CONCAT44(DAT_04ce9900._4_4_,iVar13);
                  }
                  puVar25 = DAT_04ce9908;
                  lVar30 = lVar30 + 1;
                } while (lVar30 != 6);
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = (uint *)puVar25[uVar19];
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = (uint *)puVar25[uVar20];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        puVar25[uVar20] = puVar21;
                        puVar25[uVar17] = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar24 = puVar25 + uVar20 + 1;
                      do {
                        puVar21 = (uint *)*puVar24;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar24[1];
                          if (puVar21 != (uint *)0x0) goto LAB_0088eee0;
LAB_0088ee90:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar24[-1] = puVar21;
                          *puVar24 = puVar23;
                          puVar26 = (uint *)puVar24[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_0088ee90;
LAB_0088eee0:
                          if (puVar26 == (uint *)0x0) goto LAB_0088ee90;
                          if (*puVar21 <= *puVar26) goto LAB_0088ee90;
                          uVar14 = uVar18 + 1;
                          *puVar24 = puVar26;
                          puVar24[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar24 = puVar24 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = (uint *)puVar25[uVar14];
                    uVar19 = uVar14;
                    do {
                      puVar23 = (uint *)puVar25[uVar20 - 1];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        puVar25[uVar20 - 1] = puVar21;
                        puVar25[uVar20] = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce98fc = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce98fc != '\x01') goto LAB_0088ef28;
              if ((int)DAT_04ce9900 == 0) goto LAB_0088ef28;
              if ((int)DAT_04ce9900 < 2) {
                uVar14 = 0;
                puVar23 = (uint *)*DAT_04ce9908;
                if (puVar23 != (uint *)0x0) goto LAB_0088ed50;
LAB_0088ef0c:
                uVar19 = uVar14;
                if (uVar14 < 6) {
LAB_0088ef18:
                  uVar14 = *(uint *)(DAT_04ce9908[uVar19] + 4);
                  if (uVar14 < 6) {
                    DAT_04ce98f0 = '\x01';
                    DAT_04ce98f4 = uVar27;
                    DAT_04ce98f8 = uVar14;
                    goto LAB_0088f2cc;
                  }
                }
              }
              else {
                uVar14 = 0;
                iVar13 = (int)DAT_04ce9900 + -1;
                do {
                  iVar15 = iVar13 + uVar14;
                  if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                    iVar15 = iVar15 + 1;
                  }
                  uVar19 = iVar15 >> 1;
                  if ((uint *)DAT_04ce9908[(int)uVar19] == (uint *)0x0) goto LAB_0088ed60;
                  uVar18 = *(uint *)DAT_04ce9908[(int)uVar19];
                  if (uVar18 == uVar27) goto LAB_0088ed60;
                  if (uVar18 < uVar27) {
                    uVar14 = uVar19 + 1;
                  }
                  else {
                    iVar13 = uVar19 - 1;
                  }
                } while ((int)uVar14 < iVar13);
                puVar23 = (uint *)DAT_04ce9908[(int)uVar14];
                if (puVar23 == (uint *)0x0) goto LAB_0088ef0c;
LAB_0088ed50:
                uVar19 = uVar14;
                if (*puVar23 == uVar27) {
LAB_0088ed60:
                  if (5 < uVar19) goto LAB_0088ef28;
                  goto LAB_0088ef18;
                }
              }
LAB_0088ef28:
              uVar14 = 0;
            }
          }
          else {
            if ((DAT_04ce9858 == '\x01') && (DAT_04ce985c == uVar27)) {
              uVar14 = DAT_04ce9860;
              if (5 < DAT_04ce9860) goto LAB_0088f2c0;
            }
            else {
              if ((DAT_04ce98a8 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce98a8);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9868 = 0x600000000;
                  DAT_04ce9870 = &DAT_04ce9878;
                  __cxa_guard_release(&DAT_04ce98a8);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce98b0 & 1) == 0) {
                DAT_04ce98b0 = 1;
                if (((DAT_04ce98e8 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce98e8), iVar13 != 0)) {
                  DAT_04ce98b4 = 0xffffffff00000000;
                  DAT_04ce98bc = 0xffffffff00000000;
                  DAT_04ce98c4 = 0xffffffff00000000;
                  DAT_04ce98cc = 0xffffffff00000000;
                  DAT_04ce98d4 = 0xffffffff00000000;
                  DAT_04ce98dc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce98e8);
                }
                lVar30 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_s_Global_0491dcd0)[lVar30];
                  if (local_174 != pbVar31) {
                    lVar16 = 0;
                    do {
                      if (pbVar31[lVar16] == 0) {
LAB_0088efd4:
                        iVar13 = (int)lVar16;
joined_r0x0088efd8:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_0088efe0;
                      }
                      if (pbVar31[lVar16 + 1] == 0) {
                        lVar16 = lVar16 + 1;
                        goto LAB_0088efd4;
                      }
                      if (pbVar31[lVar16 + 2] == 0) {
                        iVar13 = (int)lVar16 + 2;
                        goto joined_r0x0088efd8;
                      }
                      lVar16 = lVar16 + 3;
                    } while (lVar16 != 0x80001);
                    iVar13 = 0;
LAB_0088efe0:
                    memcpy(local_174,pbVar31,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar14 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar19 = crc32b(uVar19,uVar14,0x4c11db7);
                      uVar14 = (uint)*pbVar31;
                    } while (uVar14 != 0);
                    uVar19 = ~uVar19;
                  }
                  *(uint *)(&DAT_04ce98b4 + lVar30) = uVar19;
                  *(int *)((long)&DAT_04ce98b4 + lVar30 * 8 + 4) = (int)lVar30;
                  iVar13 = (int)DAT_04ce9868;
                  if ((int)DAT_04ce9868 < DAT_04ce9868._4_4_) {
                    *(undefined8 **)(DAT_04ce9870 + (long)(int)DAT_04ce9868 * 8) =
                         &DAT_04ce98b4 + lVar30;
                    iVar13 = (int)DAT_04ce9868 + 1;
                    DAT_04ce9868 = CONCAT44(DAT_04ce9868._4_4_,iVar13);
                  }
                  puVar12 = DAT_04ce9870;
                  lVar30 = lVar30 + 1;
                } while (lVar30 != 6);
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar19 * 8);
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        *(uint **)(puVar12 + uVar20 * 8) = puVar21;
                        *(uint **)(puVar12 + uVar17 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar25 = (undefined8 *)(puVar12 + uVar20 * 8 + 8);
                      do {
                        puVar21 = (uint *)*puVar25;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar25[1];
                          if (puVar21 != (uint *)0x0) goto LAB_0088f240;
LAB_0088f1f0:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar25[-1] = puVar21;
                          *puVar25 = puVar23;
                          puVar26 = (uint *)puVar25[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_0088f1f0;
LAB_0088f240:
                          if (puVar26 == (uint *)0x0) goto LAB_0088f1f0;
                          if (*puVar21 <= *puVar26) goto LAB_0088f1f0;
                          uVar14 = uVar18 + 1;
                          *puVar25 = puVar26;
                          puVar25[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar25 = puVar25 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar14 * 8);
                    uVar19 = uVar14;
                    do {
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8 + -8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        *(uint **)(puVar12 + uVar20 * 8 + -8) = puVar21;
                        *(uint **)(puVar12 + uVar20 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce9864 = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce9864 != '\x01') goto LAB_0088f2c0;
              if ((int)DAT_04ce9868 != 0) {
                if ((int)DAT_04ce9868 < 2) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 0;
                  iVar13 = (int)DAT_04ce9868 + -1;
                  do {
                    iVar15 = iVar13 + uVar14;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar19 = iVar15 >> 1;
                    if (*(uint **)(DAT_04ce9870 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x0088f2ac;
                    uVar18 = **(uint **)(DAT_04ce9870 + (long)(int)uVar19 * 8);
                    if (uVar18 == uVar27) goto joined_r0x0088f2ac;
                    if (uVar18 < uVar27) {
                      uVar14 = uVar19 + 1;
                    }
                    else {
                      iVar13 = uVar19 - 1;
                    }
                  } while ((int)uVar14 < iVar13);
                }
                uVar19 = uVar14;
                if ((*(uint **)(DAT_04ce9870 + (long)(int)uVar14 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_04ce9870 + (long)(int)uVar14 * 8) == uVar27)) {
joined_r0x0088f2ac:
                  if ((uVar19 < 6) &&
                     (uVar14 = *(uint *)(*(long *)(DAT_04ce9870 + (ulong)uVar19 * 8) + 4),
                     uVar14 < 6)) {
                    DAT_04ce9858 = '\x01';
                    DAT_04ce985c = uVar27;
                    DAT_04ce9860 = uVar14;
                    goto LAB_0088f2c4;
                  }
                }
              }
LAB_0088f2c0:
              uVar14 = 0;
            }
LAB_0088f2c4:
          }
LAB_0088f2cc:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar27 = puVar23[1], uVar27 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar23 + lVar30 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar30 != 0) {
              uVar19 = 0;
              if ((ulong)uVar27 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar30) / (ulong)uVar27);
              }
              if (*puVar23 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < DAT_04ce9768) {
                *(short *)(DAT_04ce9770 + (long)(int)uVar19 * 2) = (short)uVar14;
              }
            }
          }
          uVar27 = *puVar1;
          if (uVar27 != 0) {
            cVar29 = *PTR_DAT_04bb3248;
            do {
              if (cVar29 == '\0') {
                cVar29 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(puVar21,0xff,0x288);
                uVar27 = *puVar1;
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else {
                uVar14 = puVar21[7];
                if (-1 < (int)uVar14) {
                  if ((uint *)((long)puVar1 + (ulong)uVar14) != (uint *)0x0) {
                    uVar27 = *(uint *)((long)puVar1 + (ulong)uVar14);
                    goto LAB_0088f450;
                  }
                  break;
                }
                if (uVar14 != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar27;
              uVar27 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar27 = 0, puVar1 == puVar23)) goto LAB_0088f450;
              lVar30 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar1 + (lVar30 - (long)puVar23);
              if (lVar30 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              puVar21[7] = 0xfffffffe;
              if (uVar17 == 0) break;
              puVar23 = (uint *)(lVar30 + 4);
              while (puVar23[-1] != 0x805ce6d3) {
                puVar23 = puVar23 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0088f44c;
              }
              uVar27 = 0;
              if (*puVar23 != 0xffffffff) {
                uVar27 = *puVar23;
              }
              puVar21[7] = uVar27;
              uVar27 = *puVar1;
              if (uVar27 == 0) break;
            } while( true );
          }
LAB_0088f44c:
          uVar27 = 0;
LAB_0088f450:
          if (((*puVar1 == 0) || (lVar30 = (long)puVar1 - (ulong)*puVar1, lVar30 == 0)) ||
             (*(char *)(lVar30 + 0xb) == '\0')) {
            if ((DAT_04ce9a20 == '\x01') && (DAT_04ce9a24 == uVar27)) {
              uVar14 = DAT_04ce9a28;
              if (5 < DAT_04ce9a28) goto LAB_0088f898;
            }
            else {
              if ((DAT_04ce9a70 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce9a70);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9a30 = 0x600000000;
                  DAT_04ce9a38 = (undefined8 *)&DAT_04ce9a40;
                  __cxa_guard_release(&DAT_04ce9a70);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce9a78 & 1) == 0) {
                DAT_04ce9a78 = 1;
                if (((DAT_04ce9ab0 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce9ab0), iVar13 != 0)) {
                  DAT_04ce9a7c = 0xffffffff00000000;
                  DAT_04ce9a84 = 0xffffffff00000000;
                  DAT_04ce9a8c = 0xffffffff00000000;
                  DAT_04ce9a94 = 0xffffffff00000000;
                  DAT_04ce9a9c = 0xffffffff00000000;
                  DAT_04ce9aa4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce9ab0);
                }
                lVar30 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_DAT_0491de70)[lVar30];
                  if (local_174 != pbVar31) {
                    lVar16 = 0;
                    do {
                      if (pbVar31[lVar16] == 0) {
LAB_0088f598:
                        iVar13 = (int)lVar16;
joined_r0x0088f59c:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_0088f5a4;
                      }
                      if (pbVar31[lVar16 + 1] == 0) {
                        lVar16 = lVar16 + 1;
                        goto LAB_0088f598;
                      }
                      if (pbVar31[lVar16 + 2] == 0) {
                        iVar13 = (int)lVar16 + 2;
                        goto joined_r0x0088f59c;
                      }
                      lVar16 = lVar16 + 3;
                    } while (lVar16 != 0x80001);
                    iVar13 = 0;
LAB_0088f5a4:
                    memcpy(local_174,pbVar31,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar14 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar19 = crc32b(uVar19,uVar14,0x4c11db7);
                      uVar14 = (uint)*pbVar31;
                    } while (uVar14 != 0);
                    uVar19 = ~uVar19;
                  }
                  *(uint *)(&DAT_04ce9a7c + lVar30) = uVar19;
                  *(int *)((long)&DAT_04ce9a7c + lVar30 * 8 + 4) = (int)lVar30;
                  iVar13 = (int)DAT_04ce9a30;
                  if ((int)DAT_04ce9a30 < DAT_04ce9a30._4_4_) {
                    DAT_04ce9a38[(int)DAT_04ce9a30] = &DAT_04ce9a7c + lVar30;
                    iVar13 = (int)DAT_04ce9a30 + 1;
                    DAT_04ce9a30 = CONCAT44(DAT_04ce9a30._4_4_,iVar13);
                  }
                  puVar25 = DAT_04ce9a38;
                  lVar30 = lVar30 + 1;
                } while (lVar30 != 6);
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = (uint *)puVar25[uVar19];
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = (uint *)puVar25[uVar20];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        puVar25[uVar20] = puVar21;
                        puVar25[uVar17] = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar24 = puVar25 + uVar20 + 1;
                      do {
                        puVar21 = (uint *)*puVar24;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar24[1];
                          if (puVar21 != (uint *)0x0) goto LAB_0088f850;
LAB_0088f800:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar24[-1] = puVar21;
                          *puVar24 = puVar23;
                          puVar26 = (uint *)puVar24[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_0088f800;
LAB_0088f850:
                          if (puVar26 == (uint *)0x0) goto LAB_0088f800;
                          if (*puVar21 <= *puVar26) goto LAB_0088f800;
                          uVar14 = uVar18 + 1;
                          *puVar24 = puVar26;
                          puVar24[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar24 = puVar24 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = (uint *)puVar25[uVar14];
                    uVar19 = uVar14;
                    do {
                      puVar23 = (uint *)puVar25[uVar20 - 1];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        puVar25[uVar20 - 1] = puVar21;
                        puVar25[uVar20] = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce9a2c = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce9a2c != '\x01') goto LAB_0088f898;
              if ((int)DAT_04ce9a30 == 0) goto LAB_0088f898;
              if ((int)DAT_04ce9a30 < 2) {
                uVar14 = 0;
                puVar23 = (uint *)*DAT_04ce9a38;
                if (puVar23 != (uint *)0x0) goto LAB_0088f6c0;
LAB_0088f87c:
                uVar19 = uVar14;
                if (uVar14 < 6) {
LAB_0088f888:
                  uVar14 = *(uint *)(DAT_04ce9a38[uVar19] + 4);
                  if (uVar14 < 6) {
                    DAT_04ce9a20 = '\x01';
                    DAT_04ce9a24 = uVar27;
                    DAT_04ce9a28 = uVar14;
                    goto LAB_0088fc3c;
                  }
                }
              }
              else {
                uVar14 = 0;
                iVar13 = (int)DAT_04ce9a30 + -1;
                do {
                  iVar15 = iVar13 + uVar14;
                  if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                    iVar15 = iVar15 + 1;
                  }
                  uVar19 = iVar15 >> 1;
                  if ((uint *)DAT_04ce9a38[(int)uVar19] == (uint *)0x0) goto LAB_0088f6d0;
                  uVar18 = *(uint *)DAT_04ce9a38[(int)uVar19];
                  if (uVar18 == uVar27) goto LAB_0088f6d0;
                  if (uVar18 < uVar27) {
                    uVar14 = uVar19 + 1;
                  }
                  else {
                    iVar13 = uVar19 - 1;
                  }
                } while ((int)uVar14 < iVar13);
                puVar23 = (uint *)DAT_04ce9a38[(int)uVar14];
                if (puVar23 == (uint *)0x0) goto LAB_0088f87c;
LAB_0088f6c0:
                uVar19 = uVar14;
                if (*puVar23 == uVar27) {
LAB_0088f6d0:
                  if (5 < uVar19) goto LAB_0088f898;
                  goto LAB_0088f888;
                }
              }
LAB_0088f898:
              uVar14 = 0;
            }
          }
          else {
            if ((DAT_04ce9988 == '\x01') && (DAT_04ce998c == uVar27)) {
              uVar14 = DAT_04ce9990;
              if (5 < DAT_04ce9990) goto LAB_0088fc30;
            }
            else {
              if ((DAT_04ce99d8 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce99d8);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9998 = 0x600000000;
                  DAT_04ce99a0 = &DAT_04ce99a8;
                  __cxa_guard_release(&DAT_04ce99d8);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce99e0 & 1) == 0) {
                DAT_04ce99e0 = 1;
                if (((DAT_04ce9a18 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce9a18), iVar13 != 0)) {
                  DAT_04ce99e4 = 0xffffffff00000000;
                  DAT_04ce99ec = 0xffffffff00000000;
                  DAT_04ce99f4 = 0xffffffff00000000;
                  DAT_04ce99fc = 0xffffffff00000000;
                  DAT_04ce9a04 = 0xffffffff00000000;
                  DAT_04ce9a0c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce9a18);
                }
                lVar30 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_s_AllYear_0491ddd8)[lVar30];
                  if (local_174 != pbVar31) {
                    lVar16 = 0;
                    do {
                      if (pbVar31[lVar16] == 0) {
LAB_0088f944:
                        iVar13 = (int)lVar16;
joined_r0x0088f948:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_0088f950;
                      }
                      if (pbVar31[lVar16 + 1] == 0) {
                        lVar16 = lVar16 + 1;
                        goto LAB_0088f944;
                      }
                      if (pbVar31[lVar16 + 2] == 0) {
                        iVar13 = (int)lVar16 + 2;
                        goto joined_r0x0088f948;
                      }
                      lVar16 = lVar16 + 3;
                    } while (lVar16 != 0x80001);
                    iVar13 = 0;
LAB_0088f950:
                    memcpy(local_174,pbVar31,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar14 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar19 = crc32b(uVar19,uVar14,0x4c11db7);
                      uVar14 = (uint)*pbVar31;
                    } while (uVar14 != 0);
                    uVar19 = ~uVar19;
                  }
                  *(uint *)(&DAT_04ce99e4 + lVar30) = uVar19;
                  *(int *)((long)&DAT_04ce99e4 + lVar30 * 8 + 4) = (int)lVar30;
                  iVar13 = (int)DAT_04ce9998;
                  if ((int)DAT_04ce9998 < DAT_04ce9998._4_4_) {
                    *(undefined8 **)(DAT_04ce99a0 + (long)(int)DAT_04ce9998 * 8) =
                         &DAT_04ce99e4 + lVar30;
                    iVar13 = (int)DAT_04ce9998 + 1;
                    DAT_04ce9998 = CONCAT44(DAT_04ce9998._4_4_,iVar13);
                  }
                  puVar12 = DAT_04ce99a0;
                  lVar30 = lVar30 + 1;
                } while (lVar30 != 6);
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar19 * 8);
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        *(uint **)(puVar12 + uVar20 * 8) = puVar21;
                        *(uint **)(puVar12 + uVar17 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar25 = (undefined8 *)(puVar12 + uVar20 * 8 + 8);
                      do {
                        puVar21 = (uint *)*puVar25;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar25[1];
                          if (puVar21 != (uint *)0x0) goto LAB_0088fbb0;
LAB_0088fb60:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar25[-1] = puVar21;
                          *puVar25 = puVar23;
                          puVar26 = (uint *)puVar25[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_0088fb60;
LAB_0088fbb0:
                          if (puVar26 == (uint *)0x0) goto LAB_0088fb60;
                          if (*puVar21 <= *puVar26) goto LAB_0088fb60;
                          uVar14 = uVar18 + 1;
                          *puVar25 = puVar26;
                          puVar25[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar25 = puVar25 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar14 * 8);
                    uVar19 = uVar14;
                    do {
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8 + -8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        *(uint **)(puVar12 + uVar20 * 8 + -8) = puVar21;
                        *(uint **)(puVar12 + uVar20 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce9994 = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce9994 != '\x01') goto LAB_0088fc30;
              if ((int)DAT_04ce9998 != 0) {
                if ((int)DAT_04ce9998 < 2) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 0;
                  iVar13 = (int)DAT_04ce9998 + -1;
                  do {
                    iVar15 = iVar13 + uVar14;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar19 = iVar15 >> 1;
                    if (*(uint **)(DAT_04ce99a0 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x0088fc1c;
                    uVar18 = **(uint **)(DAT_04ce99a0 + (long)(int)uVar19 * 8);
                    if (uVar18 == uVar27) goto joined_r0x0088fc1c;
                    if (uVar18 < uVar27) {
                      uVar14 = uVar19 + 1;
                    }
                    else {
                      iVar13 = uVar19 - 1;
                    }
                  } while ((int)uVar14 < iVar13);
                }
                uVar19 = uVar14;
                if ((*(uint **)(DAT_04ce99a0 + (long)(int)uVar14 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_04ce99a0 + (long)(int)uVar14 * 8) == uVar27)) {
joined_r0x0088fc1c:
                  if ((uVar19 < 6) &&
                     (uVar14 = *(uint *)(*(long *)(DAT_04ce99a0 + (ulong)uVar19 * 8) + 4),
                     uVar14 < 6)) {
                    DAT_04ce9988 = '\x01';
                    DAT_04ce998c = uVar27;
                    DAT_04ce9990 = uVar14;
                    goto LAB_0088fc34;
                  }
                }
              }
LAB_0088fc30:
              uVar14 = 0;
            }
LAB_0088fc34:
          }
LAB_0088fc3c:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar27 = puVar23[1], uVar27 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar23 + lVar30 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar30 != 0) {
              uVar19 = 0;
              if ((ulong)uVar27 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar30) / (ulong)uVar27);
              }
              if (*puVar23 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < DAT_04ce9758) {
                *(short *)(DAT_04ce9760 + (long)(int)uVar19 * 2) = (short)uVar14;
              }
            }
          }
          uVar27 = *puVar1;
          if (uVar27 != 0) {
            cVar29 = *PTR_DAT_04bb3248;
            do {
              if (cVar29 == '\0') {
                cVar29 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(puVar21,0xff,0x288);
                uVar27 = *puVar1;
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else {
                uVar14 = puVar21[8];
                if (-1 < (int)uVar14) {
                  if ((uint *)((long)puVar1 + (ulong)uVar14) != (uint *)0x0) {
                    uVar27 = *(uint *)((long)puVar1 + (ulong)uVar14);
                    goto LAB_0088fdc0;
                  }
                  break;
                }
                if (uVar14 != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar27;
              uVar27 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar27 = 0, puVar1 == puVar23)) goto LAB_0088fdc0;
              lVar30 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar1 + (lVar30 - (long)puVar23);
              if (lVar30 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              puVar21[8] = 0xfffffffe;
              if (uVar17 == 0) break;
              puVar23 = (uint *)(lVar30 + 4);
              while (puVar23[-1] != 0x52c75c1e) {
                puVar23 = puVar23 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0088fdbc;
              }
              uVar27 = 0;
              if (*puVar23 != 0xffffffff) {
                uVar27 = *puVar23;
              }
              puVar21[8] = uVar27;
              uVar27 = *puVar1;
              if (uVar27 == 0) break;
            } while( true );
          }
LAB_0088fdbc:
          uVar27 = 0;
LAB_0088fdc0:
          if (((*puVar1 == 0) || (lVar30 = (long)puVar1 - (ulong)*puVar1, lVar30 == 0)) ||
             (*(char *)(lVar30 + 0xb) == '\0')) {
            if ((DAT_04ce9b30 == '\x01') && (DAT_04ce9b34 == uVar27)) {
              uVar14 = DAT_04ce9b38;
              if (3 < DAT_04ce9b38) goto LAB_00890228;
            }
            else {
              if ((DAT_04ce9b70 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce9b70);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9b40 = 0x400000000;
                  DAT_04ce9b48 = (undefined8 *)&DAT_04ce9b50;
                  __cxa_guard_release(&DAT_04ce9b70);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce9b78 & 1) == 0) {
                DAT_04ce9b78 = 1;
                if (((DAT_04ce9ba0 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce9ba0), iVar13 != 0)) {
                  _DAT_04ce9b7c = 0xffffffff00000000;
                  DAT_04ce9b84 = 0xffffffff00000000;
                  DAT_04ce9b8c = 0xffffffff00000000;
                  DAT_04ce9b94 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce9ba0);
                }
                _DAT_04ce9b7c = (ulong)~uVar7;
                iVar13 = (int)DAT_04ce9b40;
                iVar15 = DAT_04ce9b40._4_4_;
                if ((int)DAT_04ce9b40 < DAT_04ce9b40._4_4_) {
                  DAT_04ce9b48[(int)DAT_04ce9b40] = &DAT_04ce9b7c;
                  iVar13 = (int)DAT_04ce9b40 + 1;
                  DAT_04ce9b40 = CONCAT44(DAT_04ce9b40._4_4_,iVar13);
                  iVar15 = DAT_04ce9b40._4_4_;
                }
                DAT_04ce9b84 = CONCAT44(1,~uVar5);
                if (iVar13 < iVar15) {
                  DAT_04ce9b48[iVar13] = &DAT_04ce9b84;
                  iVar13 = (int)DAT_04ce9b40 + 1;
                  DAT_04ce9b40 = CONCAT44(DAT_04ce9b40._4_4_,iVar13);
                  iVar15 = DAT_04ce9b40._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
                uVar2 = crc32b(uVar2,0x90,0x4c11db7);
                uVar2 = crc32b(uVar2,0x8c,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
                uVar2 = crc32b(uVar2,0x99,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe9,0x4c11db7);
                uVar2 = crc32b(uVar2,0x96,0x4c11db7);
                uVar2 = crc32b(uVar2,0x8b,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar14 = crc32b(uVar2,0xac,0x4c11db7);
                DAT_04ce9b8c = CONCAT44(2,~uVar14);
                if (iVar13 < iVar15) {
                  DAT_04ce9b48[iVar13] = &DAT_04ce9b8c;
                  iVar13 = (int)DAT_04ce9b40 + 1;
                  DAT_04ce9b40 = CONCAT44(DAT_04ce9b40._4_4_,iVar13);
                  iVar15 = DAT_04ce9b40._4_4_;
                }
                DAT_04ce9b94 = CONCAT44(3,~uVar6);
                if (iVar13 < iVar15) {
                  DAT_04ce9b48[iVar13] = &DAT_04ce9b94;
                  iVar13 = (int)DAT_04ce9b40 + 1;
                  DAT_04ce9b40 = CONCAT44(DAT_04ce9b40._4_4_,iVar13);
                }
                puVar25 = DAT_04ce9b48;
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = (uint *)puVar25[uVar19];
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = (uint *)puVar25[uVar20];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        puVar25[uVar20] = puVar21;
                        puVar25[uVar17] = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar24 = puVar25 + uVar20 + 1;
                      do {
                        puVar21 = (uint *)*puVar24;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar24[1];
                          if (puVar21 != (uint *)0x0) goto LAB_008901e0;
LAB_00890190:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar24[-1] = puVar21;
                          *puVar24 = puVar23;
                          puVar26 = (uint *)puVar24[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_00890190;
LAB_008901e0:
                          if (puVar26 == (uint *)0x0) goto LAB_00890190;
                          if (*puVar21 <= *puVar26) goto LAB_00890190;
                          uVar14 = uVar18 + 1;
                          *puVar24 = puVar26;
                          puVar24[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar24 = puVar24 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = (uint *)puVar25[uVar14];
                    uVar19 = uVar14;
                    do {
                      puVar23 = (uint *)puVar25[uVar20 - 1];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        puVar25[uVar20 - 1] = puVar21;
                        puVar25[uVar20] = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce9b3c = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce9b3c != '\x01') goto LAB_00890228;
              if ((int)DAT_04ce9b40 == 0) goto LAB_00890228;
              if ((int)DAT_04ce9b40 < 2) {
                uVar14 = 0;
                puVar23 = (uint *)*DAT_04ce9b48;
                if (puVar23 != (uint *)0x0) goto LAB_00890050;
LAB_0089020c:
                uVar19 = uVar14;
                if (uVar14 < 4) {
LAB_00890218:
                  uVar14 = *(uint *)(DAT_04ce9b48[uVar19] + 4);
                  if (uVar14 < 4) {
                    DAT_04ce9b30 = '\x01';
                    DAT_04ce9b34 = uVar27;
                    DAT_04ce9b38 = uVar14;
                    goto LAB_0089058c;
                  }
                }
              }
              else {
                uVar14 = 0;
                iVar13 = (int)DAT_04ce9b40 + -1;
                do {
                  iVar15 = iVar13 + uVar14;
                  if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                    iVar15 = iVar15 + 1;
                  }
                  uVar19 = iVar15 >> 1;
                  if ((uint *)DAT_04ce9b48[(int)uVar19] == (uint *)0x0) goto LAB_00890060;
                  uVar18 = *(uint *)DAT_04ce9b48[(int)uVar19];
                  if (uVar18 == uVar27) goto LAB_00890060;
                  if (uVar18 < uVar27) {
                    uVar14 = uVar19 + 1;
                  }
                  else {
                    iVar13 = uVar19 - 1;
                  }
                } while ((int)uVar14 < iVar13);
                puVar23 = (uint *)DAT_04ce9b48[(int)uVar14];
                if (puVar23 == (uint *)0x0) goto LAB_0089020c;
LAB_00890050:
                uVar19 = uVar14;
                if (*puVar23 == uVar27) {
LAB_00890060:
                  if (3 < uVar19) goto LAB_00890228;
                  goto LAB_00890218;
                }
              }
LAB_00890228:
              uVar14 = 0;
            }
          }
          else {
            if ((DAT_04ce9ab8 == '\x01') && (DAT_04ce9abc == uVar27)) {
              uVar14 = DAT_04ce9ac0;
              if (3 < DAT_04ce9ac0) goto LAB_00890580;
            }
            else {
              if ((DAT_04ce9af8 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce9af8);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9ac8 = 0x400000000;
                  DAT_04ce9ad0 = &DAT_04ce9ad8;
                  __cxa_guard_release(&DAT_04ce9af8);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce9b00 & 1) == 0) {
                DAT_04ce9b00 = 1;
                if (((DAT_04ce9b28 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce9b28), iVar13 != 0)) {
                  _DAT_04ce9b04 = 0xffffffff00000000;
                  DAT_04ce9b0c = 0xffffffff00000000;
                  DAT_04ce9b14 = 0xffffffff00000000;
                  DAT_04ce9b1c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce9b28);
                }
                _DAT_04ce9b04 = (ulong)~uVar10;
                iVar13 = (int)DAT_04ce9ac8;
                iVar15 = DAT_04ce9ac8._4_4_;
                if ((int)DAT_04ce9ac8 < DAT_04ce9ac8._4_4_) {
                  *(undefined4 **)(DAT_04ce9ad0 + (long)(int)DAT_04ce9ac8 * 8) = &DAT_04ce9b04;
                  iVar13 = (int)DAT_04ce9ac8 + 1;
                  DAT_04ce9ac8 = CONCAT44(DAT_04ce9ac8._4_4_,iVar13);
                  iVar15 = DAT_04ce9ac8._4_4_;
                }
                DAT_04ce9b0c = CONCAT44(1,~uVar8);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_04ce9ad0 + (long)iVar13 * 8) = &DAT_04ce9b0c;
                  iVar13 = (int)DAT_04ce9ac8 + 1;
                  DAT_04ce9ac8 = CONCAT44(DAT_04ce9ac8._4_4_,iVar13);
                  iVar15 = DAT_04ce9ac8._4_4_;
                }
                uVar2 = crc32b(uVar3,0x61,0x4c11db7);
                uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
                uVar14 = crc32b(uVar2,0x65,0x4c11db7);
                DAT_04ce9b14 = CONCAT44(2,~uVar14);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_04ce9ad0 + (long)iVar13 * 8) = &DAT_04ce9b14;
                  iVar13 = (int)DAT_04ce9ac8 + 1;
                  DAT_04ce9ac8 = CONCAT44(DAT_04ce9ac8._4_4_,iVar13);
                  iVar15 = DAT_04ce9ac8._4_4_;
                }
                DAT_04ce9b1c = CONCAT44(3,~uVar9);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_04ce9ad0 + (long)iVar13 * 8) = &DAT_04ce9b1c;
                  iVar13 = (int)DAT_04ce9ac8 + 1;
                  DAT_04ce9ac8 = CONCAT44(DAT_04ce9ac8._4_4_,iVar13);
                }
                puVar12 = DAT_04ce9ad0;
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar19 * 8);
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        *(uint **)(puVar12 + uVar20 * 8) = puVar21;
                        *(uint **)(puVar12 + uVar17 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar25 = (undefined8 *)(puVar12 + uVar20 * 8 + 8);
                      do {
                        puVar21 = (uint *)*puVar25;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar25[1];
                          if (puVar21 != (uint *)0x0) goto LAB_00890500;
LAB_008904b0:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar25[-1] = puVar21;
                          *puVar25 = puVar23;
                          puVar26 = (uint *)puVar25[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_008904b0;
LAB_00890500:
                          if (puVar26 == (uint *)0x0) goto LAB_008904b0;
                          if (*puVar21 <= *puVar26) goto LAB_008904b0;
                          uVar14 = uVar18 + 1;
                          *puVar25 = puVar26;
                          puVar25[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar25 = puVar25 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar14 * 8);
                    uVar19 = uVar14;
                    do {
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8 + -8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        *(uint **)(puVar12 + uVar20 * 8 + -8) = puVar21;
                        *(uint **)(puVar12 + uVar20 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce9ac4 = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce9ac4 != '\x01') goto LAB_00890580;
              if ((int)DAT_04ce9ac8 != 0) {
                if ((int)DAT_04ce9ac8 < 2) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 0;
                  iVar13 = (int)DAT_04ce9ac8 + -1;
                  do {
                    iVar15 = iVar13 + uVar14;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar19 = iVar15 >> 1;
                    if (*(uint **)(DAT_04ce9ad0 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x0089056c;
                    uVar18 = **(uint **)(DAT_04ce9ad0 + (long)(int)uVar19 * 8);
                    if (uVar18 == uVar27) goto joined_r0x0089056c;
                    if (uVar18 < uVar27) {
                      uVar14 = uVar19 + 1;
                    }
                    else {
                      iVar13 = uVar19 - 1;
                    }
                  } while ((int)uVar14 < iVar13);
                }
                uVar19 = uVar14;
                if ((*(uint **)(DAT_04ce9ad0 + (long)(int)uVar14 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_04ce9ad0 + (long)(int)uVar14 * 8) == uVar27)) {
joined_r0x0089056c:
                  if ((uVar19 < 4) &&
                     (uVar14 = *(uint *)(*(long *)(DAT_04ce9ad0 + (ulong)uVar19 * 8) + 4),
                     uVar14 < 4)) {
                    DAT_04ce9ab8 = '\x01';
                    DAT_04ce9abc = uVar27;
                    DAT_04ce9ac0 = uVar14;
                    goto LAB_00890584;
                  }
                }
              }
LAB_00890580:
              uVar14 = 0;
            }
LAB_00890584:
          }
LAB_0089058c:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar27 = puVar23[1], uVar27 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar23 + lVar30 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar30 != 0) {
              uVar19 = 0;
              if ((ulong)uVar27 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar30) / (ulong)uVar27);
              }
              if (*puVar23 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < DAT_04ce9818) {
                *(short *)(DAT_04ce9820 + (long)(int)uVar19 * 2) = (short)uVar14;
              }
            }
          }
          uVar27 = *puVar1;
          if (uVar27 != 0) {
            cVar29 = *PTR_DAT_04bb3248;
            do {
              if (cVar29 == '\0') {
                cVar29 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(puVar21,0xff,0x288);
                uVar27 = *puVar1;
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else {
                uVar14 = puVar21[9];
                if (-1 < (int)uVar14) {
                  if ((uint *)((long)puVar1 + (ulong)uVar14) != (uint *)0x0) {
                    uVar27 = *(uint *)((long)puVar1 + (ulong)uVar14);
                    goto LAB_00890710;
                  }
                  break;
                }
                if (uVar14 != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar27;
              uVar27 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar27 = 0, puVar1 == puVar23)) goto LAB_00890710;
              lVar30 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar1 + (lVar30 - (long)puVar23);
              if (lVar30 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              puVar21[9] = 0xfffffffe;
              if (uVar17 == 0) break;
              puVar23 = (uint *)(lVar30 + 4);
              while (puVar23[-1] != 0x8c2aec6a) {
                puVar23 = puVar23 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0089070c;
              }
              uVar27 = 0;
              if (*puVar23 != 0xffffffff) {
                uVar27 = *puVar23;
              }
              puVar21[9] = uVar27;
              uVar27 = *puVar1;
              if (uVar27 == 0) break;
            } while( true );
          }
LAB_0089070c:
          uVar27 = 0;
LAB_00890710:
          if (((*puVar1 == 0) || (lVar30 = (long)puVar1 - (ulong)*puVar1, lVar30 == 0)) ||
             (*(char *)(lVar30 + 0xb) == '\0')) {
            if ((DAT_04ce9c20 == '\x01') && (DAT_04ce9c24 == uVar27)) {
              uVar14 = DAT_04ce9c28;
              if (3 < DAT_04ce9c28) goto LAB_00890b88;
            }
            else {
              if ((DAT_04ce9c60 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce9c60);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9c30 = 0x400000000;
                  DAT_04ce9c38 = (undefined8 *)&DAT_04ce9c40;
                  __cxa_guard_release(&DAT_04ce9c60);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce9c68 & 1) == 0) {
                DAT_04ce9c68 = 1;
                if (((DAT_04ce9c90 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce9c90), iVar13 != 0)) {
                  _DAT_04ce9c6c = 0xffffffff00000000;
                  DAT_04ce9c74 = 0xffffffff00000000;
                  DAT_04ce9c7c = 0xffffffff00000000;
                  DAT_04ce9c84 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce9c90);
                }
                _DAT_04ce9c6c = (ulong)~uVar7;
                iVar13 = (int)DAT_04ce9c30;
                iVar15 = DAT_04ce9c30._4_4_;
                if ((int)DAT_04ce9c30 < DAT_04ce9c30._4_4_) {
                  DAT_04ce9c38[(int)DAT_04ce9c30] = &DAT_04ce9c6c;
                  iVar13 = (int)DAT_04ce9c30 + 1;
                  DAT_04ce9c30 = CONCAT44(DAT_04ce9c30._4_4_,iVar13);
                  iVar15 = DAT_04ce9c30._4_4_;
                }
                DAT_04ce9c74 = CONCAT44(1,~uVar5);
                if (iVar13 < iVar15) {
                  DAT_04ce9c38[iVar13] = &DAT_04ce9c74;
                  iVar13 = (int)DAT_04ce9c30 + 1;
                  DAT_04ce9c30 = CONCAT44(DAT_04ce9c30._4_4_,iVar13);
                  iVar15 = DAT_04ce9c30._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
                uVar2 = crc32b(uVar2,0x90,0x4c11db7);
                uVar2 = crc32b(uVar2,0x8c,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
                uVar2 = crc32b(uVar2,0x99,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe9,0x4c11db7);
                uVar2 = crc32b(uVar2,0x96,0x4c11db7);
                uVar2 = crc32b(uVar2,0x8b,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar14 = crc32b(uVar2,0xac,0x4c11db7);
                DAT_04ce9c7c = CONCAT44(2,~uVar14);
                if (iVar13 < iVar15) {
                  DAT_04ce9c38[iVar13] = &DAT_04ce9c7c;
                  iVar13 = (int)DAT_04ce9c30 + 1;
                  DAT_04ce9c30 = CONCAT44(DAT_04ce9c30._4_4_,iVar13);
                  iVar15 = DAT_04ce9c30._4_4_;
                }
                DAT_04ce9c84 = CONCAT44(3,~uVar6);
                if (iVar13 < iVar15) {
                  DAT_04ce9c38[iVar13] = &DAT_04ce9c84;
                  iVar13 = (int)DAT_04ce9c30 + 1;
                  DAT_04ce9c30 = CONCAT44(DAT_04ce9c30._4_4_,iVar13);
                }
                puVar25 = DAT_04ce9c38;
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = (uint *)puVar25[uVar19];
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = (uint *)puVar25[uVar20];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        puVar25[uVar20] = puVar21;
                        puVar25[uVar17] = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar24 = puVar25 + uVar20 + 1;
                      do {
                        puVar21 = (uint *)*puVar24;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar24[1];
                          if (puVar21 != (uint *)0x0) goto LAB_00890b40;
LAB_00890af0:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar24[-1] = puVar21;
                          *puVar24 = puVar23;
                          puVar26 = (uint *)puVar24[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_00890af0;
LAB_00890b40:
                          if (puVar26 == (uint *)0x0) goto LAB_00890af0;
                          if (*puVar21 <= *puVar26) goto LAB_00890af0;
                          uVar14 = uVar18 + 1;
                          *puVar24 = puVar26;
                          puVar24[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar24 = puVar24 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = (uint *)puVar25[uVar14];
                    uVar19 = uVar14;
                    do {
                      puVar23 = (uint *)puVar25[uVar20 - 1];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        puVar25[uVar20 - 1] = puVar21;
                        puVar25[uVar20] = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce9c2c = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce9c2c != '\x01') goto LAB_00890b88;
              if ((int)DAT_04ce9c30 == 0) goto LAB_00890b88;
              if ((int)DAT_04ce9c30 < 2) {
                uVar14 = 0;
                puVar23 = (uint *)*DAT_04ce9c38;
                if (puVar23 != (uint *)0x0) goto LAB_008909b0;
LAB_00890b6c:
                uVar19 = uVar14;
                if (uVar14 < 4) {
LAB_00890b78:
                  uVar14 = *(uint *)(DAT_04ce9c38[uVar19] + 4);
                  if (uVar14 < 4) {
                    DAT_04ce9c20 = '\x01';
                    DAT_04ce9c24 = uVar27;
                    DAT_04ce9c28 = uVar14;
                    goto LAB_00890efc;
                  }
                }
              }
              else {
                uVar14 = 0;
                iVar13 = (int)DAT_04ce9c30 + -1;
                do {
                  iVar15 = iVar13 + uVar14;
                  if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                    iVar15 = iVar15 + 1;
                  }
                  uVar19 = iVar15 >> 1;
                  if ((uint *)DAT_04ce9c38[(int)uVar19] == (uint *)0x0) goto LAB_008909c0;
                  uVar18 = *(uint *)DAT_04ce9c38[(int)uVar19];
                  if (uVar18 == uVar27) goto LAB_008909c0;
                  if (uVar18 < uVar27) {
                    uVar14 = uVar19 + 1;
                  }
                  else {
                    iVar13 = uVar19 - 1;
                  }
                } while ((int)uVar14 < iVar13);
                puVar23 = (uint *)DAT_04ce9c38[(int)uVar14];
                if (puVar23 == (uint *)0x0) goto LAB_00890b6c;
LAB_008909b0:
                uVar19 = uVar14;
                if (*puVar23 == uVar27) {
LAB_008909c0:
                  if (3 < uVar19) goto LAB_00890b88;
                  goto LAB_00890b78;
                }
              }
LAB_00890b88:
              uVar14 = 0;
            }
          }
          else {
            if ((DAT_04ce9ba8 == '\x01') && (DAT_04ce9bac == uVar27)) {
              uVar14 = DAT_04ce9bb0;
              if (3 < DAT_04ce9bb0) goto LAB_00890ef0;
            }
            else {
              if ((DAT_04ce9be8 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_04ce9be8);
                puVar21 = (uint *)PTR_DAT_04bb3250;
                if (iVar13 != 0) {
                  DAT_04ce9bb8 = 0x400000000;
                  DAT_04ce9bc0 = &DAT_04ce9bc8;
                  __cxa_guard_release(&DAT_04ce9be8);
                  puVar21 = (uint *)PTR_DAT_04bb3250;
                }
              }
              if ((DAT_04ce9bf0 & 1) == 0) {
                DAT_04ce9bf0 = 1;
                if (((DAT_04ce9c18 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04ce9c18), iVar13 != 0)) {
                  _DAT_04ce9bf4 = 0xffffffff00000000;
                  DAT_04ce9bfc = 0xffffffff00000000;
                  DAT_04ce9c04 = 0xffffffff00000000;
                  DAT_04ce9c0c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04ce9c18);
                }
                _DAT_04ce9bf4 = (ulong)~uVar10;
                iVar13 = (int)DAT_04ce9bb8;
                iVar15 = DAT_04ce9bb8._4_4_;
                if ((int)DAT_04ce9bb8 < DAT_04ce9bb8._4_4_) {
                  *(undefined4 **)(DAT_04ce9bc0 + (long)(int)DAT_04ce9bb8 * 8) = &DAT_04ce9bf4;
                  iVar13 = (int)DAT_04ce9bb8 + 1;
                  DAT_04ce9bb8 = CONCAT44(DAT_04ce9bb8._4_4_,iVar13);
                  iVar15 = DAT_04ce9bb8._4_4_;
                }
                DAT_04ce9bfc = CONCAT44(1,~uVar8);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_04ce9bc0 + (long)iVar13 * 8) = &DAT_04ce9bfc;
                  iVar13 = (int)DAT_04ce9bb8 + 1;
                  DAT_04ce9bb8 = CONCAT44(DAT_04ce9bb8._4_4_,iVar13);
                  iVar15 = DAT_04ce9bb8._4_4_;
                }
                uVar2 = crc32b(uVar3,0x61,0x4c11db7);
                uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
                uVar14 = crc32b(uVar2,0x65,0x4c11db7);
                DAT_04ce9c04 = CONCAT44(2,~uVar14);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_04ce9bc0 + (long)iVar13 * 8) = &DAT_04ce9c04;
                  iVar13 = (int)DAT_04ce9bb8 + 1;
                  DAT_04ce9bb8 = CONCAT44(DAT_04ce9bb8._4_4_,iVar13);
                  iVar15 = DAT_04ce9bb8._4_4_;
                }
                DAT_04ce9c0c = CONCAT44(3,~uVar9);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_04ce9bc0 + (long)iVar13 * 8) = &DAT_04ce9c0c;
                  iVar13 = (int)DAT_04ce9bb8 + 1;
                  DAT_04ce9bb8 = CONCAT44(DAT_04ce9bb8._4_4_,iVar13);
                }
                puVar12 = DAT_04ce9bc0;
                if (1 < iVar13) {
                  uVar19 = 0;
                  uVar14 = iVar13 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar19 * 8);
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        *(uint **)(puVar12 + uVar20 * 8) = puVar21;
                        *(uint **)(puVar12 + uVar17 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar25 = (undefined8 *)(puVar12 + uVar20 * 8 + 8);
                      do {
                        puVar21 = (uint *)*puVar25;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar25[1];
                          if (puVar21 != (uint *)0x0) goto LAB_00890e70;
LAB_00890e20:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar25[-1] = puVar21;
                          *puVar25 = puVar23;
                          puVar26 = (uint *)puVar25[1];
                          puVar21 = puVar23;
                          uVar14 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_00890e20;
LAB_00890e70:
                          if (puVar26 == (uint *)0x0) goto LAB_00890e20;
                          if (*puVar21 <= *puVar26) goto LAB_00890e20;
                          uVar14 = uVar18 + 1;
                          *puVar25 = puVar26;
                          puVar25[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar25 = puVar25 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar21 = *(uint **)(puVar12 + (ulong)uVar14 * 8);
                    uVar19 = uVar14;
                    do {
                      puVar23 = *(uint **)(puVar12 + uVar20 * 8 + -8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        *(uint **)(puVar12 + uVar20 * 8 + -8) = puVar21;
                        *(uint **)(puVar12 + uVar20 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_04ce9bb4 = '\x01';
                puVar21 = (uint *)PTR_DAT_04bb3250;
              }
              else if (DAT_04ce9bb4 != '\x01') goto LAB_00890ef0;
              if ((int)DAT_04ce9bb8 != 0) {
                if ((int)DAT_04ce9bb8 < 2) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 0;
                  iVar13 = (int)DAT_04ce9bb8 + -1;
                  do {
                    iVar15 = iVar13 + uVar14;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar14)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar19 = iVar15 >> 1;
                    if (*(uint **)(DAT_04ce9bc0 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x00890edc;
                    uVar18 = **(uint **)(DAT_04ce9bc0 + (long)(int)uVar19 * 8);
                    if (uVar18 == uVar27) goto joined_r0x00890edc;
                    if (uVar18 < uVar27) {
                      uVar14 = uVar19 + 1;
                    }
                    else {
                      iVar13 = uVar19 - 1;
                    }
                  } while ((int)uVar14 < iVar13);
                }
                uVar19 = uVar14;
                if ((*(uint **)(DAT_04ce9bc0 + (long)(int)uVar14 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_04ce9bc0 + (long)(int)uVar14 * 8) == uVar27)) {
joined_r0x00890edc:
                  if ((uVar19 < 4) &&
                     (uVar14 = *(uint *)(*(long *)(DAT_04ce9bc0 + (ulong)uVar19 * 8) + 4),
                     uVar14 < 4)) {
                    DAT_04ce9ba8 = '\x01';
                    DAT_04ce9bac = uVar27;
                    DAT_04ce9bb0 = uVar14;
                    goto LAB_00890ef4;
                  }
                }
              }
LAB_00890ef0:
              uVar14 = 0;
            }
LAB_00890ef4:
          }
LAB_00890efc:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar27 = puVar23[1], uVar27 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar23 + lVar30 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar30 != 0) {
              uVar19 = 0;
              if ((ulong)uVar27 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar30) / (ulong)uVar27);
              }
              if (*puVar23 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < DAT_04ce9828) {
                *(short *)(DAT_04ce9830 + (long)(int)uVar19 * 2) = (short)uVar14;
              }
            }
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar11);
  }
  return;
}

