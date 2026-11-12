
/* WARNING: Type propagation algorithm not settling */

void FUN_0087ed70(long param_1,long *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  int *piVar20;
  ulong uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  undefined *puVar25;
  uint *puVar26;
  char cVar27;
  byte *pbVar28;
  undefined *puVar29;
  ulong local_1a8;
  ulong local_1a0;
  undefined *local_198;
  char *pcStack_190;
  undefined4 local_188;
  char local_184 [8];
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 local_145;
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined *local_138;
  byte *pbStack_130;
  undefined4 local_128;
  char local_124 [8];
  undefined2 local_11c;
  undefined1 local_11a;
  undefined1 local_e5;
  undefined *local_e0;
  byte *local_d8;
  undefined4 local_d0;
  char local_cc [8];
  undefined2 local_c4;
  undefined1 local_c2;
  undefined1 local_8d;
  short local_88;
  undefined4 local_86;
  undefined1 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c [3];
  
  lVar16 = *param_2;
  if ((char)param_2[5] != '\0' || lVar16 != 0) {
    local_198 = (undefined *)param_2[2];
    local_78 = (undefined *)param_2[3];
    if (0x1e < lVar16) {
      local_78 = local_198;
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_e0 = (undefined *)(lVar16 + -0x278d00);
      local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
      lVar16 = *param_2;
    }
    if (lVar16 < 1) {
      local_78 = local_198;
    }
    else {
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_e0 = (undefined *)(lVar16 + 0x15180);
      local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
    }
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_198);
    if (lVar16 <= lVar10) {
      puVar14 = PTR_DAT_04bb2020 + 0x10;
      do {
        nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_198);
        uVar12 = 1;
        do {
          local_80 = local_78;
          lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
          local_e0 = (undefined *)(lVar16 + uVar12 * 0x15180);
          local_80 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
          uVar24 = *(uint *)(param_1 + 1000);
          if ((0 < (int)uVar24) ||
             (((*(long *)(param_1 + 0x2d8) != 0 &&
               (puVar26 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar26 != (uint *)0x0)) &&
              (uVar24 = *puVar26, 0 < (int)uVar24)))) {
            local_1a0 = (ulong)uVar24;
            uVar13 = 0;
            puVar25 = PTR_DAT_04bb3250;
            do {
              if ((int)*(uint *)(param_1 + 1000) < 1) {
                if (((((*(long *)(param_1 + 0x2d8) == 0) ||
                      (puVar26 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar26 == (uint *)0x0)
                      ) || ((uVar13 < *(uint *)(param_1 + 0x2f0) &&
                            (*(char *)(*(long *)(param_1 + 0x2f8) + uVar13) == '\0')))) ||
                    ((*puVar26 <= uVar13 || (puVar26[1] == 0)))) || ((ushort)puVar26[2] == 0))
                goto LAB_0087f174;
                iVar8 = 0xc;
                if (*(char *)((long)puVar26 + 10) != '\0') {
                  iVar8 = 0x1c;
                }
                puVar26 = (uint *)((ulong)(puVar26[1] * (int)uVar13 + (uint)(ushort)puVar26[2] * 8 +
                                          iVar8) + (long)puVar26);
                uVar24 = *puVar26;
              }
              else if (uVar13 < *(uint *)(param_1 + 1000)) {
                uVar21 = uVar13 & 0xffffffff;
                if (*(uint *)(param_1 + 0x3d8) <= uVar13) {
                  uVar21 = 0;
                }
                puVar26 = *(uint **)(*(long *)(param_1 + 0x3e0) + uVar21 * 8);
                uVar24 = *puVar26;
              }
              else {
LAB_0087f174:
                puVar26 = (uint *)0x0;
                uVar24 = uRam0000000000000000;
              }
              if (uVar24 != 0) {
                cVar27 = *PTR_DAT_04bb3248;
                do {
                  if (cVar27 == '\0') {
                    cVar27 = '\x01';
                    *PTR_DAT_04bb3248 = 1;
                    memset(puVar25,0xff,0x288);
                    uVar24 = *puVar26;
                    puVar25 = PTR_DAT_04bb3250;
                  }
                  else {
                    uVar15 = *(uint *)(puVar25 + 0x148);
                    if (-1 < (int)uVar15) {
                      pbVar18 = (byte *)((ulong)uVar15 + (long)puVar26);
                      goto LAB_0087f264;
                    }
                    if (uVar15 != 0xffffffff) break;
                  }
                  puVar23 = (uint *)(ulong)uVar24;
                  pbVar18 = (byte *)0x0;
                  if ((puVar23 == (uint *)0x0) || (pbVar18 = (byte *)0x0, puVar26 == puVar23))
                  goto LAB_0087f264;
                  lVar16 = 0xc;
                  if (*(char *)((long)puVar26 + (10 - (long)puVar23)) != '\0') {
                    lVar16 = 0x1c;
                  }
                  lVar16 = (long)puVar26 + (lVar16 - (long)puVar23);
                  pbVar18 = (byte *)0x0;
                  if (lVar16 == 0) goto LAB_0087f264;
                  uVar21 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar23));
                  *(undefined4 *)(puVar25 + 0x148) = 0xfffffffe;
                  if (uVar21 == 0) break;
                  piVar20 = (int *)(lVar16 + 4);
                  while (piVar20[-1] != 0x443c0fb7) {
                    piVar20 = piVar20 + 2;
                    uVar21 = uVar21 - 1;
                    if (uVar21 == 0) goto LAB_0087f260;
                  }
                  iVar8 = 0;
                  if (*piVar20 != -1) {
                    iVar8 = *piVar20;
                  }
                  *(int *)(puVar25 + 0x148) = iVar8;
                  uVar24 = *puVar26;
                  if (uVar24 == 0) break;
                } while( true );
              }
LAB_0087f260:
              pbVar18 = (byte *)0x0;
LAB_0087f264:
              pbVar28 = *(byte **)PTR_PTR_04bb3260;
              local_d8 = pbVar28;
              if (pbVar18 != (byte *)0x0) {
                local_d8 = pbVar18;
              }
              uVar24 = *puVar26;
              local_e0 = puVar14;
              if (uVar24 != 0) {
                cVar27 = *PTR_DAT_04bb3248;
                do {
                  if (cVar27 == '\0') {
                    cVar27 = '\x01';
                    *PTR_DAT_04bb3248 = 1;
                    memset(puVar25,0xff,0x288);
                    uVar24 = *puVar26;
                    puVar25 = PTR_DAT_04bb3250;
                  }
                  else {
                    uVar15 = *(uint *)(puVar25 + 0x148);
                    if (-1 < (int)uVar15) {
                      pbVar18 = (byte *)((ulong)uVar15 + (long)puVar26);
                      goto LAB_0087f374;
                    }
                    if (uVar15 != 0xffffffff) break;
                  }
                  puVar23 = (uint *)(ulong)uVar24;
                  pbVar18 = (byte *)0x0;
                  if ((puVar23 == (uint *)0x0) || (pbVar18 = (byte *)0x0, puVar26 == puVar23))
                  goto LAB_0087f374;
                  lVar16 = 0xc;
                  if (*(char *)((long)puVar26 + (10 - (long)puVar23)) != '\0') {
                    lVar16 = 0x1c;
                  }
                  lVar16 = (long)puVar26 + (lVar16 - (long)puVar23);
                  pbVar18 = (byte *)0x0;
                  if (lVar16 == 0) goto LAB_0087f374;
                  uVar21 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar23));
                  *(undefined4 *)(puVar25 + 0x148) = 0xfffffffe;
                  if (uVar21 == 0) break;
                  piVar20 = (int *)(lVar16 + 4);
                  while (piVar20[-1] != 0x443c0fb7) {
                    piVar20 = piVar20 + 2;
                    uVar21 = uVar21 - 1;
                    if (uVar21 == 0) goto LAB_0087f370;
                  }
                  iVar8 = 0;
                  if (*piVar20 != -1) {
                    iVar8 = *piVar20;
                  }
                  *(int *)(puVar25 + 0x148) = iVar8;
                  uVar24 = *puVar26;
                  if (uVar24 == 0) break;
                } while( true );
              }
LAB_0087f370:
              pbVar18 = (byte *)0x0;
LAB_0087f374:
              pbVar2 = pbVar28;
              if (pbVar18 != (byte *)0x0) {
                pbVar2 = pbVar18;
              }
              bVar4 = *pbVar2;
              if (bVar4 == 0) {
                uVar15 = 0;
                uVar24 = 0;
              }
              else {
                uVar21 = 0;
                uVar15 = 0;
                pbVar18 = pbVar2;
                do {
                  uVar22 = (uint)bVar4;
                  iVar8 = (int)uVar21;
                  uVar24 = iVar8 + 1;
                  if (pbVar2[uVar24] == 0) {
                    uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
LAB_0087f438:
                    uVar15 = uVar22 * 0x1b873593 ^ uVar15;
                    break;
                  }
                  uVar24 = iVar8 + 2;
                  if (pbVar2[uVar24] == 0) {
                    uVar22 = (uint)CONCAT11(pbVar18[1],bVar4);
LAB_0087f42c:
                    uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
                    goto LAB_0087f438;
                  }
                  uVar24 = iVar8 + 3;
                  if (pbVar2[uVar24] == 0) {
                    uVar22 = uVar22 | (uint)pbVar18[2] << 0x10 | (uint)pbVar18[1] << 8;
                    goto LAB_0087f42c;
                  }
                  iVar3 = *(int *)pbVar18;
                  uVar24 = iVar8 + 4;
                  uVar21 = (ulong)uVar24;
                  pbVar18 = pbVar2 + uVar21;
                  uVar15 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                           uVar15;
                  bVar4 = *pbVar18;
                  uVar15 = (uVar15 >> 0x13 | uVar15 << 0xd) * 5 + 0xe6546b64;
                } while (bVar4 != 0);
              }
              uVar22 = *(uint *)(param_1 + 0x1f0);
              uVar21 = (ulong)uVar22;
              uVar24 = (uVar24 ^ uVar15 ^ (uVar24 ^ uVar15) >> 0x10) * -0x7a143595;
              uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
              uVar24 = uVar24 ^ uVar24 >> 0x10;
              if (*(char *)(param_1 + 0x201) == '\0') {
                if (0 < (int)uVar22) {
                  puVar19 = *(undefined8 **)(param_1 + 0x1f8);
                  do {
                    puVar23 = (uint *)*puVar19;
                    if (uVar24 == puVar23[8]) goto LAB_0087f528;
                    puVar19 = puVar19 + 1;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
LAB_0087f4fc:
                uVar15 = 0xffffffff;
              }
              else {
                if (uVar22 == 0) goto LAB_0087f4fc;
                if ((int)uVar22 < 2) {
                  lVar16 = *(long *)(param_1 + 0x1f8);
                  uVar22 = 0;
                }
                else {
                  iVar8 = uVar22 - 1;
                  lVar16 = *(long *)(param_1 + 0x1f8);
                  uVar22 = 0;
                  do {
                    iVar3 = iVar8 + uVar22;
                    if (iVar3 < 0 != SCARRY4(iVar8,uVar22)) {
                      iVar3 = iVar3 + 1;
                    }
                    uVar1 = iVar3 >> 1;
                    uVar15 = *(uint *)(*(long *)(lVar16 + (long)(int)uVar1 * 8) + 0x20);
                    if (uVar24 == uVar15) goto joined_r0x0087f534;
                    if (uVar15 < uVar24) {
                      uVar22 = uVar1 + 1;
                    }
                    else {
                      iVar8 = uVar1 - 1;
                    }
                  } while ((int)uVar22 < iVar8);
                }
                uVar15 = 0xffffffff;
                uVar1 = uVar22;
                if (uVar24 == *(uint *)(*(long *)(lVar16 + (long)(int)uVar22 * 8) + 0x20)) {
joined_r0x0087f534:
                  uVar15 = uVar1;
                  if (-1 < (int)uVar15) {
                    puVar23 = *(uint **)(lVar16 + (ulong)uVar15 * 8);
LAB_0087f528:
                    uVar15 = *puVar23;
                  }
                }
              }
              if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
                if ((((*(long *)(param_1 + 0xb8) != 0) &&
                     (puVar23 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar23 != (uint *)0x0))
                    && ((*(uint *)(param_1 + 0xd0) <= uVar15 ||
                        (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar15) != '\0')))) &&
                   (((uVar15 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
                  iVar8 = 0xc;
                  if (*(char *)((long)puVar23 + 10) != '\0') {
                    iVar8 = 0x1c;
                  }
                  puVar23 = (uint *)((ulong)(puVar23[1] * uVar15 + (uint)(ushort)puVar23[2] * 8 +
                                            iVar8) + (long)puVar23);
                  goto joined_r0x0087f8f8;
                }
              }
              else if (uVar15 < *(uint *)(param_1 + 0x1c8)) {
                if (*(uint *)(param_1 + 0x1b8) <= uVar15) {
                  uVar15 = 0;
                }
                puVar23 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)uVar15 * 8);
joined_r0x0087f8f8:
                if (puVar23 != (uint *)0x0) {
                  puVar7 = (uint *)((long)puVar23 - (ulong)*puVar23);
                  if (((*puVar23 == 0) || (puVar7 == (uint *)0x0)) ||
                     ((*puVar7 == 0 ||
                      ((uVar24 = puVar7[1], uVar24 == 0 || ((ulong)(ushort)puVar7[2] == 0)))))) {
LAB_0087f5f4:
                    uVar24 = *puVar26;
                    if (uVar24 != 0) {
                      cVar27 = *PTR_DAT_04bb3248;
                      do {
                        if (cVar27 == '\0') {
                          cVar27 = '\x01';
                          *PTR_DAT_04bb3248 = 1;
                          memset(puVar25,0xff,0x288);
                          uVar24 = *puVar26;
                          puVar25 = PTR_DAT_04bb3250;
                        }
                        else {
                          uVar15 = *(uint *)(puVar25 + 0x148);
                          if (-1 < (int)uVar15) {
                            pbVar18 = (byte *)((ulong)uVar15 + (long)puVar26);
                            goto LAB_0087f6dc;
                          }
                          if (uVar15 != 0xffffffff) break;
                        }
                        puVar23 = (uint *)(ulong)uVar24;
                        pbVar18 = (byte *)0x0;
                        if ((puVar23 == (uint *)0x0) || (pbVar18 = (byte *)0x0, puVar26 == puVar23))
                        goto LAB_0087f6dc;
                        lVar16 = 0xc;
                        if (*(char *)((long)puVar26 + (10 - (long)puVar23)) != '\0') {
                          lVar16 = 0x1c;
                        }
                        lVar16 = (long)puVar26 + (lVar16 - (long)puVar23);
                        pbVar18 = (byte *)0x0;
                        if (lVar16 == 0) goto LAB_0087f6dc;
                        uVar21 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar23));
                        *(undefined4 *)(puVar25 + 0x148) = 0xfffffffe;
                        if (uVar21 == 0) break;
                        piVar20 = (int *)(lVar16 + 4);
                        while (piVar20[-1] != 0x443c0fb7) {
                          piVar20 = piVar20 + 2;
                          uVar21 = uVar21 - 1;
                          if (uVar21 == 0) goto LAB_0087f6d8;
                        }
                        iVar8 = 0;
                        if (*piVar20 != -1) {
                          iVar8 = *piVar20;
                        }
                        *(int *)(puVar25 + 0x148) = iVar8;
                        uVar24 = *puVar26;
                        if (uVar24 == 0) break;
                      } while( true );
                    }
LAB_0087f6d8:
                    pbVar18 = (byte *)0x0;
LAB_0087f6dc:
                    pbStack_130 = pbVar28;
                    if (pbVar18 != (byte *)0x0) {
                      pbStack_130 = pbVar18;
                    }
                    local_138 = PTR_DAT_04bb2020 + 0x10;
                    uVar21 = FUN_00879630(param_1,&local_138,0);
                    puVar25 = PTR_DAT_04bb3250;
                    if ((uVar21 & 1) == 0) goto LAB_0087f0b0;
                    uVar24 = *puVar26;
                    if (uVar24 != 0) {
                      cVar27 = *PTR_DAT_04bb3248;
                      do {
                        if (cVar27 == '\0') {
                          cVar27 = '\x01';
                          *PTR_DAT_04bb3248 = 1;
                          memset(puVar25,0xff,0x288);
                          uVar24 = *puVar26;
                          puVar25 = PTR_DAT_04bb3250;
                        }
                        else {
                          uVar15 = *(uint *)(puVar25 + 0x148);
                          if (-1 < (int)uVar15) {
                            pbVar18 = (byte *)((ulong)uVar15 + (long)puVar26);
                            goto LAB_0087f7fc;
                          }
                          if (uVar15 != 0xffffffff) break;
                        }
                        puVar23 = (uint *)(ulong)uVar24;
                        pbVar18 = (byte *)0x0;
                        if ((puVar23 == (uint *)0x0) || (pbVar18 = (byte *)0x0, puVar26 == puVar23))
                        goto LAB_0087f7fc;
                        lVar16 = 0xc;
                        if (*(char *)((long)puVar26 + (10 - (long)puVar23)) != '\0') {
                          lVar16 = 0x1c;
                        }
                        lVar16 = (long)puVar26 + (lVar16 - (long)puVar23);
                        pbVar18 = (byte *)0x0;
                        if (lVar16 == 0) goto LAB_0087f7fc;
                        uVar21 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar23));
                        *(undefined4 *)(puVar25 + 0x148) = 0xfffffffe;
                        if (uVar21 == 0) break;
                        piVar20 = (int *)(lVar16 + 4);
                        while (piVar20[-1] != 0x443c0fb7) {
                          piVar20 = piVar20 + 2;
                          uVar21 = uVar21 - 1;
                          if (uVar21 == 0) goto LAB_0087f7f8;
                        }
                        iVar8 = 0;
                        if (*piVar20 != -1) {
                          iVar8 = *piVar20;
                        }
                        *(int *)(puVar25 + 0x148) = iVar8;
                        uVar24 = *puVar26;
                        if (uVar24 == 0) break;
                      } while( true );
                    }
LAB_0087f7f8:
                    pbVar18 = (byte *)0x0;
LAB_0087f7fc:
                    pbVar28 = *(byte **)PTR_PTR_04bb3260;
                    if (pbVar18 != (byte *)0x0) {
                      pbVar28 = pbVar18;
                    }
                    bVar4 = *pbVar28;
                    if (bVar4 == 0) {
                      uVar15 = 0;
                      uVar24 = 0;
                    }
                    else {
                      uVar21 = 0;
                      uVar15 = 0;
                      pbVar18 = pbVar28;
                      do {
                        uVar22 = (uint)bVar4;
                        iVar8 = (int)uVar21;
                        uVar24 = iVar8 + 1;
                        if (pbVar28[uVar24] == 0) {
                          uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
LAB_0087f954:
                          uVar15 = uVar22 * 0x1b873593 ^ uVar15;
                          break;
                        }
                        uVar24 = iVar8 + 2;
                        if (pbVar28[uVar24] == 0) {
                          uVar22 = (uint)CONCAT11(pbVar18[1],bVar4);
LAB_0087f948:
                          uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
                          goto LAB_0087f954;
                        }
                        uVar24 = iVar8 + 3;
                        if (pbVar28[uVar24] == 0) {
                          uVar22 = uVar22 | (uint)pbVar18[2] << 0x10 | (uint)pbVar18[1] << 8;
                          goto LAB_0087f948;
                        }
                        iVar3 = *(int *)pbVar18;
                        uVar24 = iVar8 + 4;
                        uVar21 = (ulong)uVar24;
                        pbVar18 = pbVar28 + uVar21;
                        uVar15 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) *
                                 0x1b873593 ^ uVar15;
                        bVar4 = *pbVar18;
                        uVar15 = (uVar15 >> 0x13 | uVar15 << 0xd) * 5 + 0xe6546b64;
                      } while (bVar4 != 0);
                    }
                    uVar22 = *(uint *)(param_1 + 0x1f0);
                    uVar21 = (ulong)uVar22;
                    uVar24 = (uVar24 ^ uVar15 ^ (uVar24 ^ uVar15) >> 0x10) * -0x7a143595;
                    uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
                    uVar24 = uVar24 ^ uVar24 >> 0x10;
                    if (*(char *)(param_1 + 0x201) == '\0') {
                      if (0 < (int)uVar22) {
                        puVar19 = *(undefined8 **)(param_1 + 0x1f8);
                        do {
                          puVar26 = (uint *)*puVar19;
                          if (uVar24 == puVar26[8]) goto LAB_0087fa3c;
                          puVar19 = puVar19 + 1;
                          uVar21 = uVar21 - 1;
                        } while (uVar21 != 0);
                      }
LAB_0087fa10:
                      uVar15 = 0xffffffff;
                    }
                    else {
                      if (uVar22 == 0) goto LAB_0087fa10;
                      if ((int)uVar22 < 2) {
                        lVar16 = *(long *)(param_1 + 0x1f8);
                        uVar22 = 0;
                      }
                      else {
                        iVar8 = uVar22 - 1;
                        lVar16 = *(long *)(param_1 + 0x1f8);
                        uVar22 = 0;
                        do {
                          iVar3 = iVar8 + uVar22;
                          if (iVar3 < 0 != SCARRY4(iVar8,uVar22)) {
                            iVar3 = iVar3 + 1;
                          }
                          uVar1 = iVar3 >> 1;
                          uVar15 = *(uint *)(*(long *)(lVar16 + (long)(int)uVar1 * 8) + 0x20);
                          if (uVar24 == uVar15) goto joined_r0x0087fa48;
                          if (uVar15 < uVar24) {
                            uVar22 = uVar1 + 1;
                          }
                          else {
                            iVar8 = uVar1 - 1;
                          }
                        } while ((int)uVar22 < iVar8);
                      }
                      uVar15 = 0xffffffff;
                      uVar1 = uVar22;
                      if (uVar24 == *(uint *)(*(long *)(lVar16 + (long)(int)uVar22 * 8) + 0x20)) {
joined_r0x0087fa48:
                        uVar15 = uVar1;
                        if (-1 < (int)uVar15) {
                          puVar26 = *(uint **)(lVar16 + (ulong)uVar15 * 8);
LAB_0087fa3c:
                          uVar15 = *puVar26;
                        }
                      }
                    }
                    if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
                      if ((((*(long *)(param_1 + 0xb8) == 0) ||
                           (puVar26 = *(uint **)(*(long *)(param_1 + 0xb8) + 8),
                           puVar26 == (uint *)0x0)) ||
                          ((uVar15 < *(uint *)(param_1 + 0xd0) &&
                           (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar15) == '\0')))) ||
                         (((*puVar26 <= uVar15 || (puVar26[1] == 0)) || ((ushort)puVar26[2] == 0))))
                      goto LAB_0087fae8;
                      iVar8 = 0xc;
                      if (*(char *)((long)puVar26 + 10) != '\0') {
                        iVar8 = 0x1c;
                      }
                      lVar16 = (ulong)(puVar26[1] * uVar15 + (uint)(ushort)puVar26[2] * 8 + iVar8) +
                               (long)puVar26;
                    }
                    else if (uVar15 < *(uint *)(param_1 + 0x1c8)) {
                      if (*(uint *)(param_1 + 0x1b8) <= uVar15) {
                        uVar15 = 0;
                      }
                      lVar16 = *(long *)(*(long *)(param_1 + 0x1c0) + (ulong)uVar15 * 8);
                    }
                    else {
LAB_0087fae8:
                      lVar16 = 0;
                    }
                    uVar21 = FUN_00875c10(param_1,lVar16,(ulong)local_80 & 0xffff,local_80._2_1_,
                                          local_80._3_1_);
                  }
                  else {
                    lVar16 = 0xc;
                    if (*(char *)((long)puVar7 + 10) != '\0') {
                      lVar16 = 0x1c;
                    }
                    lVar16 = (long)puVar7 + lVar16 + (ulong)(ushort)puVar7[2] * 8;
                    if (lVar16 == 0) goto LAB_0087f5f4;
                    uVar15 = 0;
                    if ((ulong)uVar24 != 0) {
                      uVar15 = (uint)((ulong)((long)puVar23 - lVar16) / (ulong)uVar24);
                    }
                    if (*puVar7 <= uVar15) {
                      uVar15 = 0xffffffff;
                    }
                    if (DAT_04ce9768 <= uVar15) goto LAB_0087f5f4;
                    uVar5 = *(ushort *)(DAT_04ce9770 + (long)(int)uVar15 * 2);
                    if (5 < uVar5) goto LAB_0087f5f4;
                    if (uVar5 != 5) {
                      if (uVar5 == 0) goto LAB_0087f5f4;
                      goto LAB_0087f0b0;
                    }
                    uVar24 = *puVar26;
                    if (uVar24 != 0) {
                      cVar27 = *PTR_DAT_04bb3248;
                      do {
                        if (cVar27 == '\0') {
                          cVar27 = '\x01';
                          *PTR_DAT_04bb3248 = 1;
                          memset(puVar25,0xff,0x288);
                          uVar24 = *puVar26;
                          puVar25 = PTR_DAT_04bb3250;
                        }
                        else {
                          uVar15 = *(uint *)(puVar25 + 0x148);
                          if (-1 < (int)uVar15) {
                            pbVar18 = (byte *)((ulong)uVar15 + (long)puVar26);
                            goto LAB_0087ff9c;
                          }
                          if (uVar15 != 0xffffffff) break;
                        }
                        puVar23 = (uint *)(ulong)uVar24;
                        pbVar18 = (byte *)0x0;
                        if ((puVar23 == (uint *)0x0) || (pbVar18 = (byte *)0x0, puVar26 == puVar23))
                        goto LAB_0087ff9c;
                        lVar16 = 0xc;
                        if (*(char *)((long)puVar26 + (10 - (long)puVar23)) != '\0') {
                          lVar16 = 0x1c;
                        }
                        lVar16 = (long)puVar26 + (lVar16 - (long)puVar23);
                        pbVar18 = (byte *)0x0;
                        if (lVar16 == 0) goto LAB_0087ff9c;
                        uVar21 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar23));
                        *(undefined4 *)(puVar25 + 0x148) = 0xfffffffe;
                        if (uVar21 == 0) break;
                        piVar20 = (int *)(lVar16 + 4);
                        while (piVar20[-1] != 0x443c0fb7) {
                          piVar20 = piVar20 + 2;
                          uVar21 = uVar21 - 1;
                          if (uVar21 == 0) goto LAB_0087ff98;
                        }
                        iVar8 = 0;
                        if (*piVar20 != -1) {
                          iVar8 = *piVar20;
                        }
                        *(int *)(puVar25 + 0x148) = iVar8;
                        uVar24 = *puVar26;
                        if (uVar24 == 0) break;
                      } while( true );
                    }
