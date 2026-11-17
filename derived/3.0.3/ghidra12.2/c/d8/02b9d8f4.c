
void FUN_02b9d8f4(long param_1,byte *param_2,undefined1 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  uint uVar18;
  uint *puVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  ulong uVar23;
  uint *puVar24;
  
  switch(*(undefined4 *)(param_1 + 0xed0)) {
  case 0:
    uVar3 = *(uint *)(param_1 + 0xeb0);
    uVar18 = uVar3;
    if ((int)uVar3 < 1) {
      if (*(long *)(param_1 + 0xda0) == 0) {
        return;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0xda0) + 8);
      if (puVar19 == (uint *)0x0) {
        return;
      }
      uVar18 = *puVar19;
    }
    if ((int)(uVar18 - 1) < 0) {
      return;
    }
    uVar17 = (ulong)DAT_05642fa0;
    uVar13 = (ulong)DAT_05642fa4;
    uVar7 = (ulong)(uVar18 - 1);
    uVar15 = uVar17;
    uVar14 = uVar13;
    bVar16 = DAT_05642f98;
    bVar21 = DAT_05642f98;
    break;
  case 1:
    uVar3 = *(uint *)(param_1 + 0x3a0);
    uVar18 = uVar3;
    if ((int)uVar3 < 1) {
      if (*(long *)(param_1 + 0x290) == 0) {
        return;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x290) + 8);
      if (puVar19 == (uint *)0x0) {
        return;
      }
      uVar18 = *puVar19;
    }
    if ((int)(uVar18 - 1) < 0) {
      return;
    }
    uVar17 = (ulong)DAT_05642e80;
    uVar13 = (ulong)DAT_05642e84;
    uVar7 = (ulong)(uVar18 - 1);
    uVar15 = uVar17;
    uVar14 = uVar13;
    bVar16 = DAT_05642e78;
    bVar21 = DAT_05642e78;
    do {
      uVar9 = (uint)uVar7;
      if ((int)uVar3 < 1) {
        if ((((*(long *)(param_1 + 0x290) != 0) &&
             (puVar19 = *(uint **)(*(long *)(param_1 + 0x290) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0x2a8) <= uVar7 ||
             (*(char *)(*(long *)(param_1 + 0x2b0) + uVar7) != '\0')))) &&
           (((uVar7 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * uVar9 + (uint)(ushort)puVar19[2] * 8 + iVar6) +
                            (long)puVar19);
          goto joined_r0x02b9e440;
        }
      }
      else if (uVar7 < uVar3) {
        uVar23 = uVar7 & 0xffffffff;
        if (*(uint *)(param_1 + 0x390) <= uVar7) {
          uVar23 = 0;
        }
        puVar19 = *(uint **)(*(long *)(param_1 + 0x398) + uVar23 * 8);
joined_r0x02b9e440:
        if (puVar19 != (uint *)0x0) {
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) {
            bVar22 = 3;
            bVar20 = 2;
          }
          else {
            if ((bVar21 & 1) == 0) {
              bVar16 = 1;
              DAT_05642e7c = 0xffffffff;
              uVar15 = 0xffffffff;
              DAT_05642e78 = 1;
              uVar14 = 0xffffffff;
              uVar17 = 0xffffffff;
              DAT_05642e80 = 0xffffffff;
              uVar13 = 0xffffffff;
              DAT_05642e84 = 0xffffffff;
LAB_02b9e478:
              bVar20 = 2;
              if ((puVar19 != puVar24) && (uVar15 == 0xffffffff)) {
                do {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                  if (lVar5 == 0) {
                    bVar20 = 2;
                    uVar15 = 0xffffffff;
                    goto LAB_02b9e524;
                  }
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                  DAT_05642e80 = 0xfffffffe;
                  if (uVar15 == 0) {
LAB_02b9e4f8:
                    bVar20 = 2;
                    uVar17 = 0xfffffffe;
                    uVar15 = 0xfffffffe;
                    goto LAB_02b9e524;
                  }
                  puVar8 = (uint *)(lVar5 + 4);
                  while (puVar8[-1] != 0x8ae48661) {
                    puVar8 = puVar8 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_02b9e4f8;
                  }
                  uVar17 = (ulong)*puVar8;
                  uVar15 = 0;
                  if (*puVar8 != 0xffffffff) {
                    uVar15 = uVar17;
                  }
                  DAT_05642e80 = (uint)uVar15;
                  uVar23 = uVar15;
                  if (-1 < (int)DAT_05642e80) goto joined_r0x02b9e51c;
                  bVar20 = 2;
                } while (uVar17 == 0xffffffff);
                uVar15 = uVar17;
              }
            }
            else {
              uVar23 = uVar17;
              if ((int)uVar15 < 0) goto LAB_02b9e478;
joined_r0x02b9e51c:
              uVar17 = uVar23;
              if ((byte *)(uVar15 + (long)puVar19) == (byte *)0x0) {
                bVar20 = 2;
              }
              else {
                bVar20 = *(byte *)(uVar15 + (long)puVar19);
              }
            }
LAB_02b9e524:
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_02b9e5f8:
              bVar22 = 3;
            }
            else {
              uVar23 = uVar13;
              if ((int)uVar14 < 0) {
                bVar22 = 3;
                bVar21 = 1;
                if ((puVar19 != puVar24) && (uVar14 == 0xffffffff)) {
                  do {
                    lVar5 = 0xc;
                    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                      lVar5 = 0x1c;
                    }
                    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                    if (lVar5 == 0) {
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar14 = 0xffffffff;
                      goto LAB_02b9e600;
                    }
                    uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                    DAT_05642e84 = 0xfffffffe;
                    if (uVar14 == 0) {
LAB_02b9e5c8:
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar13 = 0xfffffffe;
                      uVar14 = 0xfffffffe;
                      goto LAB_02b9e600;
                    }
                    puVar8 = (uint *)(lVar5 + 4);
                    while (puVar8[-1] != 0x3835a9dd) {
                      puVar8 = puVar8 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_02b9e5c8;
                    }
                    uVar13 = (ulong)*puVar8;
                    uVar14 = 0;
                    if (*puVar8 != 0xffffffff) {
                      uVar14 = uVar13;
                    }
                    DAT_05642e84 = (uint)uVar14;
                    uVar23 = uVar14;
                    if (-1 < (int)DAT_05642e84) goto joined_r0x02b9e5f4;
                    bVar22 = 3;
                    bVar21 = 1;
                  } while (uVar13 == 0xffffffff);
                  uVar14 = uVar13;
                }
                goto LAB_02b9e600;
              }
joined_r0x02b9e5f4:
              uVar13 = uVar23;
              if ((byte *)(uVar14 + (long)puVar19) == (byte *)0x0) goto LAB_02b9e5f8;
              bVar22 = *(byte *)(uVar14 + (long)puVar19);
            }
            bVar21 = 1;
          }
LAB_02b9e600:
          if ((bVar20 <= *(byte *)(param_1 + 0xed4)) &&
             ((bVar20 != *(byte *)(param_1 + 0xed4) || (bVar22 <= *(byte *)(param_1 + 0xed5))))) {
            *param_2 = bVar20;
            param_2[1] = bVar22;
            uVar3 = DAT_05642e98;
            puVar24 = (uint *)((long)puVar19 - (ulong)*puVar19);
            if ((*puVar19 == 0) ||
               ((((puVar24 == (uint *)0x0 || (*puVar24 == 0)) || (uVar9 = puVar24[1], uVar9 == 0))
                || ((ulong)(ushort)puVar24[2] == 0)))) {
LAB_02b9e6d8:
              uVar9 = 0;
            }
            else {
              lVar5 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar5 == 0) goto LAB_02b9e6d8;
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar9);
              }
              if (*puVar24 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05642e98 <= uVar2) ||
                 (uVar4 = *(ushort *)(DAT_05642ea0 + (long)(int)uVar2 * 2), uVar9 = (uint)uVar4,
                 0x16 < uVar4)) {
                uVar9 = 0;
              }
            }
            *(uint *)(param_2 + 4) = uVar9;
            uVar9 = *(uint *)(param_1 + 0x3a0);
            if ((int)uVar9 < 1) {
              lVar5 = *(long *)(param_1 + 0x290);
              if (lVar5 == 0) {
                if (uVar18 != 0) {
                  return;
                }
              }
              else {
                uVar9 = 0;
                if (*(uint **)(lVar5 + 8) != (uint *)0x0) {
                  uVar9 = **(uint **)(lVar5 + 8);
                }
                if (uVar18 != uVar9) {
                  if (lVar5 == 0) {
                    return;
                  }
                  puVar19 = *(uint **)(lVar5 + 8);
                  if (puVar19 == (uint *)0x0) {
                    return;
                  }
                  if ((uVar18 < *(uint *)(param_1 + 0x2a8)) &&
                     (*(char *)(*(long *)(param_1 + 0x2b0) + (long)(int)uVar18) == '\0')) {
                    return;
                  }
                  if (*puVar19 <= uVar18) {
                    return;
                  }
                  if (puVar19[1] == 0) {
                    return;
                  }
                  if ((ushort)puVar19[2] == 0) {
                    return;
                  }
                  iVar6 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    iVar6 = 0x1c;
                  }
                  puVar19 = (uint *)((ulong)(puVar19[1] * uVar18 + (uint)(ushort)puVar19[2] * 8 +
                                            iVar6) + (long)puVar19);
                  goto joined_r0x02b9e7bc;
                }
              }
            }
            else if (uVar18 != uVar9) {
              if (uVar9 <= uVar18) {
                return;
              }
              if (*(uint *)(param_1 + 0x390) <= uVar18) {
                uVar18 = 0;
              }
              puVar19 = *(uint **)(*(long *)(param_1 + 0x398) + (ulong)uVar18 * 8);
joined_r0x02b9e7bc:
              if (puVar19 == (uint *)0x0) {
                return;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              if (*puVar19 == 0) {
                uVar12 = 2;
                goto LAB_02b9eab0;
              }
              if ((bVar16 & 1) == 0) {
                DAT_05642e7c = 0xffffffff;
                uVar17 = 0xffffffff;
                DAT_05642e78 = 1;
                uVar13 = 0xffffffff;
                DAT_05642e80 = 0xffffffff;
                DAT_05642e84 = 0xffffffff;
              }
              else {
                uVar15 = uVar17;
                if (-1 < (int)uVar17) goto joined_r0x02b9e730;
              }
              if (puVar19 == puVar24) goto LAB_02b9eaa8;
              goto LAB_02b9eb9c;
            }
            if (*(int *)(param_1 + 0x578) < 1) {
              if (*(long *)(param_1 + 0x468) == 0) {
                return;
              }
              piVar11 = *(int **)(*(long *)(param_1 + 0x468) + 8);
              if (piVar11 == (int *)0x0) {
                return;
              }
              if ((*(int *)(param_1 + 0x480) != 0) && (**(char **)(param_1 + 0x488) == '\0')) {
                return;
              }
              if (*piVar11 == 0) {
                return;
              }
              if (piVar11[1] == 0) {
                return;
              }
              if ((ulong)*(ushort *)(piVar11 + 2) == 0) {
                return;
              }
              lVar5 = 0xc;
              if (*(char *)((long)piVar11 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              puVar19 = (uint *)((long)piVar11 + lVar5 + (ulong)*(ushort *)(piVar11 + 2) * 8);
            }
            else {
              puVar19 = (uint *)**(undefined8 **)(param_1 + 0x570);
            }
            if (puVar19 == (uint *)0x0) {
              return;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) goto LAB_02b9e898;
            if ((DAT_05642ea8 & 1) == 0) {
              DAT_05642eb0 = 0xffffffff;
              DAT_05642ea8 = 1;
              DAT_05642eac = 0xffffffff;
              DAT_05642eb4 = 0xffffffff;
            }
            else if (-1 < (int)DAT_05642eb0) goto joined_r0x02b9e804;
            uVar18 = DAT_05642eb0;
            if (puVar19 == puVar24) goto LAB_02b9e898;
            goto LAB_02b9e988;
          }
        }
      }
      bVar1 = (long)uVar7 < 1;
      uVar7 = uVar7 - 1;
      uVar18 = uVar9;
      if (bVar1) {
        return;
      }
    } while( true );
  case 2:
    uVar3 = *(uint *)(param_1 + 0x578);
    uVar18 = uVar3;
    if ((int)uVar3 < 1) {
      if (*(long *)(param_1 + 0x468) == 0) {
        return;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x468) + 8);
      if (puVar19 == (uint *)0x0) {
        return;
      }
      uVar18 = *puVar19;
    }
    if ((int)(uVar18 - 1) < 0) {
      return;
    }
    uVar17 = (ulong)DAT_05642eb0;
    uVar13 = (ulong)DAT_05642eb4;
    uVar7 = (ulong)(uVar18 - 1);
    uVar15 = uVar17;
    uVar14 = uVar13;
    bVar16 = DAT_05642ea8;
    bVar21 = DAT_05642ea8;
    do {
      uVar9 = (uint)uVar7;
      if ((int)uVar3 < 1) {
        if ((((*(long *)(param_1 + 0x468) != 0) &&
             (puVar19 = *(uint **)(*(long *)(param_1 + 0x468) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0x480) <= uVar7 ||
             (*(char *)(*(long *)(param_1 + 0x488) + uVar7) != '\0')))) &&
           (((uVar7 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * uVar9 + (uint)(ushort)puVar19[2] * 8 + iVar6) +
                            (long)puVar19);
          goto joined_r0x02b9edd0;
        }
      }
      else if (uVar7 < uVar3) {
        uVar23 = uVar7 & 0xffffffff;
        if (*(uint *)(param_1 + 0x568) <= uVar7) {
          uVar23 = 0;
        }
        puVar19 = *(uint **)(*(long *)(param_1 + 0x570) + uVar23 * 8);
joined_r0x02b9edd0:
        if (puVar19 != (uint *)0x0) {
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) {
            bVar22 = 3;
            bVar20 = 2;
          }
          else {
            if ((bVar21 & 1) == 0) {
              bVar16 = 1;
              DAT_05642eac = 0xffffffff;
              uVar15 = 0xffffffff;
              DAT_05642ea8 = 1;
              uVar14 = 0xffffffff;
              uVar17 = 0xffffffff;
              DAT_05642eb0 = 0xffffffff;
              uVar13 = 0xffffffff;
              DAT_05642eb4 = 0xffffffff;
LAB_02b9ee08:
              bVar20 = 2;
              if ((puVar19 != puVar24) && (uVar15 == 0xffffffff)) {
                do {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                  if (lVar5 == 0) {
                    bVar20 = 2;
                    uVar15 = 0xffffffff;
                    goto LAB_02b9eeb4;
                  }
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                  DAT_05642eb0 = 0xfffffffe;
                  if (uVar15 == 0) {
LAB_02b9ee88:
                    bVar20 = 2;
                    uVar17 = 0xfffffffe;
                    uVar15 = 0xfffffffe;
                    goto LAB_02b9eeb4;
                  }
                  puVar8 = (uint *)(lVar5 + 4);
                  while (puVar8[-1] != 0x8ae48661) {
                    puVar8 = puVar8 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_02b9ee88;
                  }
                  uVar17 = (ulong)*puVar8;
                  uVar15 = 0;
                  if (*puVar8 != 0xffffffff) {
                    uVar15 = uVar17;
                  }
                  DAT_05642eb0 = (uint)uVar15;
                  uVar23 = uVar15;
                  if (-1 < (int)DAT_05642eb0) goto joined_r0x02b9eeac;
                  bVar20 = 2;
                } while (uVar17 == 0xffffffff);
                uVar15 = uVar17;
              }
            }
            else {
              uVar23 = uVar17;
              if ((int)uVar15 < 0) goto LAB_02b9ee08;
joined_r0x02b9eeac:
              uVar17 = uVar23;
              if ((byte *)(uVar15 + (long)puVar19) == (byte *)0x0) {
                bVar20 = 2;
              }
              else {
                bVar20 = *(byte *)(uVar15 + (long)puVar19);
              }
            }
LAB_02b9eeb4:
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_02b9ef88:
              bVar22 = 3;
            }
            else {
              uVar23 = uVar13;
              if ((int)uVar14 < 0) {
                bVar22 = 3;
                bVar21 = 1;
                if ((puVar19 != puVar24) && (uVar14 == 0xffffffff)) {
                  do {
                    lVar5 = 0xc;
                    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                      lVar5 = 0x1c;
                    }
                    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                    if (lVar5 == 0) {
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar14 = 0xffffffff;
                      goto LAB_02b9ef90;
                    }
                    uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                    DAT_05642eb4 = 0xfffffffe;
                    if (uVar14 == 0) {
LAB_02b9ef58:
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar13 = 0xfffffffe;
                      uVar14 = 0xfffffffe;
                      goto LAB_02b9ef90;
                    }
                    puVar8 = (uint *)(lVar5 + 4);
                    while (puVar8[-1] != 0x3835a9dd) {
                      puVar8 = puVar8 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_02b9ef58;
                    }
                    uVar13 = (ulong)*puVar8;
                    uVar14 = 0;
                    if (*puVar8 != 0xffffffff) {
                      uVar14 = uVar13;
                    }
                    DAT_05642eb4 = (uint)uVar14;
                    uVar23 = uVar14;
                    if (-1 < (int)DAT_05642eb4) goto joined_r0x02b9ef84;
                    bVar22 = 3;
                    bVar21 = 1;
                  } while (uVar13 == 0xffffffff);
                  uVar14 = uVar13;
                }
                goto LAB_02b9ef90;
              }
joined_r0x02b9ef84:
              uVar13 = uVar23;
              if ((byte *)(uVar14 + (long)puVar19) == (byte *)0x0) goto LAB_02b9ef88;
              bVar22 = *(byte *)(uVar14 + (long)puVar19);
            }
            bVar21 = 1;
          }
LAB_02b9ef90:
          if ((bVar20 <= *(byte *)(param_1 + 0xed4)) &&
             ((bVar20 != *(byte *)(param_1 + 0xed4) || (bVar22 <= *(byte *)(param_1 + 0xed5))))) {
            *param_2 = bVar20;
            param_2[1] = bVar22;
            uVar3 = DAT_05642ec8;
            puVar24 = (uint *)((long)puVar19 - (ulong)*puVar19);
            if ((*puVar19 == 0) ||
               ((((puVar24 == (uint *)0x0 || (*puVar24 == 0)) || (uVar9 = puVar24[1], uVar9 == 0))
                || ((ulong)(ushort)puVar24[2] == 0)))) {
LAB_02b9f068:
              uVar9 = 0;
            }
            else {
              lVar5 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar5 == 0) goto LAB_02b9f068;
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar9);
              }
              if (*puVar24 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05642ec8 <= uVar2) ||
                 (uVar4 = *(ushort *)(DAT_05642ed0 + (long)(int)uVar2 * 2), uVar9 = (uint)uVar4,
                 0x16 < uVar4)) {
                uVar9 = 0;
              }
            }
            *(uint *)(param_2 + 4) = uVar9;
            uVar9 = *(uint *)(param_1 + 0x578);
            if ((int)uVar9 < 1) {
              lVar5 = *(long *)(param_1 + 0x468);
              if (lVar5 == 0) {
                if (uVar18 != 0) {
                  return;
                }
              }
              else {
                uVar9 = 0;
                if (*(uint **)(lVar5 + 8) != (uint *)0x0) {
                  uVar9 = **(uint **)(lVar5 + 8);
                }
                if (uVar18 != uVar9) {
                  if (lVar5 == 0) {
                    return;
                  }
                  puVar19 = *(uint **)(lVar5 + 8);
                  if (puVar19 == (uint *)0x0) {
                    return;
                  }
                  if ((uVar18 < *(uint *)(param_1 + 0x480)) &&
                     (*(char *)(*(long *)(param_1 + 0x488) + (long)(int)uVar18) == '\0')) {
                    return;
                  }
                  if (*puVar19 <= uVar18) {
                    return;
                  }
                  if (puVar19[1] == 0) {
                    return;
                  }
                  if ((ushort)puVar19[2] == 0) {
                    return;
                  }
                  iVar6 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    iVar6 = 0x1c;
                  }
                  puVar19 = (uint *)((ulong)(puVar19[1] * uVar18 + (uint)(ushort)puVar19[2] * 8 +
                                            iVar6) + (long)puVar19);
                  goto joined_r0x02b9f14c;
                }
              }
            }
            else if (uVar18 != uVar9) {
              if (uVar9 <= uVar18) {
                return;
              }
              if (*(uint *)(param_1 + 0x568) <= uVar18) {
                uVar18 = 0;
              }
              puVar19 = *(uint **)(*(long *)(param_1 + 0x570) + (ulong)uVar18 * 8);
joined_r0x02b9f14c:
              if (puVar19 == (uint *)0x0) {
                return;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              if (*puVar19 == 0) {
                uVar12 = 2;
                goto LAB_02b9f440;
              }
              if ((bVar16 & 1) == 0) {
                DAT_05642eac = 0xffffffff;
                uVar17 = 0xffffffff;
                DAT_05642ea8 = 1;
                uVar13 = 0xffffffff;
                DAT_05642eb0 = 0xffffffff;
                DAT_05642eb4 = 0xffffffff;
              }
              else {
                uVar15 = uVar17;
                if (-1 < (int)uVar17) goto joined_r0x02b9f0c0;
              }
              if (puVar19 == puVar24) goto LAB_02b9f438;
              goto LAB_02b9f52c;
            }
            if (*(int *)(param_1 + 0x750) < 1) {
              if (*(long *)(param_1 + 0x640) == 0) {
                return;
              }
              piVar11 = *(int **)(*(long *)(param_1 + 0x640) + 8);
              if (piVar11 == (int *)0x0) {
                return;
              }
              if ((*(int *)(param_1 + 0x658) != 0) && (**(char **)(param_1 + 0x660) == '\0')) {
                return;
              }
              if (*piVar11 == 0) {
                return;
              }
              if (piVar11[1] == 0) {
                return;
              }
              if ((ulong)*(ushort *)(piVar11 + 2) == 0) {
                return;
              }
              lVar5 = 0xc;
              if (*(char *)((long)piVar11 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              puVar19 = (uint *)((long)piVar11 + lVar5 + (ulong)*(ushort *)(piVar11 + 2) * 8);
            }
            else {
              puVar19 = (uint *)**(undefined8 **)(param_1 + 0x748);
            }
            if (puVar19 == (uint *)0x0) {
              return;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) goto LAB_02b9f228;
            if ((DAT_05642ed8 & 1) == 0) {
              DAT_05642ee0 = 0xffffffff;
              DAT_05642ed8 = 1;
              DAT_05642edc = 0xffffffff;
              DAT_05642ee4 = 0xffffffff;
            }
            else if (-1 < (int)DAT_05642ee0) goto joined_r0x02b9f194;
            uVar18 = DAT_05642ee0;
            if (puVar19 == puVar24) goto LAB_02b9f228;
            goto LAB_02b9f318;
          }
        }
      }
      bVar1 = (long)uVar7 < 1;
      uVar7 = uVar7 - 1;
      uVar18 = uVar9;
      if (bVar1) {
        return;
      }
    } while( true );
  case 3:
    uVar3 = *(uint *)(param_1 + 0x750);
    uVar18 = uVar3;
    if ((int)uVar3 < 1) {
      if (*(long *)(param_1 + 0x640) == 0) {
        return;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x640) + 8);
      if (puVar19 == (uint *)0x0) {
        return;
      }
      uVar18 = *puVar19;
    }
    if ((int)(uVar18 - 1) < 0) {
      return;
    }
    uVar17 = (ulong)DAT_05642ee0;
    uVar13 = (ulong)DAT_05642ee4;
    uVar7 = (ulong)(uVar18 - 1);
    uVar15 = uVar17;
    uVar14 = uVar13;
    bVar16 = DAT_05642ed8;
    bVar21 = DAT_05642ed8;
    do {
      uVar9 = (uint)uVar7;
      if ((int)uVar3 < 1) {
        if ((((*(long *)(param_1 + 0x640) != 0) &&
             (puVar19 = *(uint **)(*(long *)(param_1 + 0x640) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0x658) <= uVar7 ||
             (*(char *)(*(long *)(param_1 + 0x660) + uVar7) != '\0')))) &&
           (((uVar7 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * uVar9 + (uint)(ushort)puVar19[2] * 8 + iVar6) +
                            (long)puVar19);
          goto joined_r0x02b9f760;
        }
      }
      else if (uVar7 < uVar3) {
        uVar23 = uVar7 & 0xffffffff;
        if (*(uint *)(param_1 + 0x740) <= uVar7) {
          uVar23 = 0;
        }
        puVar19 = *(uint **)(*(long *)(param_1 + 0x748) + uVar23 * 8);
joined_r0x02b9f760:
        if (puVar19 != (uint *)0x0) {
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) {
            bVar22 = 3;
            bVar20 = 2;
          }
          else {
            if ((bVar21 & 1) == 0) {
              bVar16 = 1;
              DAT_05642edc = 0xffffffff;
              uVar15 = 0xffffffff;
              DAT_05642ed8 = 1;
              uVar14 = 0xffffffff;
              uVar17 = 0xffffffff;
              DAT_05642ee0 = 0xffffffff;
              uVar13 = 0xffffffff;
              DAT_05642ee4 = 0xffffffff;
LAB_02b9f798:
              bVar20 = 2;
              if ((puVar19 != puVar24) && (uVar15 == 0xffffffff)) {
                do {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                  if (lVar5 == 0) {
                    bVar20 = 2;
                    uVar15 = 0xffffffff;
                    goto LAB_02b9f844;
                  }
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                  DAT_05642ee0 = 0xfffffffe;
                  if (uVar15 == 0) {
LAB_02b9f818:
                    bVar20 = 2;
                    uVar17 = 0xfffffffe;
                    uVar15 = 0xfffffffe;
                    goto LAB_02b9f844;
                  }
                  puVar8 = (uint *)(lVar5 + 4);
                  while (puVar8[-1] != 0x8ae48661) {
                    puVar8 = puVar8 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_02b9f818;
                  }
                  uVar17 = (ulong)*puVar8;
                  uVar15 = 0;
                  if (*puVar8 != 0xffffffff) {
                    uVar15 = uVar17;
                  }
                  DAT_05642ee0 = (uint)uVar15;
                  uVar23 = uVar15;
                  if (-1 < (int)DAT_05642ee0) goto joined_r0x02b9f83c;
                  bVar20 = 2;
                } while (uVar17 == 0xffffffff);
                uVar15 = uVar17;
              }
            }
            else {
              uVar23 = uVar17;
              if ((int)uVar15 < 0) goto LAB_02b9f798;
joined_r0x02b9f83c:
              uVar17 = uVar23;
              if ((byte *)(uVar15 + (long)puVar19) == (byte *)0x0) {
                bVar20 = 2;
              }
              else {
                bVar20 = *(byte *)(uVar15 + (long)puVar19);
              }
            }
LAB_02b9f844:
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_02b9f918:
              bVar22 = 3;
            }
            else {
              uVar23 = uVar13;
              if ((int)uVar14 < 0) {
                bVar22 = 3;
                bVar21 = 1;
                if ((puVar19 != puVar24) && (uVar14 == 0xffffffff)) {
                  do {
                    lVar5 = 0xc;
                    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                      lVar5 = 0x1c;
                    }
                    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                    if (lVar5 == 0) {
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar14 = 0xffffffff;
                      goto LAB_02b9f920;
                    }
                    uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                    DAT_05642ee4 = 0xfffffffe;
                    if (uVar14 == 0) {
LAB_02b9f8e8:
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar13 = 0xfffffffe;
                      uVar14 = 0xfffffffe;
                      goto LAB_02b9f920;
                    }
                    puVar8 = (uint *)(lVar5 + 4);
                    while (puVar8[-1] != 0x3835a9dd) {
                      puVar8 = puVar8 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_02b9f8e8;
                    }
                    uVar13 = (ulong)*puVar8;
                    uVar14 = 0;
                    if (*puVar8 != 0xffffffff) {
                      uVar14 = uVar13;
                    }
                    DAT_05642ee4 = (uint)uVar14;
                    uVar23 = uVar14;
                    if (-1 < (int)DAT_05642ee4) goto joined_r0x02b9f914;
                    bVar22 = 3;
                    bVar21 = 1;
                  } while (uVar13 == 0xffffffff);
                  uVar14 = uVar13;
                }
                goto LAB_02b9f920;
              }
joined_r0x02b9f914:
              uVar13 = uVar23;
              if ((byte *)(uVar14 + (long)puVar19) == (byte *)0x0) goto LAB_02b9f918;
              bVar22 = *(byte *)(uVar14 + (long)puVar19);
            }
            bVar21 = 1;
          }
LAB_02b9f920:
          if ((bVar20 <= *(byte *)(param_1 + 0xed4)) &&
             ((bVar20 != *(byte *)(param_1 + 0xed4) || (bVar22 <= *(byte *)(param_1 + 0xed5))))) {
            *param_2 = bVar20;
            param_2[1] = bVar22;
            uVar3 = DAT_05642ef8;
            puVar24 = (uint *)((long)puVar19 - (ulong)*puVar19);
            if ((*puVar19 == 0) ||
               ((((puVar24 == (uint *)0x0 || (*puVar24 == 0)) || (uVar9 = puVar24[1], uVar9 == 0))
                || ((ulong)(ushort)puVar24[2] == 0)))) {
LAB_02b9f9f8:
              uVar9 = 0;
            }
            else {
              lVar5 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar5 == 0) goto LAB_02b9f9f8;
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar9);
              }
              if (*puVar24 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05642ef8 <= uVar2) ||
                 (uVar4 = *(ushort *)(DAT_05642f00 + (long)(int)uVar2 * 2), uVar9 = (uint)uVar4,
                 0x16 < uVar4)) {
                uVar9 = 0;
              }
            }
            *(uint *)(param_2 + 4) = uVar9;
            uVar9 = *(uint *)(param_1 + 0x750);
            if ((int)uVar9 < 1) {
              lVar5 = *(long *)(param_1 + 0x640);
              if (lVar5 == 0) {
                if (uVar18 != 0) {
                  return;
                }
              }
              else {
                uVar9 = 0;
                if (*(uint **)(lVar5 + 8) != (uint *)0x0) {
                  uVar9 = **(uint **)(lVar5 + 8);
                }
                if (uVar18 != uVar9) {
                  if (lVar5 == 0) {
                    return;
                  }
                  puVar19 = *(uint **)(lVar5 + 8);
                  if (puVar19 == (uint *)0x0) {
                    return;
                  }
                  if ((uVar18 < *(uint *)(param_1 + 0x658)) &&
                     (*(char *)(*(long *)(param_1 + 0x660) + (long)(int)uVar18) == '\0')) {
                    return;
                  }
                  if (*puVar19 <= uVar18) {
                    return;
                  }
                  if (puVar19[1] == 0) {
                    return;
                  }
                  if ((ushort)puVar19[2] == 0) {
                    return;
                  }
                  iVar6 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    iVar6 = 0x1c;
                  }
                  puVar19 = (uint *)((ulong)(puVar19[1] * uVar18 + (uint)(ushort)puVar19[2] * 8 +
                                            iVar6) + (long)puVar19);
                  goto joined_r0x02b9fadc;
                }
              }
            }
            else if (uVar18 != uVar9) {
              if (uVar9 <= uVar18) {
                return;
              }
              if (*(uint *)(param_1 + 0x740) <= uVar18) {
                uVar18 = 0;
              }
              puVar19 = *(uint **)(*(long *)(param_1 + 0x748) + (ulong)uVar18 * 8);
joined_r0x02b9fadc:
              if (puVar19 == (uint *)0x0) {
                return;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              if (*puVar19 == 0) {
                uVar12 = 2;
                goto LAB_02b9fdd0;
              }
              if ((bVar16 & 1) == 0) {
                DAT_05642edc = 0xffffffff;
                uVar17 = 0xffffffff;
                DAT_05642ed8 = 1;
                uVar13 = 0xffffffff;
                DAT_05642ee0 = 0xffffffff;
                DAT_05642ee4 = 0xffffffff;
              }
              else {
                uVar15 = uVar17;
                if (-1 < (int)uVar17) goto joined_r0x02b9fa50;
              }
              if (puVar19 == puVar24) goto LAB_02b9fdc8;
              goto LAB_02b9febc;
            }
            if (*(int *)(param_1 + 0x928) < 1) {
              if (*(long *)(param_1 + 0x818) == 0) {
                return;
              }
              piVar11 = *(int **)(*(long *)(param_1 + 0x818) + 8);
              if (piVar11 == (int *)0x0) {
                return;
              }
              if ((*(int *)(param_1 + 0x830) != 0) && (**(char **)(param_1 + 0x838) == '\0')) {
                return;
              }
              if (*piVar11 == 0) {
                return;
              }
              if (piVar11[1] == 0) {
                return;
              }
              if ((ulong)*(ushort *)(piVar11 + 2) == 0) {
                return;
              }
              lVar5 = 0xc;
              if (*(char *)((long)piVar11 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              puVar19 = (uint *)((long)piVar11 + lVar5 + (ulong)*(ushort *)(piVar11 + 2) * 8);
            }
            else {
              puVar19 = (uint *)**(undefined8 **)(param_1 + 0x920);
            }
            if (puVar19 == (uint *)0x0) {
              return;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) goto LAB_02b9fbb8;
            if ((DAT_05642f08 & 1) == 0) {
              DAT_05642f10 = 0xffffffff;
              DAT_05642f08 = 1;
              DAT_05642f0c = 0xffffffff;
              DAT_05642f14 = 0xffffffff;
            }
            else if (-1 < (int)DAT_05642f10) goto joined_r0x02b9fb24;
            uVar18 = DAT_05642f10;
            if (puVar19 == puVar24) goto LAB_02b9fbb8;
            goto LAB_02b9fca8;
          }
        }
      }
      bVar1 = (long)uVar7 < 1;
      uVar7 = uVar7 - 1;
      uVar18 = uVar9;
      if (bVar1) {
        return;
      }
    } while( true );
  case 4:
    uVar3 = *(uint *)(param_1 + 0x928);
    uVar18 = uVar3;
    if ((int)uVar3 < 1) {
      if (*(long *)(param_1 + 0x818) == 0) {
        return;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x818) + 8);
      if (puVar19 == (uint *)0x0) {
        return;
      }
      uVar18 = *puVar19;
    }
    if ((int)(uVar18 - 1) < 0) {
      return;
    }
    uVar17 = (ulong)DAT_05642f10;
    uVar13 = (ulong)DAT_05642f14;
    uVar7 = (ulong)(uVar18 - 1);
    uVar15 = uVar17;
    uVar14 = uVar13;
    bVar16 = DAT_05642f08;
    bVar21 = DAT_05642f08;
    do {
      uVar9 = (uint)uVar7;
      if ((int)uVar3 < 1) {
        if ((((*(long *)(param_1 + 0x818) != 0) &&
             (puVar19 = *(uint **)(*(long *)(param_1 + 0x818) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0x830) <= uVar7 ||
             (*(char *)(*(long *)(param_1 + 0x838) + uVar7) != '\0')))) &&
           (((uVar7 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * uVar9 + (uint)(ushort)puVar19[2] * 8 + iVar6) +
                            (long)puVar19);
          goto joined_r0x02ba00f0;
        }
      }
      else if (uVar7 < uVar3) {
        uVar23 = uVar7 & 0xffffffff;
        if (*(uint *)(param_1 + 0x918) <= uVar7) {
          uVar23 = 0;
        }
        puVar19 = *(uint **)(*(long *)(param_1 + 0x920) + uVar23 * 8);
joined_r0x02ba00f0:
        if (puVar19 != (uint *)0x0) {
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) {
            bVar22 = 3;
            bVar20 = 2;
          }
          else {
            if ((bVar21 & 1) == 0) {
              bVar16 = 1;
              DAT_05642f0c = 0xffffffff;
              uVar15 = 0xffffffff;
              DAT_05642f08 = 1;
              uVar14 = 0xffffffff;
              uVar17 = 0xffffffff;
              DAT_05642f10 = 0xffffffff;
              uVar13 = 0xffffffff;
              DAT_05642f14 = 0xffffffff;
LAB_02ba0128:
              bVar20 = 2;
              if ((puVar19 != puVar24) && (uVar15 == 0xffffffff)) {
                do {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                  if (lVar5 == 0) {
                    bVar20 = 2;
                    uVar15 = 0xffffffff;
                    goto LAB_02ba01d4;
                  }
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                  DAT_05642f10 = 0xfffffffe;
                  if (uVar15 == 0) {
LAB_02ba01a8:
                    bVar20 = 2;
                    uVar17 = 0xfffffffe;
                    uVar15 = 0xfffffffe;
                    goto LAB_02ba01d4;
                  }
                  puVar8 = (uint *)(lVar5 + 4);
                  while (puVar8[-1] != 0x8ae48661) {
                    puVar8 = puVar8 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_02ba01a8;
                  }
                  uVar17 = (ulong)*puVar8;
                  uVar15 = 0;
                  if (*puVar8 != 0xffffffff) {
                    uVar15 = uVar17;
                  }
                  DAT_05642f10 = (uint)uVar15;
                  uVar23 = uVar15;
                  if (-1 < (int)DAT_05642f10) goto joined_r0x02ba01cc;
                  bVar20 = 2;
                } while (uVar17 == 0xffffffff);
                uVar15 = uVar17;
              }
            }
            else {
              uVar23 = uVar17;
              if ((int)uVar15 < 0) goto LAB_02ba0128;
joined_r0x02ba01cc:
              uVar17 = uVar23;
              if ((byte *)(uVar15 + (long)puVar19) == (byte *)0x0) {
                bVar20 = 2;
              }
              else {
                bVar20 = *(byte *)(uVar15 + (long)puVar19);
              }
            }
LAB_02ba01d4:
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_02ba02a8:
              bVar22 = 3;
            }
            else {
              uVar23 = uVar13;
              if ((int)uVar14 < 0) {
                bVar22 = 3;
                bVar21 = 1;
                if ((puVar19 != puVar24) && (uVar14 == 0xffffffff)) {
                  do {
                    lVar5 = 0xc;
                    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                      lVar5 = 0x1c;
                    }
                    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                    if (lVar5 == 0) {
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar14 = 0xffffffff;
                      goto LAB_02ba02b0;
                    }
                    uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                    DAT_05642f14 = 0xfffffffe;
                    if (uVar14 == 0) {
LAB_02ba0278:
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar13 = 0xfffffffe;
                      uVar14 = 0xfffffffe;
                      goto LAB_02ba02b0;
                    }
                    puVar8 = (uint *)(lVar5 + 4);
                    while (puVar8[-1] != 0x3835a9dd) {
                      puVar8 = puVar8 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_02ba0278;
                    }
                    uVar13 = (ulong)*puVar8;
                    uVar14 = 0;
                    if (*puVar8 != 0xffffffff) {
                      uVar14 = uVar13;
                    }
                    DAT_05642f14 = (uint)uVar14;
                    uVar23 = uVar14;
                    if (-1 < (int)DAT_05642f14) goto joined_r0x02ba02a4;
                    bVar22 = 3;
                    bVar21 = 1;
                  } while (uVar13 == 0xffffffff);
                  uVar14 = uVar13;
                }
                goto LAB_02ba02b0;
              }
joined_r0x02ba02a4:
              uVar13 = uVar23;
              if ((byte *)(uVar14 + (long)puVar19) == (byte *)0x0) goto LAB_02ba02a8;
              bVar22 = *(byte *)(uVar14 + (long)puVar19);
            }
            bVar21 = 1;
          }
LAB_02ba02b0:
          if ((bVar20 <= *(byte *)(param_1 + 0xed4)) &&
             ((bVar20 != *(byte *)(param_1 + 0xed4) || (bVar22 <= *(byte *)(param_1 + 0xed5))))) {
            *param_2 = bVar20;
            param_2[1] = bVar22;
            uVar3 = DAT_05642f28;
            puVar24 = (uint *)((long)puVar19 - (ulong)*puVar19);
            if ((*puVar19 == 0) ||
               ((((puVar24 == (uint *)0x0 || (*puVar24 == 0)) || (uVar9 = puVar24[1], uVar9 == 0))
                || ((ulong)(ushort)puVar24[2] == 0)))) {
LAB_02ba0388:
              uVar9 = 0;
            }
            else {
              lVar5 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar5 == 0) goto LAB_02ba0388;
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar9);
              }
              if (*puVar24 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05642f28 <= uVar2) ||
                 (uVar4 = *(ushort *)(DAT_05642f30 + (long)(int)uVar2 * 2), uVar9 = (uint)uVar4,
                 0x16 < uVar4)) {
                uVar9 = 0;
              }
            }
            *(uint *)(param_2 + 4) = uVar9;
            uVar9 = *(uint *)(param_1 + 0x928);
            if ((int)uVar9 < 1) {
              lVar5 = *(long *)(param_1 + 0x818);
              if (lVar5 == 0) {
                if (uVar18 != 0) {
                  return;
                }
              }
              else {
                uVar9 = 0;
                if (*(uint **)(lVar5 + 8) != (uint *)0x0) {
                  uVar9 = **(uint **)(lVar5 + 8);
                }
                if (uVar18 != uVar9) {
                  if (lVar5 == 0) {
                    return;
                  }
                  puVar19 = *(uint **)(lVar5 + 8);
                  if (puVar19 == (uint *)0x0) {
                    return;
                  }
                  if ((uVar18 < *(uint *)(param_1 + 0x830)) &&
                     (*(char *)(*(long *)(param_1 + 0x838) + (long)(int)uVar18) == '\0')) {
                    return;
                  }
                  if (*puVar19 <= uVar18) {
                    return;
                  }
                  if (puVar19[1] == 0) {
                    return;
                  }
                  if ((ushort)puVar19[2] == 0) {
                    return;
                  }
                  iVar6 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    iVar6 = 0x1c;
                  }
                  puVar19 = (uint *)((ulong)(puVar19[1] * uVar18 + (uint)(ushort)puVar19[2] * 8 +
                                            iVar6) + (long)puVar19);
                  goto joined_r0x02ba046c;
                }
              }
            }
            else if (uVar18 != uVar9) {
              if (uVar9 <= uVar18) {
                return;
              }
              if (*(uint *)(param_1 + 0x918) <= uVar18) {
                uVar18 = 0;
              }
              puVar19 = *(uint **)(*(long *)(param_1 + 0x920) + (ulong)uVar18 * 8);
joined_r0x02ba046c:
              if (puVar19 == (uint *)0x0) {
                return;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              if (*puVar19 == 0) {
                uVar12 = 2;
                goto LAB_02ba0760;
              }
              if ((bVar16 & 1) == 0) {
                DAT_05642f0c = 0xffffffff;
                uVar17 = 0xffffffff;
                DAT_05642f08 = 1;
                uVar13 = 0xffffffff;
                DAT_05642f10 = 0xffffffff;
                DAT_05642f14 = 0xffffffff;
              }
              else {
                uVar15 = uVar17;
                if (-1 < (int)uVar17) goto joined_r0x02ba03e0;
              }
              if (puVar19 == puVar24) goto LAB_02ba0758;
              goto LAB_02ba084c;
            }
            if (*(int *)(param_1 + 0xb00) < 1) {
              if (*(long *)(param_1 + 0x9f0) == 0) {
                return;
              }
              piVar11 = *(int **)(*(long *)(param_1 + 0x9f0) + 8);
              if (piVar11 == (int *)0x0) {
                return;
              }
              if ((*(int *)(param_1 + 0xa08) != 0) && (**(char **)(param_1 + 0xa10) == '\0')) {
                return;
              }
              if (*piVar11 == 0) {
                return;
              }
              if (piVar11[1] == 0) {
                return;
              }
              if ((ulong)*(ushort *)(piVar11 + 2) == 0) {
                return;
              }
              lVar5 = 0xc;
              if (*(char *)((long)piVar11 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              puVar19 = (uint *)((long)piVar11 + lVar5 + (ulong)*(ushort *)(piVar11 + 2) * 8);
            }
            else {
              puVar19 = (uint *)**(undefined8 **)(param_1 + 0xaf8);
            }
            if (puVar19 == (uint *)0x0) {
              return;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) goto LAB_02ba0548;
            if ((DAT_05642f38 & 1) == 0) {
              DAT_05642f40 = 0xffffffff;
              DAT_05642f38 = 1;
              DAT_05642f3c = 0xffffffff;
              DAT_05642f44 = 0xffffffff;
            }
            else if (-1 < (int)DAT_05642f40) goto joined_r0x02ba04b4;
            uVar18 = DAT_05642f40;
            if (puVar19 == puVar24) goto LAB_02ba0548;
            goto LAB_02ba0638;
          }
        }
      }
      bVar1 = (long)uVar7 < 1;
      uVar7 = uVar7 - 1;
      uVar18 = uVar9;
      if (bVar1) {
        return;
      }
    } while( true );
  case 5:
    uVar3 = *(uint *)(param_1 + 0xb00);
    uVar18 = uVar3;
    if ((int)uVar3 < 1) {
      if (*(long *)(param_1 + 0x9f0) == 0) {
        return;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0x9f0) + 8);
      if (puVar19 == (uint *)0x0) {
        return;
      }
      uVar18 = *puVar19;
    }
    if ((int)(uVar18 - 1) < 0) {
      return;
    }
    uVar17 = (ulong)DAT_05642f40;
    uVar13 = (ulong)DAT_05642f44;
    uVar7 = (ulong)(uVar18 - 1);
    uVar15 = uVar17;
    uVar14 = uVar13;
    bVar16 = DAT_05642f38;
    bVar21 = DAT_05642f38;
    do {
      uVar9 = (uint)uVar7;
      if ((int)uVar3 < 1) {
        if ((((*(long *)(param_1 + 0x9f0) != 0) &&
             (puVar19 = *(uint **)(*(long *)(param_1 + 0x9f0) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0xa08) <= uVar7 ||
             (*(char *)(*(long *)(param_1 + 0xa10) + uVar7) != '\0')))) &&
           (((uVar7 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * uVar9 + (uint)(ushort)puVar19[2] * 8 + iVar6) +
                            (long)puVar19);
          goto joined_r0x02ba0a80;
        }
      }
      else if (uVar7 < uVar3) {
        uVar23 = uVar7 & 0xffffffff;
        if (*(uint *)(param_1 + 0xaf0) <= uVar7) {
          uVar23 = 0;
        }
        puVar19 = *(uint **)(*(long *)(param_1 + 0xaf8) + uVar23 * 8);
joined_r0x02ba0a80:
        if (puVar19 != (uint *)0x0) {
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) {
            bVar22 = 3;
            bVar20 = 2;
          }
          else {
            if ((bVar21 & 1) == 0) {
              bVar16 = 1;
              DAT_05642f3c = 0xffffffff;
              uVar15 = 0xffffffff;
              DAT_05642f38 = 1;
              uVar14 = 0xffffffff;
              uVar17 = 0xffffffff;
              DAT_05642f40 = 0xffffffff;
              uVar13 = 0xffffffff;
              DAT_05642f44 = 0xffffffff;
LAB_02ba0ab8:
              bVar20 = 2;
              if ((puVar19 != puVar24) && (uVar15 == 0xffffffff)) {
                do {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                  if (lVar5 == 0) {
                    bVar20 = 2;
                    uVar15 = 0xffffffff;
                    goto LAB_02ba0b64;
                  }
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                  DAT_05642f40 = 0xfffffffe;
                  if (uVar15 == 0) {
LAB_02ba0b38:
                    bVar20 = 2;
                    uVar17 = 0xfffffffe;
                    uVar15 = 0xfffffffe;
                    goto LAB_02ba0b64;
                  }
                  puVar8 = (uint *)(lVar5 + 4);
                  while (puVar8[-1] != 0x8ae48661) {
                    puVar8 = puVar8 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_02ba0b38;
                  }
                  uVar17 = (ulong)*puVar8;
                  uVar15 = 0;
                  if (*puVar8 != 0xffffffff) {
                    uVar15 = uVar17;
                  }
                  DAT_05642f40 = (uint)uVar15;
                  uVar23 = uVar15;
                  if (-1 < (int)DAT_05642f40) goto joined_r0x02ba0b5c;
                  bVar20 = 2;
                } while (uVar17 == 0xffffffff);
                uVar15 = uVar17;
              }
            }
            else {
              uVar23 = uVar17;
              if ((int)uVar15 < 0) goto LAB_02ba0ab8;
joined_r0x02ba0b5c:
              uVar17 = uVar23;
              if ((byte *)(uVar15 + (long)puVar19) == (byte *)0x0) {
                bVar20 = 2;
              }
              else {
                bVar20 = *(byte *)(uVar15 + (long)puVar19);
              }
            }
LAB_02ba0b64:
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_02ba0c38:
              bVar22 = 3;
            }
            else {
              uVar23 = uVar13;
              if ((int)uVar14 < 0) {
                bVar22 = 3;
                bVar21 = 1;
                if ((puVar19 != puVar24) && (uVar14 == 0xffffffff)) {
                  do {
                    lVar5 = 0xc;
                    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                      lVar5 = 0x1c;
                    }
                    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                    if (lVar5 == 0) {
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar14 = 0xffffffff;
                      goto LAB_02ba0c40;
                    }
                    uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                    DAT_05642f44 = 0xfffffffe;
                    if (uVar14 == 0) {
LAB_02ba0c08:
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar13 = 0xfffffffe;
                      uVar14 = 0xfffffffe;
                      goto LAB_02ba0c40;
                    }
                    puVar8 = (uint *)(lVar5 + 4);
                    while (puVar8[-1] != 0x3835a9dd) {
                      puVar8 = puVar8 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_02ba0c08;
                    }
                    uVar13 = (ulong)*puVar8;
                    uVar14 = 0;
                    if (*puVar8 != 0xffffffff) {
                      uVar14 = uVar13;
                    }
                    DAT_05642f44 = (uint)uVar14;
                    uVar23 = uVar14;
                    if (-1 < (int)DAT_05642f44) goto joined_r0x02ba0c34;
                    bVar22 = 3;
                    bVar21 = 1;
                  } while (uVar13 == 0xffffffff);
                  uVar14 = uVar13;
                }
                goto LAB_02ba0c40;
              }
joined_r0x02ba0c34:
              uVar13 = uVar23;
              if ((byte *)(uVar14 + (long)puVar19) == (byte *)0x0) goto LAB_02ba0c38;
              bVar22 = *(byte *)(uVar14 + (long)puVar19);
            }
            bVar21 = 1;
          }
LAB_02ba0c40:
          if ((bVar20 <= *(byte *)(param_1 + 0xed4)) &&
             ((bVar20 != *(byte *)(param_1 + 0xed4) || (bVar22 <= *(byte *)(param_1 + 0xed5))))) {
            *param_2 = bVar20;
            param_2[1] = bVar22;
            uVar3 = DAT_05642f58;
            puVar24 = (uint *)((long)puVar19 - (ulong)*puVar19);
            if ((*puVar19 == 0) ||
               ((((puVar24 == (uint *)0x0 || (*puVar24 == 0)) || (uVar9 = puVar24[1], uVar9 == 0))
                || ((ulong)(ushort)puVar24[2] == 0)))) {
LAB_02ba0d18:
              uVar9 = 0;
            }
            else {
              lVar5 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar5 == 0) goto LAB_02ba0d18;
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar9);
              }
              if (*puVar24 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05642f58 <= uVar2) ||
                 (uVar4 = *(ushort *)(DAT_05642f60 + (long)(int)uVar2 * 2), uVar9 = (uint)uVar4,
                 0x16 < uVar4)) {
                uVar9 = 0;
              }
            }
            *(uint *)(param_2 + 4) = uVar9;
            uVar9 = *(uint *)(param_1 + 0xb00);
            if ((int)uVar9 < 1) {
              lVar5 = *(long *)(param_1 + 0x9f0);
              if (lVar5 == 0) {
                if (uVar18 != 0) {
                  return;
                }
              }
              else {
                uVar9 = 0;
                if (*(uint **)(lVar5 + 8) != (uint *)0x0) {
                  uVar9 = **(uint **)(lVar5 + 8);
                }
                if (uVar18 != uVar9) {
                  if (lVar5 == 0) {
                    return;
                  }
                  puVar19 = *(uint **)(lVar5 + 8);
                  if (puVar19 == (uint *)0x0) {
                    return;
                  }
                  if ((uVar18 < *(uint *)(param_1 + 0xa08)) &&
                     (*(char *)(*(long *)(param_1 + 0xa10) + (long)(int)uVar18) == '\0')) {
                    return;
                  }
                  if (*puVar19 <= uVar18) {
                    return;
                  }
                  if (puVar19[1] == 0) {
                    return;
                  }
                  if ((ushort)puVar19[2] == 0) {
                    return;
                  }
                  iVar6 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    iVar6 = 0x1c;
                  }
                  puVar19 = (uint *)((ulong)(puVar19[1] * uVar18 + (uint)(ushort)puVar19[2] * 8 +
                                            iVar6) + (long)puVar19);
                  goto joined_r0x02ba0dfc;
                }
              }
            }
            else if (uVar18 != uVar9) {
              if (uVar9 <= uVar18) {
                return;
              }
              if (*(uint *)(param_1 + 0xaf0) <= uVar18) {
                uVar18 = 0;
              }
              puVar19 = *(uint **)(*(long *)(param_1 + 0xaf8) + (ulong)uVar18 * 8);
joined_r0x02ba0dfc:
              if (puVar19 == (uint *)0x0) {
                return;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              if (*puVar19 == 0) {
                uVar12 = 2;
                goto LAB_02ba10f0;
              }
              if ((bVar16 & 1) == 0) {
                DAT_05642f3c = 0xffffffff;
                uVar17 = 0xffffffff;
                DAT_05642f38 = 1;
                uVar13 = 0xffffffff;
                DAT_05642f40 = 0xffffffff;
                DAT_05642f44 = 0xffffffff;
              }
              else {
                uVar15 = uVar17;
                if (-1 < (int)uVar17) goto joined_r0x02ba0d70;
              }
              if (puVar19 == puVar24) goto LAB_02ba10e8;
              goto LAB_02ba11dc;
            }
            if (*(int *)(param_1 + 0xcd8) < 1) {
              if (*(long *)(param_1 + 0xbc8) == 0) {
                return;
              }
              piVar11 = *(int **)(*(long *)(param_1 + 0xbc8) + 8);
              if (piVar11 == (int *)0x0) {
                return;
              }
              if ((*(int *)(param_1 + 0xbe0) != 0) && (**(char **)(param_1 + 0xbe8) == '\0')) {
                return;
              }
              if (*piVar11 == 0) {
                return;
              }
              if (piVar11[1] == 0) {
                return;
              }
              if ((ulong)*(ushort *)(piVar11 + 2) == 0) {
                return;
              }
              lVar5 = 0xc;
              if (*(char *)((long)piVar11 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              puVar19 = (uint *)((long)piVar11 + lVar5 + (ulong)*(ushort *)(piVar11 + 2) * 8);
            }
            else {
              puVar19 = (uint *)**(undefined8 **)(param_1 + 0xcd0);
            }
            if (puVar19 == (uint *)0x0) {
              return;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) goto LAB_02ba0ed8;
            if ((DAT_05642f68 & 1) == 0) {
              DAT_05642f70 = 0xffffffff;
              DAT_05642f68 = 1;
              DAT_05642f6c = 0xffffffff;
              DAT_05642f74 = 0xffffffff;
            }
            else if (-1 < (int)DAT_05642f70) goto joined_r0x02ba0e44;
            uVar18 = DAT_05642f70;
            if (puVar19 == puVar24) goto LAB_02ba0ed8;
            goto LAB_02ba0fc8;
          }
        }
      }
      bVar1 = (long)uVar7 < 1;
      uVar7 = uVar7 - 1;
      uVar18 = uVar9;
      if (bVar1) {
        return;
      }
    } while( true );
  case 6:
    uVar3 = *(uint *)(param_1 + 0xcd8);
    uVar18 = uVar3;
    if ((int)uVar3 < 1) {
      if (*(long *)(param_1 + 0xbc8) == 0) {
        return;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0xbc8) + 8);
      if (puVar19 == (uint *)0x0) {
        return;
      }
      uVar18 = *puVar19;
    }
    if ((int)(uVar18 - 1) < 0) {
      return;
    }
    uVar17 = (ulong)DAT_05642f70;
    uVar13 = (ulong)DAT_05642f74;
    uVar7 = (ulong)(uVar18 - 1);
    uVar15 = uVar17;
    uVar14 = uVar13;
    bVar16 = DAT_05642f68;
    bVar21 = DAT_05642f68;
    do {
      uVar9 = (uint)uVar7;
      if ((int)uVar3 < 1) {
        if ((((*(long *)(param_1 + 0xbc8) != 0) &&
             (puVar19 = *(uint **)(*(long *)(param_1 + 0xbc8) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0xbe0) <= uVar7 ||
             (*(char *)(*(long *)(param_1 + 0xbe8) + uVar7) != '\0')))) &&
           (((uVar7 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * uVar9 + (uint)(ushort)puVar19[2] * 8 + iVar6) +
                            (long)puVar19);
          goto joined_r0x02ba1410;
        }
      }
      else if (uVar7 < uVar3) {
        uVar23 = uVar7 & 0xffffffff;
        if (*(uint *)(param_1 + 0xcc8) <= uVar7) {
          uVar23 = 0;
        }
        puVar19 = *(uint **)(*(long *)(param_1 + 0xcd0) + uVar23 * 8);
joined_r0x02ba1410:
        if (puVar19 != (uint *)0x0) {
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) {
            bVar22 = 3;
            bVar20 = 2;
          }
          else {
            if ((bVar21 & 1) == 0) {
              bVar16 = 1;
              DAT_05642f6c = 0xffffffff;
              uVar15 = 0xffffffff;
              DAT_05642f68 = 1;
              uVar14 = 0xffffffff;
              uVar17 = 0xffffffff;
              DAT_05642f70 = 0xffffffff;
              uVar13 = 0xffffffff;
              DAT_05642f74 = 0xffffffff;
LAB_02ba1448:
              bVar20 = 2;
              if ((puVar19 != puVar24) && (uVar15 == 0xffffffff)) {
                do {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                  if (lVar5 == 0) {
                    bVar20 = 2;
                    uVar15 = 0xffffffff;
                    goto LAB_02ba14f4;
                  }
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                  DAT_05642f70 = 0xfffffffe;
                  if (uVar15 == 0) {
LAB_02ba14c8:
                    bVar20 = 2;
                    uVar17 = 0xfffffffe;
                    uVar15 = 0xfffffffe;
                    goto LAB_02ba14f4;
                  }
                  puVar8 = (uint *)(lVar5 + 4);
                  while (puVar8[-1] != 0x8ae48661) {
                    puVar8 = puVar8 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_02ba14c8;
                  }
                  uVar17 = (ulong)*puVar8;
                  uVar15 = 0;
                  if (*puVar8 != 0xffffffff) {
                    uVar15 = uVar17;
                  }
                  DAT_05642f70 = (uint)uVar15;
                  uVar23 = uVar15;
                  if (-1 < (int)DAT_05642f70) goto joined_r0x02ba14ec;
                  bVar20 = 2;
                } while (uVar17 == 0xffffffff);
                uVar15 = uVar17;
              }
            }
            else {
              uVar23 = uVar17;
              if ((int)uVar15 < 0) goto LAB_02ba1448;
joined_r0x02ba14ec:
              uVar17 = uVar23;
              if ((byte *)(uVar15 + (long)puVar19) == (byte *)0x0) {
                bVar20 = 2;
              }
              else {
                bVar20 = *(byte *)(uVar15 + (long)puVar19);
              }
            }
LAB_02ba14f4:
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_02ba15c8:
              bVar22 = 3;
            }
            else {
              uVar23 = uVar13;
              if ((int)uVar14 < 0) {
                bVar22 = 3;
                bVar21 = 1;
                if ((puVar19 != puVar24) && (uVar14 == 0xffffffff)) {
                  do {
                    lVar5 = 0xc;
                    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                      lVar5 = 0x1c;
                    }
                    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                    if (lVar5 == 0) {
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar14 = 0xffffffff;
                      goto LAB_02ba15d0;
                    }
                    uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                    DAT_05642f74 = 0xfffffffe;
                    if (uVar14 == 0) {
LAB_02ba1598:
                      bVar22 = 3;
                      bVar21 = 1;
                      uVar13 = 0xfffffffe;
                      uVar14 = 0xfffffffe;
                      goto LAB_02ba15d0;
                    }
                    puVar8 = (uint *)(lVar5 + 4);
                    while (puVar8[-1] != 0x3835a9dd) {
                      puVar8 = puVar8 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_02ba1598;
                    }
                    uVar13 = (ulong)*puVar8;
                    uVar14 = 0;
                    if (*puVar8 != 0xffffffff) {
                      uVar14 = uVar13;
                    }
                    DAT_05642f74 = (uint)uVar14;
                    uVar23 = uVar14;
                    if (-1 < (int)DAT_05642f74) goto joined_r0x02ba15c4;
                    bVar22 = 3;
                    bVar21 = 1;
                  } while (uVar13 == 0xffffffff);
                  uVar14 = uVar13;
                }
                goto LAB_02ba15d0;
              }
joined_r0x02ba15c4:
              uVar13 = uVar23;
              if ((byte *)(uVar14 + (long)puVar19) == (byte *)0x0) goto LAB_02ba15c8;
              bVar22 = *(byte *)(uVar14 + (long)puVar19);
            }
            bVar21 = 1;
          }
LAB_02ba15d0:
          if ((bVar20 <= *(byte *)(param_1 + 0xed4)) &&
             ((bVar20 != *(byte *)(param_1 + 0xed4) || (bVar22 <= *(byte *)(param_1 + 0xed5))))) {
            *param_2 = bVar20;
            param_2[1] = bVar22;
            uVar3 = DAT_05642f88;
            puVar24 = (uint *)((long)puVar19 - (ulong)*puVar19);
            if ((*puVar19 == 0) ||
               ((((puVar24 == (uint *)0x0 || (*puVar24 == 0)) || (uVar9 = puVar24[1], uVar9 == 0))
                || ((ulong)(ushort)puVar24[2] == 0)))) {
LAB_02ba16a8:
              uVar9 = 0;
            }
            else {
              lVar5 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar5 == 0) goto LAB_02ba16a8;
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar9);
              }
              if (*puVar24 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05642f88 <= uVar2) ||
                 (uVar4 = *(ushort *)(DAT_05642f90 + (long)(int)uVar2 * 2), uVar9 = (uint)uVar4,
                 0x16 < uVar4)) {
                uVar9 = 0;
              }
            }
            *(uint *)(param_2 + 4) = uVar9;
            uVar9 = *(uint *)(param_1 + 0xcd8);
            if ((int)uVar9 < 1) {
              lVar5 = *(long *)(param_1 + 0xbc8);
              if (lVar5 == 0) {
                if (uVar18 != 0) {
                  return;
                }
              }
              else {
                uVar9 = 0;
                if (*(uint **)(lVar5 + 8) != (uint *)0x0) {
                  uVar9 = **(uint **)(lVar5 + 8);
                }
                if (uVar18 != uVar9) {
                  if (lVar5 == 0) {
                    return;
                  }
                  puVar19 = *(uint **)(lVar5 + 8);
                  if (puVar19 == (uint *)0x0) {
                    return;
                  }
                  if ((uVar18 < *(uint *)(param_1 + 0xbe0)) &&
                     (*(char *)(*(long *)(param_1 + 0xbe8) + (long)(int)uVar18) == '\0')) {
                    return;
                  }
                  if (*puVar19 <= uVar18) {
                    return;
                  }
                  if (puVar19[1] == 0) {
                    return;
                  }
                  if ((ushort)puVar19[2] == 0) {
                    return;
                  }
                  iVar6 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    iVar6 = 0x1c;
                  }
                  puVar19 = (uint *)((ulong)(puVar19[1] * uVar18 + (uint)(ushort)puVar19[2] * 8 +
                                            iVar6) + (long)puVar19);
                  goto joined_r0x02ba178c;
                }
              }
            }
            else if (uVar18 != uVar9) {
              if (uVar9 <= uVar18) {
                return;
              }
              if (*(uint *)(param_1 + 0xcc8) <= uVar18) {
                uVar18 = 0;
              }
              puVar19 = *(uint **)(*(long *)(param_1 + 0xcd0) + (ulong)uVar18 * 8);
joined_r0x02ba178c:
              if (puVar19 == (uint *)0x0) {
                return;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              if (*puVar19 == 0) {
                uVar12 = 2;
                goto LAB_02ba1a80;
              }
              if ((bVar16 & 1) == 0) {
                DAT_05642f6c = 0xffffffff;
                uVar17 = 0xffffffff;
                DAT_05642f68 = 1;
                uVar13 = 0xffffffff;
                DAT_05642f70 = 0xffffffff;
                DAT_05642f74 = 0xffffffff;
              }
              else {
                uVar15 = uVar17;
                if (-1 < (int)uVar17) goto joined_r0x02ba1700;
              }
              if (puVar19 == puVar24) goto LAB_02ba1a78;
              goto LAB_02ba1b6c;
            }
            if (*(int *)(param_1 + 0xeb0) < 1) {
              if (*(long *)(param_1 + 0xda0) == 0) {
                return;
              }
              piVar11 = *(int **)(*(long *)(param_1 + 0xda0) + 8);
              if (piVar11 == (int *)0x0) {
                return;
              }
              if ((*(int *)(param_1 + 0xdb8) != 0) && (**(char **)(param_1 + 0xdc0) == '\0')) {
                return;
              }
              if (*piVar11 == 0) {
                return;
              }
              if (piVar11[1] == 0) {
                return;
              }
              if ((ulong)*(ushort *)(piVar11 + 2) == 0) {
                return;
              }
              lVar5 = 0xc;
              if (*(char *)((long)piVar11 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              puVar19 = (uint *)((long)piVar11 + lVar5 + (ulong)*(ushort *)(piVar11 + 2) * 8);
            }
            else {
              puVar19 = (uint *)**(undefined8 **)(param_1 + 0xea8);
            }
            if (puVar19 == (uint *)0x0) {
              return;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) goto LAB_02ba1868;
            if ((DAT_05642f98 & 1) == 0) {
              DAT_05642fa0 = 0xffffffff;
              DAT_05642f98 = 1;
              DAT_05642f9c = 0xffffffff;
              DAT_05642fa4 = 0xffffffff;
            }
            else if (-1 < (int)DAT_05642fa0) goto joined_r0x02ba17d4;
            uVar18 = DAT_05642fa0;
            if (puVar19 == puVar24) goto LAB_02ba1868;
            goto LAB_02ba1958;
          }
        }
      }
      bVar1 = (long)uVar7 < 1;
      uVar7 = uVar7 - 1;
      uVar18 = uVar9;
      if (bVar1) {
        return;
      }
    } while( true );
  default:
    return;
  }
  do {
    uVar9 = (uint)uVar7;
    if ((int)uVar3 < 1) {
      if ((((*(long *)(param_1 + 0xda0) != 0) &&
           (puVar19 = *(uint **)(*(long *)(param_1 + 0xda0) + 8), puVar19 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xdb8) <= uVar7 ||
           (*(char *)(*(long *)(param_1 + 0xdc0) + uVar7) != '\0')))) &&
         (((uVar7 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar19 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar19 = (uint *)((ulong)(puVar19[1] * uVar9 + (uint)(ushort)puVar19[2] * 8 + iVar6) +
                          (long)puVar19);
        goto joined_r0x02b9dab0;
      }
    }
    else if (uVar7 < uVar3) {
      uVar23 = uVar7 & 0xffffffff;
      if (*(uint *)(param_1 + 0xea0) <= uVar7) {
        uVar23 = 0;
      }
      puVar19 = *(uint **)(*(long *)(param_1 + 0xea8) + uVar23 * 8);
joined_r0x02b9dab0:
      if (puVar19 != (uint *)0x0) {
        puVar24 = (uint *)(ulong)*puVar19;
        if (*puVar19 == 0) {
          bVar22 = 3;
          bVar20 = 2;
        }
        else {
          if ((bVar21 & 1) == 0) {
            bVar16 = 1;
            DAT_05642f9c = 0xffffffff;
            uVar15 = 0xffffffff;
            DAT_05642f98 = 1;
            uVar14 = 0xffffffff;
            uVar17 = 0xffffffff;
            DAT_05642fa0 = 0xffffffff;
            uVar13 = 0xffffffff;
            DAT_05642fa4 = 0xffffffff;
LAB_02b9dae8:
            bVar20 = 2;
            if ((puVar19 != puVar24) && (uVar15 == 0xffffffff)) {
              do {
                lVar5 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                if (lVar5 == 0) {
                  bVar20 = 2;
                  uVar15 = 0xffffffff;
                  goto LAB_02b9db94;
                }
                uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                DAT_05642fa0 = 0xfffffffe;
                if (uVar15 == 0) {
LAB_02b9db68:
                  bVar20 = 2;
                  uVar17 = 0xfffffffe;
                  uVar15 = 0xfffffffe;
                  goto LAB_02b9db94;
                }
                puVar8 = (uint *)(lVar5 + 4);
                while (puVar8[-1] != 0x8ae48661) {
                  puVar8 = puVar8 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_02b9db68;
                }
                uVar17 = (ulong)*puVar8;
                uVar15 = 0;
                if (*puVar8 != 0xffffffff) {
                  uVar15 = uVar17;
                }
                DAT_05642fa0 = (uint)uVar15;
                uVar23 = uVar15;
                if (-1 < (int)DAT_05642fa0) goto joined_r0x02b9db8c;
                bVar20 = 2;
              } while (uVar17 == 0xffffffff);
              uVar15 = uVar17;
            }
          }
          else {
            uVar23 = uVar17;
            if ((int)uVar15 < 0) goto LAB_02b9dae8;
joined_r0x02b9db8c:
            uVar17 = uVar23;
            if ((byte *)(uVar15 + (long)puVar19) == (byte *)0x0) {
              bVar20 = 2;
            }
            else {
              bVar20 = *(byte *)(uVar15 + (long)puVar19);
            }
          }
LAB_02b9db94:
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) {
LAB_02b9dc68:
            bVar22 = 3;
          }
          else {
            uVar23 = uVar13;
            if ((int)uVar14 < 0) {
              bVar22 = 3;
              bVar21 = 1;
              if ((puVar19 != puVar24) && (uVar14 == 0xffffffff)) {
                do {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
                  if (lVar5 == 0) {
                    bVar22 = 3;
                    bVar21 = 1;
                    uVar14 = 0xffffffff;
                    goto LAB_02b9dc70;
                  }
                  uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
                  DAT_05642fa4 = 0xfffffffe;
                  if (uVar14 == 0) {
LAB_02b9dc38:
                    bVar22 = 3;
                    bVar21 = 1;
                    uVar13 = 0xfffffffe;
                    uVar14 = 0xfffffffe;
                    goto LAB_02b9dc70;
                  }
                  puVar8 = (uint *)(lVar5 + 4);
                  while (puVar8[-1] != 0x3835a9dd) {
                    puVar8 = puVar8 + 2;
                    uVar14 = uVar14 - 1;
                    if (uVar14 == 0) goto LAB_02b9dc38;
                  }
                  uVar13 = (ulong)*puVar8;
                  uVar14 = 0;
                  if (*puVar8 != 0xffffffff) {
                    uVar14 = uVar13;
                  }
                  DAT_05642fa4 = (uint)uVar14;
                  uVar23 = uVar14;
                  if (-1 < (int)DAT_05642fa4) goto joined_r0x02b9dc64;
                  bVar22 = 3;
                  bVar21 = 1;
                } while (uVar13 == 0xffffffff);
                uVar14 = uVar13;
              }
              goto LAB_02b9dc70;
            }
joined_r0x02b9dc64:
            uVar13 = uVar23;
            if ((byte *)(uVar14 + (long)puVar19) == (byte *)0x0) goto LAB_02b9dc68;
            bVar22 = *(byte *)(uVar14 + (long)puVar19);
          }
          bVar21 = 1;
        }
LAB_02b9dc70:
        if ((bVar20 <= *(byte *)(param_1 + 0xed4)) &&
           ((bVar20 != *(byte *)(param_1 + 0xed4) || (bVar22 <= *(byte *)(param_1 + 0xed5))))) {
          *param_2 = bVar20;
          param_2[1] = bVar22;
          uVar3 = DAT_05642fb8;
          puVar24 = (uint *)((long)puVar19 - (ulong)*puVar19);
          if ((*puVar19 == 0) ||
             ((((puVar24 == (uint *)0x0 || (*puVar24 == 0)) || (uVar9 = puVar24[1], uVar9 == 0)) ||
              ((ulong)(ushort)puVar24[2] == 0)))) {
LAB_02b9dd48:
            uVar9 = 0;
          }
          else {
            lVar5 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar5 == 0) goto LAB_02b9dd48;
            uVar2 = 0;
            if ((ulong)uVar9 != 0) {
              uVar2 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar9);
            }
            if (*puVar24 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((DAT_05642fb8 <= uVar2) ||
               (uVar4 = *(ushort *)(DAT_05642fc0 + (long)(int)uVar2 * 2), uVar9 = (uint)uVar4,
               0x16 < uVar4)) {
              uVar9 = 0;
            }
          }
          *(uint *)(param_2 + 4) = uVar9;
          uVar9 = *(uint *)(param_1 + 0xeb0);
          if ((int)uVar9 < 1) {
            lVar5 = *(long *)(param_1 + 0xda0);
            if (lVar5 == 0) {
              if (uVar18 != 0) {
                return;
              }
            }
            else {
              uVar9 = 0;
              if (*(uint **)(lVar5 + 8) != (uint *)0x0) {
                uVar9 = **(uint **)(lVar5 + 8);
              }
              if (uVar18 != uVar9) {
                if (lVar5 == 0) {
                  return;
                }
                puVar19 = *(uint **)(lVar5 + 8);
                if (puVar19 == (uint *)0x0) {
                  return;
                }
                if ((uVar18 < *(uint *)(param_1 + 0xdb8)) &&
                   (*(char *)(*(long *)(param_1 + 0xdc0) + (long)(int)uVar18) == '\0')) {
                  return;
                }
                if (*puVar19 <= uVar18) {
                  return;
                }
                if (puVar19[1] == 0) {
                  return;
                }
                if ((ushort)puVar19[2] == 0) {
                  return;
                }
                iVar6 = 0xc;
                if (*(char *)((long)puVar19 + 10) != '\0') {
                  iVar6 = 0x1c;
                }
                puVar19 = (uint *)((ulong)(puVar19[1] * uVar18 + (uint)(ushort)puVar19[2] * 8 +
                                          iVar6) + (long)puVar19);
                goto joined_r0x02b9de2c;
              }
            }
          }
          else if (uVar18 != uVar9) {
            if (uVar9 <= uVar18) {
              return;
            }
            if (*(uint *)(param_1 + 0xea0) <= uVar18) {
              uVar18 = 0;
            }
            puVar19 = *(uint **)(*(long *)(param_1 + 0xea8) + (ulong)uVar18 * 8);
joined_r0x02b9de2c:
            if (puVar19 == (uint *)0x0) {
              return;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
              uVar12 = 2;
              goto LAB_02b9e120;
            }
            if ((bVar16 & 1) == 0) {
              DAT_05642f9c = 0xffffffff;
              uVar17 = 0xffffffff;
              DAT_05642f98 = 1;
              uVar13 = 0xffffffff;
              DAT_05642fa0 = 0xffffffff;
              DAT_05642fa4 = 0xffffffff;
            }
            else {
              uVar15 = uVar17;
              if (-1 < (int)uVar17) goto joined_r0x02b9dda0;
            }
            if (puVar19 == puVar24) goto LAB_02b9e118;
            goto LAB_02b9e20c;
          }
          if (*(int *)(param_1 + 0x3a0) < 1) {
            if (*(long *)(param_1 + 0x290) == 0) {
              return;
            }
            piVar11 = *(int **)(*(long *)(param_1 + 0x290) + 8);
            if (piVar11 == (int *)0x0) {
              return;
            }
            if ((*(int *)(param_1 + 0x2a8) != 0) && (**(char **)(param_1 + 0x2b0) == '\0')) {
              return;
            }
            if (*piVar11 == 0) {
              return;
            }
            if (piVar11[1] == 0) {
              return;
            }
            if ((ulong)*(ushort *)(piVar11 + 2) == 0) {
              return;
            }
            lVar5 = 0xc;
            if (*(char *)((long)piVar11 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            puVar19 = (uint *)((long)piVar11 + lVar5 + (ulong)*(ushort *)(piVar11 + 2) * 8);
          }
          else {
            puVar19 = (uint *)**(undefined8 **)(param_1 + 0x398);
          }
          if (puVar19 == (uint *)0x0) {
            return;
          }
          puVar24 = (uint *)(ulong)*puVar19;
          if (*puVar19 == 0) goto LAB_02b9df08;
          if ((DAT_05642e78 & 1) == 0) {
            DAT_05642e80 = 0xffffffff;
            DAT_05642e78 = 1;
            DAT_05642e7c = 0xffffffff;
            DAT_05642e84 = 0xffffffff;
          }
          else if (-1 < (int)DAT_05642e80) goto joined_r0x02b9de74;
          uVar18 = DAT_05642e80;
          if (puVar19 == puVar24) goto LAB_02b9df08;
          goto LAB_02b9dff8;
        }
      }
    }
    bVar1 = (long)uVar7 < 1;
    uVar7 = uVar7 - 1;
    uVar18 = uVar9;
    if (bVar1) {
      return;
    }
  } while( true );
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02ba1a78;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642f70 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02ba1a78;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02ba1a78;
    }
    uVar17 = (ulong)*puVar8;
    uVar15 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar15 = uVar17;
    }
    DAT_05642f70 = (uint)uVar15;
    if (-1 < (int)DAT_05642f70) break;
