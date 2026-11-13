
void FUN_00e54ab4(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)FUN_0252d9bc(0);
  fVar2 = *pfVar1;
  fVar5 = *param_2;
  fVar4 = param_2[2];
  fVar3 = *param_3;
  if ((((int)((float)(int)fVar2 / 10.0) - (uint)(fVar2 < 0.0) ==
        (int)((float)(int)fVar5 / 10.0) - (uint)(fVar5 < 0.0)) &&
      ((int)((float)(int)pfVar1[2] / 10.0) - (uint)(pfVar1[2] < 0.0) ==
       (int)((float)(int)fVar4 / 10.0) - (uint)(fVar4 < 0.0))) ||
     (((fVar3 < -1.1920929e-07 ||
       ((((1.1920929e-07 < fVar3 || (param_3[1] < -1.1920929e-07)) || (1.1920929e-07 < param_3[1]))
        || ((param_3[2] < -1.1920929e-07 || (1.1920929e-07 < param_3[2])))))) &&
      ((-1.1920929e-07 <= fVar5 &&
       (((fVar5 <= 1.1920929e-07 && (-1.1920929e-07 <= param_2[1])) &&
        ((param_2[1] <= 1.1920929e-07 && ((-1.1920929e-07 <= fVar4 && (fVar4 <= 1.1920929e-07)))))))
       ))))) {
    *param_1 = fVar3;
    param_1[1] = param_3[1];
    fVar3 = param_3[2];
  }
  else {
    *param_1 = fVar2;
    fVar4 = pfVar1[1];
    param_1[1] = fVar4;
    fVar3 = pfVar1[2];
    *param_1 = fVar2 + 0.0;
    param_1[1] = fVar4 + 0.0;
    fVar3 = fVar3 + -45.0;
  }
  param_1[2] = fVar3;
  return;
}

