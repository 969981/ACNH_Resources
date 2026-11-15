
void FUN_020e09c0(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint uVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar23 = 0;
    puVar14 = (uint *)PTR_DAT_04bb6b08;
    pcVar12 = PTR_DAT_04bb6b00;
    do {
      if (uVar23 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar7 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar7 = 0x1c;
            }
            puVar2 = (uint *)((ulong)(param_1[1] * uVar23 + (uint)(ushort)param_1[2] * 8 + iVar7) +
                             (long)param_1);
            if (puVar2 != (uint *)0x0) {
              uVar20 = *puVar2;
              if (uVar20 != 0) {
                cVar5 = *pcVar12;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    *pcVar12 = '\x01';
                    puVar14[0] = 0xffffffff;
                    puVar14[1] = 0xffffffff;
                    puVar14[2] = 0xffffffff;
                    puVar14[3] = 0xffffffff;
                    puVar14[0x1c] = 0xffffffff;
                    puVar14[0x1d] = 0xffffffff;
                    puVar14[4] = 0xffffffff;
                    puVar14[5] = 0xffffffff;
                    puVar14[6] = 0xffffffff;
                    puVar14[7] = 0xffffffff;
                    puVar14[8] = 0xffffffff;
                    puVar14[9] = 0xffffffff;
                    puVar14[10] = 0xffffffff;
                    puVar14[0xb] = 0xffffffff;
                    puVar14[0xc] = 0xffffffff;
                    puVar14[0xd] = 0xffffffff;
                    puVar14[0xe] = 0xffffffff;
                    puVar14[0xf] = 0xffffffff;
                    puVar14[0x10] = 0xffffffff;
                    puVar14[0x11] = 0xffffffff;
                    puVar14[0x12] = 0xffffffff;
                    puVar14[0x13] = 0xffffffff;
                    puVar14[0x14] = 0xffffffff;
                    puVar14[0x15] = 0xffffffff;
                    puVar14[0x16] = 0xffffffff;
                    puVar14[0x17] = 0xffffffff;
                    puVar14[0x18] = 0xffffffff;
                    puVar14[0x19] = 0xffffffff;
                    puVar14[0x1a] = 0xffffffff;
                    puVar14[0x1b] = 0xffffffff;
                    uVar20 = *puVar2;
                  }
                  else {
                    uVar6 = *puVar14;
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar20 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_020e0b90;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar20;
                  uVar20 = 0;
                  if ((puVar16 == (uint *)0x0) || (uVar20 = 0, puVar2 == puVar16))
                  goto LAB_020e0b90;
                  lVar22 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar16)) != '\0') {
                    lVar22 = 0x1c;
                  }
                  lVar22 = (long)puVar2 + (lVar22 - (long)puVar16);
                  if (lVar22 == 0) break;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar16));
                  *puVar14 = 0xfffffffe;
                  if (uVar9 == 0) break;
                  puVar16 = (uint *)(lVar22 + 4);
                  while (puVar16[-1] != 0xddf1f8bf) {
                    puVar16 = puVar16 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_020e0b8c;
                  }
                  uVar20 = 0;
                  if (*puVar16 != 0xffffffff) {
                    uVar20 = *puVar16;
                  }
                  *puVar14 = uVar20;
                  uVar20 = *puVar2;
                  if (uVar20 == 0) break;
                } while( true );
              }
LAB_020e0b8c:
              uVar20 = 0;
