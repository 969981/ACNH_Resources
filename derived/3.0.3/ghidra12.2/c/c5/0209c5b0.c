
void FUN_0209c5b0(long param_1,uint *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  
  puVar4 = PTR_DAT_04bc1578;
  puVar3 = PTR_DAT_04bc1570;
  lVar12 = *(long *)PTR_DAT_04bb3968;
  plVar2 = (long *)(lVar12 + 0x16b90);
  if (lVar12 != 0) {
    uVar17 = *param_2;
    if ((int)*(uint *)(lVar12 + 0x16ca0) < 1) {
      if ((((*plVar2 != 0) && (puVar13 = *(uint **)(*plVar2 + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(lVar12 + 0x16ba8) <= uVar17 ||
           (*(char *)(*(long *)(lVar12 + 0x16bb0) + (long)(int)uVar17) != '\0')))) &&
         (((uVar17 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar17 + (uint)(ushort)puVar13[2] * 8 + iVar10) +
                          (long)puVar13);
        goto joined_r0x0209c664;
      }
    }
    else if (uVar17 < *(uint *)(lVar12 + 0x16ca0)) {
      if (*(uint *)(lVar12 + 0x16c90) <= uVar17) {
        uVar17 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar12 + 0x16c98) + (ulong)uVar17 * 8);
joined_r0x0209c664:
      if (puVar13 != (uint *)0x0) goto LAB_0209c670;
    }
  }
  puVar13 = (uint *)PTR_DAT_04bc2820;
LAB_0209c670:
  if (*puVar13 == 0) {
LAB_0209c784:
    bVar9 = 0;
  }
  else {
    cVar16 = *PTR_DAT_04bc1570;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar4 + 0x2c);
        if (-1 < (int)uVar17) {
          if (((byte *)((ulong)uVar17 + (long)puVar13) == (byte *)0x0) ||
             (bVar9 = *(byte *)((ulong)uVar17 + (long)puVar13), 3 < bVar9)) goto LAB_0209c784;
          goto LAB_0209c788;
        }
        if (uVar17 != 0xffffffff) goto LAB_0209c784;
      }
      puVar21 = (uint *)(ulong)*puVar13;
      bVar9 = 0;
      if ((*puVar13 == 0) || (puVar13 == puVar21)) goto LAB_0209c788;
      lVar14 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar21)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar13 + (lVar14 - (long)puVar21);
      if (lVar14 == 0) goto LAB_0209c784;
      uVar20 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar21));
      *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
      bVar9 = 0;
      if (uVar20 == 0) goto LAB_0209c788;
      piVar11 = (int *)(lVar14 + 4);
      while (piVar11[-1] != -0x2947dcfb) {
        piVar11 = piVar11 + 2;
        uVar20 = uVar20 - 1;
        if (uVar20 == 0) {
          bVar9 = 0;
          goto LAB_0209c788;
        }
      }
      iVar10 = 0;
      if (*piVar11 != -1) {
        iVar10 = *piVar11;
      }
      *(int *)(puVar4 + 0x2c) = iVar10;
    } while (*puVar13 != 0);
    bVar9 = 0;
  }
LAB_0209c788:
  puVar4 = PTR_DAT_04bc1578;
  if (bVar9 == 2) {
    if (*puVar13 != 0) {
      cVar16 = *puVar3;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        }
        else {
          uVar17 = *(uint *)(puVar4 + 0x20);
          if (-1 < (int)uVar17) {
            if ((char *)((ulong)uVar17 + (long)puVar13) != (char *)0x0) {
              bVar6 = *(char *)((ulong)uVar17 + (long)puVar13) != '\0';
              goto LAB_0209c898;
            }
            break;
          }
          if (uVar17 != 0xffffffff) break;
        }
        puVar21 = (uint *)(ulong)*puVar13;
        bVar6 = true;
        if ((*puVar13 == 0) || (puVar13 == puVar21)) goto LAB_0209c898;
        lVar14 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar21)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar13 + (lVar14 - (long)puVar21);
        if (lVar14 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar21));
        *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
        if (uVar20 == 0) break;
        piVar11 = (int *)(lVar14 + 4);
        while (piVar11[-1] != -0x28212ad6) {
          piVar11 = piVar11 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_0209c894;
        }
        iVar10 = 0;
        if (*piVar11 != -1) {
          iVar10 = *piVar11;
        }
        *(int *)(puVar4 + 0x20) = iVar10;
        if (*puVar13 == 0) break;
      } while( true );
    }
LAB_0209c894:
    bVar6 = true;
