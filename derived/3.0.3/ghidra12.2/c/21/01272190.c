
void FUN_01272190(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  undefined *puVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  
  *param_1 = &PTR_LAB_049897a8;
  param_1[1] = 0;
  lVar4 = DAT_0519d040;
  puVar5 = PTR_DAT_04bbbdb0;
  uVar12 = *(uint *)(DAT_0519d040 + 0xf58);
  if ((0 < (int)uVar12) ||
     (((*(long *)(DAT_0519d040 + 0xe48) != 0 &&
       (puVar14 = *(uint **)(*(long *)(DAT_0519d040 + 0xe48) + 8), puVar14 != (uint *)0x0)) &&
      (uVar12 = *puVar14, uVar12 != 0)))) {
    uVar13 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0xf58) < 1) {
        if (((((*(long *)(lVar4 + 0xe48) != 0) &&
              (puVar14 = *(uint **)(*(long *)(lVar4 + 0xe48) + 8), puVar14 != (uint *)0x0)) &&
             ((*(uint *)(lVar4 + 0xe60) <= uVar13 ||
              (*(char *)(*(long *)(lVar4 + 0xe68) + (long)(int)uVar13) != '\0')))) &&
            ((uVar13 < *puVar14 && (puVar14[1] != 0)))) && ((ushort)puVar14[2] != 0)) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar14 = (uint *)((ulong)(puVar14[1] * uVar13 + (uint)(ushort)puVar14[2] * 8 + iVar6) +
                            (long)puVar14);
          goto joined_r0x01272380;
        }
      }
      else if (uVar13 < *(uint *)(lVar4 + 0xf58)) {
        uVar1 = uVar13;
        if (*(uint *)(lVar4 + 0xf48) <= uVar13) {
          uVar1 = 0;
        }
        puVar14 = *(uint **)(*(long *)(lVar4 + 0xf50) + (ulong)uVar1 * 8);
joined_r0x01272380:
        if (puVar14 != (uint *)0x0) {
          if (*puVar14 != 0) {
            cVar7 = DAT_05160078;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                *PTR_DAT_04bbbda8 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x10);
                if (-1 < (int)uVar1) {
                  puVar9 = (undefined *)((ulong)uVar1 + (long)puVar14);
                  goto LAB_012721fc;
                }
                if (uVar1 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)*puVar14;
              puVar9 = (undefined *)0x0;
              if ((*puVar14 == 0) || (puVar14 == puVar11)) goto LAB_012721fc;
              lVar3 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar11)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar14 + (lVar3 - (long)puVar11);
              if (lVar3 == 0) break;
              uVar10 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar11));
              *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
              puVar9 = (undefined *)0x0;
              if (uVar10 == 0) goto LAB_012721fc;
              piVar8 = (int *)(lVar3 + 4);
              while (piVar8[-1] != -0x2f9606f4) {
                piVar8 = piVar8 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) {
                  puVar9 = (undefined *)0x0;
                  goto LAB_012721fc;
                }
              }
              iVar6 = 0;
              if (*piVar8 != -1) {
                iVar6 = *piVar8;
              }
              *(int *)(puVar5 + 0x10) = iVar6;
            } while (*puVar14 != 0);
          }
          puVar9 = (undefined *)0x0;
LAB_012721fc:
          puVar2 = PTR_DAT_04c481d0;
          if (puVar9 != (undefined *)0x0) {
            puVar2 = puVar9;
          }
          iVar6 = FUN_006bd550(puVar2,0);
          if (iVar6 == *param_2) goto LAB_0127242c;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar12);
    if (param_1[1] != 0) {
      return;
    }
  }
  if (*(int *)(lVar4 + 0xf58) < 1) {
    if ((((*(long *)(lVar4 + 0xe48) == 0) ||
         (piVar8 = *(int **)(*(long *)(lVar4 + 0xe48) + 8), piVar8 == (int *)0x0)) ||
        ((*(int *)(lVar4 + 0xe60) != 0 && (**(char **)(lVar4 + 0xe68) == '\0')))) ||
       (((*piVar8 == 0 || (piVar8[1] == 0)) || ((ulong)*(ushort *)(piVar8 + 2) == 0)))) {
      puVar14 = (uint *)0x0;
    }
    else {
      lVar4 = 0xc;
      if (*(char *)((long)piVar8 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      puVar14 = (uint *)((long)piVar8 + lVar4 + (ulong)*(ushort *)(piVar8 + 2) * 8);
    }
  }
  else {
    puVar14 = (uint *)**(long **)(lVar4 + 0xf50);
  }
LAB_0127242c:
  param_1[1] = puVar14;
  return;
}

