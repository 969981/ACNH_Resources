
void FUN_015cf3c0(long param_1,float *param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *(uint *)(param_1 + 0xc00);
  iVar5 = uVar1 * param_4;
  uVar2 = *(uint *)(param_1 + 0xc04);
  lVar6 = (long)(int)(iVar5 + param_3);
  if (uVar2 <= param_4 || uVar1 <= param_3) {
    lVar6 = 0;
  }
  if (-1 < (int)param_3) {
    lVar7 = *(long *)(param_1 + 0xc08);
    bVar4 = *(byte *)(lVar7 + lVar6 * 2 + 1);
    if (((((bVar4 & 0xfd) != 0) && (-1 < (int)param_4)) && (iVar3 = *param_5, (int)param_3 < iVar3))
       && (((int)param_4 < param_5[1] && ((int)(param_4 + 1) < param_5[1])))) {
      lVar6 = *(long *)(param_5 + 2);
      if (bVar4 == 3) {
        if (param_3 == 0) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = *(float *)(lVar6 + (long)(int)(param_3 + iVar3 * param_4 + -1) * 0x3c + 8);
        }
      }
      else if (bVar4 == 4) {
        fVar8 = 0.0;
        if ((int)(param_3 + 1) < iVar3) {
          fVar8 = *(float *)(lVar6 + (long)(int)(param_3 + 1 + iVar3 * param_4) * 0x3c + 4);
        }
      }
      else {
        fVar8 = *(float *)(lVar6 + (long)(int)(param_3 + iVar3 * (param_4 + 1)) * 0x3c);
        if (param_4 != 0) {
          lVar6 = (long)(int)(param_3 + uVar1 * (param_4 - 1));
          if (uVar2 <= param_4 - 1 || uVar1 <= param_3) {
            lVar6 = 0;
          }
          if ((*(byte *)(lVar7 + lVar6 * 2 + 1) & 0xfd) == 0) {
            fVar9 = 0.0;
            fVar11 = 0.0;
            if (param_3 != 0) {
              lVar6 = (long)(int)(iVar5 + (param_3 - 1));
              if (uVar2 <= param_4 || uVar1 <= param_3 - 1) {
                lVar6 = 0;
              }
              fVar11 = 0.0;
              if ((*(byte *)(lVar7 + lVar6 * 2 + 1) & 0xfd) != 0) {
                fVar11 = 0.5;
              }
            }
            if ((int)param_3 < iVar3 + -1) {
              lVar6 = (long)(int)(iVar5 + param_3 + 1);
              if (uVar2 <= param_4 || uVar1 <= param_3 + 1) {
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
            param_2[1] = param_2[1] + fVar10 * fVar8 * fVar11;
            param_2[2] = param_2[2] + fVar10 * fVar8 * fVar9;
            return;
          }
        }
      }
      *param_2 = fVar8 + *param_2;
      return;
    }
  }
  return;
}