LAB_02ba1b6c:
    if (uVar17 != 0xffffffff) goto LAB_02ba1a78;
  }
joined_r0x02ba1700:
  if ((undefined1 *)(uVar15 + (long)puVar19) == (undefined1 *)0x0) {
LAB_02ba1a78:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)(uVar15 + (long)puVar19);
  }
  bVar16 = 1;
LAB_02ba1a80:
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02ba1ac4:
    uVar12 = 3;
  }
  else {
    if ((bVar16 & 1) == 0) {
      DAT_05642f6c = 0xffffffff;
      DAT_05642f70 = 0xffffffff;
      DAT_05642f68 = 1;
      uVar13 = 0xffffffff;
      DAT_05642f74 = 0xffffffff;
LAB_02ba1abc:
      if (puVar19 != puVar24) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02ba1ac4;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02ba1ac4;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642f74 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02ba1ac4;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02ba1ac4;
          }
          uVar13 = (ulong)*puVar8;
          uVar15 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar15 = uVar13;
          }
          DAT_05642f74 = (uint)uVar15;
        } while ((int)DAT_05642f74 < 0);
        puVar10 = (undefined1 *)(uVar15 + (long)puVar19);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02ba1a9c;
      }
      goto LAB_02ba1ac4;
    }
    if ((int)uVar13 < 0) goto LAB_02ba1abc;
    puVar10 = (undefined1 *)(uVar13 + (long)puVar19);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02ba1ac4;
