
void FUN_015cf564(long param_1,float *param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *(uint *)(param_1 + 0xc00);
  uVar2 = *(uint *)(param_1 + 0xc04);
  lVar6 = (long)(int)(uVar1 * param_4 + param_3);
  if (uVar2 <= param_4 || uVar1 <= param_3) {
    lVar6 = 0;
  }
  if (-1 < (int)param_3) {
    lVar7 = *(long *)(param_1 + 0xc08);
    bVar5 = *(byte *)(lVar7 + lVar6 * 2 + 1);
    if (((((bVar5 & 0xfd) != 0) && (-1 < (int)param_4)) && (iVar3 = *param_5, (int)param_3 < iVar3))
       && ((iVar4 = param_5[1], (int)param_4 < iVar4 && ((int)(param_3 + 1) < iVar3)))) {
      lVar6 = *(long *)(param_5 + 2);
      if (bVar5 == 3) {
        if (param_4 == 0) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = *(float *)(lVar6 + (long)(int)(param_3 + iVar3 * (param_4 - 1)) * 0x3c + 0xc);
        }
      }
      else if (bVar5 == 6) {
        fVar8 = 0.0;
        if ((int)(param_4 + 1) < iVar4) {
          fVar8 = *(float *)(lVar6 + (long)(int)(param_3 + iVar3 * (param_4 + 1)) * 0x3c);
        }
      }
      else {
        fVar8 = *(float *)(lVar6 + (long)(int)(param_3 + 1 + iVar3 * param_4) * 0x3c + 4);
        if (param_3 != 0) {
          lVar6 = (long)(int)(uVar1 * param_4 + (param_3 - 1));
          if (uVar2 <= param_4 || uVar1 <= param_3 - 1) {
            lVar6 = 0;
          }
          if ((*(byte *)(lVar7 + lVar6 * 2 + 1) & 0xfd) == 0) {
            fVar9 = 0.0;
            fVar11 = 0.0;
            if (param_4 != 0) {
              lVar6 = (long)(int)(param_3 + uVar1 * (param_4 - 1));
              if (uVar2 <= param_4 - 1 || uVar1 <= param_3) {
                lVar6 = 0;
              }
              fVar11 = 0.0;
              if ((*(byte *)(lVar7 + lVar6 * 2 + 1) & 0xfd) != 0) {
                fVar11 = 0.5;
              }
            }
            if ((int)param_4 < iVar4 + -1) {
              lVar6 = (long)(int)(param_3 + uVar1 * (param_4 + 1));
              if (uVar2 <= param_4 + 1 || uVar1 <= param_3) {
                lVar6 = 0;
              }
              fVar9 = 0.0;
              if ((*(byte *)(lVar7 + lVar6 * 2 + 1) & 0xfd) != 0) {
                fVar9 = 0.5;
              }
            }
            if (fVar11 + fVar9 == 0.0) {
              return;
            }
            fVar10 = 1.0 / (fVar11 + fVar9);
            *param_2 = *param_2 + fVar10 * fVar8 * fVar11;
            param_2[3] = param_2[3] + fVar10 * fVar8 * fVar9;
            return;
          }
        }
      }
      param_2[1] = fVar8 + param_2[1];
      return;
    }
  }
  return;
}

