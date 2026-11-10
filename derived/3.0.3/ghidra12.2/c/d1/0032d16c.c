
void FUN_0032d16c(float param_1,undefined8 param_2,float *param_3,long param_4,long param_5,
                 int param_6)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong local_78;
  undefined4 local_70;
  float local_6c [3];
  undefined1 local_54 [4];
  
  puVar1 = PTR_FloatPi_04bcedc8;
  fVar11 = *(float *)(param_4 + 0x48);
  lVar3 = (long)param_6;
  pfVar2 = *(float **)(*(long *)(param_4 + 0x240) + 0x260);
  fVar12 = *(float *)(*(long *)(param_5 + 0x18) + (long)param_6 * 0x10 + 0xc);
  pfVar4 = pfVar2;
  if (pfVar2[3] == 0.0) {
    local_6c[0] = *pfVar2;
    if (pfVar2[0x29] == 0.0) goto LAB_0032d224;
LAB_0032d2a0:
    fVar5 = pfVar4[0x2c];
    if (fVar5 == 0.0) {
      local_78 = 0;
    }
    else {
      if (pfVar4[0x2a] == 0.0) {
        param_1 = param_1 / *(float *)(*(long *)(param_4 + 0xb0) + lVar3 * 0x20 + 0xc);
      }
      else {
        fVar5 = (float)NEON_ucvtf(pfVar4[0x2b]);
        param_1 = fmodf(param_1 + (float)(int)pfVar4[0x2d] *
                                  *(float *)(*(long *)(param_4 + 0x1f0) + lVar3 * 0x10) * fVar5,
                        (float)(int)pfVar4[0x2d]);
        fVar5 = pfVar4[0x2c];
        param_1 = param_1 / (float)(int)pfVar4[0x2d];
      }
      local_54[0] = 0;
      local_70 = 0;
      local_78 = 0;
      FUN_0032c0c0(param_1,&local_78,local_54,pfVar4 + 0x2f,fVar5,pfVar4[0x2e]);
    }
  }
  else {
    fVar5 = pfVar2[6];
    if (fVar5 == 0.0) {
      local_6c[1] = 0.0;
      local_6c[2] = 0.0;
      local_6c[0] = 0.0;
    }
    else {
      if (pfVar2[4] == 0.0) {
        fVar6 = param_1 / *(float *)(*(long *)(param_4 + 0xb0) + lVar3 * 0x20 + 0xc);
      }
      else {
        fVar5 = (float)NEON_ucvtf(pfVar2[5]);
        fVar6 = fmodf(param_1 + (float)(int)pfVar2[7] *
                                *(float *)(*(long *)(param_4 + 0x1f0) + lVar3 * 0x10) * fVar5,
                      (float)(int)pfVar2[7]);
        fVar5 = pfVar2[6];
        fVar6 = fVar6 / (float)(int)pfVar2[7];
      }
      local_78 = local_78 & 0xffffffffffffff00;
      local_6c[2] = 0.0;
      local_6c[0] = 0.0;
      local_6c[1] = 0.0;
      FUN_0032c0c0(fVar6,local_6c,&local_78,pfVar2 + 9,fVar5,pfVar2[8]);
      pfVar4 = *(float **)(*(long *)(param_4 + 0x240) + 0x260);
    }
    local_6c[0] = local_6c[0] * (*(float *)puVar1 / *(float *)PTR_FloatDegree180_04bcedf8);
    if (pfVar4[0x29] != 0.0) goto LAB_0032d2a0;
LAB_0032d224:
    local_78 = (ulong)(uint)pfVar2[2];
  }
  fVar5 = fVar11 * fVar12 * local_6c[0];
  fVar5 = fVar5 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar5) *
                  *(float *)PTR_Float2Pi_04bcede0;
  if (fVar5 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
    if (-*(float *)PTR_FloatPiDivided2_04bcedc0 <= fVar5) {
      fVar6 = 1.0;
      goto LAB_0032d398;
    }
    fVar6 = -*(float *)puVar1;
  }
  else {
    fVar6 = *(float *)puVar1;
  }
  fVar5 = fVar6 - fVar5;
  fVar6 = -1.0;
