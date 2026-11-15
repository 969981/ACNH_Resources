
void FUN_02066960(long param_1,uint *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  byte bVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  uint *puVar20;
  long lVar21;
  uint uVar22;
  char cVar23;
  uint *puVar24;
  
  puVar8 = PTR_DAT_04bc1578;
  puVar7 = PTR_DAT_04bc1570;
  lVar19 = *(long *)PTR_DAT_04bb3968;
  plVar2 = (long *)(lVar19 + 0x16b90);
  if (lVar19 != 0) {
    uVar22 = *param_2;
    if ((int)*(uint *)(lVar19 + 0x16ca0) < 1) {
      if ((((*plVar2 != 0) && (puVar20 = *(uint **)(*plVar2 + 8), puVar20 != (uint *)0x0)) &&
          ((*(uint *)(lVar19 + 0x16ba8) <= uVar22 ||
           (*(char *)(*(long *)(lVar19 + 0x16bb0) + (long)(int)uVar22) != '\0')))) &&
         (((uVar22 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar20 = (uint *)((ulong)(puVar20[1] * uVar22 + (uint)(ushort)puVar20[2] * 8 + iVar12) +
                          (long)puVar20);
        goto joined_r0x02066a14;
      }
    }
    else if (uVar22 < *(uint *)(lVar19 + 0x16ca0)) {
      if (*(uint *)(lVar19 + 0x16c90) <= uVar22) {
        uVar22 = 0;
      }
      puVar20 = *(uint **)(*(long *)(lVar19 + 0x16c98) + (ulong)uVar22 * 8);
joined_r0x02066a14:
      if (puVar20 != (uint *)0x0) goto LAB_02066a20;
    }
  }
  puVar20 = (uint *)PTR_DAT_04bc2820;
LAB_02066a20:
  if (*puVar20 == 0) {
LAB_02066b34:
    bVar13 = 0;
  }
  else {
    cVar23 = *PTR_DAT_04bc1570;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar8 + 0x68) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar22 = *(uint *)(puVar8 + 0x2c);
        if (-1 < (int)uVar22) {
          if (((byte *)((ulong)uVar22 + (long)puVar20) == (byte *)0x0) ||
             (bVar13 = *(byte *)((ulong)uVar22 + (long)puVar20), 3 < bVar13)) goto LAB_02066b34;
          goto LAB_02066b38;
        }
        if (uVar22 != 0xffffffff) goto LAB_02066b34;
      }
      puVar24 = (uint *)(ulong)*puVar20;
      bVar13 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar24)) goto LAB_02066b38;
      lVar21 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar24)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar20 + (lVar21 - (long)puVar24);
      if (lVar21 == 0) goto LAB_02066b34;
      uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar24));
      *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
      bVar13 = 0;
      if (uVar17 == 0) goto LAB_02066b38;
      piVar14 = (int *)(lVar21 + 4);
      while (piVar14[-1] != -0x2947dcfb) {
        piVar14 = piVar14 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          bVar13 = 0;
          goto LAB_02066b38;
        }
      }
      iVar12 = 0;
      if (*piVar14 != -1) {
        iVar12 = *piVar14;
      }
      *(int *)(puVar8 + 0x2c) = iVar12;
    } while (*puVar20 != 0);
    bVar13 = 0;
  }
LAB_02066b38:
  puVar8 = PTR_DAT_04bc1578;
  if (bVar13 == 2) {
    if (*puVar20 != 0) {
      cVar23 = *puVar7;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 0x68) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
        }
        else {
          uVar22 = *(uint *)(puVar8 + 0x20);
          if (-1 < (int)uVar22) {
            if ((char *)((ulong)uVar22 + (long)puVar20) != (char *)0x0) {
              bVar10 = *(char *)((ulong)uVar22 + (long)puVar20) != '\0';
              goto LAB_02066c48;
            }
            break;
          }
          if (uVar22 != 0xffffffff) break;
        }
        puVar24 = (uint *)(ulong)*puVar20;
        bVar10 = true;
        if ((*puVar20 == 0) || (puVar20 == puVar24)) goto LAB_02066c48;
        lVar21 = 0xc;
        if (*(char *)((long)puVar20 + (10 - (long)puVar24)) != '\0') {
          lVar21 = 0x1c;
        }
        lVar21 = (long)puVar20 + (lVar21 - (long)puVar24);
        if (lVar21 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar24));
        *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar14 = (int *)(lVar21 + 4);
        while (piVar14[-1] != -0x28212ad6) {
          piVar14 = piVar14 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_02066c44;
        }
        iVar12 = 0;
        if (*piVar14 != -1) {
          iVar12 = *piVar14;
        }
        *(int *)(puVar8 + 0x20) = iVar12;
        if (*puVar20 == 0) break;
      } while( true );
    }