LAB_0087ff98:
                    pbVar18 = (byte *)0x0;
LAB_0087ff9c:
                    pbStack_130 = pbVar28;
                    if (pbVar18 != (byte *)0x0) {
                      pbStack_130 = pbVar18;
                    }
                    local_138 = PTR_DAT_04bb2020 + 0x10;
                    uVar21 = FUN_00879630(param_1,&local_138,0);
                    puVar25 = PTR_DAT_04bb3250;
                    if ((uVar21 & 1) == 0) goto LAB_0087f0b0;
                    uVar24 = *puVar26;
                    if (uVar24 != 0) {
                      cVar27 = *PTR_DAT_04bb3248;
                      do {
                        if (cVar27 == '\0') {
                          cVar27 = '\x01';
                          *PTR_DAT_04bb3248 = 1;
                          memset(puVar25,0xff,0x288);
                          uVar24 = *puVar26;
                          puVar25 = PTR_DAT_04bb3250;
                        }
                        else {
                          uVar15 = *(uint *)(puVar25 + 0x148);
                          if (-1 < (int)uVar15) {
                            pbVar18 = (byte *)((ulong)uVar15 + (long)puVar26);
                            goto LAB_008800bc;
                          }
                          if (uVar15 != 0xffffffff) break;
                        }
                        puVar23 = (uint *)(ulong)uVar24;
                        pbVar18 = (byte *)0x0;
                        if ((puVar23 == (uint *)0x0) || (pbVar18 = (byte *)0x0, puVar26 == puVar23))
                        goto LAB_008800bc;
                        lVar16 = 0xc;
                        if (*(char *)((long)puVar26 + (10 - (long)puVar23)) != '\0') {
                          lVar16 = 0x1c;
                        }
                        lVar16 = (long)puVar26 + (lVar16 - (long)puVar23);
                        pbVar18 = (byte *)0x0;
                        if (lVar16 == 0) goto LAB_008800bc;
                        uVar21 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar23));
                        *(undefined4 *)(puVar25 + 0x148) = 0xfffffffe;
                        if (uVar21 == 0) break;
                        piVar20 = (int *)(lVar16 + 4);
                        while (piVar20[-1] != 0x443c0fb7) {
                          piVar20 = piVar20 + 2;
                          uVar21 = uVar21 - 1;
                          if (uVar21 == 0) goto LAB_008800b8;
                        }
                        iVar8 = 0;
                        if (*piVar20 != -1) {
                          iVar8 = *piVar20;
                        }
                        *(int *)(puVar25 + 0x148) = iVar8;
                        uVar24 = *puVar26;
                        if (uVar24 == 0) break;
                      } while( true );
                    }