LAB_0209c898:
    puVar5 = PTR_DAT_04bc2820;
    puVar4 = PTR_DAT_04bc1578;
    cVar16 = *puVar3;
    uVar15 = 0;
    uVar17 = 0;
    lVar14 = *(long *)PTR_DAT_04bb32e8;
    if (param_3 < 0) {
      do {
        if (lVar12 == 0) {
LAB_0209cca4:
          uVar8 = *(uint *)puVar5;
          puVar13 = (uint *)puVar5;
        }
        else {
          if ((int)*(uint *)(lVar12 + 0x16ca0) < 1) {
            if ((((*plVar2 != 0) && (puVar13 = *(uint **)(*plVar2 + 8), puVar13 != (uint *)0x0)) &&
                ((*(uint *)(lVar12 + 0x16ba8) <= uVar15 ||
                 (*(char *)(*(long *)(lVar12 + 0x16bb0) + (long)(int)uVar15) != '\0')))) &&
               (((uVar15 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
              iVar10 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                iVar10 = 0x1c;
              }
              puVar13 = (uint *)((ulong)(puVar13[1] * uVar15 + (uint)(ushort)puVar13[2] * 8 + iVar10
                                        ) + (long)puVar13);
              if (puVar13 != (uint *)0x0) goto LAB_0209cc30;
            }
            goto LAB_0209cca4;
          }
          if (*(uint *)(lVar12 + 0x16ca0) <= uVar15) goto LAB_0209cca4;
          uVar8 = uVar15;
          if (*(uint *)(lVar12 + 0x16c90) <= uVar15) {
            uVar8 = 0;
          }
          puVar13 = *(uint **)(*(long *)(lVar12 + 0x16c98) + (ulong)uVar8 * 8);
          if (puVar13 == (uint *)0x0) goto LAB_0209cca4;
LAB_0209cc30:
          uVar8 = *puVar13;
        }
        if (uVar8 != 0) {
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar8 = *(uint *)(puVar4 + 0x20);
              if (-1 < (int)uVar8) {
                if ((char *)((ulong)uVar8 + (long)puVar13) != (char *)0x0) {
                  bVar7 = *(char *)((ulong)uVar8 + (long)puVar13) != '\0';
                  goto LAB_0209cd88;
                }
                break;
              }
              if (uVar8 != 0xffffffff) break;
            }
            puVar21 = (uint *)(ulong)*puVar13;
            bVar7 = true;
            if ((*puVar13 == 0) || (puVar13 == puVar21)) goto LAB_0209cd88;
            lVar23 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar21)) != '\0') {
              lVar23 = 0x1c;
            }
            lVar23 = (long)puVar13 + (lVar23 - (long)puVar21);
            if (lVar23 == 0) break;
            uVar20 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar21));
            *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
            if (uVar20 == 0) break;
            piVar11 = (int *)(lVar23 + 4);
            while (piVar11[-1] != -0x28212ad6) {
              piVar11 = piVar11 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_0209cd84;
            }
            iVar10 = 0;
            if (*piVar11 != -1) {
              iVar10 = *piVar11;
            }
            *(int *)(puVar4 + 0x20) = iVar10;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_0209cd84:
        bVar7 = true;