LAB_020e0b90:
              if (((*puVar2 == 0) || (lVar22 = (long)puVar2 - (ulong)*puVar2, lVar22 == 0)) ||
                 (*(char *)(lVar22 + 0xb) == '\0')) {
                if ((DAT_053e4128 == '\x01') && (DAT_053e412c == uVar20)) {
                  uVar6 = DAT_053e4130;
                  if (0x2f < DAT_053e4130) goto LAB_020e0e48;
                }
                else {
                  if ((DAT_053e42c8 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_053e42c8);
                    puVar14 = (uint *)PTR_DAT_04bb6b08;
                    pcVar12 = PTR_DAT_04bb6b00;
                    if (iVar7 != 0) {
                      DAT_053e4138 = 0x3000000000;
                      DAT_053e4140 = (undefined8 *)&DAT_053e4148;
                      __cxa_guard_release(&DAT_053e42c8);
                      puVar14 = (uint *)PTR_DAT_04bb6b08;
                      pcVar12 = PTR_DAT_04bb6b00;
                    }
                  }
                  if ((DAT_053e42d0 & 1) == 0) {
                    DAT_053e42d0 = 1;
                    if (((DAT_053e4458 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_053e4458), iVar7 != 0)) {
                      DAT_053e42d4 = 0xffffffff00000000;
                      DAT_053e42dc = 0xffffffff00000000;
                      DAT_053e42e4 = 0xffffffff00000000;
                      DAT_053e42ec = 0xffffffff00000000;
                      DAT_053e42f4 = 0xffffffff00000000;
                      DAT_053e42fc = 0xffffffff00000000;
                      DAT_053e4304 = 0xffffffff00000000;
                      DAT_053e430c = 0xffffffff00000000;
                      DAT_053e4314 = 0xffffffff00000000;
                      DAT_053e431c = 0xffffffff00000000;
                      DAT_053e4324 = 0xffffffff00000000;
                      DAT_053e432c = 0xffffffff00000000;
                      DAT_053e4334 = 0xffffffff00000000;
                      DAT_053e433c = 0xffffffff00000000;
                      DAT_053e4344 = 0xffffffff00000000;
                      DAT_053e434c = 0xffffffff00000000;
                      DAT_053e4354 = 0xffffffff00000000;
                      DAT_053e435c = 0xffffffff00000000;
                      DAT_053e4364 = 0xffffffff00000000;
                      DAT_053e436c = 0xffffffff00000000;
                      DAT_053e4374 = 0xffffffff00000000;
                      DAT_053e437c = 0xffffffff00000000;
                      DAT_053e4384 = 0xffffffff00000000;
                      DAT_053e438c = 0xffffffff00000000;
                      DAT_053e4394 = 0xffffffff00000000;
                      DAT_053e439c = 0xffffffff00000000;
                      DAT_053e43a4 = 0xffffffff00000000;
                      DAT_053e43ac = 0xffffffff00000000;
                      DAT_053e43b4 = 0xffffffff00000000;
                      DAT_053e43bc = 0xffffffff00000000;
                      DAT_053e43c4 = 0xffffffff00000000;
                      DAT_053e43cc = 0xffffffff00000000;
                      DAT_053e43d4 = 0xffffffff00000000;
                      DAT_053e43dc = 0xffffffff00000000;
                      DAT_053e43e4 = 0xffffffff00000000;
                      DAT_053e43ec = 0xffffffff00000000;
                      DAT_053e43f4 = 0xffffffff00000000;
                      DAT_053e43fc = 0xffffffff00000000;
                      DAT_053e4404 = 0xffffffff00000000;
                      DAT_053e440c = 0xffffffff00000000;
                      DAT_053e4414 = 0xffffffff00000000;
                      DAT_053e441c = 0xffffffff00000000;
                      DAT_053e4424 = 0xffffffff00000000;
                      DAT_053e442c = 0xffffffff00000000;
                      DAT_053e4434 = 0xffffffff00000000;
                      DAT_053e443c = 0xffffffff00000000;
                      DAT_053e4444 = 0xffffffff00000000;
                      DAT_053e444c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_053e4458);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_DAT_04a73de0)[lVar22];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_020e0cd4:
                            iVar7 = (int)lVar8;
joined_r0x020e0cd8:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_020e0ce0;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_020e0cd4;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x020e0cd8;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_020e0ce0:
                        memcpy(local_174,pbVar21,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar21;
                      if (*pbVar21 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar21 = pbVar21 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar21;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_053e42d4 + lVar22) = uVar11;
                      *(int *)((long)&DAT_053e42d4 + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_053e4138;
                      if ((int)DAT_053e4138 < DAT_053e4138._4_4_) {
                        DAT_053e4140[(int)DAT_053e4138] = &DAT_053e42d4 + lVar22;
                        iVar7 = (int)DAT_053e4138 + 1;
                        DAT_053e4138 = CONCAT44(DAT_053e4138._4_4_,iVar7);
                      }
                      puVar18 = DAT_053e4140;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 0x30);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar14 = (uint *)puVar18[uVar11];
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar13 = uVar9;
                          puVar16 = puVar14;
                        }
                        else {
                          uVar13 = uVar9 + 1;
                          puVar16 = (uint *)puVar18[uVar13];
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar16 < *puVar14)) {
                            puVar18[uVar13] = puVar14;
                            puVar18[uVar9] = puVar16;
                            puVar16 = puVar14;
                          }
                        }
                        uVar15 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar15 != 0) {
                          puVar17 = puVar18 + uVar13 + 1;
                          do {
                            puVar14 = (uint *)*puVar17;
                            uVar10 = (uint)uVar13;
                            if (((puVar16 == (uint *)0x0) || (puVar14 == (uint *)0x0)) ||
                               (*puVar16 <= *puVar14)) {
                              puVar19 = (uint *)puVar17[1];
                              if (puVar14 != (uint *)0x0) goto LAB_020e0fd0;
LAB_020e0f80:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar17[-1] = puVar14;
                              *puVar17 = puVar16;
                              puVar19 = (uint *)puVar17[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_020e0f80;
LAB_020e0fd0:
                              if (puVar19 == (uint *)0x0) goto LAB_020e0f80;
                              if (*puVar14 <= *puVar19) goto LAB_020e0f80;
                              uVar6 = uVar10 + 1;
                              *puVar17 = puVar19;
                              puVar17[1] = puVar14;
                            }
                            uVar13 = uVar13 + 2;
                            puVar17 = puVar17 + 2;
                            puVar16 = puVar14;
                          } while (uVar15 != uVar13);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar13 = (ulong)uVar6;
                        puVar14 = (uint *)puVar18[uVar6];
                        uVar11 = uVar6;
                        do {
                          puVar16 = (uint *)puVar18[uVar13 - 1];
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar14 < *puVar16)) {
                            uVar11 = (uint)uVar13;
                            puVar18[uVar13 - 1] = puVar14;
                            puVar18[uVar13] = puVar16;
                            puVar16 = puVar14;
                          }
                          uVar13 = uVar13 - 1;
                          puVar14 = puVar16;
                        } while ((long)uVar9 < (long)uVar13);
                      } while (uVar11 != uVar6);
                    }
                    DAT_053e4134 = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bb6b08;
                    pcVar12 = PTR_DAT_04bb6b00;
                  }
                  else if (DAT_053e4134 != '\x01') goto LAB_020e0e48;
                  if ((int)DAT_053e4138 == 0) {
LAB_020e0e48:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bb6b08;
                    pcVar12 = PTR_DAT_04bb6b00;
                    if ((int)DAT_053e4138 < 2) {
                      uVar11 = 0;
                      puVar16 = (uint *)*DAT_053e4140;
                      uVar6 = uVar11;
                      if (puVar16 != (uint *)0x0) goto LAB_020e0e10;
joined_r0x020e1004:
                      if (uVar6 < 0x30) {
                        uVar6 = *(uint *)(DAT_053e4140[uVar6] + 4);
                        if (uVar6 < 0x30) {
                          DAT_053e4128 = '\x01';
                          DAT_053e412c = uVar20;
                          DAT_053e4130 = uVar6;
                          goto LAB_020e1430;
                        }
                        goto LAB_020e0e48;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_053e4138 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_053e4140[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x020e1004;
                        uVar10 = *(uint *)DAT_053e4140[(int)uVar6];
                        if (uVar10 == uVar20) goto joined_r0x020e1004;
                        if (uVar10 < uVar20) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar16 = (uint *)DAT_053e4140[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar16 == (uint *)0x0) goto joined_r0x020e1004;
LAB_020e0e10:
                      uVar6 = uVar11;
                      if (*puVar16 == uVar20) goto joined_r0x020e1004;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_053e3df0 == '\x01') && (DAT_053e3df4 == uVar20)) {
                  uVar6 = DAT_053e3df8;
                  if (0x2f < DAT_053e3df8) goto LAB_020e13c4;
                }
                else {
                  if ((DAT_053e3f90 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_053e3f90);
                    puVar14 = (uint *)PTR_DAT_04bb6b08;
                    pcVar12 = PTR_DAT_04bb6b00;
                    if (iVar7 != 0) {
                      DAT_053e3e00 = 0x3000000000;
                      DAT_053e3e08 = &DAT_053e3e10;
                      __cxa_guard_release(&DAT_053e3f90);
                      puVar14 = (uint *)PTR_DAT_04bb6b08;
                      pcVar12 = PTR_DAT_04bb6b00;
                    }
                  }
                  if ((DAT_053e3f98 & 1) == 0) {
                    DAT_053e3f98 = 1;
                    if (((DAT_053e4120 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_053e4120), iVar7 != 0)) {
                      DAT_053e3f9c = 0xffffffff00000000;
                      DAT_053e3fa4 = 0xffffffff00000000;
                      DAT_053e3fac = 0xffffffff00000000;
                      DAT_053e3fb4 = 0xffffffff00000000;
                      DAT_053e3fbc = 0xffffffff00000000;
                      DAT_053e3fc4 = 0xffffffff00000000;
                      DAT_053e3fcc = 0xffffffff00000000;
                      DAT_053e3fd4 = 0xffffffff00000000;
                      DAT_053e3fdc = 0xffffffff00000000;
                      DAT_053e3fe4 = 0xffffffff00000000;
                      DAT_053e3fec = 0xffffffff00000000;
                      DAT_053e3ff4 = 0xffffffff00000000;
                      DAT_053e3ffc = 0xffffffff00000000;
                      DAT_053e4004 = 0xffffffff00000000;
                      DAT_053e400c = 0xffffffff00000000;
                      DAT_053e4014 = 0xffffffff00000000;
                      DAT_053e401c = 0xffffffff00000000;
                      DAT_053e4024 = 0xffffffff00000000;
                      DAT_053e402c = 0xffffffff00000000;
                      DAT_053e4034 = 0xffffffff00000000;
                      DAT_053e403c = 0xffffffff00000000;
                      DAT_053e4044 = 0xffffffff00000000;
                      DAT_053e404c = 0xffffffff00000000;
                      DAT_053e4054 = 0xffffffff00000000;
                      DAT_053e405c = 0xffffffff00000000;
                      DAT_053e4064 = 0xffffffff00000000;
                      DAT_053e406c = 0xffffffff00000000;
                      DAT_053e4074 = 0xffffffff00000000;
                      DAT_053e407c = 0xffffffff00000000;
                      DAT_053e4084 = 0xffffffff00000000;
                      DAT_053e408c = 0xffffffff00000000;
                      DAT_053e4094 = 0xffffffff00000000;
                      DAT_053e409c = 0xffffffff00000000;
                      DAT_053e40a4 = 0xffffffff00000000;
                      DAT_053e40ac = 0xffffffff00000000;
                      DAT_053e40b4 = 0xffffffff00000000;
                      DAT_053e40bc = 0xffffffff00000000;
                      DAT_053e40c4 = 0xffffffff00000000;
                      DAT_053e40cc = 0xffffffff00000000;
                      DAT_053e40d4 = 0xffffffff00000000;
                      DAT_053e40dc = 0xffffffff00000000;
                      DAT_053e40e4 = 0xffffffff00000000;
                      DAT_053e40ec = 0xffffffff00000000;
                      DAT_053e40f4 = 0xffffffff00000000;
                      DAT_053e40fc = 0xffffffff00000000;
                      DAT_053e4104 = 0xffffffff00000000;
                      DAT_053e410c = 0xffffffff00000000;
                      DAT_053e4114 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_053e4120);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_DAT_04a73928)[lVar22];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_020e10c8:
                            iVar7 = (int)lVar8;
joined_r0x020e10cc:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_020e10d4;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_020e10c8;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x020e10cc;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_020e10d4:
                        memcpy(local_174,pbVar21,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar21;
                      if (*pbVar21 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar21 = pbVar21 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar21;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_053e3f9c + lVar22) = uVar11;
                      *(int *)((long)&DAT_053e3f9c + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_053e3e00;
                      if ((int)DAT_053e3e00 < DAT_053e3e00._4_4_) {
                        *(undefined8 **)(DAT_053e3e08 + (long)(int)DAT_053e3e00 * 8) =
                             &DAT_053e3f9c + lVar22;
                        iVar7 = (int)DAT_053e3e00 + 1;
                        DAT_053e3e00 = CONCAT44(DAT_053e3e00._4_4_,iVar7);
                      }
                      puVar4 = DAT_053e3e08;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 0x30);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar14 = *(uint **)(puVar4 + (ulong)uVar11 * 8);
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar13 = uVar9;
                          puVar16 = puVar14;
                        }
                        else {
                          uVar13 = uVar9 + 1;
                          puVar16 = *(uint **)(puVar4 + uVar13 * 8);
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar16 < *puVar14)) {
                            *(uint **)(puVar4 + uVar13 * 8) = puVar14;
                            *(uint **)(puVar4 + uVar9 * 8) = puVar16;
                            puVar16 = puVar14;
                          }
                        }
                        uVar15 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar15 != 0) {
                          puVar18 = (undefined8 *)(puVar4 + uVar13 * 8 + 8);
                          do {
                            puVar14 = (uint *)*puVar18;
                            uVar10 = (uint)uVar13;
                            if (((puVar16 == (uint *)0x0) || (puVar14 == (uint *)0x0)) ||
                               (*puVar16 <= *puVar14)) {
                              puVar19 = (uint *)puVar18[1];
                              if (puVar14 != (uint *)0x0) goto LAB_020e1360;
LAB_020e1310:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar18[-1] = puVar14;
                              *puVar18 = puVar16;
                              puVar19 = (uint *)puVar18[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_020e1310;
LAB_020e1360:
                              if (puVar19 == (uint *)0x0) goto LAB_020e1310;
                              if (*puVar14 <= *puVar19) goto LAB_020e1310;
                              uVar6 = uVar10 + 1;
                              *puVar18 = puVar19;
                              puVar18[1] = puVar14;
                            }
                            uVar13 = uVar13 + 2;
                            puVar18 = puVar18 + 2;
                            puVar16 = puVar14;
                          } while (uVar15 != uVar13);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar13 = (ulong)uVar6;
                        puVar14 = *(uint **)(puVar4 + (ulong)uVar6 * 8);
                        uVar11 = uVar6;
                        do {
                          puVar16 = *(uint **)(puVar4 + uVar13 * 8 + -8);
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar14 < *puVar16)) {
                            uVar11 = (uint)uVar13;
                            *(uint **)(puVar4 + uVar13 * 8 + -8) = puVar14;
                            *(uint **)(puVar4 + uVar13 * 8) = puVar16;
                            puVar16 = puVar14;
                          }
                          uVar13 = uVar13 - 1;
                          puVar14 = puVar16;
                        } while ((long)uVar9 < (long)uVar13);
                      } while (uVar11 != uVar6);
                    }
                    DAT_053e3dfc = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bb6b08;
                    pcVar12 = PTR_DAT_04bb6b00;
                  }
                  else if (DAT_053e3dfc != '\x01') goto LAB_020e13c4;
                  if ((int)DAT_053e3e00 == 0) {
LAB_020e13c4:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bb6b08;
                    pcVar12 = PTR_DAT_04bb6b00;
                    if ((int)DAT_053e3e00 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_053e3e00 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_053e3e08 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x020e13f0;
                        uVar10 = **(uint **)(DAT_053e3e08 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar20) goto joined_r0x020e13f0;
                        if (uVar10 < uVar20) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_053e3e08 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_053e3e08 + (long)(int)uVar6 * 8) == uVar20)) {
joined_r0x020e13f0:
                      if (uVar11 < 0x30) {
                        uVar6 = *(uint *)(*(long *)(DAT_053e3e08 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 0x30) {
                          DAT_053e3df0 = '\x01';
                          DAT_053e3df4 = uVar20;
                          DAT_053e3df8 = uVar6;
                          goto LAB_020e1428;
                        }
                        goto LAB_020e13c4;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_020e1428:
              }
LAB_020e1430:
              puVar4 = PTR_DAT_04bb6b08;
              puVar16 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar16 != (uint *)0x0)) {
                if (*puVar16 != 0) {
                  uVar20 = puVar16[1];
                  if (uVar20 != 0) {
                    if ((ulong)(ushort)puVar16[2] != 0) {
                      lVar22 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar22 = 0x1c;
                      }
                      lVar22 = (long)puVar16 + lVar22 + (ulong)(ushort)puVar16[2] * 8;
                      puVar14 = (uint *)puVar4;
                      if (lVar22 != 0) {
                        uVar11 = 0;
                        if ((ulong)uVar20 != 0) {
                          uVar11 = (uint)((ulong)((long)puVar2 - lVar22) / (ulong)uVar20);
                        }
                        if (*puVar16 <= uVar11) {
                          uVar11 = 0xffffffff;
                        }
                        if (uVar11 < *(uint *)PTR_DAT_04bb6af8) {
                          *(short *)(*(long *)(PTR_DAT_04bb6af8 + 8) + (long)(int)uVar11 * 2) =
                               (short)uVar6;
                        }
                      }
                    }
                  }
                }
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

