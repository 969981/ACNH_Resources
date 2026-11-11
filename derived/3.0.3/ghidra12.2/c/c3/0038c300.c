
float FUN_0038c300(float param_1,float *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_3 == 1) || (param_1 <= *param_2)) {
    return param_2[1];
  }
  uVar4 = (long)param_3 - 1;
  if (param_2[uVar4 * 3] <= param_1) {
    return param_2[uVar4 * 3 + 1];
  }
  if (param_3 - 3U < 0xfffffffe) {
    uVar7 = 0;
    uVar5 = uVar4 & 0xffffffff;
    do {
      iVar1 = uVar7 + (int)uVar5;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = iVar1 >> 1;
      if (param_1 <= param_2[(long)(int)uVar2 * 3]) {
        uVar5 = (ulong)uVar2;
      }
      else {
        uVar7 = uVar2;
      }
    } while ((uVar7 != (uint)uVar5 - 1) && (uVar7 != (uint)uVar5));
  }
  else {
    uVar7 = 0;
    uVar5 = uVar4 & 0xffffffff;
  }
  fVar8 = param_2[uVar5 * 3];
  fVar9 = param_1 - fVar8;
  bVar3 = false;
  if ((-0.001 < fVar9) && (bVar3 = false, !NAN(fVar9))) {
    bVar3 = fVar9 < 0.001;
  }
  if (bVar3) {
    if (((uint)uVar5 < (uint)uVar4) && (uVar7 = (uint)uVar5 + 1, fVar8 == param_2[(ulong)uVar7 * 3])
       ) {
      return param_2[(ulong)uVar7 * 3 + 1];
    }
    return param_2[uVar5 * 3 + 1];
  }
  pfVar6 = param_2 + (ulong)uVar7 * 3;
  param_1 = param_1 - *pfVar6;
  fVar8 = 1.0 / (fVar8 - *pfVar6);
  fVar9 = param_1 * param_1 * fVar8;
  fVar11 = param_1 * fVar8 * fVar9;
  fVar10 = fVar8 * fVar9 * 3.0;
  return param_2[uVar5 * 3 + 1] * (fVar10 + fVar8 * fVar11 * -2.0) +
         ((fVar8 * fVar11 * 2.0 - fVar10) + 1.0) * pfVar6[1] +
         (param_1 + fVar11 + fVar9 * -2.0) * pfVar6[2] + (fVar11 - fVar9) * param_2[uVar5 * 3 + 2];
}

