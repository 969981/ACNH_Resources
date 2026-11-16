
void FUN_0288f5a0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  ushort uVar27;
  uint uVar28;
  uint *puVar29;
  ulong uVar30;
  byte local_a4 [4];
  byte local_a0 [64];
  
  uVar3 = *(undefined4 *)(param_1 + 0x12bc);
  *(undefined8 *)(param_1 + 0x12bc) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x12c4) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x12c8);
  *(undefined8 *)(param_1 + 0x12c8) = *(undefined8 *)(param_1 + 0x12c0);
  *(undefined4 *)(param_1 + 0x12d0) = uVar3;
  puVar11 = PTR_DAT_04bb4700;
  uVar18 = *(uint *)(*(long *)PTR_DAT_04bb4700 + 1000);
  if ((int)uVar18 < 1) {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bb4700 + 0x2d8);
    if ((lVar20 == 0) || (puVar21 = *(uint **)(lVar20 + 8), puVar21 == (uint *)0x0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = *puVar21;
    }
  }
  local_a4[0] = 0;
  FUN_01b02920(local_a4,param_2 + 0x10,0);
  puVar13 = PTR_DAT_04bc38b0;
  puVar12 = PTR_DAT_04bc38a8;
  if (0x1ff < (int)uVar18) {
    uVar18 = 0x200;
  }
  local_a0[0x30] = 0;
  local_a0[0x31] = 0;
  local_a0[0x32] = 0;
  local_a0[0x33] = 0;
  local_a0[0x34] = 0;
  local_a0[0x35] = 0;
  local_a0[0x36] = 0;
  local_a0[0x37] = 0;
  local_a0[0x38] = 0;
  local_a0[0x39] = 0;
  local_a0[0x3a] = 0;
  local_a0[0x3b] = 0;
  local_a0[0x3c] = 0;
  local_a0[0x3d] = 0;
  local_a0[0x3e] = 0;
  local_a0[0x3f] = 0;
  local_a0[0x20] = 0;
  local_a0[0x21] = 0;
  local_a0[0x22] = 0;
  local_a0[0x23] = 0;
  local_a0[0x24] = 0;
  local_a0[0x25] = 0;
  local_a0[0x26] = 0;
  local_a0[0x27] = 0;
  local_a0[0x28] = 0;
  local_a0[0x29] = 0;
  local_a0[0x2a] = 0;
  local_a0[0x2b] = 0;
  local_a0[0x2c] = 0;
  local_a0[0x2d] = 0;
  local_a0[0x2e] = 0;
  local_a0[0x2f] = 0;
  local_a0[0x10] = 0;
  local_a0[0x11] = 0;
  local_a0[0x12] = 0;
  local_a0[0x13] = 0;
  local_a0[0x14] = 0;
  local_a0[0x15] = 0;
  local_a0[0x16] = 0;
  local_a0[0x17] = 0;
  local_a0[0x18] = 0;
  local_a0[0x19] = 0;
  local_a0[0x1a] = 0;
  local_a0[0x1b] = 0;
  local_a0[0x1c] = 0;
  local_a0[0x1d] = 0;
  local_a0[0x1e] = 0;
  local_a0[0x1f] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  if (uVar18 != 0) {
    uVar22 = 0;
    lVar20 = *(long *)puVar11;
    uVar16 = *(uint *)(param_1 + 0x12c4);
    uVar23 = *(uint *)(param_1 + 0x12cc);
    uVar24 = *(uint *)PTR_DAT_04bc38a0;
    lVar25 = *(long *)(PTR_DAT_04bc38a0 + 8);
    cVar15 = *PTR_DAT_04bc38a8;
    uVar4 = *(uint *)(param_1 + 0x12c8);
    uVar5 = *(uint *)(param_1 + 0x12d0);
    uVar6 = *(uint *)(lVar20 + 1000);
    do {
      uVar19 = (uint)uVar22;
      if ((int)uVar6 < 1) {
        if ((((*(long *)(lVar20 + 0x2d8) != 0) &&
             (puVar21 = *(uint **)(*(long *)(lVar20 + 0x2d8) + 8), puVar21 != (uint *)0x0)) &&
            ((*(uint *)(lVar20 + 0x2f0) <= uVar19 ||
             (*(char *)(*(long *)(lVar20 + 0x2f8) + (long)(int)uVar19) != '\0')))) &&
           (((uVar19 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
          iVar17 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            iVar17 = 0x1c;
          }
          puVar21 = (uint *)((ulong)(puVar21[1] * uVar19 + (uint)(ushort)puVar21[2] * 8 + iVar17) +
                            (long)puVar21);
          goto joined_r0x0288faa0;
        }
      }
      else if (uVar19 < uVar6) {
        uVar1 = uVar19;
        if (*(uint *)(lVar20 + 0x3d8) <= uVar19) {
          uVar1 = 0;
        }
        puVar21 = *(uint **)(*(long *)(lVar20 + 0x3e0) + (ulong)uVar1 * 8);
joined_r0x0288faa0:
        if (puVar21 != (uint *)0x0) {
          uVar1 = *puVar21;
          if (uVar1 == 0 || puVar21 == (uint *)(ulong)uVar1) {
LAB_0288f724:
            uVar27 = 0;
          }
          else {
            puVar29 = (uint *)((long)puVar21 - (long)(ulong)uVar1);
            uVar27 = 0;
            if (*puVar29 != 0) {
              uVar1 = puVar29[1];
              if ((uVar1 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar29 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar29 + lVar8 + (ulong)(ushort)puVar29[2] * 8;
                if (lVar8 != 0) {
                  uVar28 = 0;
                  if ((ulong)uVar1 != 0) {
                    uVar28 = (uint)((ulong)((long)puVar21 - lVar8) / (ulong)uVar1);
                  }
                  if (*puVar29 <= uVar28) {
                    uVar28 = 0xffffffff;
                  }
                  if ((uVar28 < uVar24) &&
                     (uVar27 = *(ushort *)(lVar25 + (long)(int)uVar28 * 2), uVar27 < 3))
                  goto LAB_0288f728;
                }
              }
              goto LAB_0288f724;
            }
          }
LAB_0288f728:
          uVar1 = *puVar21;
          while (uVar1 != 0) {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar13 = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
              *puVar12 = 1;
              *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
              *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
              uVar1 = *puVar21;
              uVar28 = 0;
              if (uVar1 == 0) goto LAB_0288f7ec;
            }
            else {
              uVar1 = *(uint *)(puVar13 + 0x28);
              if (-1 < (int)uVar1) {
                uVar28 = 0;
                if ((ushort *)((ulong)uVar1 + (long)puVar21) != (ushort *)0x0) {
                  uVar28 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar21);
                }
                goto LAB_0288f7ec;
              }
              if (uVar1 != 0xffffffff) break;
              uVar1 = *puVar21;
              if (uVar1 == 0) {
                uVar28 = 0;
                goto LAB_0288f7ec;
              }
            }
            puVar29 = (uint *)(ulong)uVar1;
            if (puVar21 == puVar29) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar21 + (lVar8 - (long)puVar29);
            if (lVar8 == 0) break;
            uVar30 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
            *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
            uVar28 = 0;
            if (uVar30 == 0) goto LAB_0288f7ec;
            piVar26 = (int *)(lVar8 + 4);
            while (piVar26[-1] != 0x54706054) {
              piVar26 = piVar26 + 2;
              uVar30 = uVar30 - 1;
              if (uVar30 == 0) {
                uVar28 = 0;
                goto LAB_0288f7ec;
              }
            }
            iVar17 = 0;
            if (*piVar26 != -1) {
              iVar17 = *piVar26;
            }
            *(int *)(puVar13 + 0x28) = iVar17;
            uVar1 = *puVar21;
          }
          uVar28 = 0;
LAB_0288f7ec:
          if (uVar16 == uVar28) {
LAB_0288f974:
            bVar9 = false;
            if ((local_a4[0] >> 2 & 1) == 0) goto LAB_0288f97c;
LAB_0288fc90:
            if (*puVar21 != 0) {
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar13 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                  *puVar12 = 1;
                  *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
                  *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                  uVar1 = *puVar21;
                }
                else {
                  uVar1 = *(uint *)(puVar13 + 8);
                  if (-1 < (int)uVar1) {
                    uVar28 = 0;
                    if (((uint *)((ulong)uVar1 + (long)puVar21) == (uint *)0x0) ||
                       (uVar28 = *(uint *)((ulong)uVar1 + (long)puVar21), uVar28 < 5))
                    goto LAB_0288fd4c;
                    break;
                  }
                  if (uVar1 != 0xffffffff) break;
                  uVar1 = *puVar21;
                }
                if ((uVar1 == 0) || (puVar29 = (uint *)(ulong)uVar1, puVar21 == puVar29)) break;
                lVar8 = 0xc;
                if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar21 + (lVar8 - (long)puVar29);
                if (lVar8 == 0) break;
                uVar30 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
                *(undefined4 *)(puVar13 + 8) = 0xfffffffe;
                if (uVar30 == 0) break;
                piVar26 = (int *)(lVar8 + 4);
                while (piVar26[-1] != -0x4bb2408d) {
                  piVar26 = piVar26 + 2;
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) goto LAB_0288fd48;
                }
                iVar17 = 0;
                if (*piVar26 != -1) {
                  iVar17 = *piVar26;
                }
                *(int *)(puVar13 + 8) = iVar17;
                if (*puVar21 == 0) break;
              } while( true );
            }
LAB_0288fd48:
            uVar28 = 0;
LAB_0288fd4c:
            bVar14 = uVar28 == 2;
LAB_0288fe98:
            bVar10 = false;
            if (bVar14) {
              bVar10 = bVar9;
            }
            if (0x1ff < uVar19) goto LAB_0288f6e0;
          }
          else {
            uVar1 = *puVar21;
            while (uVar1 != 0) {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *puVar12 = 1;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                uVar1 = *puVar21;
                uVar28 = 0;
                if (uVar1 == 0) goto LAB_0288f8ac;
              }
              else {
                uVar1 = *(uint *)(puVar13 + 0x28);
                if (-1 < (int)uVar1) {
                  uVar28 = 0;
                  if ((ushort *)((ulong)uVar1 + (long)puVar21) != (ushort *)0x0) {
                    uVar28 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar21);
                  }
                  goto LAB_0288f8ac;
                }
                if (uVar1 != 0xffffffff) break;
                uVar1 = *puVar21;
                if (uVar1 == 0) {
                  uVar28 = 0;
                  goto LAB_0288f8ac;
                }
              }
              puVar29 = (uint *)(ulong)uVar1;
              if (puVar21 == puVar29) break;
              lVar8 = 0xc;
              if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar21 + (lVar8 - (long)puVar29);
              if (lVar8 == 0) break;
              uVar30 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
              *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
              uVar28 = 0;
              if (uVar30 == 0) goto LAB_0288f8ac;
              piVar26 = (int *)(lVar8 + 4);
              while (piVar26[-1] != 0x54706054) {
                piVar26 = piVar26 + 2;
                uVar30 = uVar30 - 1;
                if (uVar30 == 0) {
                  uVar28 = 0;
                  goto LAB_0288f8ac;
                }
              }
              iVar17 = 0;
              if (*piVar26 != -1) {
                iVar17 = *piVar26;
              }
              *(int *)(puVar13 + 0x28) = iVar17;
              uVar1 = *puVar21;
            }
            uVar28 = 0;
LAB_0288f8ac:
            if (uVar23 == uVar28) goto LAB_0288f974;
            uVar1 = *puVar21;
            while (uVar1 != 0) {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *puVar12 = 1;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                uVar1 = *puVar21;
                uVar28 = 0;
                if (uVar1 == 0) goto LAB_0288f96c;
              }
              else {
                uVar1 = *(uint *)(puVar13 + 0x28);
                if (-1 < (int)uVar1) {
                  uVar28 = 0;
                  if ((ushort *)((ulong)uVar1 + (long)puVar21) != (ushort *)0x0) {
                    uVar28 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar21);
                  }
                  goto LAB_0288f96c;
                }
                if (uVar1 != 0xffffffff) break;
                uVar1 = *puVar21;
                if (uVar1 == 0) {
                  uVar28 = 0;
                  goto LAB_0288f96c;
                }
              }
              puVar29 = (uint *)(ulong)uVar1;
              if (puVar21 == puVar29) break;
              lVar8 = 0xc;
              if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar21 + (lVar8 - (long)puVar29);
              if (lVar8 == 0) break;
              uVar30 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
              *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
              uVar28 = 0;
              if (uVar30 == 0) goto LAB_0288f96c;
              piVar26 = (int *)(lVar8 + 4);
              while (piVar26[-1] != 0x54706054) {
                piVar26 = piVar26 + 2;
                uVar30 = uVar30 - 1;
                if (uVar30 == 0) {
                  uVar28 = 0;
                  goto LAB_0288f96c;
                }
              }
              iVar17 = 0;
              if (*piVar26 != -1) {
                iVar17 = *piVar26;
              }
              *(int *)(puVar13 + 0x28) = iVar17;
              uVar1 = *puVar21;
            }
            uVar28 = 0;