LAB_0032d398:
  fVar8 = fVar5 * fVar5;
  fVar5 = fVar5 * (fVar8 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 0xc) +
                            fVar8 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 4) -
                                     fVar8 * *(float *)PTR_SinCoefficients_04bcede8) * fVar8 -
                                    *(float *)(PTR_SinCoefficients_04bcede8 + 8))) * fVar8 -
                           *(float *)(PTR_SinCoefficients_04bcede8 + 0x10)) + 1.0);
  fVar9 = pfVar2[1];
  fVar6 = fVar6 * (fVar8 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 0xc) +
                            fVar8 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 4) -
                                     fVar8 * *(float *)PTR_CosCoefficients_04bcedf0) * fVar8 -
                                    *(float *)(PTR_CosCoefficients_04bcedf0 + 8))) * fVar8 -
                           *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10)) + 1.0);
  if (fVar9 == 2.8026e-45) {
    fVar10 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar8 = (float)*(undefined8 *)param_3;
    fVar9 = fVar5 * fVar10 + fVar6 * fVar8;
    fVar5 = fVar6 * fVar10 - fVar5 * fVar8;
    *param_3 = fVar9;
    param_3[1] = fVar5;
    if (((float)local_78 != 0.0) && (fVar6 = fVar5 * fVar5 + fVar9 * fVar9, 0.0 < fVar6)) {
      uVar7 = *(undefined8 *)param_3;
      fVar11 = fVar11 * fVar12 * (float)local_78 * (1.0 / SQRT(fVar6));
      *param_3 = (float)uVar7 + fVar11 * fVar9;
      param_3[1] = (float)((ulong)uVar7 >> 0x20) + fVar11 * fVar5;
    }
  }
  else if (fVar9 == 1.4013e-45) {
    fVar8 = (float)*(undefined8 *)param_3;
    fVar9 = fVar5 * fVar8 + fVar6 * param_3[2];
    fVar5 = fVar6 * fVar8 - fVar5 * param_3[2];
    *(ulong *)(param_3 + 2) = (ulong)(uint)fVar9;
    *(undefined8 *)param_3 = *(undefined8 *)param_3;
    *param_3 = fVar5;
    if (((float)local_78 != 0.0) && (fVar6 = fVar5 * fVar5 + fVar9 * fVar9, 0.0 < fVar6)) {
      fVar11 = fVar11 * fVar12 * (float)local_78 * (1.0 / SQRT(fVar6));
      uVar7 = *(undefined8 *)param_3;
      *(ulong *)(param_3 + 2) = (ulong)(uint)(fVar9 + fVar11 * fVar9);
      *(undefined8 *)param_3 = uVar7;
      *param_3 = (float)uVar7 + fVar11 * fVar5;
    }
  }
  else if (fVar9 == 0.0) {
    fVar9 = fVar5 * param_3[2] + fVar6 * param_3[1];
    fVar5 = fVar6 * param_3[2] - fVar5 * param_3[1];
    param_3[1] = fVar9;
    uVar7 = *(undefined8 *)param_3;
    *(ulong *)(param_3 + 2) = (ulong)(uint)fVar5;
    *(undefined8 *)param_3 = uVar7;
    if (((float)local_78 != 0.0) && (fVar6 = fVar5 * fVar5 + fVar9 * fVar9, 0.0 < fVar6)) {
      fVar11 = fVar11 * fVar12 * (float)local_78 * (1.0 / SQRT(fVar6));
      param_3[1] = (float)((ulong)uVar7 >> 0x20) + fVar11 * fVar9;
      *(ulong *)(param_3 + 2) = (ulong)(uint)(fVar5 + fVar11 * fVar5);
      *(undefined8 *)param_3 = *(undefined8 *)param_3;
    }
  }
  return;
}