LAB_02ba1a9c:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02ba1b50;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02ba1b50;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 == 0) goto LAB_02ba1b4c;
    uVar9 = 0;
    if ((ulong)uVar18 != 0) {
      uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
    }
    if (*puVar24 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if (uVar3 <= uVar9) goto LAB_02ba1b4c;
    lVar5 = DAT_05642f90;
LAB_02ba1b3c:
    uVar9 = (uint)*(ushort *)(lVar5 + (long)(int)uVar9 * 2);
    if (uVar9 < 0x17) goto LAB_02ba1b50;
  }
  goto LAB_02ba1b4c;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02ba10e8;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642f40 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02ba10e8;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02ba10e8;
    }
    uVar17 = (ulong)*puVar8;
    uVar15 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar15 = uVar17;
    }
    DAT_05642f40 = (uint)uVar15;
    if (-1 < (int)DAT_05642f40) break;
LAB_02ba11dc:
    if (uVar17 != 0xffffffff) goto LAB_02ba10e8;
  }
joined_r0x02ba0d70:
  if ((undefined1 *)(uVar15 + (long)puVar19) == (undefined1 *)0x0) {
LAB_02ba10e8:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)(uVar15 + (long)puVar19);
  }
  bVar16 = 1;
LAB_02ba10f0:
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02ba1134:
    uVar12 = 3;
  }
  else {
    if ((bVar16 & 1) == 0) {
      DAT_05642f3c = 0xffffffff;
      DAT_05642f40 = 0xffffffff;
      DAT_05642f38 = 1;
      uVar13 = 0xffffffff;
      DAT_05642f44 = 0xffffffff;
LAB_02ba112c:
      if (puVar19 != puVar24) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02ba1134;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02ba1134;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642f44 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02ba1134;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02ba1134;
          }
          uVar13 = (ulong)*puVar8;
          uVar15 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar15 = uVar13;
          }
          DAT_05642f44 = (uint)uVar15;
        } while ((int)DAT_05642f44 < 0);
        puVar10 = (undefined1 *)(uVar15 + (long)puVar19);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02ba110c;
      }
      goto LAB_02ba1134;
    }
    if ((int)uVar13 < 0) goto LAB_02ba112c;
    puVar10 = (undefined1 *)(uVar13 + (long)puVar19);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02ba1134;
