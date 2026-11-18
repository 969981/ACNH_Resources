
void FUN_036ba910(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  long lVar24;
  byte *pbVar25;
  uint uVar26;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar4 = PTR_DAT_04bc3980;
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar26 = 0;
    do {
      if (((uVar26 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar11 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar2 = (uint *)((ulong)(param_1[1] * uVar26 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                         (long)param_1);
        if (puVar2 != (uint *)0x0) {
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc3978;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *PTR_DAT_04bc3978 = 1;
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)puVar4;
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036baad0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036baad0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)puVar4 = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0xe1bf082) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036baacc;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)puVar4 = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036baacc:
          uVar6 = 0;
LAB_036baad0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036bc570(uVar6);
            if (2 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ac2a0(uVar6,0);
            if (2 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar18 != (uint *)0x0)) && (*puVar18 != 0)) &&
             ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab2768) {
                *(undefined2 *)(DAT_05ab2770 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc3978;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *PTR_DAT_04bc3978 = 1;
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 4);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036bac90;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036bac90;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x481fd496) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036bac8c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar4 + 4) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036bac8c:
          uVar6 = 0;
LAB_036bac90:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036bc570(uVar6);
            if (2 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ac2a0(uVar6,0);
            if (2 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab2778) {
                *(undefined2 *)(DAT_05ab2780 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc3978;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *PTR_DAT_04bc3978 = 1;
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 8);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036bae50;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036bae50;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x5962beef) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036bae4c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar4 + 8) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036bae4c:
          uVar6 = 0;
