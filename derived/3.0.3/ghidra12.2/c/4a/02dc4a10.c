
void FUN_02dc4a10(uint *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  
  uVar14 = *param_1;
  uVar10 = (ulong)uVar14;
  if (1 < (int)uVar14) {
    plVar11 = *(long **)(param_1 + 2);
    uVar13 = (ulong)(uVar14 >> 1);
    do {
      uVar8 = (uint)uVar13;
      uVar16 = uVar8 * 2;
      lVar12 = plVar11[uVar13 - 1 & 0xffffffff];
      if ((int)uVar16 <= (int)uVar14) {
        uVar15 = uVar13 & 0xffffffff;
        do {
          uVar9 = uVar16;
          if ((int)uVar16 < (int)uVar14) {
            lVar17 = (plVar11 + (int)uVar16)[-1];
            lVar3 = plVar11[(int)uVar16];
            uVar8 = (uint)(*(short *)(lVar17 + 8) != -2 && *(char *)(lVar17 + 0x26) != '\0');
            uVar9 = (uint)(*(short *)(lVar3 + 8) != -2 && *(char *)(lVar3 + 0x26) != '\0');
            if (uVar8 == uVar9) {
              iVar1 = 0;
              if (*(short *)(lVar17 + 8) != -2) {
                iVar1 = *(int *)(lVar17 + 4);
              }
              iVar2 = 0;
              if (*(short *)(lVar3 + 8) != -2) {
                iVar2 = *(int *)(lVar3 + 4);
              }
              uVar8 = 0;
              if (iVar1 < iVar2) {
                uVar8 = 0xffffffff;
              }
            }
            else {
              uVar8 = (uVar8 ^ 1) - (uVar9 ^ 1);
            }
            uVar9 = uVar16 | uVar8 >> 0x1f;
          }
          sVar4 = *(short *)(lVar12 + 8);
          lVar17 = plVar11[(int)(uVar9 - 1)];
          bVar6 = *(char *)(lVar12 + 0x26) != '\0';
          sVar5 = *(short *)(lVar17 + 8);
          bVar7 = *(char *)(lVar17 + 0x26) != '\0';
          uVar8 = (uint)uVar15;
          if ((sVar4 != -2 && bVar6) == (sVar5 != -2 && bVar7)) {
            iVar1 = 0;
            if (sVar4 != -2) {
              iVar1 = *(int *)(lVar12 + 4);
            }
            iVar2 = 0;
            if (sVar5 != -2) {
              iVar2 = *(int *)(lVar17 + 4);
            }
            if (iVar2 <= iVar1) break;
          }
          else if (sVar5 != -2 && bVar7 || (sVar4 == -2 || !bVar6)) break;
          plVar11[(int)(uVar8 - 1)] = lVar17;
          uVar16 = uVar9 * 2;
          uVar15 = (ulong)uVar9;
          uVar8 = uVar9;
        } while ((int)uVar16 <= (int)uVar14);
      }
      plVar11[(int)(uVar8 - 1)] = lVar12;
      bVar6 = 1 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar6);
    uVar13 = uVar10 - 1;
    lVar12 = plVar11[uVar13 & 0xffffffff];
    plVar11[uVar13 & 0xffffffff] = *plVar11;
    if (2 < uVar14) {
      do {
        uVar14 = 2;
        uVar16 = 1;
        do {
          if ((int)uVar14 < (int)uVar13) {
            lVar17 = (plVar11 + (int)uVar14)[-1];
            lVar3 = plVar11[(int)uVar14];
            uVar8 = (uint)(*(short *)(lVar17 + 8) != -2 && *(char *)(lVar17 + 0x26) != '\0');
            uVar9 = (uint)(*(short *)(lVar3 + 8) != -2 && *(char *)(lVar3 + 0x26) != '\0');
            if (uVar8 == uVar9) {
              iVar1 = 0;
              if (*(short *)(lVar17 + 8) != -2) {
                iVar1 = *(int *)(lVar17 + 4);
              }
              iVar2 = 0;
              if (*(short *)(lVar3 + 8) != -2) {
                iVar2 = *(int *)(lVar3 + 4);
              }
              uVar8 = 0;
              if (iVar1 < iVar2) {
                uVar8 = 0xffffffff;
              }
            }
            else {
              uVar8 = (uVar8 ^ 1) - (uVar9 ^ 1);
            }
            uVar8 = uVar14 | uVar8 >> 0x1f;
          }
          else {
            uVar8 = uVar14;
          }
          sVar4 = *(short *)(lVar12 + 8);
          lVar17 = plVar11[(int)(uVar8 - 1)];
          bVar6 = *(char *)(lVar12 + 0x26) != '\0';
          sVar5 = *(short *)(lVar17 + 8);
          bVar7 = *(char *)(lVar17 + 0x26) != '\0';
          if ((sVar4 != -2 && bVar6) == (sVar5 != -2 && bVar7)) {
            iVar1 = 0;
            if (sVar4 != -2) {
              iVar1 = *(int *)(lVar12 + 4);
            }
            iVar2 = 0;
            if (sVar5 != -2) {
              iVar2 = *(int *)(lVar17 + 4);
            }
            if (iVar2 <= iVar1) break;
          }
          else if (sVar5 != -2 && bVar7 || (sVar4 == -2 || !bVar6)) break;
          plVar11[(int)(uVar16 - 1)] = lVar17;
          uVar14 = uVar8 << 1;
          uVar16 = uVar8;
        } while ((long)(int)uVar14 < (long)uVar10);
        plVar11[(int)(uVar16 - 1)] = lVar12;
        uVar10 = uVar13 - 1 & 0xffffffff;
        lVar12 = plVar11[uVar10];
        plVar11[uVar10] = *plVar11;
        bVar6 = 2 < uVar13;
        uVar10 = uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar6);
    }
    *plVar11 = lVar12;
  }
  return;
}