LAB_0288f96c:
            if (uVar4 == uVar28) goto LAB_0288f974;
            uVar1 = *puVar21;
            while (uVar1 != 0) {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *puVar12 = 1;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                uVar1 = *puVar21;
                uVar28 = 0;
                if (uVar1 == 0) goto LAB_0288fc7c;
              }
              else {
                uVar1 = *(uint *)(puVar13 + 0x28);
                if (-1 < (int)uVar1) {
                  uVar28 = 0;
                  if ((ushort *)((ulong)uVar1 + (long)puVar21) != (ushort *)0x0) {
                    uVar28 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar21);
                  }
                  goto LAB_0288fc7c;
                }
                if (uVar1 != 0xffffffff) break;
                uVar1 = *puVar21;
                if (uVar1 == 0) {
                  uVar28 = 0;
                  goto LAB_0288fc7c;
                }
              }
              puVar29 = (uint *)(ulong)uVar1;
              if (puVar21 == puVar29) break;
              lVar8 = 0xc;
              if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar21 + (lVar8 - (long)puVar29);
              if (lVar8 == 0) break;
              uVar30 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
              *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
              uVar28 = 0;
              if (uVar30 == 0) goto LAB_0288fc7c;
              piVar26 = (int *)(lVar8 + 4);
              while (piVar26[-1] != 0x54706054) {
                piVar26 = piVar26 + 2;
                uVar30 = uVar30 - 1;
                if (uVar30 == 0) {
                  uVar28 = 0;
                  goto LAB_0288fc7c;
                }
              }
              iVar17 = 0;
              if (*piVar26 != -1) {
                iVar17 = *piVar26;
              }
              *(int *)(puVar13 + 0x28) = iVar17;
              uVar1 = *puVar21;
            }
            uVar28 = 0;