LAB_02066c44:
    bVar10 = true;
LAB_02066c48:
    puVar9 = PTR_DAT_04bc2820;
    puVar8 = PTR_DAT_04bc1578;
    cVar23 = *puVar7;
    piVar14 = (int *)(param_1 + 0x178);
    uVar22 = 0;
    lVar21 = *(long *)PTR_DAT_04bb32e8;
    if ((int)param_3 < 0) {
      do {
        piVar6 = piVar14 + (ulong)uVar22 * 8;
        if (0x14 < uVar22) {
          piVar6 = piVar14;
        }
        if (lVar19 == 0) {
LAB_02066f64:
          uVar4 = *(uint *)puVar9;
          puVar20 = (uint *)puVar9;
        }
        else {
          if ((int)*(uint *)(lVar19 + 0x16ca0) < 1) {
            if ((((*plVar2 != 0) && (puVar20 = *(uint **)(*plVar2 + 8), puVar20 != (uint *)0x0)) &&
                ((*(uint *)(lVar19 + 0x16ba8) <= uVar22 ||
                 (*(char *)(*(long *)(lVar19 + 0x16bb0) + (long)(int)uVar22) != '\0')))) &&
               (((uVar22 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
              iVar12 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                iVar12 = 0x1c;
              }
              puVar20 = (uint *)((ulong)(puVar20[1] * uVar22 + (uint)(ushort)puVar20[2] * 8 + iVar12
                                        ) + (long)puVar20);
              if (puVar20 != (uint *)0x0) goto LAB_02066ef4;
            }
            goto LAB_02066f64;
          }
          if (*(uint *)(lVar19 + 0x16ca0) <= uVar22) goto LAB_02066f64;
          uVar4 = uVar22;
          if (*(uint *)(lVar19 + 0x16c90) <= uVar22) {
            uVar4 = 0;
          }
          puVar20 = *(uint **)(*(long *)(lVar19 + 0x16c98) + (ulong)uVar4 * 8);
          if (puVar20 == (uint *)0x0) goto LAB_02066f64;
LAB_02066ef4:
          uVar4 = *puVar20;
        }
        if (uVar4 != 0) {
          do {
            if (cVar23 == '\0') {
              cVar23 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *puVar7 = 1;
              *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
              *(undefined4 *)(puVar8 + 0x68) = 0xffffffff;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar4 = *(uint *)(puVar8 + 0x20);
              if (-1 < (int)uVar4) {
                if ((char *)((ulong)uVar4 + (long)puVar20) != (char *)0x0) {
                  bVar11 = *(char *)((ulong)uVar4 + (long)puVar20) != '\0';
                  goto LAB_02067048;
                }
                break;
              }
              if (uVar4 != 0xffffffff) break;
            }
            puVar24 = (uint *)(ulong)*puVar20;
            bVar11 = true;
            if ((*puVar20 == 0) || (puVar20 == puVar24)) goto LAB_02067048;
            lVar5 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar24)) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar20 + (lVar5 - (long)puVar24);
            if (lVar5 == 0) break;
            uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar24));
            *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
            if (uVar17 == 0) break;
            piVar18 = (int *)(lVar5 + 4);
            while (piVar18[-1] != -0x28212ad6) {
              piVar18 = piVar18 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_02067044;
            }
            iVar12 = 0;
            if (*piVar18 != -1) {
              iVar12 = *piVar18;
            }
            *(int *)(puVar8 + 0x20) = iVar12;
            if (*puVar20 == 0) break;
          } while( true );
        }
LAB_02067044:
        bVar11 = true;