LAB_02ba110c:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02ba11c0;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02ba11c0;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 == 0) goto LAB_02ba11bc;
    uVar9 = 0;
    if ((ulong)uVar18 != 0) {
      uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
    }
    if (*puVar24 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if (uVar3 <= uVar9) goto LAB_02ba11bc;
    lVar5 = DAT_05642f60;
LAB_02ba11ac:
    uVar9 = (uint)*(ushort *)(lVar5 + (long)(int)uVar9 * 2);
    if (uVar9 < 0x17) goto LAB_02ba11c0;
  }
  goto LAB_02ba11bc;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02ba0758;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642f10 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02ba0758;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02ba0758;
    }
    uVar17 = (ulong)*puVar8;
    uVar15 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar15 = uVar17;
    }
    DAT_05642f10 = (uint)uVar15;
    if (-1 < (int)DAT_05642f10) break;
LAB_02ba084c:
    if (uVar17 != 0xffffffff) goto LAB_02ba0758;
  }
joined_r0x02ba03e0:
  if ((undefined1 *)(uVar15 + (long)puVar19) == (undefined1 *)0x0) {
LAB_02ba0758:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)(uVar15 + (long)puVar19);
  }
  bVar16 = 1;
LAB_02ba0760:
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02ba07a4:
    uVar12 = 3;
  }
  else {
    if ((bVar16 & 1) == 0) {
      DAT_05642f0c = 0xffffffff;
      DAT_05642f10 = 0xffffffff;
      DAT_05642f08 = 1;
      uVar13 = 0xffffffff;
      DAT_05642f14 = 0xffffffff;
LAB_02ba079c:
      if (puVar19 != puVar24) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02ba07a4;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02ba07a4;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642f14 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02ba07a4;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02ba07a4;
          }
          uVar13 = (ulong)*puVar8;
          uVar15 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar15 = uVar13;
          }
          DAT_05642f14 = (uint)uVar15;
        } while ((int)DAT_05642f14 < 0);
        puVar10 = (undefined1 *)(uVar15 + (long)puVar19);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02ba077c;
      }
      goto LAB_02ba07a4;
    }
    if ((int)uVar13 < 0) goto LAB_02ba079c;
    puVar10 = (undefined1 *)(uVar13 + (long)puVar19);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02ba07a4;
