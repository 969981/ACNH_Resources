
void FUN_01302290(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar2 = *(int *)(param_4 + 8);
  if (*(int *)(param_1 + 0x18) <= iVar2 && iVar2 <= *(int *)(param_1 + 0x28)) {
    iVar8 = *(int *)(param_4 + 0xc);
    if ((*(int *)(param_1 + 0x1c) <= iVar8) && (iVar8 <= *(int *)(param_1 + 0x2c))) {
      fVar15 = (float)iVar2 * 10.0 + 2.5;
      fVar14 = (float)*(int *)(param_1 + 0x18) * 10.0 + 2.5;
      iVar4 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      fVar15 = (float)iVar8 * 10.0 + 2.5;
      fVar12 = (float)*(int *)(param_1 + 0x1c) * 10.0 + 2.5;
      iVar8 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      fVar14 = (float)*(int *)(param_1 + 0x28) * 10.0 + 10.0 + -2.5;
      fVar13 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 10.0 + -2.5;
      iVar5 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iVar6 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      iVar2 = iVar8;
      if (iVar6 <= iVar8) {
        iVar2 = iVar6;
      }
      iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
      if (iVar8 <= iVar6) {
        iVar8 = iVar6;
      }
      iVar6 = iVar5;
      if (iVar7 <= iVar5) {
        iVar6 = iVar7;
      }
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
      }
      if ((iVar2 <= iVar4) && (iVar4 <= iVar8)) {
        iVar8 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
        iVar7 = iVar8 - iVar6;
        if ((iVar6 <= iVar8) &&
           (((iVar8 <= iVar5 && (iVar7 < 0x3fffffff)) && (iVar4 - iVar2 < 0x3fffffff)))) {
          uVar3 = (iVar4 - iVar2) * 2;
          iVar2 = iVar7 * 2;
          uVar9 = 0;
          param_1 = param_1 + 0x30;
          param_2 = param_2 + 8;
          uVar11 = 3;
          uVar10 = uVar3 + iVar7 * 0x18 + 3;
          do {
            if (uVar9 < 4) {
              iVar8 = *(int *)(param_2 + (ulong)(uVar11 - 3) * 4);
            }
            else {
              iVar8 = 5;
            }
            if (iVar2 + uVar9 < 0xc) {
              if ((iVar8 != 5) && (uVar3 < 0xc)) {
                lVar1 = param_1 + (ulong)param_3 * 0x240;
                if (3 < param_3) {
                  lVar1 = param_1;
                }
                *(int *)(lVar1 + (ulong)(uVar10 - 3) * 4) = iVar8;
              }
              iVar8 = 5;
              if (uVar9 < 4) {
                iVar8 = *(int *)(param_2 + (ulong)(uVar11 - 2) * 4);
              }
              if ((iVar8 != 5) && ((uVar3 | 1) < 0xc)) {
                lVar1 = param_1 + (ulong)param_3 * 0x240;
                if (3 < param_3) {
                  lVar1 = param_1;
                }
                *(int *)(lVar1 + (ulong)(uVar10 - 2) * 4) = iVar8;
              }
              iVar8 = 5;
              if (uVar9 < 4) {
                iVar8 = *(int *)(param_2 + (ulong)(uVar11 - 1) * 4);
              }
              if ((iVar8 != 5) && (uVar3 + 2 < 0xc)) {
                lVar1 = param_1 + (ulong)param_3 * 0x240;
                if (3 < param_3) {
                  lVar1 = param_1;
                }
                *(int *)(lVar1 + (ulong)(uVar10 - 1) * 4) = iVar8;
              }
              iVar8 = 5;
              if (uVar9 < 4) {
                iVar8 = *(int *)(param_2 + (ulong)uVar11 * 4);
              }
              if ((iVar8 != 5) && (uVar3 + 3 < 0xc)) {
                lVar1 = param_1 + (ulong)param_3 * 0x240;
                if (3 < param_3) {
                  lVar1 = param_1;
                }
                *(int *)(lVar1 + (ulong)uVar10 * 4) = iVar8;
              }
            }
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 + 0xc;
            uVar11 = uVar11 + 4;
          } while ((int)(iVar2 + uVar9) <= iVar2 + 3);
        }
      }
    }
  }
  return;
}

