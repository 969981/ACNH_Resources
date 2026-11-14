
void FUN_015cf8c4(long param_1,long param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *(uint *)(param_1 + 0xc00);
  iVar8 = uVar2 * param_4;
  uVar3 = *(uint *)(param_1 + 0xc04);
  lVar9 = (long)(int)(iVar8 + param_3);
  if (uVar3 <= param_4 || uVar2 <= param_3) {
    lVar9 = 0;
  }
  if (-1 < (int)param_3) {
    lVar10 = *(long *)(param_1 + 0xc08);
    bVar6 = *(byte *)(lVar10 + lVar9 * 2 + 1);
    if (((((bVar6 & 0xfd) != 0) && (-1 < (int)param_4)) && (iVar4 = *param_5, (int)param_3 < iVar4))
       && ((param_4 != 0 && (uVar5 = param_5[1], (int)param_4 < (int)uVar5)))) {
      lVar9 = *(long *)(param_5 + 2);
      iVar7 = param_3 + iVar4 * (param_4 - 1);
      if (uVar5 <= param_4 - 1) {
        iVar7 = 0;
      }
      if (bVar6 == 5) {
        fVar11 = 0.0;
        if ((int)(param_3 + 1) < iVar4) {
          fVar11 = *(float *)(lVar9 + (long)(int)(param_3 + 1 + iVar4 * param_4) * 0x3c + 4);
        }
      }
      else if (bVar6 == 6) {
        if (param_3 == 0) {
          fVar11 = 0.0;
        }
        else {
          fVar11 = *(float *)(lVar9 + (long)(int)(param_3 + iVar4 * param_4 + -1) * 0x3c + 8);
        }
      }
      else {
        fVar11 = *(float *)(lVar9 + (long)iVar7 * 0x3c + 0xc);
        uVar1 = param_4 + 1;
        if ((int)uVar1 < (int)uVar5) {
          lVar9 = (long)(int)(param_3 + uVar2 * uVar1);
          if (uVar3 <= uVar1 || uVar2 <= param_3) {
            lVar9 = 0;
          }
          if ((*(byte *)(lVar10 + lVar9 * 2 + 1) & 0xfd) == 0) {
            fVar12 = 0.0;
            fVar14 = 0.0;
            if (param_3 != 0) {
              lVar9 = (long)(int)(iVar8 + (param_3 - 1));
              if (uVar3 <= param_4 || uVar2 <= param_3 - 1) {
                lVar9 = 0;
              }
              fVar14 = 0.0;
              if ((*(byte *)(lVar10 + lVar9 * 2 + 1) & 0xfd) != 0) {
                fVar14 = 0.5;
              }
            }
            if ((int)param_3 < iVar4 + -1) {
              lVar9 = (long)(int)(iVar8 + param_3 + 1);
              if (uVar3 <= param_4 || uVar2 <= param_3 + 1) {
                lVar9 = 0;
              }
              fVar12 = 0.0;
              if ((*(byte *)(lVar10 + lVar9 * 2 + 1) & 0xfd) != 0) {
                fVar12 = 0.5;
              }
            }
            if (fVar14 + fVar12 == 0.0) {
              return;
            }
            fVar13 = 1.0 / (fVar14 + fVar12);
            *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + fVar13 * fVar11 * fVar14;
            *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar13 * fVar11 * fVar12;
            return;
          }
        }
      }
      *(float *)(param_2 + 0xc) = fVar11 + *(float *)(param_2 + 0xc);
      return;
    }
  }
  return;
}

