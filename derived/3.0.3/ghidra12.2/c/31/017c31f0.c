
undefined2 FUN_017c31f0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  char cVar13;
  int *piVar14;
  
  puVar5 = PTR_DAT_04bbe4d0;
  puVar4 = PTR_DAT_04bbe4c8;
  uVar2 = *(uint *)(param_1 + 0x15c8);
  lVar10 = *(long *)(param_1 + 0x14b8);
  uVar9 = 0;
  do {
    uVar11 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    if ((int)uVar2 < 1 && lVar10 != 0) {
      uVar11 = 0;
      if (*(uint **)(lVar10 + 8) != (uint *)0x0) {
        uVar11 = (ulong)**(uint **)(lVar10 + 8);
      }
    }
    if (uVar11 <= uVar9) {
      return 0xfffe;
    }
    if ((int)uVar2 < 1) {
      if ((((lVar10 != 0) && (puVar12 = *(uint **)(lVar10 + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x14d0) <= uVar9 ||
           (*(char *)(*(long *)(param_1 + 0x14d8) + uVar9) != '\0')))) &&
         (((uVar9 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar9 + (uint)(ushort)puVar12[2] * 8 + iVar6) +
                          (long)puVar12);
        goto joined_r0x017c3364;
      }
    }
    else if (uVar9 < uVar2) {
      uVar11 = uVar9;
      if (*(uint *)(param_1 + 0x15b8) <= uVar9) {
        uVar11 = 0;
      }
      puVar12 = *(uint **)(*(long *)(param_1 + 0x15c0) + uVar11 * 8);
joined_r0x017c3364:
      if (puVar12 != (uint *)0x0) {
        uVar3 = *puVar12;
        uVar7 = 0;
        if ((uVar3 != 0) && (puVar12 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar3);
          uVar7 = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 != 0) {
                uVar7 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar12 - lVar1) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < DAT_05293048) &&
                   (uVar7 = (uint)*(ushort *)(DAT_05293050 + (long)(int)uVar7 * 2), uVar7 < 9))
                goto LAB_017c3244;
              }
            }
            uVar7 = 0;
          }
        }
LAB_017c3244:
        if (uVar7 == param_2) {
          if (*puVar12 == 0) {
            return 0xfffe;
          }
          cVar13 = *PTR_DAT_04bbe4c8;
          while( true ) {
            if (cVar13 == '\0') {
              cVar13 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 4);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar12) == (undefined2 *)0x0) {
                  return 0xfffe;
                }
                return *(undefined2 *)((ulong)uVar2 + (long)puVar12);
              }
              if (uVar2 != 0xffffffff) {
                return 0xfffe;
              }
            }
            puVar8 = (uint *)(ulong)*puVar12;
            if (*puVar12 == 0) {
              return 0xfffe;
            }
            if (puVar12 == puVar8) break;
            lVar10 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar12 + (lVar10 - (long)puVar8);
            if (lVar10 == 0) {
              return 0xfffe;
            }
            uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
            *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
            if (uVar9 == 0) {
              return 0xfffe;
            }
            piVar14 = (int *)(lVar10 + 4);
            while (piVar14[-1] != 0x4e718582) {
              piVar14 = piVar14 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) {
                return 0xfffe;
              }
            }
            iVar6 = 0;
            if (*piVar14 != -1) {
              iVar6 = *piVar14;
            }
            *(int *)(puVar5 + 4) = iVar6;
            if (*puVar12 == 0) {
              return 0xfffe;
            }
          }
          return 0xfffe;
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

