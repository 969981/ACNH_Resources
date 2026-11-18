
void FUN_0372fdf0(long param_1,int *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  ushort uVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  ushort uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  
  puVar5 = PTR_DAT_04bb4960;
  uVar21 = *(uint *)(param_1 + 0xe0);
  if (uVar21 == 0) {
    uVar19 = 0xffffffff;
  }
  else {
    lVar17 = 0;
    lVar22 = (long)(int)uVar21 << 3;
    uVar19 = 0xffffffff;
    do {
      if (*param_2 == *(int *)(*(long *)(*(long *)(param_1 + 0xe8) + lVar17 * 8) + 8)) {
        uVar19 = (uint)lVar17;
        break;
      }
      lVar17 = lVar17 + 1;
      lVar22 = lVar22 + -8;
    } while (lVar22 != 0);
  }
  lVar17 = *(long *)PTR_DAT_04bb4960;
  if ((int)*(uint *)(lVar17 + 0x5c0) < 1) {
    if (*(long *)(lVar17 + 0x4b0) == 0) {
      return;
    }
    puVar18 = *(uint **)(*(long *)(lVar17 + 0x4b0) + 8);
    if (puVar18 == (uint *)0x0) {
      return;
    }
    if ((param_3 < *(uint *)(lVar17 + 0x4c8)) &&
       (*(char *)(*(long *)(lVar17 + 0x4d0) + (long)(int)param_3) == '\0')) {
      return;
    }
    if (*puVar18 <= param_3) {
      return;
    }
    if (puVar18[1] == 0) {
      return;
    }
    if ((ushort)puVar18[2] == 0) {
      return;
    }
    iVar11 = 0xc;
    if (*(char *)((long)puVar18 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar18 = (uint *)((ulong)(puVar18[1] * param_3 + (uint)(ushort)puVar18[2] * 8 + iVar11) +
                      (long)puVar18);
  }
  else {
    if (*(uint *)(lVar17 + 0x5c0) <= param_3) {
      return;
    }
    uVar3 = param_3;
    if (*(uint *)(lVar17 + 0x5b0) <= param_3) {
      uVar3 = 0;
    }
    puVar18 = *(uint **)(*(long *)(lVar17 + 0x5b8) + (ulong)uVar3 * 8);
  }
  if ((puVar18 == (uint *)0x0 || uVar19 == 0xffffffff) || param_3 == 0) {
    return;
  }
  uVar3 = *puVar18;
  if (uVar3 != 0 && puVar18 != (uint *)(ulong)uVar3) {
    puVar13 = (uint *)((long)puVar18 - (long)(ulong)uVar3);
    uVar20 = 0;
    if (*puVar13 == 0) goto LAB_0372febc;
    uVar3 = puVar13[1];
    if ((uVar3 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
      lVar17 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar13 + lVar17 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar17 != 0) {
        uVar4 = 0;
        if ((ulong)uVar3 != 0) {
          uVar4 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar3);
        }
        if (*puVar13 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((uVar4 < *(uint *)PTR_DAT_04bc23d0) &&
           (uVar20 = *(ushort *)(*(long *)(PTR_DAT_04bc23d0 + 8) + (long)(int)uVar4 * 2),
           uVar20 < 0xd)) goto LAB_0372febc;
      }
    }
  }
  uVar20 = 0;
LAB_0372febc:
  if (uVar19 < uVar21) {
    lVar17 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar19 * 8);
  }
  else {
    lVar17 = 0;
  }
  if (param_3 < 0x3d) {
    lVar17 = lVar17 + ((ulong)(param_3 >> 3) & 0x1ffffffc);
    *(uint *)(lVar17 + 0x118) = *(uint *)(lVar17 + 0x118) | 1 << (ulong)(param_3 & 0x1f);
  }
  puVar10 = PTR_PTR_04bc23e8;
  puVar9 = PTR_DAT_04bc23e0;
  puVar8 = PTR_DAT_04bc23d0;
  puVar7 = PTR_DAT_04bc23c8;
  puVar6 = PTR_DAT_04bc23c0;
  lVar17 = (long)(int)uVar19;
  if (uVar20 == 9) {
    lVar22 = *(long *)puVar5;
    uVar21 = 0;
    do {
      if ((int)*(uint *)(lVar22 + 0x5c0) < 1) {
        if ((((*(long *)(lVar22 + 0x4b0) != 0) &&
             (puVar13 = *(uint **)(*(long *)(lVar22 + 0x4b0) + 8), puVar13 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x4c8) <= uVar21 ||
             (*(char *)(*(long *)(lVar22 + 0x4d0) + (long)(int)uVar21) != '\0')))) &&
           (((uVar21 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar13 = (uint *)((ulong)(puVar13[1] * uVar21 + (uint)(ushort)puVar13[2] * 8 + iVar11) +
                            (long)puVar13);
          goto LAB_03730084;
        }
      }
      else if (uVar21 < *(uint *)(lVar22 + 0x5c0)) {
        uVar19 = uVar21;
        if (*(uint *)(lVar22 + 0x5b0) <= uVar21) {
          uVar19 = 0;
        }
        puVar13 = *(uint **)(*(long *)(lVar22 + 0x5b8) + (ulong)uVar19 * 8);
LAB_03730084:
        if ((puVar13 != (uint *)0x0 && uVar21 != 0) &&
           (lVar23 = *(long *)(*(long *)(param_1 + 0xe8) + lVar17 * 8) + 0x118,
           (*(uint *)(lVar23 + (long)((int)uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) == 0)) {
          puVar16 = (uint *)((long)puVar18 - (ulong)*puVar18);
          if ((((*puVar18 == 0) || ((puVar16 == (uint *)0x0 || (*puVar16 == 0)))) ||
              (uVar19 = puVar16[1], uVar19 == 0)) || ((ulong)(ushort)puVar16[2] == 0)) {
LAB_03730194:
            uVar19 = *(uint *)puVar8;
LAB_03730198:
            uVar20 = 0;
          }
          else {
            lVar26 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar26 = 0x1c;
            }
            lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar26 == 0) goto LAB_03730194;
            uVar3 = 0;
            if ((ulong)uVar19 != 0) {
              uVar3 = (uint)((ulong)((long)puVar18 - lVar26) / (ulong)uVar19);
            }
            uVar19 = *(uint *)puVar8;
            if (*puVar16 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar19 <= uVar3) ||
               (uVar20 = *(ushort *)(*(long *)(puVar8 + 8) + (long)(int)uVar3 * 2), 0xc < uVar20))
            goto LAB_03730198;
          }
          uVar15 = 0;
          uVar3 = *puVar13;
          if ((uVar3 != 0) && (puVar13 != (uint *)(ulong)uVar3)) {
            puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar3);
            uVar15 = 0;
            if (*puVar16 != 0) {
              uVar3 = puVar16[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar26 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar26 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar13 - lVar26) / (ulong)uVar3);
                  }
                  if (*puVar16 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < uVar19) &&
                     (uVar15 = *(ushort *)(*(long *)(puVar8 + 8) + (long)(int)uVar4 * 2),
                     uVar15 < 0xd)) goto LAB_0373021c;
                }
              }
              uVar15 = 0;
            }
          }
LAB_0373021c:
          if (uVar20 == uVar15) {
            puVar16 = (uint *)((long)puVar18 - (ulong)*puVar18);
            if ((((*puVar18 == 0) || (puVar16 == (uint *)0x0)) || (*puVar16 == 0)) ||
               ((uVar19 = puVar16[1], uVar19 == 0 || ((ulong)(ushort)puVar16[2] == 0)))) {
LAB_037302a0:
              uVar19 = *(uint *)puVar9;
LAB_037302a4:
              uVar20 = 0;
            }
            else {
              lVar26 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar26 = 0x1c;
              }
              lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar26 == 0) goto LAB_037302a0;
              uVar3 = 0;
              if ((ulong)uVar19 != 0) {
                uVar3 = (uint)((ulong)((long)puVar18 - lVar26) / (ulong)uVar19);
              }
              uVar19 = *(uint *)puVar9;
              if (*puVar16 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar19 <= uVar3) ||
                 (uVar20 = *(ushort *)(*(long *)(puVar9 + 8) + (long)(int)uVar3 * 2), 3 < uVar20))
              goto LAB_037302a4;
            }
            uVar15 = 0;
            uVar3 = *puVar13;
            if ((uVar3 != 0) && (puVar13 != (uint *)(ulong)uVar3)) {
              puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar3);
              uVar15 = 0;
              if (*puVar16 != 0) {
                uVar3 = puVar16[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                  lVar26 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar26 = 0x1c;
                  }
                  lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar26 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar13 - lVar26) / (ulong)uVar3);
                    }
                    if (*puVar16 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < uVar19) &&
                       (uVar15 = *(ushort *)(*(long *)(puVar9 + 8) + (long)(int)uVar4 * 2),
                       uVar15 < 4)) goto LAB_03730328;
                  }
                }
                uVar15 = 0;
              }
            }
