
void FUN_015d05e0(long param_1,uint *param_2,uint *param_3,int *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar7 = param_3[1];
  iVar8 = param_4[1];
  if (((int)uVar7 <= iVar8) && (iVar10 = *param_4, (int)*param_3 <= iVar10)) {
    do {
      if ((int)*param_3 <= iVar10) {
        uVar5 = uVar7 - 1;
        uVar2 = uVar7 + 1;
        uVar6 = *param_3;
        do {
          uVar9 = uVar6 + 1;
          uVar4 = *(uint *)(param_1 + 0xbb0);
          lVar11 = *(long *)(param_1 + 3000);
          lVar12 = (long)(int)(uVar6 + uVar4 * uVar7);
          if (*(uint *)(param_1 + 0xbb4) <= uVar7 || uVar4 <= uVar6) {
            lVar12 = 0;
          }
          if (*(int *)(lVar11 + lVar12 * 0x50 + 4) == param_5) {
            uVar3 = *param_2;
            lVar13 = (long)(int)(uVar9 + uVar3 * uVar7 + -1);
            if (param_2[1] <= uVar7 || uVar3 <= uVar6) {
              lVar13 = 0;
            }
            iVar8 = *(int *)(*(long *)(param_2 + 2) + lVar13 * 4);
            if ((int)param_3[1] < (int)uVar7) {
              lVar13 = (long)(int)(uVar9 + uVar4 * uVar5 + -1);
              if (*(uint *)(param_1 + 0xbb4) <= uVar5 || uVar4 <= uVar6) {
                lVar13 = 0;
              }
              if (*(int *)(lVar11 + lVar13 * 0x50 + 4) == param_5) {
                lVar13 = (long)(int)(uVar9 + uVar3 * uVar5 + -1);
                if (param_2[1] <= uVar5 || uVar3 <= uVar6) {
                  lVar13 = 0;
                }
                if (*(int *)(*(long *)(param_2 + 2) + lVar13 * 4) < iVar8) {
                  *(undefined4 *)(lVar11 + lVar12 * 0x50 + 0x24) = 0x3e800000;
                }
              }
            }
            if ((int)*param_3 < (int)uVar6) {
              uVar4 = uVar6 - 1;
              lVar13 = (long)(int)(uVar4 + *(uint *)(param_1 + 0xbb0) * uVar7);
              if (*(uint *)(param_1 + 0xbb4) <= uVar7 || *(uint *)(param_1 + 0xbb0) <= uVar4) {
                lVar13 = 0;
              }
              if (*(int *)(*(long *)(param_1 + 3000) + lVar13 * 0x50 + 4) == param_5) {
                lVar13 = (long)(int)(uVar9 + *param_2 * uVar7 + -2);
                if (param_2[1] <= uVar7 || *param_2 <= uVar4) {
                  lVar13 = 0;
                }
                if (*(int *)(*(long *)(param_2 + 2) + lVar13 * 4) < iVar8) {
                  *(undefined4 *)(lVar11 + lVar12 * 0x50 + 0x28) = 0x3e800000;
                }
              }
            }
            if ((int)uVar6 < *param_4) {
              lVar13 = (long)(int)(uVar9 + *(uint *)(param_1 + 0xbb0) * uVar7);
              if (*(uint *)(param_1 + 0xbb4) <= uVar7 || *(uint *)(param_1 + 0xbb0) <= uVar9) {
                lVar13 = 0;
              }
              if (*(int *)(*(long *)(param_1 + 3000) + lVar13 * 0x50 + 4) == param_5) {
                lVar13 = (long)(int)(uVar9 + *param_2 * uVar7);
                if (param_2[1] <= uVar7 || *param_2 <= uVar9) {
                  lVar13 = 0;
                }
                if (*(int *)(*(long *)(param_2 + 2) + lVar13 * 4) < iVar8) {
                  *(undefined4 *)(lVar11 + lVar12 * 0x50 + 0x2c) = 0x3e800000;
                }
              }
            }
            if ((int)uVar7 < param_4[1]) {
              lVar13 = (long)(int)(uVar9 + *(uint *)(param_1 + 0xbb0) * uVar2 + -1);
              if (*(uint *)(param_1 + 0xbb4) <= uVar2 || *(uint *)(param_1 + 0xbb0) <= uVar6) {
                lVar13 = 0;
              }
              if (*(int *)(*(long *)(param_1 + 3000) + lVar13 * 0x50 + 4) == param_5) {
                lVar13 = (long)(int)(uVar9 + *param_2 * uVar2 + -1);
                if (param_2[1] <= uVar2 || *param_2 <= uVar6) {
                  lVar13 = 0;
                }
                if (*(int *)(*(long *)(param_2 + 2) + lVar13 * 4) < iVar8) {
                  *(undefined4 *)(lVar11 + lVar12 * 0x50 + 0x30) = 0x3e800000;
                }
              }
            }
          }
          iVar10 = *param_4;
          bVar1 = (int)uVar6 < iVar10;
          uVar6 = uVar9;
        } while (bVar1);
        iVar8 = param_4[1];
      }
      bVar1 = (int)uVar7 < iVar8;
      uVar7 = uVar7 + 1;
    } while (bVar1);
  }
  return;
}

