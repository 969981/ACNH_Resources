
void FUN_02dc4f80(uint *param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  
  uVar13 = *param_1;
  uVar8 = (ulong)uVar13;
  if (1 < (int)uVar13) {
    plVar9 = *(long **)(param_1 + 2);
    uVar12 = (ulong)(uVar13 >> 1);
    do {
      uVar10 = (uint)uVar12;
      uVar15 = uVar10 * 2;
      lVar11 = plVar9[uVar12 - 1 & 0xffffffff];
      if ((int)uVar15 <= (int)uVar13) {
        uVar14 = uVar12 & 0xffffffff;
        do {
          uVar7 = uVar15;
          if ((int)uVar15 < (int)uVar13) {
            lVar16 = (plVar9 + (int)uVar15)[-1];
            lVar6 = plVar9[(int)uVar15];
            uVar2 = 0;
            if (*(short *)(lVar16 + 8) != -2) {
              uVar2 = *(ushort *)(lVar16 + 0x28);
            }
            uVar3 = 0;
            if (*(short *)(lVar6 + 8) != -2) {
              uVar3 = *(ushort *)(lVar6 + 0x28);
            }
            if (uVar2 == uVar3) {
              iVar4 = 0;
              if (*(short *)(lVar16 + 8) != -2) {
                iVar4 = *(int *)(lVar16 + 4);
              }
              iVar5 = 0;
              if (*(short *)(lVar6 + 8) != -2) {
                iVar5 = *(int *)(lVar6 + 4);
              }
              uVar10 = 0;
              if (iVar4 < iVar5) {
                uVar10 = 0xffffffff;
              }
            }
            else {
              uVar10 = (uint)uVar3 - (uint)uVar2;
            }
            uVar7 = uVar15 | uVar10 >> 0x1f;
          }
          lVar16 = plVar9[(int)(uVar7 - 1)];
          uVar2 = 0;
          if (*(short *)(lVar11 + 8) != -2) {
            uVar2 = *(ushort *)(lVar11 + 0x28);
          }
          uVar3 = 0;
          if (*(short *)(lVar16 + 8) != -2) {
            uVar3 = *(ushort *)(lVar16 + 0x28);
          }
          uVar10 = (uint)uVar14;
          if (uVar2 == uVar3) {
            iVar4 = 0;
            if (*(short *)(lVar11 + 8) != -2) {
              iVar4 = *(int *)(lVar11 + 4);
            }
            iVar5 = 0;
            if (*(short *)(lVar16 + 8) != -2) {
              iVar5 = *(int *)(lVar16 + 4);
            }
            if (iVar5 <= iVar4) break;
          }
          else if (uVar2 <= uVar3) break;
          plVar9[(int)(uVar10 - 1)] = lVar16;
          uVar15 = uVar7 * 2;
          uVar14 = (ulong)uVar7;
          uVar10 = uVar7;
        } while ((int)uVar15 <= (int)uVar13);
      }
      plVar9[(int)(uVar10 - 1)] = lVar11;
      bVar1 = 1 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar1);
    uVar12 = uVar8 - 1;
    lVar11 = plVar9[uVar12 & 0xffffffff];
    plVar9[uVar12 & 0xffffffff] = *plVar9;
    if (2 < uVar13) {
      do {
        uVar13 = 2;
        uVar15 = 1;
        do {
          if ((int)uVar13 < (int)uVar12) {
            lVar16 = (plVar9 + (int)uVar13)[-1];
            lVar6 = plVar9[(int)uVar13];
            uVar2 = 0;
            if (*(short *)(lVar16 + 8) != -2) {
              uVar2 = *(ushort *)(lVar16 + 0x28);
            }
            uVar3 = 0;
            if (*(short *)(lVar6 + 8) != -2) {
              uVar3 = *(ushort *)(lVar6 + 0x28);
            }
            if (uVar2 == uVar3) {
              iVar4 = 0;
              if (*(short *)(lVar16 + 8) != -2) {
                iVar4 = *(int *)(lVar16 + 4);
              }
              iVar5 = 0;
              if (*(short *)(lVar6 + 8) != -2) {
                iVar5 = *(int *)(lVar6 + 4);
              }
              uVar10 = 0;
              if (iVar4 < iVar5) {
                uVar10 = 0xffffffff;
              }
            }
            else {
              uVar10 = (uint)uVar3 - (uint)uVar2;
            }
            uVar10 = uVar13 | uVar10 >> 0x1f;
          }
          else {
            uVar10 = uVar13;
          }
          lVar16 = plVar9[(int)(uVar10 - 1)];
          uVar2 = 0;
          if (*(short *)(lVar11 + 8) != -2) {
            uVar2 = *(ushort *)(lVar11 + 0x28);
          }
          uVar3 = 0;
          if (*(short *)(lVar16 + 8) != -2) {
            uVar3 = *(ushort *)(lVar16 + 0x28);
          }
          if (uVar2 == uVar3) {
            iVar4 = 0;
            if (*(short *)(lVar11 + 8) != -2) {
              iVar4 = *(int *)(lVar11 + 4);
            }
            iVar5 = 0;
            if (*(short *)(lVar16 + 8) != -2) {
              iVar5 = *(int *)(lVar16 + 4);
            }
            if (iVar5 <= iVar4) break;
          }
          else if (uVar2 <= uVar3) break;
          plVar9[(int)(uVar15 - 1)] = lVar16;
          uVar13 = uVar10 << 1;
          uVar15 = uVar10;
        } while ((long)(int)uVar13 < (long)uVar8);
        plVar9[(int)(uVar15 - 1)] = lVar11;
        uVar8 = uVar12 - 1 & 0xffffffff;
        lVar11 = plVar9[uVar8];
        plVar9[uVar8] = *plVar9;
        bVar1 = 2 < uVar12;
        uVar8 = uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    *plVar9 = lVar11;
  }
  return;
}