LAB_03730328:
            if ((uVar20 == uVar15) && (uVar21 < 0x3d)) {
              uVar14 = (ulong)(uVar21 >> 3) & 0x1ffffffc;
              *(uint *)(lVar23 + uVar14) = *(uint *)(lVar23 + uVar14) | 1 << (ulong)(uVar21 & 0x1f);
              lVar22 = *(long *)puVar5;
            }
          }
        }
      }
      uVar19 = 0x3d;
      if ((int)uVar21 < 0x3d) {
        uVar19 = uVar21 + 1;
      }
      uVar21 = uVar19;
    } while (uVar19 != 0x3d);
  }
  else {
    cVar12 = *PTR_DAT_04bc23c0;
    lVar22 = *(long *)puVar5;
    uVar21 = 0;
    do {
      if ((int)*(uint *)(lVar22 + 0x5c0) < 1) {
        if ((((*(long *)(lVar22 + 0x4b0) != 0) &&
             (puVar13 = *(uint **)(*(long *)(lVar22 + 0x4b0) + 8), puVar13 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x4c8) <= uVar21 ||
             (*(char *)(*(long *)(lVar22 + 0x4d0) + (long)(int)uVar21) != '\0')))) &&
           (((uVar21 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar13 = (uint *)((ulong)(puVar13[1] * uVar21 + (uint)(ushort)puVar13[2] * 8 + iVar11) +
                            (long)puVar13);
          goto LAB_037303f4;
        }
      }
      else if (uVar21 < *(uint *)(lVar22 + 0x5c0)) {
        uVar19 = uVar21;
        if (*(uint *)(lVar22 + 0x5b0) <= uVar21) {
          uVar19 = 0;
        }
        puVar13 = *(uint **)(*(long *)(lVar22 + 0x5b8) + (ulong)uVar19 * 8);
LAB_037303f4:
        if ((puVar13 != (uint *)0x0 && uVar21 != 0) &&
           (lVar23 = *(long *)(param_1 + 0xe8),
           (*(uint *)(*(long *)(lVar23 + lVar17 * 8) + (long)((int)uVar21 >> 5) * 4 + 0x118) >>
            (ulong)(uVar21 & 0x1f) & 1) == 0)) {
          puVar16 = (uint *)((long)puVar18 - (ulong)*puVar18);
          if (((*puVar18 == 0) || ((puVar16 == (uint *)0x0 || (*puVar16 == 0)))) ||
             ((uVar19 = puVar16[1], uVar19 == 0 || ((ulong)(ushort)puVar16[2] == 0)))) {
LAB_03730504:
            uVar19 = *(uint *)puVar8;
LAB_03730508:
            uVar20 = 0;
          }
          else {
            lVar26 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar26 = 0x1c;
            }
            lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar26 == 0) goto LAB_03730504;
            uVar3 = 0;
            if ((ulong)uVar19 != 0) {
              uVar3 = (uint)((ulong)((long)puVar18 - lVar26) / (ulong)uVar19);
            }
            uVar19 = *(uint *)puVar8;
            if (*puVar16 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar19 <= uVar3) ||
               (uVar20 = *(ushort *)(*(long *)(puVar8 + 8) + (long)(int)uVar3 * 2), 0xc < uVar20))
            goto LAB_03730508;
          }
          uVar15 = 0;
          uVar3 = *puVar13;
          if ((uVar3 != 0) && (puVar13 != (uint *)(ulong)uVar3)) {
            puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar3);
            uVar15 = 0;
            if (*puVar16 != 0) {
              uVar3 = puVar16[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar26 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar26 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar13 - lVar26) / (ulong)uVar3);
                  }
                  if (*puVar16 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < uVar19) &&
                     (uVar15 = *(ushort *)(*(long *)(puVar8 + 8) + (long)(int)uVar4 * 2),
                     uVar15 < 0xd)) goto LAB_0373058c;
                }
              }
              uVar15 = 0;
            }
          }
