
bool FUN_01910820(long param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)(**(code **)(*(long *)(param_1 + 0x38) + 0xf0))();
  return SQRT((param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) +
              (*param_2 - *param_3) * (*param_2 - *param_3)) <= *pfVar1;
}

