
void FUN_013b9488(long param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((*(byte *)(param_1 + 0x300) >> 2 & 1) != 0) {
    uVar4 = FUN_006f0400(*(float *)(param_1 + 0x3f0) - *(float *)(param_1 + 0x38c),
                         *(float *)(param_1 + 0x3f8) - *(float *)(param_1 + 0x394));
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar4 >> 0x18) * 0x10);
    fVar9 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
    fVar11 = (*pfVar1 + fVar9 * pfVar1[1]) * 0.08;
    fVar10 = (pfVar1[2] + fVar9 * pfVar1[3]) * 0.08;
    fVar12 = *(float *)(param_1 + 0x38c) - *(float *)(param_1 + 0x3f0);
    fVar13 = *(float *)(param_1 + 0x394) - *(float *)(param_1 + 0x3f8);
    fVar9 = fVar11 * 0.5;
    fVar3 = fVar10 * 0.5;
    if (SQRT(fVar13 * fVar13 + fVar12 * fVar12) <= 3.0) {
      fVar9 = fVar11;
      fVar3 = fVar10;
    }
    iVar6 = (int)((float)(int)(uVar4 - *(int *)(param_1 + 0x39c)) * 0.5);
    iVar8 = 0x7fffffff;
    if (iVar6 < 1) {
      iVar8 = 0;
    }
    iVar7 = 0;
    if (iVar6 < 1) {
      iVar7 = -0x7fffffff;
    }
    iVar2 = iVar6;
    if (iVar8 <= iVar6) {
      iVar2 = iVar8;
    }
    if (iVar7 <= iVar6) {
      iVar7 = iVar2;
    }
    *(int *)(param_1 + 0x39c) = iVar7 + *(int *)(param_1 + 0x39c);
    plVar5 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
    (**(code **)(*plVar5 + 0x160))(plVar5,param_1 + 0x39c);
    *(float *)(param_1 + 0x38c) = *(float *)(param_1 + 0x38c) - fVar9;
    *(float *)(param_1 + 0x394) = *(float *)(param_1 + 0x394) - fVar3;
  }
  return;
}

