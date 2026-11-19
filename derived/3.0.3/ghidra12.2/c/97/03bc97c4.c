
void FUN_03bc97c4(float param_1,float *param_2,float *param_3,uint *param_4,uint *param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = *param_5;
  uVar2 = param_5[1];
  if (param_6 == 1) {
    if (((uVar6 <= uVar2) && (uVar3 = *param_4, uVar3 <= uVar2)) &&
       (uVar4 = param_4[1], uVar6 <= uVar4)) {
      uVar1 = uVar3;
      if (uVar3 <= uVar6) {
        uVar1 = uVar6;
      }
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = uVar2;
      }
      fVar7 = (float)((uVar6 - uVar1) + 1) / param_1;
      fVar10 = (float)((uVar6 - uVar3) + 1);
      fVar10 = ((float)(uVar1 - uVar3) + fVar10) /
               ((float)((uVar4 - uVar1) + 1) + (float)(uVar4 - uVar6) + (float)(uVar1 - uVar3) +
               fVar10);
      *param_2 = *param_2 + fVar7 * (1.0 - fVar10);
      *param_3 = *param_3 + fVar7 * fVar10;
    }
    uVar6 = param_5[2];
    uVar2 = param_5[3];
    if (uVar2 < uVar6) {
      return;
    }
    uVar3 = *param_4;
    if (uVar2 < uVar3) {
      return;
    }
    uVar4 = param_4[1];
    if (uVar4 < uVar6) {
      return;
    }
    uVar1 = uVar3;
    if (uVar3 <= uVar6) {
      uVar1 = uVar6;
    }
    uVar6 = uVar4;
    if (uVar2 <= uVar4) {
      uVar6 = uVar2;
    }
    fVar7 = (float)((uVar6 - uVar3) + 1);
    param_1 = (float)((uVar6 - uVar1) + 1) / param_1;
    fVar7 = ((float)(uVar1 - uVar3) + fVar7) /
            ((float)((uVar4 - uVar1) + 1) + (float)(uVar4 - uVar6) + (float)(uVar1 - uVar3) + fVar7)
    ;
    *param_2 = *param_2 + param_1 * (1.0 - fVar7);
    fVar7 = *param_3 + param_1 * fVar7;
  }
  else {
    if (((uVar6 <= uVar2) && (uVar3 = *param_4, uVar3 <= uVar2)) &&
       (uVar4 = param_4[1], uVar6 <= uVar4)) {
      uVar1 = uVar3;
      if (uVar3 <= uVar6) {
        uVar1 = uVar6;
      }
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = uVar2;
      }
      fVar7 = (float)((uVar6 - uVar1) + 1) / param_1;
      fVar10 = (float)((uVar6 - uVar3) + 1);
      uVar6 = (uint)((((float)(uVar1 - uVar3) + fVar10) /
                     ((float)((uVar4 - uVar1) + 1) + (float)(uVar4 - uVar6) + (float)(uVar1 - uVar3)
                     + fVar10)) * 1.0737418e+09);
      uVar5 = (ulong)(uVar6 >> 0x18);
      fVar10 = (float)(uVar6 & 0xffffff) * 5.9604645e-08;
      fVar8 = (float)(&DAT_04199798)[uVar5 * 4];
      fVar9 = (float)(&DAT_0419979c)[uVar5 * 4];
      *param_2 = *param_2 +
                 fVar7 * ((float)(&DAT_041997a0)[uVar5 * 4] +
                         fVar10 * (float)(&DAT_041997a4)[uVar5 * 4]);
      *param_3 = *param_3 + fVar7 * (fVar8 + fVar10 * fVar9);
    }
    uVar6 = param_5[2];
    uVar2 = param_5[3];
    if (uVar2 < uVar6) {
      return;
    }
    uVar3 = *param_4;
    if (uVar2 < uVar3) {
      return;
    }
    uVar4 = param_4[1];
    if (uVar4 < uVar6) {
      return;
    }
    uVar1 = uVar3;
    if (uVar3 <= uVar6) {
      uVar1 = uVar6;
    }
    uVar6 = uVar4;
    if (uVar2 <= uVar4) {
      uVar6 = uVar2;
    }
    param_1 = (float)((uVar6 - uVar1) + 1) / param_1;
    fVar7 = (float)((uVar6 - uVar3) + 1);
    uVar6 = (uint)((((float)(uVar1 - uVar3) + fVar7) /
                   ((float)((uVar4 - uVar1) + 1) + (float)(uVar4 - uVar6) + (float)(uVar1 - uVar3) +
                   fVar7)) * 1.0737418e+09);
    uVar5 = (ulong)(uVar6 >> 0x18);
    fVar7 = (float)(uVar6 & 0xffffff) * 5.9604645e-08;
    fVar10 = (float)(&DAT_04199798)[uVar5 * 4];
    fVar8 = (float)(&DAT_0419979c)[uVar5 * 4];
    *param_2 = *param_2 +
               param_1 * ((float)(&DAT_041997a0)[uVar5 * 4] +
                         fVar7 * (float)(&DAT_041997a4)[uVar5 * 4]);
    fVar7 = *param_3 + param_1 * (fVar10 + fVar7 * fVar8);
  }
  *param_3 = fVar7;
  return;
}

