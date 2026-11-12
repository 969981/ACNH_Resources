
float FUN_006f0ab0(float *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = 0.0;
  if (param_1[1] <= 0.99) {
    uVar5 = FUN_006f0400(*param_1,param_1[2]);
    uVar3 = *param_2;
    uVar2 = uVar3 - uVar5;
    if (uVar3 <= uVar5) {
      uVar2 = uVar5 - uVar3;
    }
    uVar1 = -uVar2;
    if (uVar2 < 0x80000001) {
      uVar1 = uVar2;
    }
    uVar2 = 0;
    if (uVar3 != uVar5) {
      uVar2 = uVar1;
    }
    fVar6 = *(float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10 + 8) +
            *(float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10 + 0xc) *
            (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    fVar10 = param_1[2];
    fVar4 = -fVar6;
    if (0.0 <= fVar6) {
      fVar4 = fVar6;
    }
    fVar6 = *param_1;
    fVar8 = param_1[1];
    fVar11 = fVar8 * 0.0 - fVar10;
    fVar9 = fVar6 * -0.0 + fVar10 * 0.0;
    fVar7 = fVar6 + fVar8 * -0.0;
    fVar7 = atan2f(SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar7 * fVar7),
                   fVar8 + fVar6 * 0.0 + fVar10 * 0.0);
    fVar6 = (float)uVar2 * 8.381903e-08;
    fVar10 = -((float)uVar2 * 8.381903e-08);
    if (0.0 <= fVar6) {
      fVar10 = fVar6;
    }
    fVar6 = -(fVar4 * fVar7 * 57.295776);
    if (fVar10 <= 90.0) {
      fVar6 = fVar4 * fVar7 * 57.295776;
    }
  }
  return fVar6;
}

