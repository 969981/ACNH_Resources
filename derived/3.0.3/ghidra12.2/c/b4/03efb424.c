
bool FUN_03efb424(float *param_1,long param_2,float *param_3)

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
  float local_3c;
  float local_38;
  float fStack_34;
  
  FUN_03ef4a78(&local_3c);
  fVar3 = param_3[1];
  fVar11 = param_3[2];
  fVar8 = *param_3;
  fVar6 = fVar3 * local_38 + local_3c * fVar8 + fStack_34 * fVar11 + 1.0;
  if (1.1920929e-06 < fVar6) {
    fVar4 = SQRT(fVar6 + fVar6);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar6 + fVar6);
    }
    fVar5 = 1.0 / fVar4;
    fVar4 = fVar4 * 0.5;
    uVar1 = (ulong)(*(float *)(param_2 + 8) * 6.8356525e+08);
    fVar10 = (-(fVar11 * local_38) + fStack_34 * fVar3) * fVar5;
    fVar9 = (-(fVar8 * fStack_34) + local_3c * fVar11) * fVar5;
    fVar5 = (-(fVar3 * local_3c) + local_38 * fVar8) * fVar5;
    uVar2 = uVar1 >> 0x19 & 0x7f;
    fVar3 = (float)((uint)uVar1 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar8 = (float)(&DAT_04199798)[uVar2 * 4] + fVar3 * (float)(&DAT_0419979c)[uVar2 * 4];
    fVar12 = (float)(&DAT_041997a0)[uVar2 * 4] + fVar3 * (float)(&DAT_041997a4)[uVar2 * 4];
    fVar14 = param_3[1] * fVar8;
    fVar13 = *param_3 * fVar8;
    fVar8 = param_3[2] * fVar8;
    fVar11 = ((-(fVar10 * fVar13) + fVar12 * fVar4) - fVar14 * fVar9) - fVar8 * fVar5;
    fVar7 = (fVar10 * fVar12 + fVar13 * fVar4 + fVar8 * fVar9) - fVar14 * fVar5;
    fVar3 = -(fVar10 * fVar8) + fVar14 * fVar4 + fVar12 * fVar9 + fVar13 * fVar5;
    fVar8 = ((fVar10 * fVar14 + fVar8 * fVar4) - fVar13 * fVar9) + fVar12 * fVar5;
  }
  else {
    if ((((fVar3 < -1.1920929e-06) || (1.1920929e-06 < fVar3)) &&
        (fVar3 = (fVar8 * fVar8) / (fVar3 * fVar3), fVar3 = fVar3 * (1.0 / (fVar3 + 1.0)),
        fVar3 < 0.0)) && (NAN(SQRT(fVar3)))) {
      sqrtf(fVar3);
    }
    fVar7 = 0.0;
    fVar11 = 1.0;
    fVar3 = 0.0;
    fVar8 = 0.0;
  }
  *param_1 = fVar7;
  param_1[1] = fVar3;
  param_1[2] = fVar8;
  param_1[3] = fVar11;
  return 1.1920929e-06 < fVar6;
}

