
void FUN_02fa0ba0(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  
  uVar7 = *param_1;
  if (1 < (int)uVar7) {
    plVar4 = *(long **)(param_1 + 2);
    uVar5 = (ulong)(uVar7 >> 1);
    do {
      uVar12 = (uint)uVar5 * 2;
      lVar6 = plVar4[uVar5 - 1 & 0xffffffff];
      if ((int)uVar7 < (int)uVar12) {
        uVar10 = (uint)uVar5;
      }
      else {
        uVar8 = uVar5 & 0xffffffff;
        do {
          if ((int)uVar12 < (int)uVar7) {
            lVar13 = (plVar4 + (int)uVar12)[-1];
            lVar9 = plVar4[(int)uVar12];
            iVar2 = 0;
            if (*(short *)(lVar13 + 8) != -2) {
              iVar2 = *(int *)(lVar13 + 4);
            }
            iVar3 = 0;
            if (*(short *)(lVar9 + 8) != -2) {
              iVar3 = *(int *)(lVar9 + 4);
            }
            uVar11 = uVar12 | iVar2 < iVar3;
          }
          else {
            uVar11 = uVar12;
          }
          lVar13 = plVar4[(int)(uVar11 - 1)];
          iVar2 = 0;
          if (*(short *)(lVar6 + 8) != -2) {
            iVar2 = *(int *)(lVar6 + 4);
          }
          iVar3 = 0;
          if (*(short *)(lVar13 + 8) != -2) {
            iVar3 = *(int *)(lVar13 + 4);
          }
          uVar10 = (uint)uVar8;
          if (iVar3 <= iVar2) break;
          plVar4[(int)((uint)uVar8 - 1)] = lVar13;
          uVar12 = uVar11 * 2;
          uVar8 = (ulong)uVar11;
          uVar10 = uVar11;
        } while ((int)uVar12 <= (int)uVar7);
      }
      plVar4[(int)(uVar10 - 1)] = lVar6;
      bVar1 = 1 < (long)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
    uVar8 = (ulong)uVar7 - 1;
    uVar5 = uVar8 & 0xffffffff;
    lVar6 = plVar4[uVar5];
    plVar4[uVar5] = *plVar4;
    uVar5 = (ulong)uVar7;
    if (2 < uVar7) {
      do {
        uVar7 = 2;
        uVar12 = 1;
        do {
          if ((int)uVar7 < (int)uVar8) {
            lVar13 = (plVar4 + (int)uVar7)[-1];
            lVar9 = plVar4[(int)uVar7];
            iVar2 = 0;
            if (*(short *)(lVar13 + 8) != -2) {
              iVar2 = *(int *)(lVar13 + 4);
            }
            iVar3 = 0;
            if (*(short *)(lVar9 + 8) != -2) {
              iVar3 = *(int *)(lVar9 + 4);
            }
            uVar10 = uVar7 | iVar2 < iVar3;
          }
          else {
            uVar10 = uVar7;
          }
          lVar9 = plVar4[(int)(uVar10 - 1)];
          lVar13 = (long)(int)(uVar12 - 1);
          iVar2 = 0;
          if (*(short *)(lVar6 + 8) != -2) {
            iVar2 = *(int *)(lVar6 + 4);
          }
          iVar3 = 0;
          if (*(short *)(lVar9 + 8) != -2) {
            iVar3 = *(int *)(lVar9 + 4);
          }
          if (iVar3 <= iVar2) goto LAB_02fa0cb0;
          plVar4[lVar13] = lVar9;
          uVar7 = uVar10 << 1;
          uVar12 = uVar10;
        } while ((long)(int)uVar7 < (long)uVar5);
        lVar13 = (long)(int)(uVar10 - 1);
LAB_02fa0cb0:
        plVar4[lVar13] = lVar6;
        uVar5 = uVar8 - 1 & 0xffffffff;
        lVar6 = plVar4[uVar5];
        plVar4[uVar5] = *plVar4;
        bVar1 = 2 < uVar8;
        uVar5 = uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
    *plVar4 = lVar6;
  }
  return;
}

