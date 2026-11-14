
float FUN_0151f71c(float *param_1,uint *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)(*param_2 >> 1 & 0xffffff) * 5.9604645e-08;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_2 >> 0x15) & 0x7f0));
  fVar3 = *pfVar1 + fVar2 * pfVar1[1];
  fVar2 = pfVar1[2] + fVar2 * pfVar1[3];
  fVar4 = fVar3 * 0.0;
  fVar2 = fVar2 + fVar2;
  fVar5 = fVar4 * (fVar4 + fVar4);
  return *param_1 +
         param_3[1] * (fVar3 * (fVar4 + fVar4) - fVar2 * fVar4) +
         *param_3 * ((1.0 - fVar3 * (fVar3 + fVar3)) - fVar5) + param_3[2] * (fVar3 * fVar2 + fVar5)
  ;
}

