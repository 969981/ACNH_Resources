
void FUN_015cf710(long param_1,float *param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = *(uint *)(param_1 + 0xc00);
  uVar3 = *(uint *)(param_1 + 0xc04);
  lVar8 = (long)(int)(uVar2 * param_4 + param_3);
  if (uVar3 <= param_4 || uVar2 <= param_3) {
    lVar8 = 0;
  }
  if (-1 < (int)param_3) {
    lVar9 = *(long *)(param_1 + 0xc08);
    bVar6 = *(byte *)(lVar9 + lVar8 * 2 + 1);
    if (((((bVar6 & 0xfd) != 0) && (-1 < (int)param_4)) &&
        (uVar4 = *param_5, (int)param_3 < (int)uVar4)) &&
       ((param_3 != 0 && (uVar5 = param_5[1], (int)param_4 < (int)uVar5)))) {
      lVar8 = *(long *)(param_5 + 2);
      iVar7 = (param_3 - 1) + uVar4 * param_4;
      if (uVar4 <= param_3 - 1) {
        iVar7 = 0;
      }
      if (bVar6 == 4) {
        if (param_4 == 0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = *(float *)(lVar8 + (long)(int)(param_3 + uVar4 * (param_4 - 1)) * 0x3c + 0xc);
        }
      }
      else if (bVar6 == 5) {
        fVar10 = 0.0;
        if ((int)(param_4 + 1) < (int)uVar5) {
          fVar10 = *(float *)(lVar8 + (long)(int)(param_3 + uVar4 * (param_4 + 1)) * 0x3c);
        }
      }
      else {
        fVar10 = *(float *)(lVar8 + (long)iVar7 * 0x3c + 8);
        uVar1 = param_3 + 1;
        if ((int)uVar1 < (int)uVar4) {
          lVar8 = (long)(int)(uVar2 * param_4 + uVar1);
          if (uVar3 <= param_4 || uVar2 <= uVar1) {
            lVar8 = 0;
          }
          if ((*(byte *)(lVar9 + lVar8 * 2 + 1) & 0xfd) == 0) {
            fVar11 = 0.0;
            fVar13 = 0.0;
            if (param_4 != 0) {
              lVar8 = (long)(int)(param_3 + uVar2 * (param_4 - 1));
              if (uVar3 <= param_4 - 1 || uVar2 <= param_3) {
                lVar8 = 0;
              }
              fVar13 = 0.0;
              if ((*(byte *)(lVar9 + lVar8 * 2 + 1) & 0xfd) != 0) {
                fVar13 = 0.5;
              }
            }
            if ((int)param_4 < (int)(uVar5 - 1)) {
              lVar8 = (long)(int)(param_3 + uVar2 * (param_4 + 1));
              if (uVar3 <= param_4 + 1 || uVar2 <= param_3) {
                lVar8 = 0;
              }
              fVar11 = 0.0;
              if ((*(byte *)(lVar9 + lVar8 * 2 + 1) & 0xfd) != 0) {
                fVar11 = 0.5;
              }
            }
            if (fVar13 + fVar11 == 0.0) {
              return;
            }
            fVar12 = 1.0 / (fVar13 + fVar11);
            *param_2 = *param_2 + fVar12 * fVar10 * fVar13;
            param_2[3] = param_2[3] + fVar12 * fVar10 * fVar11;
            return;
          }
        }
      }
      param_2[2] = fVar10 + param_2[2];
      return;
    }
  }
  return;
}