LAB_036bae50:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036bc570(uVar6);
            if (2 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ac2a0(uVar6,0);
            if (2 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab2788) {
                *(undefined2 *)(DAT_05ab2790 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc3978;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *PTR_DAT_04bc3978 = 1;
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 0xc);
                if (-1 < (int)uVar10) {
                  if ((uint *)((long)puVar2 + (ulong)uVar10) != (uint *)0x0) {
                    uVar7 = *(uint *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036bb010;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar7 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar7 = 0, puVar2 == puVar18)) goto LAB_036bb010;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x2b54bedd) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036bb00c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar4 + 0xc) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036bb00c:
          uVar7 = 0;
LAB_036bb010:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            if ((DAT_05ab2998 == '\x01') && (DAT_05ab299c == uVar7)) {
              uVar10 = DAT_05ab29a0;
              if (0x14 < DAT_05ab29a0) goto LAB_036bb2c0;
            }
            else {
              if (((DAT_05ab2a60 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05ab2a60), iVar11 != 0)) {
                DAT_05ab29a8 = 0x1500000000;
                DAT_05ab29b0 = (undefined8 *)&DAT_05ab29b8;
                __cxa_guard_release(&DAT_05ab2a60);
              }
              if ((DAT_05ab2a68 & 1) == 0) {
                DAT_05ab2a68 = 1;
                if (((DAT_05ab2b18 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05ab2b18), iVar11 != 0)) {
                  DAT_05ab2b0c = 0xffffffff00000000;
                  DAT_05ab2a6c = 0xffffffff00000000;
                  DAT_05ab2a74 = 0xffffffff00000000;
                  DAT_05ab2a7c = 0xffffffff00000000;
                  DAT_05ab2a84 = 0xffffffff00000000;
                  DAT_05ab2a8c = 0xffffffff00000000;
                  DAT_05ab2a94 = 0xffffffff00000000;
                  DAT_05ab2a9c = 0xffffffff00000000;
                  DAT_05ab2aa4 = 0xffffffff00000000;
                  DAT_05ab2aac = 0xffffffff00000000;
                  DAT_05ab2ab4 = 0xffffffff00000000;
                  DAT_05ab2abc = 0xffffffff00000000;
                  DAT_05ab2ac4 = 0xffffffff00000000;
                  DAT_05ab2acc = 0xffffffff00000000;
                  DAT_05ab2ad4 = 0xffffffff00000000;
                  DAT_05ab2adc = 0xffffffff00000000;
                  DAT_05ab2ae4 = 0xffffffff00000000;
                  DAT_05ab2aec = 0xffffffff00000000;
                  DAT_05ab2af4 = 0xffffffff00000000;
                  DAT_05ab2afc = 0xffffffff00000000;
                  DAT_05ab2b04 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05ab2b18);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = (&PTR_DAT_04b445a0)[lVar24];
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_036bb154:
                        iVar11 = (int)lVar12;
joined_r0x036bb158:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_036bb160;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_036bb154;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x036bb158;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_036bb160:
                    memcpy(local_174,pbVar25,(long)iVar11);
                    local_174[iVar11] = 0;
                  }
                  uVar10 = (uint)*pbVar25;
                  if (*pbVar25 == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0xffffffff;
                    do {
                      pbVar25 = pbVar25 + 1;
                      uVar16 = crc32b(uVar16,uVar10,0x4c11db7);
                      uVar10 = (uint)*pbVar25;
                    } while (uVar10 != 0);
                    uVar16 = ~uVar16;
                  }
                  *(uint *)(&DAT_05ab2a6c + lVar24) = uVar16;
                  *(int *)((long)&DAT_05ab2a6c + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05ab29a8;
                  if ((int)DAT_05ab29a8 < DAT_05ab29a8._4_4_) {
                    DAT_05ab29b0[(int)DAT_05ab29a8] = &DAT_05ab2a6c + lVar24;
                    iVar11 = (int)DAT_05ab29a8 + 1;
                    DAT_05ab29a8 = CONCAT44(DAT_05ab29a8._4_4_,iVar11);
                  }
                  puVar22 = DAT_05ab29b0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0x15);
                if (1 < iVar11) {
                  uVar16 = 0;
                  uVar10 = iVar11 - 1;
                  do {
                    if ((int)uVar10 <= (int)uVar16) break;
                    puVar18 = (uint *)puVar22[uVar16];
                    uVar14 = (ulong)uVar16;
                    if ((uVar10 - uVar16 & 1) == 0) {
                      uVar17 = uVar14;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar17 = uVar14 + 1;
                      puVar20 = (uint *)puVar22[uVar17];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        puVar22[uVar17] = puVar18;
                        puVar22[uVar14] = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar10;
                    uVar10 = uVar16;
                    if (~uVar14 + uVar19 != 0) {
                      puVar21 = puVar22 + uVar17 + 1;
                      do {
                        puVar18 = (uint *)*puVar21;
                        uVar15 = (uint)uVar17;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar23 = (uint *)puVar21[1];
                          if (puVar18 != (uint *)0x0) goto LAB_036bb440;
LAB_036bb3f0:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar21[-1] = puVar18;
                          *puVar21 = puVar20;
                          puVar23 = (uint *)puVar21[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_036bb3f0;
LAB_036bb440:
                          if (puVar23 == (uint *)0x0) goto LAB_036bb3f0;
                          if (*puVar18 <= *puVar23) goto LAB_036bb3f0;
                          uVar10 = uVar15 + 1;
                          *puVar21 = puVar23;
                          puVar21[1] = puVar18;
                        }
                        uVar17 = uVar17 + 2;
                        puVar21 = puVar21 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar17);
                    }
                    if ((int)uVar10 <= (int)uVar16) break;
                    uVar17 = (ulong)uVar10;
                    puVar18 = (uint *)puVar22[uVar10];
                    uVar16 = uVar10;
                    do {
                      puVar20 = (uint *)puVar22[uVar17 - 1];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar16 = (uint)uVar17;
                        puVar22[uVar17 - 1] = puVar18;
                        puVar22[uVar17] = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar17 = uVar17 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar14 < (long)uVar17);
                  } while (uVar16 != uVar10);
                }
                DAT_05ab29a4 = '\x01';
              }
              else if (DAT_05ab29a4 != '\x01') goto LAB_036bb2c0;
              if ((int)DAT_05ab29a8 == 0) {
LAB_036bb2c0:
                uVar10 = 0;
              }
              else {
                if ((int)DAT_05ab29a8 < 2) {
                  uVar16 = 0;
                  puVar18 = (uint *)*DAT_05ab29b0;
                  uVar10 = uVar16;
                  if (puVar18 != (uint *)0x0) goto LAB_036bb290;
joined_r0x036bb474:
                  if (uVar10 < 0x15) {
                    uVar10 = *(uint *)(DAT_05ab29b0[uVar10] + 4);
                    if (uVar10 < 0x15) {
                      DAT_05ab2998 = '\x01';
                      DAT_05ab299c = uVar7;
                      DAT_05ab29a0 = uVar10;
                      goto LAB_036bb86c;
                    }
                    goto LAB_036bb2c0;
                  }
                }
                else {
                  uVar16 = 0;
                  iVar11 = (int)DAT_05ab29a8 + -1;
                  do {
                    iVar1 = iVar11 + uVar16;
                    if (iVar1 < 0 != SCARRY4(iVar11,uVar16)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar10 = iVar1 >> 1;
                    if ((uint *)DAT_05ab29b0[(int)uVar10] == (uint *)0x0) goto joined_r0x036bb474;
                    uVar15 = *(uint *)DAT_05ab29b0[(int)uVar10];
                    if (uVar15 == uVar7) goto joined_r0x036bb474;
                    if (uVar15 < uVar7) {
                      uVar16 = uVar10 + 1;
                    }
                    else {
                      iVar11 = uVar10 - 1;
                    }
                  } while ((int)uVar16 < iVar11);
                  puVar18 = (uint *)DAT_05ab29b0[(int)uVar16];
                  uVar10 = uVar16;
                  if (puVar18 == (uint *)0x0) goto joined_r0x036bb474;
LAB_036bb290:
                  uVar10 = uVar16;
                  if (*puVar18 == uVar7) goto joined_r0x036bb474;
                }
                uVar10 = 0;
              }
            }
          }
          else {
            if ((DAT_05ab2810 == '\x01') && (DAT_05ab2814 == uVar7)) {
              uVar10 = DAT_05ab2818;
              if (0x14 < DAT_05ab2818) goto LAB_036bb80c;
            }
            else {
              if (((DAT_05ab28d8 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05ab28d8), iVar11 != 0)) {
                DAT_05ab2820 = 0x1500000000;
                DAT_05ab2828 = &DAT_05ab2830;
                __cxa_guard_release(&DAT_05ab28d8);
              }
              if ((DAT_05ab28e0 & 1) == 0) {
                DAT_05ab28e0 = 1;
                if (((DAT_05ab2990 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05ab2990), iVar11 != 0)) {
                  DAT_05ab2984 = 0xffffffff00000000;
                  DAT_05ab28e4 = 0xffffffff00000000;
                  DAT_05ab28ec = 0xffffffff00000000;
                  DAT_05ab28f4 = 0xffffffff00000000;
                  DAT_05ab28fc = 0xffffffff00000000;
                  DAT_05ab2904 = 0xffffffff00000000;
                  DAT_05ab290c = 0xffffffff00000000;
                  DAT_05ab2914 = 0xffffffff00000000;
                  DAT_05ab291c = 0xffffffff00000000;
                  DAT_05ab2924 = 0xffffffff00000000;
                  DAT_05ab292c = 0xffffffff00000000;
                  DAT_05ab2934 = 0xffffffff00000000;
                  DAT_05ab293c = 0xffffffff00000000;
                  DAT_05ab2944 = 0xffffffff00000000;
                  DAT_05ab294c = 0xffffffff00000000;
                  DAT_05ab2954 = 0xffffffff00000000;
                  DAT_05ab295c = 0xffffffff00000000;
                  DAT_05ab2964 = 0xffffffff00000000;
                  DAT_05ab296c = 0xffffffff00000000;
                  DAT_05ab2974 = 0xffffffff00000000;
                  DAT_05ab297c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05ab2990);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = *(byte **)(PTR_DAT_04bc2558 + lVar24 * 8 + 0x150);
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_036bb528:
                        iVar11 = (int)lVar12;
joined_r0x036bb52c:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_036bb534;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_036bb528;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x036bb52c;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_036bb534:
                    memcpy(local_174,pbVar25,(long)iVar11);
                    local_174[iVar11] = 0;
                  }
                  uVar10 = (uint)*pbVar25;
                  if (*pbVar25 == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0xffffffff;
                    do {
                      pbVar25 = pbVar25 + 1;
                      uVar16 = crc32b(uVar16,uVar10,0x4c11db7);
                      uVar10 = (uint)*pbVar25;
                    } while (uVar10 != 0);
                    uVar16 = ~uVar16;
                  }
                  *(uint *)(&DAT_05ab28e4 + lVar24) = uVar16;
                  *(int *)((long)&DAT_05ab28e4 + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05ab2820;
                  if ((int)DAT_05ab2820 < DAT_05ab2820._4_4_) {
                    *(undefined8 **)(DAT_05ab2828 + (long)(int)DAT_05ab2820 * 8) =
                         &DAT_05ab28e4 + lVar24;
                    iVar11 = (int)DAT_05ab2820 + 1;
                    DAT_05ab2820 = CONCAT44(DAT_05ab2820._4_4_,iVar11);
                  }
                  puVar5 = DAT_05ab2828;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0x15);
                if (1 < iVar11) {
                  uVar16 = 0;
                  uVar10 = iVar11 - 1;
                  do {
                    if ((int)uVar10 <= (int)uVar16) break;
                    puVar18 = *(uint **)(puVar5 + (ulong)uVar16 * 8);
                    uVar14 = (ulong)uVar16;
                    if ((uVar10 - uVar16 & 1) == 0) {
                      uVar17 = uVar14;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar17 = uVar14 + 1;
                      puVar20 = *(uint **)(puVar5 + uVar17 * 8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        *(uint **)(puVar5 + uVar17 * 8) = puVar18;
                        *(uint **)(puVar5 + uVar14 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar10;
                    uVar10 = uVar16;
                    if (~uVar14 + uVar19 != 0) {
                      puVar22 = (undefined8 *)(puVar5 + uVar17 * 8 + 8);
                      do {
                        puVar18 = (uint *)*puVar22;
                        uVar15 = (uint)uVar17;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar23 = (uint *)puVar22[1];
                          if (puVar18 != (uint *)0x0) goto LAB_036bb7b0;
LAB_036bb760:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar22[-1] = puVar18;
                          *puVar22 = puVar20;
                          puVar23 = (uint *)puVar22[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_036bb760;
LAB_036bb7b0:
                          if (puVar23 == (uint *)0x0) goto LAB_036bb760;
                          if (*puVar18 <= *puVar23) goto LAB_036bb760;
                          uVar10 = uVar15 + 1;
                          *puVar22 = puVar23;
                          puVar22[1] = puVar18;
                        }
                        uVar17 = uVar17 + 2;
                        puVar22 = puVar22 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar17);
                    }
                    if ((int)uVar10 <= (int)uVar16) break;
                    uVar17 = (ulong)uVar10;
                    puVar18 = *(uint **)(puVar5 + (ulong)uVar10 * 8);
                    uVar16 = uVar10;
                    do {
                      puVar20 = *(uint **)(puVar5 + uVar17 * 8 + -8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar16 = (uint)uVar17;
                        *(uint **)(puVar5 + uVar17 * 8 + -8) = puVar18;
                        *(uint **)(puVar5 + uVar17 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar17 = uVar17 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar14 < (long)uVar17);
                  } while (uVar16 != uVar10);
                }
                DAT_05ab281c = '\x01';
              }
              else if (DAT_05ab281c != '\x01') goto LAB_036bb80c;
              if ((int)DAT_05ab2820 == 0) {
LAB_036bb80c:
                uVar10 = 0;
              }
              else {
                if ((int)DAT_05ab2820 < 2) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = 0;
                  iVar11 = (int)DAT_05ab2820 + -1;
                  do {
                    iVar1 = iVar11 + uVar10;
                    if (iVar1 < 0 != SCARRY4(iVar11,uVar10)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar16 = iVar1 >> 1;
                    if (*(uint **)(DAT_05ab2828 + (long)(int)uVar16 * 8) == (uint *)0x0)
                    goto joined_r0x036bb838;
                    uVar15 = **(uint **)(DAT_05ab2828 + (long)(int)uVar16 * 8);
                    if (uVar15 == uVar7) goto joined_r0x036bb838;
                    if (uVar15 < uVar7) {
                      uVar10 = uVar16 + 1;
                    }
                    else {
                      iVar11 = uVar16 - 1;
                    }
                  } while ((int)uVar10 < iVar11);
                }
                uVar16 = uVar10;
                if ((*(uint **)(DAT_05ab2828 + (long)(int)uVar10 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05ab2828 + (long)(int)uVar10 * 8) == uVar7)) {
joined_r0x036bb838:
                  if (uVar16 < 0x15) {
                    uVar10 = *(uint *)(*(long *)(DAT_05ab2828 + (ulong)uVar16 * 8) + 4);
                    if (uVar10 < 0x15) {
                      DAT_05ab2810 = '\x01';
                      DAT_05ab2814 = uVar7;
                      DAT_05ab2818 = uVar10;
                      goto LAB_036bb864;
                    }
                    goto LAB_036bb80c;
                  }
                }
                uVar10 = 0;
              }
            }
LAB_036bb864:
          }
LAB_036bb86c:
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar18 != (uint *)0x0)) && (*puVar18 != 0)) &&
             ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar16 = 0;
              if ((ulong)uVar7 != 0) {
                uVar16 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if (uVar16 < *(uint *)PTR_DAT_04bc3970) {
                *(short *)(*(long *)(PTR_DAT_04bc3970 + 8) + (long)(int)uVar16 * 2) = (short)uVar10;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc3978;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *PTR_DAT_04bc3978 = 1;
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 0x10);
                if (-1 < (int)uVar10) {
                  if ((uint *)((long)puVar2 + (ulong)uVar10) != (uint *)0x0) {
                    uVar7 = *(uint *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036bb9e0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar7 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar7 = 0, puVar2 == puVar18)) goto LAB_036bb9e0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0x4b547f5c) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036bb9dc;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar4 + 0x10) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036bb9dc:
          uVar7 = 0;
LAB_036bb9e0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            if ((DAT_05ab2c08 == '\x01') && (DAT_05ab2c0c == uVar7)) {
              uVar10 = DAT_05ab2c10;
              if (10 < DAT_05ab2c10) goto LAB_036bbcb0;
            }
            else {
              if (((DAT_05ab2c80 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05ab2c80), iVar11 != 0)) {
                DAT_05ab2c18 = 0xb00000000;
                DAT_05ab2c20 = (undefined8 *)&DAT_05ab2c28;
                __cxa_guard_release(&DAT_05ab2c80);
              }
              if ((DAT_05ab2c88 & 1) == 0) {
                DAT_05ab2c88 = 1;
                if (((DAT_05ab2ce8 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05ab2ce8), iVar11 != 0)) {
                  DAT_05ab2cdc = 0xffffffff00000000;
                  DAT_05ab2c8c = 0xffffffff00000000;
                  DAT_05ab2c94 = 0xffffffff00000000;
                  DAT_05ab2c9c = 0xffffffff00000000;
                  DAT_05ab2ca4 = 0xffffffff00000000;
                  DAT_05ab2cac = 0xffffffff00000000;
                  DAT_05ab2cb4 = 0xffffffff00000000;
                  DAT_05ab2cbc = 0xffffffff00000000;
                  DAT_05ab2cc4 = 0xffffffff00000000;
                  DAT_05ab2ccc = 0xffffffff00000000;
                  DAT_05ab2cd4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05ab2ce8);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = (&PTR_DAT_04b44828)[lVar24];
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_036bbb44:
                        iVar11 = (int)lVar12;
joined_r0x036bbb48:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_036bbb50;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_036bbb44;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x036bbb48;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_036bbb50:
                    memcpy(local_174,pbVar25,(long)iVar11);
                    local_174[iVar11] = 0;
                  }
                  uVar10 = (uint)*pbVar25;
                  if (*pbVar25 == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0xffffffff;
                    do {
                      pbVar25 = pbVar25 + 1;
                      uVar16 = crc32b(uVar16,uVar10,0x4c11db7);
                      uVar10 = (uint)*pbVar25;
                    } while (uVar10 != 0);
                    uVar16 = ~uVar16;
                  }
                  *(uint *)(&DAT_05ab2c8c + lVar24) = uVar16;
                  *(int *)((long)&DAT_05ab2c8c + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05ab2c18;
                  if ((int)DAT_05ab2c18 < DAT_05ab2c18._4_4_) {
                    DAT_05ab2c20[(int)DAT_05ab2c18] = &DAT_05ab2c8c + lVar24;
                    iVar11 = (int)DAT_05ab2c18 + 1;
                    DAT_05ab2c18 = CONCAT44(DAT_05ab2c18._4_4_,iVar11);
                  }
                  puVar22 = DAT_05ab2c20;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0xb);
                if (1 < iVar11) {
                  uVar16 = 0;
                  uVar10 = iVar11 - 1;
                  do {
                    if ((int)uVar10 <= (int)uVar16) break;
                    puVar18 = (uint *)puVar22[uVar16];
                    uVar14 = (ulong)uVar16;
                    if ((uVar10 - uVar16 & 1) == 0) {
                      uVar17 = uVar14;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar17 = uVar14 + 1;
                      puVar20 = (uint *)puVar22[uVar17];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        puVar22[uVar17] = puVar18;
                        puVar22[uVar14] = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar10;
                    uVar10 = uVar16;
                    if (~uVar14 + uVar19 != 0) {
                      puVar21 = puVar22 + uVar17 + 1;
                      do {
                        puVar18 = (uint *)*puVar21;
                        uVar15 = (uint)uVar17;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar23 = (uint *)puVar21[1];
                          if (puVar18 != (uint *)0x0) goto LAB_036bbe30;
LAB_036bbde0:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar21[-1] = puVar18;
                          *puVar21 = puVar20;
                          puVar23 = (uint *)puVar21[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_036bbde0;
LAB_036bbe30:
                          if (puVar23 == (uint *)0x0) goto LAB_036bbde0;
                          if (*puVar18 <= *puVar23) goto LAB_036bbde0;
                          uVar10 = uVar15 + 1;
                          *puVar21 = puVar23;
                          puVar21[1] = puVar18;
                        }
                        uVar17 = uVar17 + 2;
                        puVar21 = puVar21 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar17);
                    }
                    if ((int)uVar10 <= (int)uVar16) break;
                    uVar17 = (ulong)uVar10;
                    puVar18 = (uint *)puVar22[uVar10];
                    uVar16 = uVar10;
                    do {
                      puVar20 = (uint *)puVar22[uVar17 - 1];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar16 = (uint)uVar17;
                        puVar22[uVar17 - 1] = puVar18;
                        puVar22[uVar17] = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar17 = uVar17 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar14 < (long)uVar17);
                  } while (uVar16 != uVar10);
                }
                DAT_05ab2c14 = '\x01';
              }
              else if (DAT_05ab2c14 != '\x01') goto LAB_036bbcb0;
              if ((int)DAT_05ab2c18 == 0) {
LAB_036bbcb0:
                uVar10 = 0;
              }
              else {
                if ((int)DAT_05ab2c18 < 2) {
                  uVar16 = 0;
                  puVar18 = (uint *)*DAT_05ab2c20;
                  uVar10 = uVar16;
                  if (puVar18 != (uint *)0x0) goto LAB_036bbc80;
joined_r0x036bbc94:
                  if (uVar10 < 0xb) {
                    uVar10 = *(uint *)(DAT_05ab2c20[uVar10] + 4);
                    if (uVar10 < 0xb) {
                      DAT_05ab2c08 = '\x01';
                      DAT_05ab2c0c = uVar7;
                      DAT_05ab2c10 = uVar10;
                      goto LAB_036bc25c;
                    }
                    goto LAB_036bbcb0;
                  }
                }
                else {
                  uVar16 = 0;
                  iVar11 = (int)DAT_05ab2c18 + -1;
                  do {
                    iVar1 = iVar11 + uVar16;
                    if (iVar1 < 0 != SCARRY4(iVar11,uVar16)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar10 = iVar1 >> 1;
                    if ((uint *)DAT_05ab2c20[(int)uVar10] == (uint *)0x0) goto joined_r0x036bbc94;
                    uVar15 = *(uint *)DAT_05ab2c20[(int)uVar10];
                    if (uVar15 == uVar7) goto joined_r0x036bbc94;
                    if (uVar15 < uVar7) {
                      uVar16 = uVar10 + 1;
                    }
                    else {
                      iVar11 = uVar10 - 1;
                    }
                  } while ((int)uVar16 < iVar11);
                  puVar18 = (uint *)DAT_05ab2c20[(int)uVar16];
                  uVar10 = uVar16;
                  if (puVar18 == (uint *)0x0) goto joined_r0x036bbc94;
LAB_036bbc80:
                  uVar10 = uVar16;
                  if (*puVar18 == uVar7) goto joined_r0x036bbc94;
                }
                uVar10 = 0;
              }
            }
          }
          else {
            if ((DAT_05ab2b20 == '\x01') && (DAT_05ab2b24 == uVar7)) {
              uVar10 = DAT_05ab2b28;
              if (10 < DAT_05ab2b28) goto LAB_036bc1fc;
            }
            else {
              if (((DAT_05ab2b98 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05ab2b98), iVar11 != 0)) {
                DAT_05ab2b30 = 0xb00000000;
                DAT_05ab2b38 = &DAT_05ab2b40;
                __cxa_guard_release(&DAT_05ab2b98);
              }
              if ((DAT_05ab2ba0 & 1) == 0) {
                DAT_05ab2ba0 = 1;
                if (((DAT_05ab2c00 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05ab2c00), iVar11 != 0)) {
                  DAT_05ab2bf4 = 0xffffffff00000000;
                  DAT_05ab2ba4 = 0xffffffff00000000;
                  DAT_05ab2bac = 0xffffffff00000000;
                  DAT_05ab2bb4 = 0xffffffff00000000;
                  DAT_05ab2bbc = 0xffffffff00000000;
                  DAT_05ab2bc4 = 0xffffffff00000000;
                  DAT_05ab2bcc = 0xffffffff00000000;
                  DAT_05ab2bd4 = 0xffffffff00000000;
                  DAT_05ab2bdc = 0xffffffff00000000;
                  DAT_05ab2be4 = 0xffffffff00000000;
                  DAT_05ab2bec = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05ab2c00);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = (&PTR_DAT_04b446f8)[lVar24];
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_036bbf18:
                        iVar11 = (int)lVar12;
joined_r0x036bbf1c:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_036bbf24;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_036bbf18;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x036bbf1c;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_036bbf24:
                    memcpy(local_174,pbVar25,(long)iVar11);
                    local_174[iVar11] = 0;
                  }
                  uVar10 = (uint)*pbVar25;
                  if (*pbVar25 == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0xffffffff;
                    do {
                      pbVar25 = pbVar25 + 1;
                      uVar16 = crc32b(uVar16,uVar10,0x4c11db7);
                      uVar10 = (uint)*pbVar25;
                    } while (uVar10 != 0);
                    uVar16 = ~uVar16;
                  }
                  *(uint *)(&DAT_05ab2ba4 + lVar24) = uVar16;
                  *(int *)((long)&DAT_05ab2ba4 + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05ab2b30;
                  if ((int)DAT_05ab2b30 < DAT_05ab2b30._4_4_) {
                    *(undefined8 **)(DAT_05ab2b38 + (long)(int)DAT_05ab2b30 * 8) =
                         &DAT_05ab2ba4 + lVar24;
                    iVar11 = (int)DAT_05ab2b30 + 1;
                    DAT_05ab2b30 = CONCAT44(DAT_05ab2b30._4_4_,iVar11);
                  }
                  puVar5 = DAT_05ab2b38;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0xb);
                if (1 < iVar11) {
                  uVar16 = 0;
                  uVar10 = iVar11 - 1;
                  do {
                    if ((int)uVar10 <= (int)uVar16) break;
                    puVar18 = *(uint **)(puVar5 + (ulong)uVar16 * 8);
                    uVar14 = (ulong)uVar16;
                    if ((uVar10 - uVar16 & 1) == 0) {
                      uVar17 = uVar14;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar17 = uVar14 + 1;
                      puVar20 = *(uint **)(puVar5 + uVar17 * 8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        *(uint **)(puVar5 + uVar17 * 8) = puVar18;
                        *(uint **)(puVar5 + uVar14 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar10;
                    uVar10 = uVar16;
                    if (~uVar14 + uVar19 != 0) {
                      puVar22 = (undefined8 *)(puVar5 + uVar17 * 8 + 8);
                      do {
                        puVar18 = (uint *)*puVar22;
                        uVar15 = (uint)uVar17;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar23 = (uint *)puVar22[1];
                          if (puVar18 != (uint *)0x0) goto LAB_036bc1a0;
LAB_036bc150:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar22[-1] = puVar18;
                          *puVar22 = puVar20;
                          puVar23 = (uint *)puVar22[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_036bc150;
LAB_036bc1a0:
                          if (puVar23 == (uint *)0x0) goto LAB_036bc150;
                          if (*puVar18 <= *puVar23) goto LAB_036bc150;
                          uVar10 = uVar15 + 1;
                          *puVar22 = puVar23;
                          puVar22[1] = puVar18;
                        }
                        uVar17 = uVar17 + 2;
                        puVar22 = puVar22 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar17);
                    }
                    if ((int)uVar10 <= (int)uVar16) break;
                    uVar17 = (ulong)uVar10;
                    puVar18 = *(uint **)(puVar5 + (ulong)uVar10 * 8);
                    uVar16 = uVar10;
                    do {
                      puVar20 = *(uint **)(puVar5 + uVar17 * 8 + -8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar16 = (uint)uVar17;
                        *(uint **)(puVar5 + uVar17 * 8 + -8) = puVar18;
                        *(uint **)(puVar5 + uVar17 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar17 = uVar17 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar14 < (long)uVar17);
                  } while (uVar16 != uVar10);
                }
                DAT_05ab2b2c = '\x01';
              }
              else if (DAT_05ab2b2c != '\x01') goto LAB_036bc1fc;
              if ((int)DAT_05ab2b30 == 0) {
LAB_036bc1fc:
                uVar10 = 0;
              }
              else {
                if ((int)DAT_05ab2b30 < 2) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = 0;
                  iVar11 = (int)DAT_05ab2b30 + -1;
                  do {
                    iVar1 = iVar11 + uVar10;
                    if (iVar1 < 0 != SCARRY4(iVar11,uVar10)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar16 = iVar1 >> 1;
                    if (*(uint **)(DAT_05ab2b38 + (long)(int)uVar16 * 8) == (uint *)0x0)
                    goto joined_r0x036bc228;
                    uVar15 = **(uint **)(DAT_05ab2b38 + (long)(int)uVar16 * 8);
                    if (uVar15 == uVar7) goto joined_r0x036bc228;
                    if (uVar15 < uVar7) {
                      uVar10 = uVar16 + 1;
                    }
                    else {
                      iVar11 = uVar16 - 1;
                    }
                  } while ((int)uVar10 < iVar11);
                }
                uVar16 = uVar10;
                if ((*(uint **)(DAT_05ab2b38 + (long)(int)uVar10 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05ab2b38 + (long)(int)uVar10 * 8) == uVar7)) {
joined_r0x036bc228:
                  if (uVar16 < 0xb) {
                    uVar10 = *(uint *)(*(long *)(DAT_05ab2b38 + (ulong)uVar16 * 8) + 4);
                    if (uVar10 < 0xb) {
                      DAT_05ab2b20 = '\x01';
                      DAT_05ab2b24 = uVar7;
                      DAT_05ab2b28 = uVar10;
                      goto LAB_036bc254;
                    }
                    goto LAB_036bc1fc;
                  }
                }
                uVar10 = 0;
              }
            }
LAB_036bc254:
          }
LAB_036bc25c:
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar18 != (uint *)0x0)) && (*puVar18 != 0)) &&
             ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar16 = 0;
              if ((ulong)uVar7 != 0) {
                uVar16 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if (uVar16 < DAT_05ab2798) {
                *(short *)(DAT_05ab27a0 + (long)(int)uVar16 * 2) = (short)uVar10;
              }
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
  }
  return;
}