LAB_02ba077c:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02ba0830;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02ba0830;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 == 0) goto LAB_02ba082c;
    uVar9 = 0;
    if ((ulong)uVar18 != 0) {
      uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
    }
    if (*puVar24 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if (uVar3 <= uVar9) goto LAB_02ba082c;
    lVar5 = DAT_05642f30;
LAB_02ba081c:
    uVar9 = (uint)*(ushort *)(lVar5 + (long)(int)uVar9 * 2);
    if (uVar9 < 0x17) goto LAB_02ba0830;
  }
  goto LAB_02ba082c;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9fdc8;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642ee0 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9fdc8;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9fdc8;
    }
    uVar17 = (ulong)*puVar8;
    uVar15 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar15 = uVar17;
    }
    DAT_05642ee0 = (uint)uVar15;
    if (-1 < (int)DAT_05642ee0) break;
LAB_02b9febc:
    if (uVar17 != 0xffffffff) goto LAB_02b9fdc8;
  }
joined_r0x02b9fa50:
  if ((undefined1 *)(uVar15 + (long)puVar19) == (undefined1 *)0x0) {
LAB_02b9fdc8:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)(uVar15 + (long)puVar19);
  }
  bVar16 = 1;
LAB_02b9fdd0:
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9fe14:
    uVar12 = 3;
  }
  else {
    if ((bVar16 & 1) == 0) {
      DAT_05642edc = 0xffffffff;
      DAT_05642ee0 = 0xffffffff;
      DAT_05642ed8 = 1;
      uVar13 = 0xffffffff;
      DAT_05642ee4 = 0xffffffff;
LAB_02b9fe0c:
      if (puVar19 != puVar24) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02b9fe14;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9fe14;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642ee4 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9fe14;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9fe14;
          }
          uVar13 = (ulong)*puVar8;
          uVar15 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar15 = uVar13;
          }
          DAT_05642ee4 = (uint)uVar15;
        } while ((int)DAT_05642ee4 < 0);
        puVar10 = (undefined1 *)(uVar15 + (long)puVar19);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9fdec;
      }
      goto LAB_02b9fe14;
    }
    if ((int)uVar13 < 0) goto LAB_02b9fe0c;
    puVar10 = (undefined1 *)(uVar13 + (long)puVar19);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9fe14;
