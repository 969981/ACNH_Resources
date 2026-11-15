
bool FUN_0227ff88(long param_1,float *param_2)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_1 + 0x2dc) - *param_2;
  fVar5 = *(float *)(param_1 + 0x2cc);
  fVar4 = *(float *)(param_1 + 0x2e4) - param_2[2];
  lVar1 = FUN_0251e98c(1);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x210) + 0xf0))(lVar1 + 0x210);
  return SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= fVar5 + *pfVar2 + 0.5;
}

