
float FUN_003b7d74(float param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_1 * 0.5;
  if (2.0 < param_1) {
    fVar3 = 1.0;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar3;
  }
  fVar2 = *(float *)((&PTR_DAT_0484e670)[*param_2] + (long)(int)(fVar2 * 256.0 + 0.5) * 4);
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar1 = 2.0;
  if (fVar2 <= 2.0) {
    fVar1 = fVar3;
  }
  return fVar1;
}

