
void FUN_01302600(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_4 + 8);
    if ((*(int *)(param_1 + 0x18) <= iVar2) && (iVar2 <= *(int *)(param_1 + 0x28))) {
      iVar3 = *(int *)(param_4 + 0xc);
      if ((*(int *)(param_1 + 0x1c) <= iVar3) && (iVar3 <= *(int *)(param_1 + 0x2c))) {
        fVar16 = (float)iVar2 * 10.0 + 2.5;
        fVar15 = (float)*(int *)(param_1 + 0x18) * 10.0 + 2.5;
        iVar5 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
        fVar16 = (float)iVar3 * 10.0 + 2.5;
        fVar13 = (float)*(int *)(param_1 + 0x1c) * 10.0 + 2.5;
        iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
        fVar15 = (float)*(int *)(param_1 + 0x28) * 10.0 + 10.0 + -2.5;
        fVar14 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 10.0 + -2.5;
        iVar6 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
        iVar7 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
        iVar2 = iVar3;
        if (iVar7 <= iVar3) {
          iVar2 = iVar7;
        }
        iVar8 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
        if (iVar3 <= iVar7) {
          iVar3 = iVar7;
        }
        iVar7 = iVar6;
        if (iVar8 <= iVar6) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) {
          iVar6 = iVar8;
        }
        if ((iVar2 <= iVar5) && (iVar5 <= iVar3)) {
          iVar3 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
          iVar8 = iVar3 - iVar7;
          if ((iVar7 <= iVar3) &&
             (((iVar3 <= iVar6 && (iVar8 < 0x3fffffff)) && (iVar5 - iVar2 < 0x3fffffff)))) {
            uVar4 = (iVar5 - iVar2) * 2;
            iVar2 = iVar8 * 2;
            uVar11 = uVar4 + iVar8 * 0x18;
            uVar10 = 0;
            param_1 = param_1 + 0x30;
            param_2 = param_2 + 8;
            uVar12 = 1;
            do {
              if (iVar2 + uVar10 < 0xc) {
                uVar9 = 5;
                if (uVar4 < 0xc) {
                  lVar1 = param_1 + (ulong)param_3 * 0x240;
                  if (3 < param_3) {
                    lVar1 = param_1;
                  }
                  uVar9 = *(undefined4 *)(lVar1 + (ulong)uVar11 * 4);
                }
                if (uVar10 < 4) {
                  *(undefined4 *)(param_2 + (ulong)(uVar12 - 1) * 4) = uVar9;
                }
                uVar9 = 5;
                if ((uVar4 | 1) < 0xc) {
                  lVar1 = param_1 + (ulong)param_3 * 0x240;
                  if (3 < param_3) {
                    lVar1 = param_1;
                  }
                  uVar9 = *(undefined4 *)(lVar1 + (ulong)(uVar11 + 1) * 4);
                }
                if (uVar10 < 4) {
                  *(undefined4 *)(param_2 + (ulong)uVar12 * 4) = uVar9;
                }
                uVar9 = 5;
                if (uVar4 + 2 < 0xc) {
                  lVar1 = param_1 + (ulong)param_3 * 0x240;
                  if (3 < param_3) {
                    lVar1 = param_1;
                  }
                  uVar9 = *(undefined4 *)(lVar1 + (ulong)(uVar11 + 2) * 4);
                }
                if (uVar10 < 4) {
                  *(undefined4 *)(param_2 + (ulong)(uVar12 + 1) * 4) = uVar9;
                }
                uVar9 = 5;
                if (uVar4 + 3 < 0xc) {
                  lVar1 = param_1 + (ulong)param_3 * 0x240;
                  if (3 < param_3) {
                    lVar1 = param_1;
                  }
                  uVar9 = *(undefined4 *)(lVar1 + (ulong)(uVar11 + 3) * 4);
                }
                if (uVar10 < 4) {
LAB_013027d0:
                  *(undefined4 *)(param_2 + (ulong)(uVar12 + 2) * 4) = uVar9;
                }
              }
              else if (uVar10 < 4) {
                *(undefined4 *)(param_2 + (ulong)uVar12 * 4) = 5;
                *(undefined4 *)(param_2 + (ulong)(uVar12 - 1) * 4) = 5;
                uVar9 = 5;
                *(undefined4 *)(param_2 + (ulong)(uVar12 + 1) * 4) = 5;
                goto LAB_013027d0;
              }
              uVar10 = uVar10 + 1;
              uVar12 = uVar12 + 4;
              uVar11 = uVar11 + 0xc;
            } while ((int)(iVar2 + uVar10) <= iVar2 + 3);
          }
        }
      }
    }
  }
  return;
}

