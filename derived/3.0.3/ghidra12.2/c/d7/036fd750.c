
uint * FUN_036fd750(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  
  puVar8 = PTR_DAT_04bc2550;
  puVar7 = PTR_DAT_04bc2548;
  uVar2 = *(uint *)(param_1 + 0x598);
  lVar13 = *(long *)(param_1 + 0x488);
  uVar18 = uVar2;
  if ((0 < (int)uVar2) ||
     (((lVar13 != 0 && (*(uint **)(lVar13 + 8) != (uint *)0x0)) &&
      (uVar18 = **(uint **)(lVar13 + 8), 0 < (int)uVar18)))) {
    uVar3 = *(uint *)(param_1 + 0x4a0);
    uVar14 = 0;
    lVar16 = *(long *)(param_1 + 0x4a8);
    uVar4 = *(uint *)(param_1 + 0x588);
    lVar17 = *(long *)(param_1 + 0x590);
    cVar15 = *PTR_DAT_04bc2548;
    do {
      if ((int)uVar2 < 1) {
        if (((((lVar13 != 0) && (puVar10 = *(uint **)(lVar13 + 8), puVar10 != (uint *)0x0)) &&
             ((uVar3 <= uVar14 || (*(char *)(lVar16 + uVar14) != '\0')))) &&
            ((uVar14 < *puVar10 && (puVar10[1] != 0)))) && ((ushort)puVar10[2] != 0)) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar10 = (uint *)((ulong)(puVar10[1] * (int)uVar14 + (uint)(ushort)puVar10[2] * 8 +
                                    iVar11) + (long)puVar10);
          goto joined_r0x036fd8e4;
        }
      }
      else if (uVar14 < uVar2) {
        uVar9 = uVar14 & 0xffffffff;
        if (uVar4 <= uVar14) {
          uVar9 = 0;
        }
        puVar10 = *(uint **)(lVar17 + uVar9 * 8);
joined_r0x036fd8e4:
        if ((puVar10 != (uint *)0x0) && (*puVar10 != 0)) {
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *puVar7 = 1;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar5 = *(uint *)(puVar8 + 0x18);
              if (-1 < (int)uVar5) {
                if (((char *)((ulong)uVar5 + (long)puVar10) != (char *)0x0) &&
                   (*(char *)((ulong)uVar5 + (long)puVar10) != '\0')) {
                  return puVar10;
                }
                break;
              }
              if (uVar5 != 0xffffffff) break;
            }
            lVar6 = (long)puVar10 - (ulong)*puVar10;
            if ((*puVar10 == 0) || (lVar6 == 0)) break;
            lVar1 = 0xc;
            if (*(char *)(lVar6 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            if (lVar1 + lVar6 == 0) break;
            uVar9 = (ulong)*(ushort *)(lVar6 + 8);
            *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
            if (uVar9 == 0) break;
            piVar12 = (int *)(lVar1 + lVar6 + 4);
            while (piVar12[-1] != -0x25f3a2cd) {
              piVar12 = piVar12 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_036fd7b0;
            }
            iVar11 = 0;
            if (*piVar12 != -1) {
              iVar11 = *piVar12;
            }
            *(int *)(puVar8 + 0x18) = iVar11;
            if (*puVar10 == 0) break;
          } while( true );
        }
      }
LAB_036fd7b0:
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar18);
  }
  return (uint *)0x0;
}