LAB_0373058c:
          if (uVar20 == uVar15) {
            if (*puVar18 != 0) {
              do {
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *puVar6 = 1;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                  uVar19 = *puVar18;
                }
                else {
                  uVar19 = *(uint *)(puVar7 + 0x24);
                  if (-1 < (int)uVar19) {
                    lVar26 = (ulong)uVar19 + (long)puVar18;
                    goto LAB_0373064c;
                  }
                  if (uVar19 != 0xffffffff) break;
                  uVar19 = *puVar18;
                }
                if ((uVar19 == 0) || (puVar16 = (uint *)(ulong)uVar19, puVar18 == puVar16)) break;
                lVar26 = 0xc;
                if (*(char *)((long)puVar18 + (10 - (long)puVar16)) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar1 = (long)puVar18 + (lVar26 - (long)puVar16);
                lVar26 = 0;
                if (lVar1 == 0) goto LAB_0373064c;
                uVar14 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar16));
                *(undefined4 *)(puVar7 + 0x24) = 0xfffffffe;
                if (uVar14 == 0) break;
                piVar25 = (int *)(lVar1 + 4);
                while (piVar25[-1] != 0xac9e9a2) {
                  piVar25 = piVar25 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_03730648;
                }
                iVar11 = 0;
                if (*piVar25 != -1) {
                  iVar11 = *piVar25;
                }
                *(int *)(puVar7 + 0x24) = iVar11;
                if (*puVar18 == 0) break;
              } while( true );
            }
