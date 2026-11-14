
void FUN_01888aac(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = DAT_052ab62c;
  fVar9 = (float)((long)(DAT_052ab630 * 11930465.0) & 0xffffffff) * 1.4629181e-09;
  fVar1 = cosf(fVar9);
  fVar2 = sinf(fVar9);
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x300) + 0x2b4));
  fVar9 = fVar9 * 1.4629181e-09 + 3.1415927;
  fVar3 = cosf(fVar9);
  fVar4 = sinf(fVar9);
  fVar10 = *(float *)(param_1 + 0x334);
  fVar7 = *(float *)(param_1 + 0x33c);
  fVar6 = (-(fVar2 * fVar8) + fVar1 * 0.0 + *(float *)(param_1 + 0x338)) -
          *(float *)(param_1 + 0x338);
  fVar9 = *(float *)(param_1 + 0x4d8);
  if (fVar6 <= fVar9) {
    fVar9 = -(fVar6 * fVar6) + fVar9 * (fVar6 + fVar6);
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    fVar5 = *(float *)(param_1 + 0x334);
    fVar9 = -fVar6;
    if (0.0 <= fVar6) {
      fVar9 = fVar6;
    }
    fVar6 = *(float *)(param_1 + 0x33c);
  }
  else {
    fVar6 = fVar7;
    fVar5 = fVar10;
  }
  fVar8 = fVar8 * fVar1 + fVar2 * 0.0;
  fVar5 = fVar5 - (fVar10 + fVar8 * fVar4 + fVar3 * 0.0);
  fVar6 = fVar6 - ((fVar8 * fVar3 - fVar4 * 0.0) + fVar7);
  *(float *)(param_1 + 0x4e4) = fVar9 + SQRT(fVar6 * fVar6 + fVar5 * fVar5);
  return;
}