LAB_02b9fdec:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9fea0;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9fea0;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 == 0) goto LAB_02b9fe9c;
    uVar9 = 0;
    if ((ulong)uVar18 != 0) {
      uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
    }
    if (*puVar24 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if (uVar3 <= uVar9) goto LAB_02b9fe9c;
    lVar5 = DAT_05642f00;
LAB_02b9fe8c:
    uVar9 = (uint)*(ushort *)(lVar5 + (long)(int)uVar9 * 2);
    if (uVar9 < 0x17) goto LAB_02b9fea0;
  }
  goto LAB_02b9fe9c;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9f438;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642eb0 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9f438;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9f438;
    }
    uVar17 = (ulong)*puVar8;
    uVar15 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar15 = uVar17;
    }
    DAT_05642eb0 = (uint)uVar15;
    if (-1 < (int)DAT_05642eb0) break;
LAB_02b9f52c:
    if (uVar17 != 0xffffffff) goto LAB_02b9f438;
  }
joined_r0x02b9f0c0:
  if ((undefined1 *)(uVar15 + (long)puVar19) == (undefined1 *)0x0) {
LAB_02b9f438:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)(uVar15 + (long)puVar19);
  }
  bVar16 = 1;
LAB_02b9f440:
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9f484:
    uVar12 = 3;
  }
  else {
    if ((bVar16 & 1) == 0) {
      DAT_05642eac = 0xffffffff;
      DAT_05642eb0 = 0xffffffff;
      DAT_05642ea8 = 1;
      uVar13 = 0xffffffff;
      DAT_05642eb4 = 0xffffffff;
LAB_02b9f47c:
      if (puVar19 != puVar24) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02b9f484;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9f484;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642eb4 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9f484;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9f484;
          }
          uVar13 = (ulong)*puVar8;
          uVar15 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar15 = uVar13;
          }
          DAT_05642eb4 = (uint)uVar15;
        } while ((int)DAT_05642eb4 < 0);
        puVar10 = (undefined1 *)(uVar15 + (long)puVar19);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9f45c;
      }
      goto LAB_02b9f484;
    }
    if ((int)uVar13 < 0) goto LAB_02b9f47c;
    puVar10 = (undefined1 *)(uVar13 + (long)puVar19);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9f484;