LAB_008800b8:
                    pbVar18 = (byte *)0x0;
LAB_008800bc:
                    pbVar28 = *(byte **)PTR_PTR_04bb3260;
                    if (pbVar18 != (byte *)0x0) {
                      pbVar28 = pbVar18;
                    }
                    bVar4 = *pbVar28;
                    if (bVar4 == 0) {
                      uVar15 = 0;
                      uVar24 = 0;
                    }
                    else {
                      uVar21 = 0;
                      uVar15 = 0;
                      pbVar18 = pbVar28;
                      do {
                        uVar22 = (uint)bVar4;
                        iVar8 = (int)uVar21;
                        uVar24 = iVar8 + 1;
                        if (pbVar28[uVar24] == 0) {
                          uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
LAB_008801a0:
                          uVar15 = uVar22 * 0x1b873593 ^ uVar15;
                          break;
                        }
                        uVar24 = iVar8 + 2;
                        if (pbVar28[uVar24] == 0) {
                          uVar22 = (uint)CONCAT11(pbVar18[1],bVar4);
LAB_00880194:
                          uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
                          goto LAB_008801a0;
                        }
                        uVar24 = iVar8 + 3;
                        if (pbVar28[uVar24] == 0) {
                          uVar22 = uVar22 | (uint)pbVar18[2] << 0x10 | (uint)pbVar18[1] << 8;
                          goto LAB_00880194;
                        }
                        iVar3 = *(int *)pbVar18;
                        uVar24 = iVar8 + 4;
                        uVar21 = (ulong)uVar24;
                        pbVar18 = pbVar28 + uVar21;
                        uVar15 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) *
                                 0x1b873593 ^ uVar15;
                        bVar4 = *pbVar18;
                        uVar15 = (uVar15 >> 0x13 | uVar15 << 0xd) * 5 + 0xe6546b64;
                      } while (bVar4 != 0);
                    }
                    uVar22 = *(uint *)(param_1 + 0x1f0);
                    uVar21 = (ulong)uVar22;
                    uVar24 = (uVar24 ^ uVar15 ^ (uVar24 ^ uVar15) >> 0x10) * -0x7a143595;
                    uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
                    uVar24 = uVar24 ^ uVar24 >> 0x10;
                    if (*(char *)(param_1 + 0x201) == '\0') {
                      if (0 < (int)uVar22) {
                        puVar19 = *(undefined8 **)(param_1 + 0x1f8);
                        do {
                          puVar26 = (uint *)*puVar19;
                          if (uVar24 == puVar26[8]) goto LAB_0088028c;
                          puVar19 = puVar19 + 1;
                          uVar21 = uVar21 - 1;
                        } while (uVar21 != 0);
                      }
LAB_00880260:
                      uVar15 = 0xffffffff;
                    }
                    else {
                      if (uVar22 == 0) goto LAB_00880260;
                      if ((int)uVar22 < 2) {
                        lVar16 = *(long *)(param_1 + 0x1f8);
                        uVar22 = 0;
                      }
                      else {
                        iVar8 = uVar22 - 1;
                        lVar16 = *(long *)(param_1 + 0x1f8);
                        uVar22 = 0;
                        do {
                          iVar3 = iVar8 + uVar22;
                          if (iVar3 < 0 != SCARRY4(iVar8,uVar22)) {
                            iVar3 = iVar3 + 1;
                          }
                          uVar1 = iVar3 >> 1;
                          uVar15 = *(uint *)(*(long *)(lVar16 + (long)(int)uVar1 * 8) + 0x20);
                          if (uVar24 == uVar15) goto joined_r0x00880298;
                          if (uVar15 < uVar24) {
                            uVar22 = uVar1 + 1;
                          }
                          else {
                            iVar8 = uVar1 - 1;
                          }
                        } while ((int)uVar22 < iVar8);
                      }
                      uVar15 = 0xffffffff;
                      uVar1 = uVar22;
                      if (uVar24 == *(uint *)(*(long *)(lVar16 + (long)(int)uVar22 * 8) + 0x20)) {
joined_r0x00880298:
                        uVar15 = uVar1;
                        if (-1 < (int)uVar15) {
                          puVar26 = *(uint **)(lVar16 + (ulong)uVar15 * 8);
LAB_0088028c:
                          uVar15 = *puVar26;
                        }
                      }
                    }
                    if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
                      if ((((*(long *)(param_1 + 0xb8) != 0) &&
                           (puVar26 = *(uint **)(*(long *)(param_1 + 0xb8) + 8),
                           puVar26 != (uint *)0x0)) &&
                          ((*(uint *)(param_1 + 0xd0) <= uVar15 ||
                           (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar15) != '\0')))) &&
                         (((uVar15 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0))))
                      {
                        iVar8 = 0xc;
                        if (*(char *)((long)puVar26 + 10) != '\0') {
                          iVar8 = 0x1c;
                        }
                        puVar26 = (uint *)((ulong)(puVar26[1] * uVar15 +
                                                   (uint)(ushort)puVar26[2] * 8 + iVar8) +
                                          (long)puVar26);
                        if (puVar26 != (uint *)0x0) goto LAB_008802cc;
                      }
                      goto LAB_0087f0b0;
                    }
                    if (*(uint *)(param_1 + 0x1c8) <= uVar15) goto LAB_0087f0b0;
                    if (*(uint *)(param_1 + 0x1b8) <= uVar15) {
                      uVar15 = 0;
                    }
                    puVar26 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)uVar15 * 8);
                    if (puVar26 == (uint *)0x0) goto LAB_0087f0b0;
