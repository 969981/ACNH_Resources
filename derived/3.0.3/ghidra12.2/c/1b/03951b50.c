
void FUN_03951b50(float param_1,long *param_2,long *param_3,long *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)(**(code **)(*param_2 + 0x48))();
  pfVar2 = (float *)(**(code **)(*param_3 + 0x40))(param_3);
  pfVar3 = (float *)(**(code **)(*param_4 + 0x40))(param_4);
  fVar4 = 1.0;
  if (param_1 <= 1.0) {
    fVar4 = param_1;
  }
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    fVar5 = fVar4;
  }
  pfVar1[3] = pfVar2[3] + fVar5 * (pfVar3[3] - pfVar2[3]);
  *pfVar1 = *pfVar2 + fVar5 * (*pfVar3 - *pfVar2);
  pfVar1[1] = pfVar2[1] + fVar5 * (pfVar3[1] - pfVar2[1]);
  pfVar1[2] = pfVar2[2] + fVar5 * (pfVar3[2] - pfVar2[2]);
  return;
}

