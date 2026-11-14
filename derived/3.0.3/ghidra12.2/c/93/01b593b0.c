
void FUN_01b593b0(uint *param_1)

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
  char *pcVar26;
  uint uVar27;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar4 = PTR_DAT_04bc0648;
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar27 = 0;
    pcVar26 = PTR_DAT_04bc0640;
    do {
      if (((uVar27 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar11 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar2 = (uint *)((ulong)(param_1[1] * uVar27 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                         (long)param_1);
        if (puVar2 != (uint *)0x0) {
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *pcVar26;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *pcVar26 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 4);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_01b59560;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_01b59560;
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
              while (piVar13[-1] != -0x25c09c31) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_01b5955c;
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
LAB_01b5955c:
          uVar6 = 0;
LAB_01b59560:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_01b5abb0(uVar6);
            if (0x11 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_01b5a6d0();
            if (0x11 < uVar7) {
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
              if (uVar10 < *(uint *)PTR_DAT_04bc0618) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *pcVar26;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *pcVar26 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 8);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_01b59700;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_01b59700;
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
              while (piVar13[-1] != 0x63c4b827) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_01b596fc;
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
LAB_01b596fc:
          uVar6 = 0;
LAB_01b59700:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_01b5abb0(uVar6);
            if (0x11 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_01b5a6d0();
            if (0x11 < uVar7) {
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
              if (uVar10 < *(uint *)PTR_DAT_04bc0620) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *pcVar26;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *pcVar26 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 0xc);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_01b598a0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_01b598a0;
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
              while (piVar13[-1] != 0x72b9d25e) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_01b5989c;
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
LAB_01b5989c:
          uVar6 = 0;
LAB_01b598a0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_01b5abb0(uVar6);
            if (0x11 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_01b5a6d0();
            if (0x11 < uVar7) {
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
              if (uVar10 < *(uint *)PTR_DAT_04bc0628) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *pcVar26;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *pcVar26 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 0x10);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_01b59a40;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_01b59a40;
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
              while (piVar13[-1] != -0x34bdf64a) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_01b59a3c;
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
LAB_01b59a3c:
          uVar6 = 0;
LAB_01b59a40:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_01b5abb0(uVar6);
            if (0x11 < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_01b5a6d0();
            if (0x11 < uVar7) {
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
              if (uVar10 < *(uint *)PTR_DAT_04bc0630) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *pcVar26;
            do {
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *pcVar26 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar4 + 0x14);
                if (-1 < (int)uVar10) {
                  if ((uint *)((long)puVar2 + (ulong)uVar10) != (uint *)0x0) {
                    uVar7 = *(uint *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_01b59bf0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar7 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar7 = 0, puVar2 == puVar18)) goto LAB_01b59bf0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
              pcVar26 = PTR_DAT_04bc0640;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x54a1df24) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_01b59bec;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar4 + 0x14) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_01b59bec:
          uVar7 = 0;
LAB_01b59bf0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            if ((DAT_05335488 == '\x01') && (DAT_0533548c == uVar7)) {
              uVar10 = DAT_05335490;
              if (4 < DAT_05335490) goto LAB_01b5a048;
            }
            else {
              if (((DAT_053354d0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_053354d0), iVar11 != 0)) {
                DAT_05335498 = 0x500000000;
                DAT_053354a0 = (undefined8 *)&DAT_053354a8;
                __cxa_guard_release(&DAT_053354d0);
              }
              if ((DAT_053354d8 & 1) == 0) {
                DAT_053354d8 = 1;
                if (((DAT_05335508 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05335508), iVar11 != 0)) {
                  DAT_053354fc = 0xffffffff00000000;
                  DAT_053354dc = 0xffffffff00000000;
                  DAT_053354e4 = 0xffffffff00000000;
                  DAT_053354ec = 0xffffffff00000000;
                  DAT_053354f4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05335508);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = (&PTR_DAT_04a38960)[lVar24];
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_01b59d34:
                        iVar11 = (int)lVar12;
joined_r0x01b59d38:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_01b59d40;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_01b59d34;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x01b59d38;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_01b59d40:
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
                  *(uint *)(&DAT_053354dc + lVar24) = uVar16;
                  *(int *)((long)&DAT_053354dc + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05335498;
                  if ((int)DAT_05335498 < DAT_05335498._4_4_) {
                    DAT_053354a0[(int)DAT_05335498] = &DAT_053354dc + lVar24;
                    iVar11 = (int)DAT_05335498 + 1;
                    DAT_05335498 = CONCAT44(DAT_05335498._4_4_,iVar11);
                  }
                  puVar22 = DAT_053354a0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 5);
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
                          if (puVar18 != (uint *)0x0) goto LAB_01b5a000;
LAB_01b59fb0:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar21[-1] = puVar18;
                          *puVar21 = puVar20;
                          puVar23 = (uint *)puVar21[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_01b59fb0;
LAB_01b5a000:
                          if (puVar23 == (uint *)0x0) goto LAB_01b59fb0;
                          if (*puVar18 <= *puVar23) goto LAB_01b59fb0;
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
                DAT_05335494 = '\x01';
              }
              else if (DAT_05335494 != '\x01') goto LAB_01b5a048;
              if ((int)DAT_05335498 == 0) goto LAB_01b5a048;
              if ((int)DAT_05335498 < 2) {
                uVar10 = 0;
                puVar18 = (uint *)*DAT_053354a0;
                if (puVar18 != (uint *)0x0) goto LAB_01b59e64;
LAB_01b5a02c:
                if (uVar10 < 5) {
LAB_01b5a038:
                  uVar10 = *(uint *)(DAT_053354a0[uVar10] + 4);
                  if (uVar10 < 5) {
                    DAT_05335488 = '\x01';
                    DAT_0533548c = uVar7;
                    DAT_05335490 = uVar10;
                    goto LAB_01b5a04c;
                  }
                }
              }
              else {
                uVar10 = 0;
                iVar11 = (int)DAT_05335498 + -1;
                do {
                  iVar1 = iVar11 + uVar10;
                  if (iVar1 < 0 != SCARRY4(iVar11,uVar10)) {
                    iVar1 = iVar1 + 1;
                  }
                  uVar16 = iVar1 >> 1;
                  if ((uint *)DAT_053354a0[(int)uVar16] == (uint *)0x0) goto LAB_01b59e74;
                  uVar15 = *(uint *)DAT_053354a0[(int)uVar16];
                  if (uVar15 == uVar7) goto LAB_01b59e74;
                  if (uVar15 < uVar7) {
                    uVar10 = uVar16 + 1;
                  }
                  else {
                    iVar11 = uVar16 - 1;
                  }
                } while ((int)uVar10 < iVar11);
                puVar18 = (uint *)DAT_053354a0[(int)uVar10];
                if (puVar18 == (uint *)0x0) goto LAB_01b5a02c;
LAB_01b59e64:
                uVar16 = uVar10;
                if (*puVar18 == uVar7) {
LAB_01b59e74:
                  uVar10 = uVar16;
                  if (4 < uVar16) goto LAB_01b5a048;
                  goto LAB_01b5a038;
                }
              }
LAB_01b5a048:
              uVar10 = 0;
            }
LAB_01b5a04c:
            uVar9 = (undefined2)uVar10;
          }
          else {
            if ((DAT_05335400 == '\x01') && (DAT_05335404 == uVar7)) {
              uVar10 = DAT_05335408;
              if (4 < DAT_05335408) goto LAB_01b5a404;
            }
            else {
              if (((DAT_05335448 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05335448), iVar11 != 0)) {
                DAT_05335410 = 0x500000000;
                DAT_05335418 = &DAT_05335420;
                __cxa_guard_release(&DAT_05335448);
              }
              if ((DAT_05335450 & 1) == 0) {
                DAT_05335450 = 1;
                if (((DAT_05335480 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05335480), iVar11 != 0)) {
                  DAT_05335474 = 0xffffffff00000000;
                  DAT_05335454 = 0xffffffff00000000;
                  DAT_0533545c = 0xffffffff00000000;
                  DAT_05335464 = 0xffffffff00000000;
                  DAT_0533546c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05335480);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = (&PTR_DAT_04a38888)[lVar24];
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_01b5a0f8:
                        iVar11 = (int)lVar12;
joined_r0x01b5a0fc:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_01b5a104;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_01b5a0f8;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x01b5a0fc;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_01b5a104:
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
                  *(uint *)(&DAT_05335454 + lVar24) = uVar16;
                  *(int *)((long)&DAT_05335454 + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05335410;
                  if ((int)DAT_05335410 < DAT_05335410._4_4_) {
                    *(undefined8 **)(DAT_05335418 + (long)(int)DAT_05335410 * 8) =
                         &DAT_05335454 + lVar24;
                    iVar11 = (int)DAT_05335410 + 1;
                    DAT_05335410 = CONCAT44(DAT_05335410._4_4_,iVar11);
                  }
                  puVar5 = DAT_05335418;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 5);
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
                          if (puVar18 != (uint *)0x0) goto LAB_01b5a380;
LAB_01b5a330:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar22[-1] = puVar18;
                          *puVar22 = puVar20;
                          puVar23 = (uint *)puVar22[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_01b5a330;
LAB_01b5a380:
                          if (puVar23 == (uint *)0x0) goto LAB_01b5a330;
                          if (*puVar18 <= *puVar23) goto LAB_01b5a330;
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
                DAT_0533540c = '\x01';
              }
              else if (DAT_0533540c != '\x01') goto LAB_01b5a404;
              if ((int)DAT_05335410 != 0) {
                if ((int)DAT_05335410 < 2) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = 0;
                  iVar11 = (int)DAT_05335410 + -1;
                  do {
                    iVar1 = iVar11 + uVar10;
                    if (iVar1 < 0 != SCARRY4(iVar11,uVar10)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar16 = iVar1 >> 1;
                    if (*(uint **)(DAT_05335418 + (long)(int)uVar16 * 8) == (uint *)0x0)
                    goto joined_r0x01b5a3f0;
                    uVar15 = **(uint **)(DAT_05335418 + (long)(int)uVar16 * 8);
                    if (uVar15 == uVar7) goto joined_r0x01b5a3f0;
                    if (uVar15 < uVar7) {
                      uVar10 = uVar16 + 1;
                    }
                    else {
                      iVar11 = uVar16 - 1;
                    }
                  } while ((int)uVar10 < iVar11);
                }
                uVar16 = uVar10;
                if ((*(uint **)(DAT_05335418 + (long)(int)uVar10 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05335418 + (long)(int)uVar10 * 8) == uVar7)) {
joined_r0x01b5a3f0:
                  if ((uVar16 < 5) &&
                     (uVar10 = *(uint *)(*(long *)(DAT_05335418 + (ulong)uVar16 * 8) + 4),
                     uVar10 < 5)) {
                    DAT_05335400 = '\x01';
                    DAT_05335404 = uVar7;
                    DAT_05335408 = uVar10;
                    goto LAB_01b5a408;
                  }
                }
              }
LAB_01b5a404:
              uVar10 = 0;
            }
LAB_01b5a408:
            uVar9 = (undefined2)uVar10;
          }
          pcVar26 = PTR_DAT_04bc0640;
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
              if (uVar10 < *(uint *)PTR_DAT_04bc0638) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar3);
  }
  return;
}