LAB_008802cc:
                    puVar23 = (uint *)((long)puVar26 - (ulong)*puVar26);
                    if (((*puVar26 != 0) && (puVar23 != (uint *)0x0)) &&
                       ((*puVar23 != 0 &&
                        ((uVar24 = puVar23[1], uVar24 != 0 && ((ulong)(ushort)puVar23[2] != 0))))))
                    {
                      lVar16 = 0xc;
                      if (*(char *)((long)puVar23 + 10) != '\0') {
                        lVar16 = 0x1c;
                      }
                      lVar16 = (long)puVar23 + lVar16 + (ulong)(ushort)puVar23[2] * 8;
                      if (lVar16 != 0) {
                        uVar15 = 0;
                        if ((ulong)uVar24 != 0) {
                          uVar15 = (uint)((ulong)((long)puVar26 - lVar16) / (ulong)uVar24);
                        }
                        if (*puVar23 <= uVar15) {
                          uVar15 = 0xffffffff;
                        }
                        if ((uVar15 < DAT_04ce9768) &&
                           (*(short *)(DAT_04ce9770 + (long)(int)uVar15 * 2) == 4))
                        goto LAB_0087f0b0;
                      }
                    }
                    uVar21 = FUN_00875530(param_1,puVar26,(ulong)local_80 & 0xffff,local_80._2_1_,
                                          local_80._3_1_);
                  }
                  puVar25 = PTR_DAT_04bb3250;
                  if ((uVar21 & 1) != 0) {
                    (**(code **)(local_e0 + 0x18))(&local_e0);
                    bVar4 = *local_d8;
                    if (bVar4 == 0) {
                      uVar15 = 0;
                      uVar24 = 0;
                    }
                    else {
                      uVar21 = 0;
                      uVar15 = 0;
                      pbVar18 = local_d8;
                      do {
                        uVar22 = (uint)bVar4;
                        iVar8 = (int)uVar21;
                        uVar24 = iVar8 + 1;
                        if (local_d8[uVar24] == 0) {
                          uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
LAB_0087fbf0:
                          uVar15 = uVar22 * 0x1b873593 ^ uVar15;
                          break;
                        }
                        uVar24 = iVar8 + 2;
                        if (local_d8[uVar24] == 0) {
                          uVar22 = (uint)CONCAT11(pbVar18[1],bVar4);
LAB_0087fbe4:
                          uVar22 = uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11;
                          goto LAB_0087fbf0;
                        }
                        uVar24 = iVar8 + 3;
                        if (local_d8[uVar24] == 0) {
                          uVar22 = uVar22 | (uint)pbVar18[2] << 0x10 | (uint)pbVar18[1] << 8;
                          goto LAB_0087fbe4;
                        }
                        iVar3 = *(int *)pbVar18;
                        uVar24 = iVar8 + 4;
                        uVar21 = (ulong)uVar24;
                        pbVar18 = local_d8 + uVar21;
                        uVar15 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) *
                                 0x1b873593 ^ uVar15;
                        bVar4 = *pbVar18;
                        uVar15 = (uVar15 >> 0x13 | uVar15 << 0xd) * 5 + 0xe6546b64;
                      } while (bVar4 != 0);
                    }
                    uVar22 = *(uint *)(param_1 + 0x1f0);
                    uVar21 = (ulong)uVar22;
                    uVar24 = (uVar24 ^ uVar15 ^ (uVar24 ^ uVar15) >> 0x10) * -0x7a143595;
                    uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
                    uVar24 = uVar24 ^ uVar24 >> 0x10;
                    if (*(char *)(param_1 + 0x201) == '\0') {
                      if (0 < (int)uVar22) {
                        puVar19 = *(undefined8 **)(param_1 + 0x1f8);
                        do {
                          puVar26 = (uint *)*puVar19;
                          if (uVar24 == puVar26[8]) goto LAB_0087fcdc;
                          puVar19 = puVar19 + 1;
                          uVar21 = uVar21 - 1;
                        } while (uVar21 != 0);
                      }
LAB_0087fcb0:
                      uVar15 = 0xffffffff;
                    }
                    else {
                      if (uVar22 == 0) goto LAB_0087fcb0;
                      if ((int)uVar22 < 2) {
                        lVar16 = *(long *)(param_1 + 0x1f8);
                        uVar22 = 0;
                      }
                      else {
                        iVar8 = uVar22 - 1;
                        lVar16 = *(long *)(param_1 + 0x1f8);
                        uVar22 = 0;
                        do {
                          iVar3 = iVar8 + uVar22;
                          if (iVar3 < 0 != SCARRY4(iVar8,uVar22)) {
                            iVar3 = iVar3 + 1;
                          }
                          uVar1 = iVar3 >> 1;
                          uVar15 = *(uint *)(*(long *)(lVar16 + (long)(int)uVar1 * 8) + 0x20);
                          if (uVar24 == uVar15) goto joined_r0x0087fce8;
                          if (uVar15 < uVar24) {
                            uVar22 = uVar1 + 1;
                          }
                          else {
                            iVar8 = uVar1 - 1;
                          }
                        } while ((int)uVar22 < iVar8);
                      }
                      uVar15 = 0xffffffff;
                      uVar1 = uVar22;
                      if (uVar24 == *(uint *)(*(long *)(lVar16 + (long)(int)uVar22 * 8) + 0x20)) {
joined_r0x0087fce8:
                        uVar15 = uVar1;
                        if (-1 < (int)uVar15) {
                          puVar26 = *(uint **)(lVar16 + (ulong)uVar15 * 8);
LAB_0087fcdc:
                          uVar15 = *puVar26;
                        }
                      }
                    }
                    puVar25 = PTR_DAT_04bb3250;
                    if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
                      if ((((*(long *)(param_1 + 0xb8) != 0) &&
                           (puVar26 = *(uint **)(*(long *)(param_1 + 0xb8) + 8),
                           puVar26 != (uint *)0x0)) &&
                          ((*(uint *)(param_1 + 0xd0) <= uVar15 ||
                           (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar15) != '\0')))) &&
                         (((uVar15 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0))))
                      {
                        iVar8 = 0xc;
                        if (*(char *)((long)puVar26 + 10) != '\0') {
                          iVar8 = 0x1c;
                        }
                        puVar26 = (uint *)((ulong)(puVar26[1] * uVar15 +
                                                   (uint)(ushort)puVar26[2] * 8 + iVar8) +
                                          (long)puVar26);
                        goto joined_r0x0087fe78;
                      }
                    }
                    else if (uVar15 < *(uint *)(param_1 + 0x1c8)) {
                      if (*(uint *)(param_1 + 0x1b8) <= uVar15) {
                        uVar15 = 0;
                      }
                      puVar26 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)uVar15 * 8);