LAB_02b9f45c:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9f510;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9f510;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 == 0) goto LAB_02b9f50c;
    uVar9 = 0;
    if ((ulong)uVar18 != 0) {
      uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
    }
    if (*puVar24 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if (uVar3 <= uVar9) goto LAB_02b9f50c;
    lVar5 = DAT_05642ed0;
LAB_02b9f4fc:
    uVar9 = (uint)*(ushort *)(lVar5 + (long)(int)uVar9 * 2);
    if (uVar9 < 0x17) goto LAB_02b9f510;
  }
  goto LAB_02b9f50c;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9eaa8;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642e80 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9eaa8;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9eaa8;
    }
    uVar17 = (ulong)*puVar8;
    uVar15 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar15 = uVar17;
    }
    DAT_05642e80 = (uint)uVar15;
    if (-1 < (int)DAT_05642e80) break;
LAB_02b9eb9c:
    if (uVar17 != 0xffffffff) goto LAB_02b9eaa8;
  }
joined_r0x02b9e730:
  if ((undefined1 *)(uVar15 + (long)puVar19) == (undefined1 *)0x0) {
LAB_02b9eaa8:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)(uVar15 + (long)puVar19);
  }
  bVar16 = 1;
LAB_02b9eab0:
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9eaf4:
    uVar12 = 3;
  }
  else {
    if ((bVar16 & 1) == 0) {
      DAT_05642e7c = 0xffffffff;
      DAT_05642e80 = 0xffffffff;
      DAT_05642e78 = 1;
      uVar13 = 0xffffffff;
      DAT_05642e84 = 0xffffffff;
LAB_02b9eaec:
      if (puVar19 != puVar24) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02b9eaf4;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9eaf4;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642e84 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9eaf4;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9eaf4;
          }
          uVar13 = (ulong)*puVar8;
          uVar15 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar15 = uVar13;
          }
          DAT_05642e84 = (uint)uVar15;
        } while ((int)DAT_05642e84 < 0);
        puVar10 = (undefined1 *)(uVar15 + (long)puVar19);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9eacc;
      }
      goto LAB_02b9eaf4;
    }
    if ((int)uVar13 < 0) goto LAB_02b9eaec;
    puVar10 = (undefined1 *)(uVar13 + (long)puVar19);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9eaf4;
LAB_02b9eacc:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9eb80;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9eb80;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 == 0) goto LAB_02b9eb7c;
    uVar9 = 0;
    if ((ulong)uVar18 != 0) {
      uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
    }
    if (*puVar24 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if (uVar3 <= uVar9) goto LAB_02b9eb7c;
    lVar5 = DAT_05642ea0;
LAB_02b9eb6c:
    uVar9 = (uint)*(ushort *)(lVar5 + (long)(int)uVar9 * 2);
    if (uVar9 < 0x17) goto LAB_02b9eb80;
  }
  goto LAB_02b9eb7c;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9e118;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642fa0 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9e118;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9e118;
    }
    uVar17 = (ulong)*puVar8;
    uVar15 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar15 = uVar17;
    }
    DAT_05642fa0 = (uint)uVar15;
    if (-1 < (int)DAT_05642fa0) break;
LAB_02b9e20c:
    if (uVar17 != 0xffffffff) goto LAB_02b9e118;
  }
joined_r0x02b9dda0:
  if ((undefined1 *)(uVar15 + (long)puVar19) == (undefined1 *)0x0) {
LAB_02b9e118:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)(uVar15 + (long)puVar19);
  }
  bVar16 = 1;
LAB_02b9e120:
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9e164:
    uVar12 = 3;
  }
  else {
    if ((bVar16 & 1) == 0) {
      DAT_05642f9c = 0xffffffff;
      DAT_05642fa0 = 0xffffffff;
      DAT_05642f98 = 1;
      uVar13 = 0xffffffff;
      DAT_05642fa4 = 0xffffffff;
LAB_02b9e15c:
      if (puVar19 != puVar24) {
        do {
          if (uVar13 != 0xffffffff) goto LAB_02b9e164;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9e164;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642fa4 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9e164;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9e164;
          }
          uVar13 = (ulong)*puVar8;
          uVar15 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar15 = uVar13;
          }
          DAT_05642fa4 = (uint)uVar15;
        } while ((int)DAT_05642fa4 < 0);
        puVar10 = (undefined1 *)(uVar15 + (long)puVar19);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9e13c;
      }
      goto LAB_02b9e164;
    }
    if ((int)uVar13 < 0) goto LAB_02b9e15c;
    puVar10 = (undefined1 *)(uVar13 + (long)puVar19);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9e164;
LAB_02b9e13c:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9e1f0;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9e1f0;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 == 0) goto LAB_02b9e1ec;
    uVar9 = 0;
    if ((ulong)uVar18 != 0) {
      uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
    }
    if (*puVar24 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if (uVar3 <= uVar9) goto LAB_02b9e1ec;
    lVar5 = DAT_05642fc0;
LAB_02b9e1dc:
    uVar9 = (uint)*(ushort *)(lVar5 + (long)(int)uVar9 * 2);
    if (uVar9 < 0x17) goto LAB_02b9e1f0;
  }
  goto LAB_02b9e1ec;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02ba1868;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642fa0 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02ba1868;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02ba1868;
    }
    uVar18 = *puVar8;
    DAT_05642fa0 = 0;
    if (uVar18 != 0xffffffff) {
      DAT_05642fa0 = uVar18;
    }
    if (-1 < (int)DAT_05642fa0) break;
LAB_02ba1958:
    if (uVar18 != 0xffffffff) goto LAB_02ba1868;
  }
joined_r0x02ba17d4:
  if ((undefined1 *)((long)puVar19 + (ulong)DAT_05642fa0) == (undefined1 *)0x0) {
LAB_02ba1868:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)((long)puVar19 + (ulong)DAT_05642fa0);
  }
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02ba18c4:
    uVar12 = 3;
  }
  else {
    if ((DAT_05642f98 & 1) == 0) {
      DAT_05642f98 = 1;
      DAT_05642f9c = 0xffffffff;
      DAT_05642fa0 = 0xffffffff;
      DAT_05642fa4 = 0xffffffff;
LAB_02ba18bc:
      uVar18 = DAT_05642fa4;
      if (puVar19 != puVar24) {
        do {
          if (uVar18 != 0xffffffff) goto LAB_02ba18c4;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02ba18c4;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642fa4 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02ba18c4;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02ba18c4;
          }
          uVar18 = *puVar8;
          DAT_05642fa4 = 0;
          if (uVar18 != 0xffffffff) {
            DAT_05642fa4 = uVar18;
          }
        } while ((int)DAT_05642fa4 < 0);
        puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642fa4);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02ba1894;
      }
      goto LAB_02ba18c4;
    }
    if ((int)DAT_05642fa4 < 0) goto LAB_02ba18bc;
    puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642fa4);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02ba18c4;
LAB_02ba1894:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02ba1b50;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02ba1b50;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((ulong)uVar18 != 0) {
        uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
      }
      if (*puVar24 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 < DAT_05642fb8) {
        lVar5 = DAT_05642fc0;
        goto LAB_02ba1b3c;
      }
    }
  }
LAB_02ba1b4c:
  uVar9 = 0;
