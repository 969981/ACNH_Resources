
void FUN_01511978(float *param_1,long param_2,float *param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2a0) + 0xf0))(lVar3 + 0x2a0);
  fVar10 = *param_3;
  fVar5 = *pfVar4;
  *param_1 = fVar10;
  fVar5 = fVar5 * 0.98;
  param_1[1] = param_3[1];
  fVar11 = param_3[2];
  param_1[2] = fVar11;
  uVar2 = *param_4 + 0x20000000U >> 0x1e;
  fVar6 = (float)*(int *)(param_2 + 0x10) * 5.0;
  fVar7 = (float)*(int *)(param_2 + 0x14) * 5.0;
  fVar8 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0;
  fVar9 = (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0;
  if ((uVar2 | 2) == 2) {
    iVar1 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x10)) + 1;
    if (iVar1 < 3) {
      *param_1 = fVar6 + (float)iVar1 * 5.0 * 0.5;
    }
    else {
      fVar8 = fVar8 + -5.0;
      if (fVar10 <= fVar8) {
        fVar8 = fVar10;
      }
      fVar11 = fVar6 + 5.0;
      if (fVar6 + 5.0 <= fVar10) {
        fVar11 = fVar8;
      }
      *param_1 = fVar11;
    }
    if (((param_5 & 1) == 0) && ((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x10)) + 1 < 2)) {
      if (uVar2 == 2) {
        param_1[2] = (fVar7 - fVar5) + -0.09;
      }
      else {
        param_1[2] = fVar5 + fVar9;
      }
    }
  }
  else {
    iVar1 = (*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x14)) + 1;
    if (iVar1 < 3) {
      param_1[2] = fVar7 + (float)iVar1 * 5.0 * 0.5;
    }
    else {
      fVar9 = fVar9 + -5.0;
      if (fVar11 <= fVar9) {
        fVar9 = fVar11;
      }
      fVar10 = fVar7 + 5.0;
      if (fVar7 + 5.0 <= fVar11) {
        fVar10 = fVar9;
      }
      param_1[2] = fVar10;
    }
    if (((param_5 & 1) == 0) && ((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x14)) + 1 < 2)) {
      if (uVar2 == 3) {
        fVar5 = (fVar6 - fVar5) + -0.09;
      }
      else {
        fVar5 = fVar5 + fVar8;
      }
      *param_1 = fVar5;
    }
  }
  return;
}