LAB_0288fc7c:
            bVar9 = uVar5 != uVar28 && uVar27 == 0;
            if ((local_a4[0] >> 2 & 1) != 0) goto LAB_0288fc90;
LAB_0288f97c:
            if ((local_a4[0] >> 4 & 1) != 0) {
              while (*puVar21 != 0) {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar13 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                  *puVar12 = 1;
                  *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
                  *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                  uVar1 = *puVar21;
                }
                else {
                  uVar1 = *(uint *)(puVar13 + 8);
                  if (-1 < (int)uVar1) {
                    uVar28 = 0;
                    if (((uint *)((ulong)uVar1 + (long)puVar21) == (uint *)0x0) ||
                       (uVar28 = *(uint *)((ulong)uVar1 + (long)puVar21), uVar28 < 5))
                    goto LAB_0288fe8c;
                    break;
                  }
                  if (uVar1 != 0xffffffff) break;
                  uVar1 = *puVar21;
                }
                if ((uVar1 == 0) || (puVar29 = (uint *)(ulong)uVar1, puVar21 == puVar29)) break;
                lVar8 = 0xc;
                if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar21 + (lVar8 - (long)puVar29);
                if (lVar8 == 0) break;
                uVar30 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
                *(undefined4 *)(puVar13 + 8) = 0xfffffffe;
                if (uVar30 == 0) break;
                piVar26 = (int *)(lVar8 + 4);
                while (piVar26[-1] != -0x4bb2408d) {
                  piVar26 = piVar26 + 2;
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) goto LAB_0288fe88;
                }
                iVar17 = 0;
                if (*piVar26 != -1) {
                  iVar17 = *piVar26;
                }
                *(int *)(puVar13 + 8) = iVar17;
              }
