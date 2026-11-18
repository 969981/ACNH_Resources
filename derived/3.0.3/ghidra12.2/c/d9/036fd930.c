
uint FUN_036fd930(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  char cVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  int *piVar19;
  
  puVar7 = PTR_DAT_04bc2550;
  puVar6 = PTR_DAT_04bc2548;
  uVar3 = *(uint *)(param_1 + 0x598);
  lVar13 = *(long *)(param_1 + 0x488);
  uVar14 = uVar3;
  if ((0 < (int)uVar3) ||
     (((lVar13 != 0 && (*(uint **)(lVar13 + 8) != (uint *)0x0)) &&
      (uVar14 = **(uint **)(lVar13 + 8), uVar14 != 0)))) {
    uVar4 = *(uint *)(param_1 + 0x4a0);
    uVar8 = 0;
    lVar16 = *(long *)(param_1 + 0x4a8);
    uVar5 = *(uint *)(param_1 + 0x588);
    lVar12 = *(long *)(param_1 + 0x590);
    cVar15 = *PTR_DAT_04bc2548;
    do {
      if ((int)uVar3 < 1) {
        if (((((lVar13 != 0) && (puVar11 = *(uint **)(lVar13 + 8), puVar11 != (uint *)0x0)) &&
             ((uVar4 <= uVar8 || (*(char *)(lVar16 + (int)uVar8) != '\0')))) &&
            ((uVar8 < *puVar11 && (puVar11[1] != 0)))) && ((ushort)puVar11[2] != 0)) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar11 = (uint *)((ulong)(puVar11[1] * uVar8 + (uint)(ushort)puVar11[2] * 8 + iVar9) +
                            (long)puVar11);
          goto joined_r0x036fdae4;
        }
      }
      else if (uVar8 < uVar3) {
        uVar1 = uVar8;
        if (uVar5 <= uVar8) {
          uVar1 = 0;
        }
        puVar11 = *(uint **)(lVar12 + (ulong)uVar1 * 8);
joined_r0x036fdae4:
        if (puVar11 != (uint *)0x0) {
          if (*puVar11 != 0) {
            while( true ) {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                uVar1 = *puVar11;
              }
              else {
                uVar1 = *(uint *)(puVar7 + 0x28);
                if (-1 < (int)uVar1) {
                  cVar10 = '\0';
                  if ((char *)((ulong)uVar1 + (long)puVar11) != (char *)0x0) {
                    cVar10 = *(char *)((ulong)uVar1 + (long)puVar11);
                  }
                  goto LAB_036fda84;
                }
                if (uVar1 != 0xffffffff) break;
                uVar1 = *puVar11;
              }
              if ((uVar1 == 0) || (puVar17 = (uint *)(ulong)uVar1, puVar11 == puVar17)) break;
              lVar2 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar17)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar11 + (lVar2 - (long)puVar17);
              if (lVar2 == 0) break;
              uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar17));
              *(undefined4 *)(puVar7 + 0x28) = 0xfffffffe;
              if (uVar18 == 0) break;
              piVar19 = (int *)(lVar2 + 4);
              while (piVar19[-1] != 0x38501139) {
                piVar19 = piVar19 + 2;
                uVar18 = uVar18 - 1;
                if (uVar18 == 0) goto LAB_036fda80;
              }
              iVar9 = 0;
              if (*piVar19 != -1) {
                iVar9 = *piVar19;
              }
              *(int *)(puVar7 + 0x28) = iVar9;
              if (*puVar11 == 0) break;
            }
          }
LAB_036fda80:
          cVar10 = '\0';
LAB_036fda84:
          if (param_2 == cVar10) {
            return uVar8;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar14);
  }
  return 0xffffffff;
}

