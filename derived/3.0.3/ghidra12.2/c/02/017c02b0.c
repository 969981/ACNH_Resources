
undefined2 FUN_017c02b0(long param_1,short param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  int *piVar18;
  ulong uVar19;
  uint *puVar20;
  
  puVar8 = PTR_DAT_04bbe4c0;
  puVar7 = PTR_DAT_04bbe4b8;
  uVar2 = *(uint *)(param_1 + 0xdc8);
  lVar14 = *(long *)(param_1 + 0xcb8);
  uVar11 = uVar2;
  if ((0 < (int)uVar2) ||
     (((lVar14 != 0 && (*(uint **)(lVar14 + 8) != (uint *)0x0)) &&
      (uVar11 = **(uint **)(lVar14 + 8), 0 < (int)uVar11)))) {
    uVar3 = *(uint *)(param_1 + 0xcd0);
    uVar13 = 0;
    lVar16 = *(long *)(param_1 + 0xcd8);
    uVar4 = *(uint *)(param_1 + 0xdb8);
    lVar15 = *(long *)(param_1 + 0xdc0);
    cVar10 = *PTR_DAT_04bbe4b8;
    do {
      uVar12 = (uint)uVar13;
      if ((int)uVar2 < 1) {
        if (((((lVar14 != 0) && (puVar20 = *(uint **)(lVar14 + 8), puVar20 != (uint *)0x0)) &&
             ((uVar3 <= uVar13 || (*(char *)(lVar16 + uVar13) != '\0')))) &&
            ((uVar13 < *puVar20 && (puVar20[1] != 0)))) && ((ushort)puVar20[2] != 0)) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar20 = (uint *)((ulong)(puVar20[1] * uVar12 + (uint)(ushort)puVar20[2] * 8 + iVar9) +
                            (long)puVar20);
          goto joined_r0x017c0454;
        }
LAB_017c0464:
        if (param_2 == -1) {
LAB_017c0484:
          if ((int)uVar2 < 1) {
            if (lVar14 == 0) {
              return 0;
            }
            puVar20 = *(uint **)(lVar14 + 8);
            if (puVar20 == (uint *)0x0) {
              return 0;
            }
            if ((uVar12 < uVar3) && (*(char *)(lVar16 + (uVar13 & 0xffffffff)) == '\0')) {
              return 0;
            }
            if (*puVar20 <= uVar12) {
              return 0;
            }
            if (puVar20[1] == 0) {
              return 0;
            }
            if ((ushort)puVar20[2] == 0) {
              return 0;
            }
            iVar9 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            puVar20 = (uint *)((ulong)(puVar20[1] * uVar12 + (uint)(ushort)puVar20[2] * 8 + iVar9) +
                              (long)puVar20);
            goto joined_r0x017c05e8;
          }
LAB_017c048c:
          if (uVar2 <= uVar12) {
            return 0;
          }
          uVar13 = uVar13 & 0xffffffff;
          if (uVar4 <= uVar12) {
            uVar13 = 0;
          }
          puVar20 = *(uint **)(lVar15 + uVar13 * 8);
joined_r0x017c05e8:
          if (puVar20 == (uint *)0x0) {
            return 0;
          }
          if (*puVar20 == 0) {
            return 0;
          }
          while( true ) {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *puVar7 = 1;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            }
            else {
              uVar2 = *(uint *)(puVar8 + 0xc);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar20) == (undefined2 *)0x0) {
                  return 0;
                }
                return *(undefined2 *)((ulong)uVar2 + (long)puVar20);
              }
              if (uVar2 != 0xffffffff) {
                return 0;
              }
            }
            puVar17 = (uint *)(ulong)*puVar20;
            if (*puVar20 == 0) {
              return 0;
            }
            if (puVar20 == puVar17) break;
            lVar14 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar17)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar20 + (lVar14 - (long)puVar17);
            if (lVar14 == 0) {
              return 0;
            }
            uVar13 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar17));
            *(undefined4 *)(puVar8 + 0xc) = 0xfffffffe;
            if (uVar13 == 0) {
              return 0;
            }
            piVar18 = (int *)(lVar14 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) {
                return 0;
              }
            }
            iVar9 = 0;
            if (*piVar18 != -1) {
              iVar9 = *piVar18;
            }
            *(int *)(puVar8 + 0xc) = iVar9;
            if (*puVar20 == 0) {
              return 0;
            }
          }
          return 0;
        }
      }
      else {
        if (uVar13 < uVar2) {
          uVar19 = uVar13 & 0xffffffff;
          if (uVar4 <= uVar13) {
            uVar19 = 0;
          }
          puVar20 = *(uint **)(lVar15 + uVar19 * 8);
joined_r0x017c0454:
          if ((puVar20 != (uint *)0x0) && (*puVar20 != 0)) {
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *puVar7 = 1;
                *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              }
              else {
                uVar5 = *(uint *)(puVar8 + 8);
                if (-1 < (int)uVar5) {
                  if ((short *)((ulong)uVar5 + (long)puVar20) != (short *)0x0) {
                    if (*(short *)((ulong)uVar5 + (long)puVar20) == param_2) goto LAB_017c0484;
                    goto LAB_017c032c;
                  }
                  break;
                }
                if (uVar5 != 0xffffffff) break;
              }
              lVar6 = (long)puVar20 - (ulong)*puVar20;
              if ((*puVar20 == 0) || (lVar6 == 0)) break;
              lVar1 = 0xc;
              if (*(char *)(lVar6 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              if (lVar1 + lVar6 == 0) break;
              uVar19 = (ulong)*(ushort *)(lVar6 + 8);
              *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar1 + lVar6 + 4);
              while (piVar18[-1] != 0x2fe593c3) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_017c0464;
              }
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)(puVar8 + 8) = iVar9;
              if (*puVar20 == 0) break;
            } while( true );
          }
          goto LAB_017c0464;
        }
        if (param_2 == -1) goto LAB_017c048c;
      }
LAB_017c032c:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar11);
  }
  return 0xffff;
}