LAB_0209cd88:
        if ((uVar15 == *param_2) || ((bVar6 != true && (bVar7 == bVar6)))) {
          piVar11 = (int *)(param_1 + 0x180 + ((long)((ulong)uVar17 << 0x20) >> 0x1b));
          iVar10 = *piVar11;
          uVar20 = (ulong)iVar10;
          if (iVar10 != 0) {
            plVar19 = *(long **)(piVar11 + 2);
            plVar18 = plVar19;
            for (uVar22 = uVar20 & 7; uVar22 != 0; uVar22 = uVar22 - 1) {
              *(undefined8 *)(*plVar18 + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
              plVar18 = plVar18 + 1;
            }
            if (6 < (uVar20 - 1 & 0x1fffffffffffffff)) {
              do {
                *(undefined8 *)(*plVar18 + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                *(undefined8 *)(plVar18[1] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                *(undefined8 *)(plVar18[2] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                *(undefined8 *)(plVar18[3] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                *(undefined8 *)(plVar18[4] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                *(undefined8 *)(plVar18[5] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                *(undefined8 *)(plVar18[6] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                plVar1 = plVar18 + 7;
                plVar18 = plVar18 + 8;
                *(undefined8 *)(*plVar1 + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
              } while (plVar18 != plVar19 + uVar20);
            }
          }
        }
        uVar17 = uVar17 + 1;
        uVar8 = 0x15;
        if ((int)uVar15 < 0x15) {
          uVar8 = uVar15 + 1;
        }
        uVar15 = uVar8;
      } while (uVar17 != 0x15);
    }
    else {
      do {
        if (lVar12 == 0) {
LAB_0209c9b4:
          uVar8 = *(uint *)puVar5;
          puVar13 = (uint *)puVar5;
        }
        else {
          if ((int)*(uint *)(lVar12 + 0x16ca0) < 1) {
            if ((((*plVar2 != 0) && (puVar13 = *(uint **)(*plVar2 + 8), puVar13 != (uint *)0x0)) &&
                ((*(uint *)(lVar12 + 0x16ba8) <= uVar15 ||
                 (*(char *)(*(long *)(lVar12 + 0x16bb0) + (long)(int)uVar15) != '\0')))) &&
               (((uVar15 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
              iVar10 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                iVar10 = 0x1c;
              }
              puVar13 = (uint *)((ulong)(puVar13[1] * uVar15 + (uint)(ushort)puVar13[2] * 8 + iVar10
                                        ) + (long)puVar13);
              if (puVar13 != (uint *)0x0) goto LAB_0209c940;
            }
            goto LAB_0209c9b4;
          }
          if (*(uint *)(lVar12 + 0x16ca0) <= uVar15) goto LAB_0209c9b4;
          uVar8 = uVar15;
          if (*(uint *)(lVar12 + 0x16c90) <= uVar15) {
            uVar8 = 0;
          }
          puVar13 = *(uint **)(*(long *)(lVar12 + 0x16c98) + (ulong)uVar8 * 8);
          if (puVar13 == (uint *)0x0) goto LAB_0209c9b4;
LAB_0209c940:
          uVar8 = *puVar13;
        }
        if (uVar8 != 0) {
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar8 = *(uint *)(puVar4 + 0x20);
              if (-1 < (int)uVar8) {
                if ((char *)((ulong)uVar8 + (long)puVar13) != (char *)0x0) {
                  bVar7 = *(char *)((ulong)uVar8 + (long)puVar13) != '\0';
                  goto LAB_0209ca98;
                }
                break;
              }
              if (uVar8 != 0xffffffff) break;
            }
            puVar21 = (uint *)(ulong)*puVar13;
            bVar7 = true;
            if ((*puVar13 == 0) || (puVar13 == puVar21)) goto LAB_0209ca98;
            lVar23 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar21)) != '\0') {
              lVar23 = 0x1c;
            }
            lVar23 = (long)puVar13 + (lVar23 - (long)puVar21);
            if (lVar23 == 0) break;
            uVar20 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar21));
            *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
            if (uVar20 == 0) break;
            piVar11 = (int *)(lVar23 + 4);
            while (piVar11[-1] != -0x28212ad6) {
              piVar11 = piVar11 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_0209ca94;
            }
            iVar10 = 0;
            if (*piVar11 != -1) {
              iVar10 = *piVar11;
            }
            *(int *)(puVar4 + 0x20) = iVar10;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_0209ca94:
        bVar7 = true;
LAB_0209ca98:
        if ((uVar15 == *param_2) || ((bVar6 != true && (bVar7 == bVar6)))) {
          piVar11 = (int *)(param_1 + 0x180 + ((long)((ulong)uVar17 << 0x20) >> 0x1b));
          iVar10 = *piVar11;
          if (iVar10 != 0) {
            plVar18 = *(long **)(piVar11 + 2);
            uVar22 = (long)iVar10 - 1U & 0x1fffffffffffffff;
            uVar20 = uVar22 + 1;
            if (uVar22 < 3) {
              uVar22 = 0;
            }
            else {
              lVar23 = 0;
              do {
                iVar10 = (int)lVar23;
                if (param_3 == iVar10) {
                  *(undefined8 *)(*plVar18 + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                }
                if (iVar10 + 1 == param_3) {
                  *(undefined8 *)(plVar18[1] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                }
                if (iVar10 + 2 == param_3) {
                  *(undefined8 *)(plVar18[2] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                }
                if (iVar10 + 3 == param_3) {
                  *(undefined8 *)(plVar18[3] + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                }
                uVar22 = lVar23 + 4;
                plVar18 = plVar18 + 4;
                lVar23 = lVar23 + 4;
              } while ((uVar20 & 0x3ffffffffffffffc) != uVar22);
            }
            uVar20 = uVar20 & 3;
            if (uVar20 != 0) {
              iVar10 = param_3 - (int)uVar22;
              do {
                if (iVar10 == 0) {
                  *(undefined8 *)(*plVar18 + 0x18) = *(undefined8 *)(lVar14 + 0x4060);
                }
                plVar18 = plVar18 + 1;
                iVar10 = iVar10 + -1;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
          }
        }
        uVar17 = uVar17 + 1;
        uVar8 = 0x15;
        if ((int)uVar15 < 0x15) {
          uVar8 = uVar15 + 1;
        }
        uVar15 = uVar8;
      } while (uVar17 != 0x15);
    }
  }
  return;
}