LAB_03730648:
            lVar26 = 0;
LAB_0373064c:
            lVar24 = *(long *)puVar10;
            lVar1 = lVar24;
            if (lVar26 != 0) {
              lVar1 = lVar26;
            }
            uVar19 = *puVar13;
            while (uVar19 != 0) {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                uVar19 = *puVar13;
              }
              else {
                uVar19 = *(uint *)(puVar7 + 0x24);
                if (-1 < (int)uVar19) {
                  lVar26 = (ulong)uVar19 + (long)puVar13;
                  goto LAB_03730708;
                }
                if (uVar19 != 0xffffffff) break;
                uVar19 = *puVar13;
              }
              if ((uVar19 == 0) || (puVar16 = (uint *)(ulong)uVar19, puVar13 == puVar16)) break;
              lVar26 = 0xc;
              if (*(char *)((long)puVar13 + (10 - (long)puVar16)) != '\0') {
                lVar26 = 0x1c;
              }
              lVar2 = (long)puVar13 + (lVar26 - (long)puVar16);
              if (lVar2 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar16));
              *(undefined4 *)(puVar7 + 0x24) = 0xfffffffe;
              lVar26 = 0;
              if (uVar14 == 0) goto LAB_03730708;
              piVar25 = (int *)(lVar2 + 4);
              while (piVar25[-1] != 0xac9e9a2) {
                piVar25 = piVar25 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  lVar26 = 0;
                  goto LAB_03730708;
                }
              }
              iVar11 = 0;
              if (*piVar25 != -1) {
                iVar11 = *piVar25;
              }
              *(int *)(puVar7 + 0x24) = iVar11;
              uVar19 = *puVar13;
            }
            lVar26 = 0;
LAB_03730708:
            if (lVar26 != 0) {
              lVar24 = lVar26;
            }
            if (lVar1 == lVar24) {
              puVar16 = (uint *)((long)puVar18 - (ulong)*puVar18);
              if ((((*puVar18 == 0) || (puVar16 == (uint *)0x0)) || (*puVar16 == 0)) ||
                 ((uVar19 = puVar16[1], uVar19 == 0 || ((ulong)(ushort)puVar16[2] == 0)))) {
LAB_0373078c:
                uVar19 = *(uint *)puVar9;
LAB_03730790:
                uVar20 = 0;
              }
              else {
                lVar26 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar26 == 0) goto LAB_0373078c;
                uVar3 = 0;
                if ((ulong)uVar19 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar18 - lVar26) / (ulong)uVar19);
                }
                uVar19 = *(uint *)puVar9;
                if (*puVar16 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar19 <= uVar3) ||
                   (uVar20 = *(ushort *)(*(long *)(puVar9 + 8) + (long)(int)uVar3 * 2), 3 < uVar20))
                goto LAB_03730790;
              }
              uVar15 = 0;
              uVar3 = *puVar13;
              if ((uVar3 != 0) && (puVar13 != (uint *)(ulong)uVar3)) {
                puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar3);
                uVar15 = 0;
                if (*puVar16 != 0) {
                  uVar3 = puVar16[1];
                  if ((uVar3 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                    lVar26 = 0xc;
                    if (*(char *)((long)puVar16 + 10) != '\0') {
                      lVar26 = 0x1c;
                    }
                    lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
                    if (lVar26 != 0) {
                      uVar4 = 0;
                      if ((ulong)uVar3 != 0) {
                        uVar4 = (uint)((ulong)((long)puVar13 - lVar26) / (ulong)uVar3);
                      }
                      if (*puVar16 <= uVar4) {
                        uVar4 = 0xffffffff;
                      }
                      if ((uVar4 < uVar19) &&
                         (uVar15 = *(ushort *)(*(long *)(puVar9 + 8) + (long)(int)uVar4 * 2),
                         uVar15 < 4)) goto LAB_03730814;
                    }
                  }
                  uVar15 = 0;
                }
              }
LAB_03730814:
              if ((uVar20 == uVar15) && (uVar21 < 0x3d)) {
                lVar22 = *(long *)(lVar23 + lVar17 * 8) + ((ulong)(uVar21 >> 3) & 0x1ffffffc);
                *(uint *)(lVar22 + 0x118) = *(uint *)(lVar22 + 0x118) | 1 << (ulong)(uVar21 & 0x1f);
                lVar22 = *(long *)puVar5;
              }
            }
          }
        }
      }
      uVar19 = 0x3d;
      if ((int)uVar21 < 0x3d) {
        uVar19 = uVar21 + 1;
      }
      uVar21 = uVar19;
    } while (uVar19 != 0x3d);
  }
  return;
}