LAB_02067048:
        if ((uVar22 == *param_2) || ((bVar10 != true && (bVar11 == bVar10)))) {
          uVar17 = (ulong)*piVar6;
          if (*piVar6 != 0) {
            plVar16 = *(long **)(piVar6 + 2);
            plVar15 = plVar16;
            for (uVar3 = uVar17 & 7; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined8 *)(*plVar15 + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
              plVar15 = plVar15 + 1;
            }
            if (6 < (uVar17 - 1 & 0x1fffffffffffffff)) {
              do {
                *(undefined8 *)(*plVar15 + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
                *(undefined8 *)(plVar15[1] + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
                *(undefined8 *)(plVar15[2] + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
                *(undefined8 *)(plVar15[3] + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
                *(undefined8 *)(plVar15[4] + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
                *(undefined8 *)(plVar15[5] + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
                *(undefined8 *)(plVar15[6] + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
                plVar1 = plVar15 + 7;
                plVar15 = plVar15 + 8;
                *(undefined8 *)(*plVar1 + 0x18) = *(undefined8 *)(lVar21 + 0x4060);
              } while (plVar15 != plVar16 + uVar17);
            }
          }
          bVar11 = 0x13 < (int)uVar22;
          uVar22 = uVar22 + 1;
          if (bVar11) {
            return;
          }
        }
        else {
          uVar22 = uVar22 + 1;
          if (uVar22 == 0x15) {
            return;
          }
        }
      } while( true );
    }
    do {
      piVar6 = piVar14 + (ulong)uVar22 * 8;
      if (0x14 < uVar22) {
        piVar6 = piVar14;
      }
      if (lVar19 == 0) {
LAB_02066d64:
        uVar4 = *(uint *)puVar9;
        puVar20 = (uint *)puVar9;
      }
      else {
        if ((int)*(uint *)(lVar19 + 0x16ca0) < 1) {
          if ((((*plVar2 != 0) && (puVar20 = *(uint **)(*plVar2 + 8), puVar20 != (uint *)0x0)) &&
              ((*(uint *)(lVar19 + 0x16ba8) <= uVar22 ||
               (*(char *)(*(long *)(lVar19 + 0x16bb0) + (long)(int)uVar22) != '\0')))) &&
             (((uVar22 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
            iVar12 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              iVar12 = 0x1c;
            }
            puVar20 = (uint *)((ulong)(puVar20[1] * uVar22 + (uint)(ushort)puVar20[2] * 8 + iVar12)
                              + (long)puVar20);
            if (puVar20 != (uint *)0x0) goto LAB_02066cf4;
          }
          goto LAB_02066d64;
        }
        if (*(uint *)(lVar19 + 0x16ca0) <= uVar22) goto LAB_02066d64;
        uVar4 = uVar22;
        if (*(uint *)(lVar19 + 0x16c90) <= uVar22) {
          uVar4 = 0;
        }
        puVar20 = *(uint **)(*(long *)(lVar19 + 0x16c98) + (ulong)uVar4 * 8);
        if (puVar20 == (uint *)0x0) goto LAB_02066d64;
LAB_02066cf4:
        uVar4 = *puVar20;
      }
      if (uVar4 != 0) {
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + 0x68) = 0xffffffff;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar8 + 0x20);
            if (-1 < (int)uVar4) {
              if ((char *)((ulong)uVar4 + (long)puVar20) != (char *)0x0) {
                bVar11 = *(char *)((ulong)uVar4 + (long)puVar20) != '\0';
                goto LAB_02066e48;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)*puVar20;
          bVar11 = true;
          if ((*puVar20 == 0) || (puVar20 == puVar24)) goto LAB_02066e48;
          lVar5 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar24)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar20 + (lVar5 - (long)puVar24);
          if (lVar5 == 0) break;
          uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar24));
          *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar18 = (int *)(lVar5 + 4);
          while (piVar18[-1] != -0x28212ad6) {
            piVar18 = piVar18 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_02066e44;
          }
          iVar12 = 0;
          if (*piVar18 != -1) {
            iVar12 = *piVar18;
          }
          *(int *)(puVar8 + 0x20) = iVar12;
          if (*puVar20 == 0) break;
        } while( true );
      }
LAB_02066e44:
      bVar11 = true;
LAB_02066e48:
      if ((uVar22 == *param_2) || ((bVar10 != true && (bVar11 == bVar10)))) {
        *(undefined8 *)(*(long *)(*(long *)(piVar6 + 2) + (ulong)param_3 * 8) + 0x18) =
             *(undefined8 *)(lVar21 + 0x4060);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x15);
  }
  return;
}

