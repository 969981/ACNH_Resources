
void FUN_00322680(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 100) = fVar1;
  return;
}