LAB_0288fe88:
              uVar28 = 0;
LAB_0288fe8c:
              bVar14 = uVar28 == 4;
              goto LAB_0288fe98;
            }
            uVar1 = *puVar21;
            while (uVar1 != 0) {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *puVar12 = 1;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
              }
              else {
                uVar30 = (ulong)*(uint *)(puVar13 + 8);
                if (-1 < (int)*(uint *)(puVar13 + 8)) {
                  if (((int *)(uVar30 + (long)puVar21) == (int *)0x0) ||
                     (*(int *)(uVar30 + (long)puVar21) != 2)) goto LAB_0288fd60;
                  goto LAB_0288f6e0;
                }
                if (uVar30 != 0xffffffff) goto LAB_0288fd60;
              }
              lVar8 = (long)puVar21 - (ulong)*puVar21;
              if (*puVar21 == 0) {
                uVar30 = 0xffffffff;
                goto LAB_0288fd60;
              }
              if (lVar8 == 0) {
                uVar30 = 0xffffffff;
                goto LAB_0288fd60;
              }
              lVar2 = 0xc;
              if (*(char *)(lVar8 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              if (lVar2 + lVar8 == 0) {
                uVar30 = 0xffffffff;
                goto LAB_0288fd60;
              }
              uVar30 = (ulong)*(ushort *)(lVar8 + 8);
              *(undefined4 *)(puVar13 + 8) = 0xfffffffe;
              if (uVar30 == 0) {
                uVar30 = 0xfffffffe;
                goto LAB_0288fd60;
              }
              piVar26 = (int *)(lVar2 + lVar8 + 4);
              while (piVar26[-1] != -0x4bb2408d) {
                piVar26 = piVar26 + 2;
                uVar30 = uVar30 - 1;
                if (uVar30 == 0) {
                  uVar30 = 0xfffffffe;
                  goto LAB_0288fd60;
                }
              }
              iVar17 = 0;
              if (*piVar26 != -1) {
                iVar17 = *piVar26;
              }
              *(int *)(puVar13 + 8) = iVar17;
              uVar1 = *puVar21;
            }
LAB_0288fa28:
            bVar10 = false;
            if (uVar19 < 0x200) {
              bVar10 = bVar9;
            }
          }
          if (bVar10) {
LAB_0288f6c4:
            local_a0[uVar22 >> 3] = local_a0[uVar22 >> 3] | (byte)(1 << (ulong)(uVar19 & 7));
          }
        }
      }