joined_r0x0087fe78:
                      if ((puVar26 != (uint *)0x0) && (uVar24 = *puVar26, uVar24 != 0)) {
                        cVar27 = *PTR_DAT_04bb3248;
                        do {
                          if (cVar27 == '\0') {
                            cVar27 = '\x01';
                            *PTR_DAT_04bb3248 = 1;
                            memset(puVar25,0xff,0x288);
                            uVar24 = *puVar26;
                            puVar25 = PTR_DAT_04bb3250;
                          }
                          else {
                            uVar15 = *(uint *)(puVar25 + 0x30);
                            if (-1 < (int)uVar15) {
                              uVar21 = 0;
                              if ((byte *)((ulong)uVar15 + (long)puVar26) != (byte *)0x0) {
                                uVar21 = (ulong)*(byte *)((ulong)uVar15 + (long)puVar26);
                              }
                              goto LAB_0087fe80;
                            }
                            if (uVar15 != 0xffffffff) break;
                          }
                          puVar23 = (uint *)(ulong)uVar24;
                          uVar21 = 0;
                          if ((puVar23 == (uint *)0x0) || (uVar21 = 0, puVar26 == puVar23))
                          goto LAB_0087fe80;
                          lVar16 = 0xc;
                          if (*(char *)((long)puVar26 + (10 - (long)puVar23)) != '\0') {
                            lVar16 = 0x1c;
                          }
                          lVar16 = (long)puVar26 + (lVar16 - (long)puVar23);
                          if (lVar16 == 0) break;
                          uVar17 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar23));
                          *(undefined4 *)(puVar25 + 0x30) = 0xfffffffe;
                          uVar21 = 0;
                          if (uVar17 == 0) goto LAB_0087fe80;
                          piVar20 = (int *)(lVar16 + 4);
                          while (piVar20[-1] != -0x6ad30cd2) {
                            piVar20 = piVar20 + 2;
                            uVar17 = uVar17 - 1;
                            if (uVar17 == 0) {
                              uVar21 = 0;
                              goto LAB_0087fe80;
                            }
                          }
                          uVar21 = 0;
                          iVar8 = 0;
                          if (*piVar20 != -1) {
                            iVar8 = *piVar20;
                          }
                          *(int *)(puVar25 + 0x30) = iVar8;
                          uVar24 = *puVar26;
                          if (uVar24 == 0) goto LAB_0087fe80;
                        } while( true );
                      }
                    }
                    uVar21 = 0;
