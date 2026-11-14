
void FUN_015ce76c(long param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar9 = (float *)(*(long *)(param_4 + 2) + (long)(int)(param_2 + *param_4 * param_3) * 0x3c);
  if (param_4[1] <= param_3 || *param_4 <= param_2) {
    pfVar9 = (float *)0x0;
  }
  lVar10 = *(long *)(param_1 + 0xd98);
  fVar11 = (float)*(int *)(lVar10 + 0x10) * 0.5;
  uVar8 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar8 = (uint)(fVar11 < 0.0);
  }
  iVar3 = (int)fVar11 - uVar8;
  fVar11 = (float)*(int *)(lVar10 + 0x14) * 0.5;
  uVar8 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar8 = (uint)(fVar11 < 0.0);
  }
  iVar4 = (int)fVar11 - uVar8;
  fVar11 = (float)*(int *)(lVar10 + 0x20) * 0.5;
  uVar8 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar8 = (uint)(fVar11 < 0.0);
  }
  iVar5 = (int)fVar11 - uVar8;
  fVar11 = (float)*(int *)(lVar10 + 0x24) * 0.5;
  uVar8 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar8 = (uint)(fVar11 < 0.0);
  }
  iVar6 = (int)fVar11 - uVar8;
  iVar1 = iVar3;
  if (iVar5 <= iVar3) {
    iVar1 = iVar5;
  }
  iVar2 = iVar4;
  if (iVar6 <= iVar4) {
    iVar2 = iVar6;
  }
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  iVar1 = iVar1 + param_2;
  iVar2 = iVar2 + param_3;
  if (iVar1 < 0x20) {
    pfVar9[1] = (float)iVar1 * -0.03125 + 1.0;
  }
  else {
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    if (iVar3 - iVar1 < 0x20) {
      pfVar9[2] = (float)(iVar3 - iVar1) * -0.03125 + 1.0;
    }
  }
  if (iVar2 < 0x20) {
    *pfVar9 = (float)iVar2 * -0.03125 + 1.0;
  }
  else if (iVar4 - iVar2 < 0x20) {
    pfVar9[3] = (float)(iVar4 - iVar2) * -0.03125 + 1.0;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0xbe0) + 0xf0))(lVar10 + 0xbe0);
  fVar11 = *pfVar9;
  fVar12 = pfVar9[1];
  fVar13 = *pfVar7;
  fVar14 = pfVar9[2];
  fVar15 = pfVar9[3];
  *pfVar9 = fVar13 * fVar11;
  pfVar9[1] = fVar13 * fVar12;
  pfVar9[2] = fVar13 * fVar14;
  pfVar9[3] = fVar13 * fVar15;
  pfVar9[4] = fVar13 * fVar11;
  pfVar9[5] = fVar13 * fVar12;
  pfVar9[6] = fVar13 * fVar14;
  pfVar9[7] = fVar13 * fVar15;
  return;
}