LAB_0288f6e0:
      uVar22 = (ulong)(uVar19 + 1);
    } while (uVar19 + 1 != uVar18);
  }
  iVar17 = 0;
  uVar22 = 0;
  do {
    uVar23 = (uint)uVar22 & 6;
    uVar16 = (uint)uVar22 + 2;
    iVar17 = (local_a0[uVar22 >> 3] >> (ulong)(uVar23 | 1) & 1) +
             (local_a0[uVar22 >> 3] >> (ulong)uVar23 & 1) + iVar17;
    uVar22 = (ulong)uVar16;
  } while (uVar16 != 0x200);
  uVar16 = nn::os::GetSystemTick();
  puVar13 = PTR_DAT_04bc38b0;
  puVar12 = PTR_DAT_04bc38a8;
  uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
  uVar23 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 2;
  uVar23 = (uVar23 ^ uVar23 >> 0x1e) * 0x6c078965 + 3;
  iVar7 = (uVar23 ^ uVar23 >> 0x1e) * 0x6c078965;
  if (iVar17 == 0) {
    uVar16 = uVar16 ^ uVar16 * 0x800;
    uVar23 = iVar7 + 4;
    lVar20 = *(long *)puVar11;
    uVar30 = (ulong)uVar18 * (ulong)(uVar16 >> 8 ^ uVar23 >> 0x13 ^ uVar16 ^ uVar23);
    uVar22 = uVar30 >> 0x20;
    uVar16 = (uint)(uVar30 >> 0x20);
    if ((int)*(uint *)(lVar20 + 1000) < 1) {
      if ((((*(long *)(lVar20 + 0x2d8) != 0) &&
           (puVar21 = *(uint **)(*(long *)(lVar20 + 0x2d8) + 8), puVar21 != (uint *)0x0)) &&
          ((*(uint *)(lVar20 + 0x2f0) <= uVar16 ||
           (*(char *)(*(long *)(lVar20 + 0x2f8) + ((long)uVar30 >> 0x20)) != '\0')))) &&
         (((uVar16 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
        iVar17 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar21 = (uint *)((ulong)(puVar21[1] * uVar16 + (uint)(ushort)puVar21[2] * 8 + iVar17) +
                          (long)puVar21);
        goto joined_r0x02890348;
      }
    }
    else if (uVar16 < *(uint *)(lVar20 + 1000)) {
      if (*(uint *)(lVar20 + 0x3d8) <= uVar16) {
        uVar22 = 0;
      }
      puVar21 = *(uint **)(*(long *)(lVar20 + 0x3e0) + uVar22 * 8);
joined_r0x02890348:
      if (puVar21 != (uint *)0x0) {
        if (*puVar21 == 0) {
LAB_028903a8:
          uVar16 = 0;
        }
        else {
          cVar15 = *PTR_DAT_04bc38a8;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar13 = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
              *puVar12 = 1;
              *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
              *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar16 = *(uint *)(puVar13 + 0x28);
              if (-1 < (int)uVar16) {
                if ((ushort *)((ulong)uVar16 + (long)puVar21) == (ushort *)0x0) goto LAB_028903a8;
                uVar16 = (uint)*(ushort *)((ulong)uVar16 + (long)puVar21);
                goto LAB_028903ac;
              }
              if (uVar16 != 0xffffffff) goto LAB_028903a8;
            }
            puVar29 = (uint *)(ulong)*puVar21;
            uVar16 = 0;
            if ((*puVar21 == 0) || (puVar21 == puVar29)) goto LAB_028903ac;
            lVar20 = 0xc;
            if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar21 + (lVar20 - (long)puVar29);
            if (lVar20 == 0) goto LAB_028903a8;
            uVar22 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
            *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
            uVar16 = 0;
            if (uVar22 == 0) goto LAB_028903ac;
            piVar26 = (int *)(lVar20 + 4);
            while (piVar26[-1] != 0x54706054) {
              piVar26 = piVar26 + 2;
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) {
                uVar16 = 0;
                goto LAB_028903ac;
              }
            }
            iVar17 = 0;
            if (*piVar26 != -1) {
              iVar17 = *piVar26;
            }
            *(int *)(puVar13 + 0x28) = iVar17;
          } while (*puVar21 != 0);
          uVar16 = 0;
        }
LAB_028903ac:
        *(uint *)(param_1 + 0x12bc) = uVar16;
      }
    }
  }
  else {
    uVar23 = 0;
    uVar22 = 0;
    do {
      uVar4 = (uint)uVar22 & 6;
      uVar24 = (uint)uVar22 + 2;
      uVar23 = (local_a0[uVar22 >> 3] >> (ulong)(uVar4 | 1) & 1) +
               (local_a0[uVar22 >> 3] >> (ulong)uVar4 & 1) + uVar23;
      uVar22 = (ulong)uVar24;
    } while (uVar24 != 0x200);
    uVar16 = uVar16 ^ uVar16 * 0x800;
    uVar24 = iVar7 + 4;
    uVar16 = (uint)((ulong)uVar23 * (ulong)(uVar16 >> 8 ^ uVar24 >> 0x13 ^ uVar16 ^ uVar24) >> 0x20)
    ;
    if (uVar16 < 0x7fffffff) {
      uVar23 = 0;
      uVar24 = 0;
      do {
        if ((local_a0[uVar23 >> 3] >> (ulong)(uVar23 & 7) & 1) != 0) {
          if (uVar24 == uVar16) goto LAB_02890168;
          uVar24 = uVar24 + 1;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != 0x200);
      uVar23 = 0xffffffff;
    }
    else {
      uVar23 = 0xffffffff;
    }
LAB_02890168:
    lVar20 = *(long *)puVar11;
    if ((int)*(uint *)(lVar20 + 1000) < 1) {
      if ((((*(long *)(lVar20 + 0x2d8) != 0) &&
           (puVar21 = *(uint **)(*(long *)(lVar20 + 0x2d8) + 8), puVar21 != (uint *)0x0)) &&
          ((*(uint *)(lVar20 + 0x2f0) <= uVar23 ||
           (*(char *)(*(long *)(lVar20 + 0x2f8) + (long)(int)uVar23) != '\0')))) &&
         (((uVar23 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
        iVar17 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar21 = (uint *)((ulong)(puVar21[1] * uVar23 + (uint)(ushort)puVar21[2] * 8 + iVar17) +
                          (long)puVar21);
        goto joined_r0x028902d4;
      }
    }
    else if (uVar23 < *(uint *)(lVar20 + 1000)) {
      uVar16 = uVar23;
      if (*(uint *)(lVar20 + 0x3d8) <= uVar23) {
        uVar16 = 0;
      }
      puVar21 = *(uint **)(*(long *)(lVar20 + 0x3e0) + (ulong)uVar16 * 8);
joined_r0x028902d4:
      if (puVar21 != (uint *)0x0) {
        if (*puVar21 == 0) {
LAB_02890360:
          uVar16 = 0;
        }
        else {
          cVar15 = *PTR_DAT_04bc38a8;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar13 = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
              *puVar12 = 1;
              *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
              *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar16 = *(uint *)(puVar13 + 0x28);
              if (-1 < (int)uVar16) {
                if ((ushort *)((ulong)uVar16 + (long)puVar21) == (ushort *)0x0) goto LAB_02890360;
                uVar16 = (uint)*(ushort *)((ulong)uVar16 + (long)puVar21);
                goto LAB_02890364;
              }
              if (uVar16 != 0xffffffff) goto LAB_02890360;
            }
            puVar29 = (uint *)(ulong)*puVar21;
            uVar16 = 0;
            if ((*puVar21 == 0) || (puVar21 == puVar29)) goto LAB_02890364;
            lVar20 = 0xc;
            if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar21 + (lVar20 - (long)puVar29);
            if (lVar20 == 0) goto LAB_02890360;
            uVar22 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
            *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
            uVar16 = 0;
            if (uVar22 == 0) goto LAB_02890364;
            piVar26 = (int *)(lVar20 + 4);
            while (piVar26[-1] != 0x54706054) {
              piVar26 = piVar26 + 2;
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) {
                uVar16 = 0;
                goto LAB_02890364;
              }
            }
            iVar17 = 0;
            if (*piVar26 != -1) {
              iVar17 = *piVar26;
            }
            *(int *)(puVar13 + 0x28) = iVar17;
          } while (*puVar21 != 0);
          uVar16 = 0;
        }
LAB_02890364:
        *(uint *)(param_1 + 0x12bc) = uVar16;
        if (uVar23 < 0x200) {
          local_a0[uVar23 >> 3] = local_a0[uVar23 >> 3] & ((byte)(1 << (ulong)(uVar23 & 7)) ^ 0xff);
        }
      }
    }
  }
  iVar17 = 0;
  uVar22 = 0;
  do {
    uVar23 = (uint)uVar22 & 6;
    uVar16 = (uint)uVar22 + 2;
    iVar17 = (local_a0[uVar22 >> 3] >> (ulong)(uVar23 | 1) & 1) +
             (local_a0[uVar22 >> 3] >> (ulong)uVar23 & 1) + iVar17;
    uVar22 = (ulong)uVar16;
  } while (uVar16 != 0x200);
  uVar16 = nn::os::GetSystemTick();
  puVar13 = PTR_DAT_04bc38b0;
  puVar12 = PTR_DAT_04bc38a8;
  uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
  uVar23 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 2;
  uVar23 = (uVar23 ^ uVar23 >> 0x1e) * 0x6c078965 + 3;
  iVar7 = (uVar23 ^ uVar23 >> 0x1e) * 0x6c078965;
  if (iVar17 == 0) {
    uVar16 = uVar16 ^ uVar16 * 0x800;
    uVar23 = iVar7 + 4;
    lVar20 = *(long *)puVar11;
    uVar30 = (ulong)uVar18 * (ulong)(uVar16 >> 8 ^ uVar23 >> 0x13 ^ uVar16 ^ uVar23);
    uVar22 = uVar30 >> 0x20;
    uVar18 = (uint)(uVar30 >> 0x20);
    if ((int)*(uint *)(lVar20 + 1000) < 1) {
      if (*(long *)(lVar20 + 0x2d8) == 0) {
        return;
      }
      puVar21 = *(uint **)(*(long *)(lVar20 + 0x2d8) + 8);
      if (puVar21 == (uint *)0x0) {
        return;
      }
      if ((uVar18 < *(uint *)(lVar20 + 0x2f0)) &&
         (*(char *)(*(long *)(lVar20 + 0x2f8) + ((long)uVar30 >> 0x20)) == '\0')) {
        return;
      }
      if (*puVar21 <= uVar18) {
        return;
      }
      if (puVar21[1] == 0) {
        return;
      }
      if ((ushort)puVar21[2] == 0) {
        return;
      }
      iVar17 = 0xc;
      if (*(char *)((long)puVar21 + 10) != '\0') {
        iVar17 = 0x1c;
      }
      puVar21 = (uint *)((ulong)(puVar21[1] * uVar18 + (uint)(ushort)puVar21[2] * 8 + iVar17) +
                        (long)puVar21);
    }
    else {
      if (*(uint *)(lVar20 + 1000) <= uVar18) {
        return;
      }
      if (*(uint *)(lVar20 + 0x3d8) <= uVar18) {
        uVar22 = 0;
      }
      puVar21 = *(uint **)(*(long *)(lVar20 + 0x3e0) + uVar22 * 8);
    }
    if (puVar21 == (uint *)0x0) {
      return;
    }
    if (*puVar21 != 0) {
      cVar15 = *PTR_DAT_04bc38a8;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar13 = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
          *puVar12 = 1;
          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
          *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar18 = *(uint *)(puVar13 + 0x28);
          if (-1 < (int)uVar18) goto LAB_02890804;
          if (uVar18 != 0xffffffff) goto LAB_02890814;
        }
        puVar29 = (uint *)(ulong)*puVar21;
        uVar18 = 0;
        if ((*puVar21 == 0) || (puVar21 == puVar29)) break;
        lVar20 = 0xc;
        if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar21 + (lVar20 - (long)puVar29);
        if (lVar20 == 0) goto LAB_02890814;
        uVar22 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
        *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
        uVar18 = 0;
        if (uVar22 == 0) break;
        piVar26 = (int *)(lVar20 + 4);
        while (piVar26[-1] != 0x54706054) {
          piVar26 = piVar26 + 2;
          uVar22 = uVar22 - 1;
          if (uVar22 == 0) {
            uVar18 = 0;
            goto LAB_02890818;
          }
        }
        uVar18 = 0;
        iVar17 = 0;
        if (*piVar26 != -1) {
          iVar17 = *piVar26;
        }
        *(int *)(puVar13 + 0x28) = iVar17;
      } while (*puVar21 != 0);
      goto LAB_02890818;
    }
  }
  else {
    uVar18 = 0;
    uVar22 = 0;
    do {
      uVar24 = (uint)uVar22 & 6;
      uVar23 = (uint)uVar22 + 2;
      uVar18 = (local_a0[uVar22 >> 3] >> (ulong)(uVar24 | 1) & 1) +
               (local_a0[uVar22 >> 3] >> (ulong)uVar24 & 1) + uVar18;
      uVar22 = (ulong)uVar23;
    } while (uVar23 != 0x200);
    uVar16 = uVar16 ^ uVar16 * 0x800;
    uVar23 = iVar7 + 4;
    uVar18 = (uint)((ulong)uVar18 * (ulong)(uVar16 >> 8 ^ uVar23 >> 0x13 ^ uVar16 ^ uVar23) >> 0x20)
    ;
    if (uVar18 < 0x7fffffff) {
      uVar16 = 0;
      uVar23 = 0;
      do {
        if ((local_a0[uVar16 >> 3] >> (ulong)(uVar16 & 7) & 1) != 0) {
          if (uVar23 == uVar18) goto LAB_02890618;
          uVar23 = uVar23 + 1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x200);
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = 0xffffffff;
    }
LAB_02890618:
    lVar20 = *(long *)puVar11;
    if ((int)*(uint *)(lVar20 + 1000) < 1) {
      if (*(long *)(lVar20 + 0x2d8) == 0) {
        return;
      }
      puVar21 = *(uint **)(*(long *)(lVar20 + 0x2d8) + 8);
      if (puVar21 == (uint *)0x0) {
        return;
      }
      if ((uVar16 < *(uint *)(lVar20 + 0x2f0)) &&
         (*(char *)(*(long *)(lVar20 + 0x2f8) + (long)(int)uVar16) == '\0')) {
        return;
      }
      if (*puVar21 <= uVar16) {
        return;
      }
      if (puVar21[1] == 0) {
        return;
      }
      if ((ushort)puVar21[2] == 0) {
        return;
      }
      iVar17 = 0xc;
      if (*(char *)((long)puVar21 + 10) != '\0') {
        iVar17 = 0x1c;
      }
      puVar21 = (uint *)((ulong)(puVar21[1] * uVar16 + (uint)(ushort)puVar21[2] * 8 + iVar17) +
                        (long)puVar21);
    }
    else {
      if (*(uint *)(lVar20 + 1000) <= uVar16) {
        return;
      }
      if (*(uint *)(lVar20 + 0x3d8) <= uVar16) {
        uVar16 = 0;
      }
      puVar21 = *(uint **)(*(long *)(lVar20 + 0x3e0) + (ulong)uVar16 * 8);
    }
    if (puVar21 == (uint *)0x0) {
      return;
    }
    if (*puVar21 != 0) {
      cVar15 = *PTR_DAT_04bc38a8;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar13 = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
          *puVar12 = 1;
          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
          *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar18 = *(uint *)(puVar13 + 0x28);
          if (-1 < (int)uVar18) goto LAB_02890804;
          if (uVar18 != 0xffffffff) goto LAB_02890814;
        }
        puVar29 = (uint *)(ulong)*puVar21;
        uVar18 = 0;
        if ((*puVar21 == 0) || (puVar21 == puVar29)) break;
        lVar20 = 0xc;
        if (*(char *)((long)puVar21 + (10 - (long)puVar29)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar21 + (lVar20 - (long)puVar29);
        if (lVar20 == 0) goto LAB_02890814;
        uVar22 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar29));
        *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
        uVar18 = 0;
        if (uVar22 == 0) break;
        piVar26 = (int *)(lVar20 + 4);
        while (piVar26[-1] != 0x54706054) {
          piVar26 = piVar26 + 2;
          uVar22 = uVar22 - 1;
          if (uVar22 == 0) {
            uVar18 = 0;
            goto LAB_02890818;
          }
        }
        uVar18 = 0;
        iVar17 = 0;
        if (*piVar26 != -1) {
          iVar17 = *piVar26;
        }
        *(int *)(puVar13 + 0x28) = iVar17;
      } while (*puVar21 != 0);
      goto LAB_02890818;
    }
  }
