
void FUN_024bde14(float *param_1,uint *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = FUN_006f0400(*param_4 - *param_3,param_4[2] - param_3[2]);
  *param_2 = uVar2;
  fVar3 = (float)FUN_016e4798(param_2);
  fVar4 = -fVar3;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar6 = (float)(*param_2 & 0xffffff) * 5.9604645e-08;
  fVar3 = *param_4;
  fVar5 = param_4[1];
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_2 >> 0x14) & 0xff0 ^ 0x800));
  fVar4 = (fVar4 / 45.0) * 0.0 + 10.0 + 0.0;
  fVar7 = *pfVar1 + fVar6 * pfVar1[1];
  fVar6 = pfVar1[2] + fVar6 * pfVar1[3];
  fVar8 = fVar7 * 0.0;
  param_1[2] = param_4[2] + (fVar6 * 0.0 * 0.0 - fVar7 * 0.0) + fVar4 * fVar6;
  *param_1 = fVar3 + fVar8 * 0.0 + fVar6 * 0.0 + fVar4 * (fVar7 + 0.0);
  param_1[1] = fVar5 + (fVar8 * 0.0 + 1.0) * 0.0 + fVar6 * 0.0 * 0.0 + fVar4 * fVar8;
  fVar4 = (float)FUN_016e026c(0,param_1,0,0);
  param_1[1] = fVar4;
  return;
}

