
void FUN_03951964(float param_1,long *param_2,long *param_3,long *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar1 = (float *)(**(code **)(*param_2 + 0x48))();
  pfVar2 = (float *)(**(code **)(*param_3 + 0x40))(param_3);
  pfVar3 = (float *)(**(code **)(*param_4 + 0x40))(param_4);
  *pfVar1 = *pfVar2 + param_1 * (*pfVar3 - *pfVar2);
  pfVar1[1] = pfVar2[1] + param_1 * (pfVar3[1] - pfVar2[1]);
  return;
}