LAB_02890814:
  uVar18 = 0;
LAB_02890818:
  *(uint *)(param_1 + 0x12c0) = uVar18;
  return;
LAB_0288fd60:
  if (*puVar21 == 0) goto LAB_0288fa28;
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *(undefined8 *)puVar13 = 0xffffffffffffffff;
    *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
    *puVar12 = 1;
    *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
    *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
    *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
  }
  else {
    if (-1 < (int)uVar30) {
      if (((uint *)(uVar30 + (long)puVar21) != (uint *)0x0) &&
         (uVar1 = *(uint *)(uVar30 + (long)puVar21), uVar1 < 5)) {
        bVar14 = false;
        if (uVar1 != 4) {
          bVar14 = bVar9;
        }
        if ((0x1ff < uVar19) || (!bVar14)) goto LAB_0288f6e0;
        goto LAB_0288f6c4;
      }
      goto LAB_0288fa28;
    }
    if (uVar30 != 0xffffffff) goto LAB_0288fa28;
  }
  lVar8 = (long)puVar21 - (ulong)*puVar21;
  if ((*puVar21 == 0) || (lVar8 == 0)) goto LAB_0288fa28;
  lVar2 = 0xc;
  if (*(char *)(lVar8 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar8 == 0) goto LAB_0288fa28;
  uVar30 = (ulong)*(ushort *)(lVar8 + 8);
  *(undefined4 *)(puVar13 + 8) = 0xfffffffe;
  if (uVar30 == 0) goto LAB_0288fa28;
  puVar29 = (uint *)(lVar2 + lVar8 + 4);
  while (puVar29[-1] != 0xb44dbf73) {
    puVar29 = puVar29 + 2;
    uVar30 = uVar30 - 1;
    if (uVar30 == 0) goto LAB_0288fa28;
  }
  uVar30 = 0;
  if (*puVar29 != 0xffffffff) {
    uVar30 = (ulong)*puVar29;
  }
  *(int *)(puVar13 + 8) = (int)uVar30;
  goto LAB_0288fd60;
LAB_02890804:
  if ((ushort *)((ulong)uVar18 + (long)puVar21) != (ushort *)0x0) {
    uVar18 = (uint)*(ushort *)((ulong)uVar18 + (long)puVar21);
    goto LAB_02890818;
  }
  goto LAB_02890814;
}