LAB_02ba1b50:
  *(uint *)(param_3 + 4) = uVar9;
  return;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02ba0ed8;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642f70 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02ba0ed8;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02ba0ed8;
    }
    uVar18 = *puVar8;
    DAT_05642f70 = 0;
    if (uVar18 != 0xffffffff) {
      DAT_05642f70 = uVar18;
    }
    if (-1 < (int)DAT_05642f70) break;
LAB_02ba0fc8:
    if (uVar18 != 0xffffffff) goto LAB_02ba0ed8;
  }
joined_r0x02ba0e44:
  if ((undefined1 *)((long)puVar19 + (ulong)DAT_05642f70) == (undefined1 *)0x0) {
LAB_02ba0ed8:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)((long)puVar19 + (ulong)DAT_05642f70);
  }
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02ba0f34:
    uVar12 = 3;
  }
  else {
    if ((DAT_05642f68 & 1) == 0) {
      DAT_05642f68 = 1;
      DAT_05642f6c = 0xffffffff;
      DAT_05642f70 = 0xffffffff;
      DAT_05642f74 = 0xffffffff;
LAB_02ba0f2c:
      uVar18 = DAT_05642f74;
      if (puVar19 != puVar24) {
        do {
          if (uVar18 != 0xffffffff) goto LAB_02ba0f34;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02ba0f34;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642f74 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02ba0f34;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02ba0f34;
          }
          uVar18 = *puVar8;
          DAT_05642f74 = 0;
          if (uVar18 != 0xffffffff) {
            DAT_05642f74 = uVar18;
          }
        } while ((int)DAT_05642f74 < 0);
        puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642f74);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02ba0f04;
      }
      goto LAB_02ba0f34;
    }
    if ((int)DAT_05642f74 < 0) goto LAB_02ba0f2c;
    puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642f74);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02ba0f34;
LAB_02ba0f04:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02ba11c0;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02ba11c0;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((ulong)uVar18 != 0) {
        uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
      }
      if (*puVar24 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 < DAT_05642f88) {
        lVar5 = DAT_05642f90;
        goto LAB_02ba11ac;
      }
    }
  }
LAB_02ba11bc:
  uVar9 = 0;
LAB_02ba11c0:
  *(uint *)(param_3 + 4) = uVar9;
  return;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02ba0548;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642f40 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02ba0548;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02ba0548;
    }
    uVar18 = *puVar8;
    DAT_05642f40 = 0;
    if (uVar18 != 0xffffffff) {
      DAT_05642f40 = uVar18;
    }
    if (-1 < (int)DAT_05642f40) break;
LAB_02ba0638:
    if (uVar18 != 0xffffffff) goto LAB_02ba0548;
  }
joined_r0x02ba04b4:
  if ((undefined1 *)((long)puVar19 + (ulong)DAT_05642f40) == (undefined1 *)0x0) {
LAB_02ba0548:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)((long)puVar19 + (ulong)DAT_05642f40);
  }
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02ba05a4:
    uVar12 = 3;
  }
  else {
    if ((DAT_05642f38 & 1) == 0) {
      DAT_05642f38 = 1;
      DAT_05642f3c = 0xffffffff;
      DAT_05642f40 = 0xffffffff;
      DAT_05642f44 = 0xffffffff;
LAB_02ba059c:
      uVar18 = DAT_05642f44;
      if (puVar19 != puVar24) {
        do {
          if (uVar18 != 0xffffffff) goto LAB_02ba05a4;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02ba05a4;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642f44 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02ba05a4;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02ba05a4;
          }
          uVar18 = *puVar8;
          DAT_05642f44 = 0;
          if (uVar18 != 0xffffffff) {
            DAT_05642f44 = uVar18;
          }
        } while ((int)DAT_05642f44 < 0);
        puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642f44);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02ba0574;
      }
      goto LAB_02ba05a4;
    }
    if ((int)DAT_05642f44 < 0) goto LAB_02ba059c;
    puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642f44);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02ba05a4;
LAB_02ba0574:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02ba0830;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02ba0830;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((ulong)uVar18 != 0) {
        uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
      }
      if (*puVar24 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 < DAT_05642f58) {
        lVar5 = DAT_05642f60;
        goto LAB_02ba081c;
      }
    }
  }
LAB_02ba082c:
  uVar9 = 0;
LAB_02ba0830:
  *(uint *)(param_3 + 4) = uVar9;
  return;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9fbb8;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642f10 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9fbb8;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9fbb8;
    }
    uVar18 = *puVar8;
    DAT_05642f10 = 0;
    if (uVar18 != 0xffffffff) {
      DAT_05642f10 = uVar18;
    }
    if (-1 < (int)DAT_05642f10) break;
LAB_02b9fca8:
    if (uVar18 != 0xffffffff) goto LAB_02b9fbb8;
  }
joined_r0x02b9fb24:
  if ((undefined1 *)((long)puVar19 + (ulong)DAT_05642f10) == (undefined1 *)0x0) {
LAB_02b9fbb8:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)((long)puVar19 + (ulong)DAT_05642f10);
  }
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9fc14:
    uVar12 = 3;
  }
  else {
    if ((DAT_05642f08 & 1) == 0) {
      DAT_05642f08 = 1;
      DAT_05642f0c = 0xffffffff;
      DAT_05642f10 = 0xffffffff;
      DAT_05642f14 = 0xffffffff;
LAB_02b9fc0c:
      uVar18 = DAT_05642f14;
      if (puVar19 != puVar24) {
        do {
          if (uVar18 != 0xffffffff) goto LAB_02b9fc14;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9fc14;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642f14 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9fc14;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9fc14;
          }
          uVar18 = *puVar8;
          DAT_05642f14 = 0;
          if (uVar18 != 0xffffffff) {
            DAT_05642f14 = uVar18;
          }
        } while ((int)DAT_05642f14 < 0);
        puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642f14);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9fbe4;
      }
      goto LAB_02b9fc14;
    }
    if ((int)DAT_05642f14 < 0) goto LAB_02b9fc0c;
    puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642f14);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9fc14;
LAB_02b9fbe4:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9fea0;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9fea0;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((ulong)uVar18 != 0) {
        uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
      }
      if (*puVar24 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 < DAT_05642f28) {
        lVar5 = DAT_05642f30;
        goto LAB_02b9fe8c;
      }
    }
  }
LAB_02b9fe9c:
  uVar9 = 0;
LAB_02b9fea0:
  *(uint *)(param_3 + 4) = uVar9;
  return;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9f228;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642ee0 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9f228;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9f228;
    }
    uVar18 = *puVar8;
    DAT_05642ee0 = 0;
    if (uVar18 != 0xffffffff) {
      DAT_05642ee0 = uVar18;
    }
    if (-1 < (int)DAT_05642ee0) break;
LAB_02b9f318:
    if (uVar18 != 0xffffffff) goto LAB_02b9f228;
  }
joined_r0x02b9f194:
  if ((undefined1 *)((long)puVar19 + (ulong)DAT_05642ee0) == (undefined1 *)0x0) {
LAB_02b9f228:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)((long)puVar19 + (ulong)DAT_05642ee0);
  }
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9f284:
    uVar12 = 3;
  }
  else {
    if ((DAT_05642ed8 & 1) == 0) {
      DAT_05642ed8 = 1;
      DAT_05642edc = 0xffffffff;
      DAT_05642ee0 = 0xffffffff;
      DAT_05642ee4 = 0xffffffff;
LAB_02b9f27c:
      uVar18 = DAT_05642ee4;
      if (puVar19 != puVar24) {
        do {
          if (uVar18 != 0xffffffff) goto LAB_02b9f284;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9f284;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642ee4 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9f284;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9f284;
          }
          uVar18 = *puVar8;
          DAT_05642ee4 = 0;
          if (uVar18 != 0xffffffff) {
            DAT_05642ee4 = uVar18;
          }
        } while ((int)DAT_05642ee4 < 0);
        puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642ee4);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9f254;
      }
      goto LAB_02b9f284;
    }
    if ((int)DAT_05642ee4 < 0) goto LAB_02b9f27c;
    puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642ee4);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9f284;
LAB_02b9f254:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9f510;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9f510;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((ulong)uVar18 != 0) {
        uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
      }
      if (*puVar24 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 < DAT_05642ef8) {
        lVar5 = DAT_05642f00;
        goto LAB_02b9f4fc;
      }
    }
  }
LAB_02b9f50c:
  uVar9 = 0;
LAB_02b9f510:
  *(uint *)(param_3 + 4) = uVar9;
  return;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9e898;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642eb0 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9e898;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9e898;
    }
    uVar18 = *puVar8;
    DAT_05642eb0 = 0;
    if (uVar18 != 0xffffffff) {
      DAT_05642eb0 = uVar18;
    }
    if (-1 < (int)DAT_05642eb0) break;
LAB_02b9e988:
    if (uVar18 != 0xffffffff) goto LAB_02b9e898;
  }
joined_r0x02b9e804:
  if ((undefined1 *)((long)puVar19 + (ulong)DAT_05642eb0) == (undefined1 *)0x0) {
LAB_02b9e898:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)((long)puVar19 + (ulong)DAT_05642eb0);
  }
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9e8f4:
    uVar12 = 3;
  }
  else {
    if ((DAT_05642ea8 & 1) == 0) {
      DAT_05642ea8 = 1;
      DAT_05642eac = 0xffffffff;
      DAT_05642eb0 = 0xffffffff;
      DAT_05642eb4 = 0xffffffff;
LAB_02b9e8ec:
      uVar18 = DAT_05642eb4;
      if (puVar19 != puVar24) {
        do {
          if (uVar18 != 0xffffffff) goto LAB_02b9e8f4;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9e8f4;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642eb4 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9e8f4;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9e8f4;
          }
          uVar18 = *puVar8;
          DAT_05642eb4 = 0;
          if (uVar18 != 0xffffffff) {
            DAT_05642eb4 = uVar18;
          }
        } while ((int)DAT_05642eb4 < 0);
        puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642eb4);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9e8c4;
      }
      goto LAB_02b9e8f4;
    }
    if ((int)DAT_05642eb4 < 0) goto LAB_02b9e8ec;
    puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642eb4);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9e8f4;
LAB_02b9e8c4:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9eb80;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9eb80;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((ulong)uVar18 != 0) {
        uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
      }
      if (*puVar24 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 < DAT_05642ec8) {
        lVar5 = DAT_05642ed0;
        goto LAB_02b9eb6c;
      }
    }
  }
LAB_02b9eb7c:
  uVar9 = 0;
LAB_02b9eb80:
  *(uint *)(param_3 + 4) = uVar9;
  return;
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
    if (lVar5 == 0) goto LAB_02b9df08;
    uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    DAT_05642e80 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b9df08;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0x8ae48661) {
      puVar8 = puVar8 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b9df08;
    }
    uVar18 = *puVar8;
    DAT_05642e80 = 0;
    if (uVar18 != 0xffffffff) {
      DAT_05642e80 = uVar18;
    }
    if (-1 < (int)DAT_05642e80) break;
LAB_02b9dff8:
    if (uVar18 != 0xffffffff) goto LAB_02b9df08;
  }
joined_r0x02b9de74:
  if ((undefined1 *)((long)puVar19 + (ulong)DAT_05642e80) == (undefined1 *)0x0) {
LAB_02b9df08:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined1 *)((long)puVar19 + (ulong)DAT_05642e80);
  }
  *param_3 = uVar12;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) {
LAB_02b9df64:
    uVar12 = 3;
  }
  else {
    if ((DAT_05642e78 & 1) == 0) {
      DAT_05642e78 = 1;
      DAT_05642e7c = 0xffffffff;
      DAT_05642e80 = 0xffffffff;
      DAT_05642e84 = 0xffffffff;
LAB_02b9df5c:
      uVar18 = DAT_05642e84;
      if (puVar19 != puVar24) {
        do {
          if (uVar18 != 0xffffffff) goto LAB_02b9df64;
          lVar5 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar19 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) goto LAB_02b9df64;
          uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          DAT_05642e84 = 0xfffffffe;
          if (uVar15 == 0) goto LAB_02b9df64;
          puVar8 = (uint *)(lVar5 + 4);
          while (puVar8[-1] != 0x3835a9dd) {
            puVar8 = puVar8 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b9df64;
          }
          uVar18 = *puVar8;
          DAT_05642e84 = 0;
          if (uVar18 != 0xffffffff) {
            DAT_05642e84 = uVar18;
          }
        } while ((int)DAT_05642e84 < 0);
        puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642e84);
        if (puVar10 != (undefined1 *)0x0) goto LAB_02b9df34;
      }
      goto LAB_02b9df64;
    }
    if ((int)DAT_05642e84 < 0) goto LAB_02b9df5c;
    puVar10 = (undefined1 *)((long)puVar19 + (ulong)DAT_05642e84);
    if (puVar10 == (undefined1 *)0x0) goto LAB_02b9df64;
LAB_02b9df34:
    uVar12 = *puVar10;
  }
  param_3[1] = uVar12;
  uVar9 = 0;
  uVar18 = *puVar19;
  if ((uVar18 == 0) || (puVar19 == (uint *)(ulong)uVar18)) goto LAB_02b9e1f0;
  puVar24 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
  uVar9 = 0;
  if (*puVar24 == 0) goto LAB_02b9e1f0;
  uVar18 = puVar24[1];
  if ((uVar18 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
    lVar5 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar24 + lVar5 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((ulong)uVar18 != 0) {
        uVar9 = (uint)((ulong)((long)puVar19 - lVar5) / (ulong)uVar18);
      }
      if (*puVar24 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 < DAT_05642e98) {
        lVar5 = DAT_05642ea0;
        goto LAB_02b9e1dc;
      }
    }
  }
LAB_02b9e1ec:
  uVar9 = 0;
LAB_02b9e1f0:
  *(uint *)(param_3 + 4) = uVar9;
  return;
}

