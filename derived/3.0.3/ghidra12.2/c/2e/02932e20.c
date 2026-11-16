
undefined8 FUN_02932e20(long param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar4 = param_2[1] - *(float *)(param_1 + 0x10);
  fVar3 = *param_2 - *(float *)(param_1 + 0xc);
  fVar5 = param_2[2] - *(float *)(param_1 + 0x14);
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x20));
  uVar1 = (ulong)((360.0 - fVar6) * 11930465.0);
  uVar2 = uVar1 >> 0x19 & 0x7f;
  fVar6 = (float)((uint)uVar1 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar12 = (float)(&DAT_04199798)[uVar2 * 4] + fVar6 * (float)(&DAT_0419979c)[uVar2 * 4];
  fVar10 = (float)(&DAT_041997a0)[uVar2 * 4] + fVar6 * (float)(&DAT_041997a4)[uVar2 * 4];
  fVar7 = fVar12 * 0.0;
  fVar10 = fVar10 + fVar10;
  fVar8 = fVar12 * (fVar12 + fVar12);
  fVar9 = fVar7 * (fVar7 + fVar7);
  fVar11 = fVar10 * fVar7;
  fVar10 = fVar12 * fVar10;
  fVar14 = fVar10 + fVar9;
  fVar6 = fVar4 * (fVar12 * (fVar7 + fVar7) - fVar11) + fVar3 * ((1.0 - fVar8) - fVar9);
  fVar13 = fVar6 + fVar5 * fVar14;
  fVar6 = -(fVar14 * fVar5) - fVar6;
  if (0.0 <= fVar13) {
    fVar6 = fVar13;
  }
  if (fVar6 < *(float *)(param_1 + 0x18) * 0.5) {
    fVar8 = (1.0 - fVar9) - fVar8;
    fVar6 = fVar4 * (fVar11 + (fVar12 + fVar12) * fVar7) + fVar3 * (fVar9 - fVar10);
    fVar3 = fVar6 + fVar5 * fVar8;
    fVar6 = -(fVar8 * fVar5) - fVar6;
    if (0.0 <= fVar3) {
      fVar6 = fVar3;
    }
    if (fVar6 < *(float *)(param_1 + 0x1c) * 0.5) {
      return 1;
    }
  }
  return 0;
}