LAB_0087fe80:
                    if (uVar12 == uVar21) {
                      FUN_0087e230(param_1,&local_e0,&local_78,&local_80);
                      puVar25 = PTR_DAT_04bb3250;
                    }
                  }
                }
              }
LAB_0087f0b0:
              uVar13 = uVar13 + 1;
            } while (uVar13 != local_1a0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x1f);
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        local_e0 = (undefined *)(lVar16 + 0x15180);
        local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_198);
      } while (lVar16 <= lVar10);
    }
  }
  puVar14 = PTR_DAT_04bb2020 + 0x10;
  local_d8 = (byte *)0x408bf35;
  local_e0 = puVar14;
  FUN_00882240(param_1,&local_e0,param_2);
  local_d8 = (byte *)0x40e90fb;
  local_e0 = puVar14;
  FUN_00882240(param_1,&local_e0,param_2);
  local_d8 = (byte *)0x40d4383;
  local_e0 = puVar14;
  FUN_00882240(param_1,&local_e0,param_2);
  local_d8 = (byte *)0x40dec68;
  local_e0 = puVar14;
  iVar8 = FUN_0273ea30(&local_e0);
  puVar14 = PTR_DAT_04bb2bc0;
  if (iVar8 != (short)param_2[2]) {
    puVar29 = (undefined *)param_2[2];
    local_86 = 0x101;
    local_c4 = 0x3173;
    local_80 = (undefined *)CONCAT17((char)((ulong)local_80 >> 0x38),0x1010000);
    local_d8 = (byte *)local_cc;
    local_88 = 0;
    lVar16 = param_1 + 8;
    local_82 = 0;
    local_d0 = 0x40;
    local_cc[0] = s_Fireworks1_0409b32e[0];
    local_cc[1] = s_Fireworks1_0409b32e[1];
    local_cc[2] = s_Fireworks1_0409b32e[2];
    local_cc[3] = s_Fireworks1_0409b32e[3];
    local_cc[4] = s_Fireworks1_0409b32e[4];
    local_cc[5] = s_Fireworks1_0409b32e[5];
    local_cc[6] = s_Fireworks1_0409b32e[6];
    local_cc[7] = s_Fireworks1_0409b32e[7];
    puVar25 = PTR_DAT_04bb2bc0 + 0x10;
    local_c2 = 0;
    local_8d = 0;
    local_e0 = puVar25;
    local_78 = puVar29;
    uVar9 = FUN_006bd550(local_d8,0);
    local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar9);
    uVar11 = FUN_0088c0d0(lVar16,&local_138);
    local_198 = (undefined *)CONCAT71(local_198._1_7_,1);
    local_6c[0] = CONCAT31(local_6c[0]._1_3_,1);
    uVar12 = FUN_00874dd0(uVar11,uVar11,&local_198,local_6c,(ulong)puVar29 & 0xffffffff);
    sVar6 = (short)puVar29;
    if ((uVar12 & 1) == 0) {
      uVar12 = 0;
      local_1a8 = 1;
      local_1a0 = 1;
    }
    else {
      uVar12 = (ulong)local_80 >> 0x30;
      local_80._0_6_ = CONCAT24(5,CONCAT13((undefined1)local_6c[0],CONCAT12(local_198._0_1_,sVar6)))
      ;
      local_80 = (undefined *)(CONCAT26((short)uVar12,(undefined6)local_80) & 0xff00ffffffffffff);
      uVar12 = (ulong)local_80;
      local_1a0 = (ulong)local_80 >> 0x10;
      local_1a8 = (ulong)local_80 >> 0x18;
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
      local_138 = (undefined *)(lVar10 + -0x54600);
      local_80 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_138);
    }
    local_128 = 0x40;
    pbStack_130 = (byte *)local_124;
    local_11a = 0;
    local_11c = 0x3573;
    local_e5 = 0;
    local_124[0] = s_Fireworks5_0406c382[0];
    local_124[1] = s_Fireworks5_0406c382[1];
    local_124[2] = s_Fireworks5_0406c382[2];
    local_124[3] = s_Fireworks5_0406c382[3];
    local_124[4] = s_Fireworks5_0406c382[4];
    local_124[5] = s_Fireworks5_0406c382[5];
    local_124[6] = s_Fireworks5_0406c382[6];
    local_124[7] = s_Fireworks5_0406c382[7];
    local_138 = puVar25;
    uVar9 = FUN_006bd550(pbStack_130,0);
    local_198 = (undefined *)CONCAT44(local_198._4_4_,uVar9);
    uVar11 = FUN_0088c0d0(lVar16,&local_198);
    local_13c[0] = 1;
    local_140[0] = 1;
    uVar13 = FUN_00874dd0(uVar11,uVar11,local_13c,local_140,(ulong)puVar29 & 0xffffffff);
    if ((uVar13 & 1) == 0) {
      local_17a = 0;
      local_188 = 0x40;
      local_17c = 0x3473;
      pcStack_190 = local_184;
      local_198 = puVar14 + 0x10;
      local_145 = 0;
      local_184[0] = s_Fireworks4_040dec7c[0];
      local_184[1] = s_Fireworks4_040dec7c[1];
      local_184[2] = s_Fireworks4_040dec7c[2];
      local_184[3] = s_Fireworks4_040dec7c[3];
      local_184[4] = s_Fireworks4_040dec7c[4];
      local_184[5] = s_Fireworks4_040dec7c[5];
      local_184[6] = s_Fireworks4_040dec7c[6];
      local_184[7] = s_Fireworks4_040dec7c[7];
      local_6c[0] = FUN_006bd550(pcStack_190,0);
      uVar11 = FUN_0088c0d0(lVar16,local_6c);
      uVar13 = FUN_00874dd0(uVar11,uVar11,local_13c,local_140,(ulong)puVar29 & 0xffffffff);
      puVar14 = (undefined *)0x0;
      if ((uVar13 & 1) != 0) {
        puVar14 = (undefined *)((ulong)puVar29 & 0xffffffff);
        local_82 = 0;
        local_86._0_2_ = CONCAT11(local_140[0],local_13c[0]);
        local_86 = CONCAT22(5,(undefined2)local_86);
        local_88 = sVar6;
      }
      puVar29 = puVar14;
    }
    else {
      local_82 = 0;
      local_86._0_2_ = CONCAT11(local_140[0],local_13c[0]);
      local_86 = CONCAT22(5,(undefined2)local_86);
      local_88 = sVar6;
    }
    if ((((short)local_80 != 0) && ((uVar12 & 0xffff) != 0)) && (((ulong)puVar29 & 0xffff) != 0)) {
      uVar13 = FUN_00a828ac(&local_78,&local_80,&local_88);
      if ((uVar13 & 1) == 0) {
        if ((short)local_78 != local_88) {
          return;
        }
        if (local_78._2_1_ != (char)local_86) {
          return;
        }
        if (local_78._3_1_ != local_86._1_1_) {
          return;
        }
      }
      uVar13 = FUN_00879630(param_1,&local_e0,0);
      if ((uVar13 & 1) != 0) {
        (**(code **)(local_e0 + 0x18))(&local_e0);
        uVar9 = FUN_006bd550(local_d8,0);
        local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar9);
        uVar11 = FUN_0088c0d0(lVar16,&local_138);
        uVar12 = FUN_00875c10(param_1,uVar11,uVar12 & 0xffffffff,local_1a0,local_1a8);
        if ((uVar12 & 1) != 0) {
          local_198 = local_78;
          FUN_0087e230(param_1,&local_e0,&local_78,&local_198);
          local_138 = PTR_DAT_04bb2020 + 0x10;
          pbStack_130 = (byte *)0x40dec68;
          FUN_0273f3c4(&local_138,(long)(short)param_2[2]);
        }
      }
    }
  }
  return;
}

