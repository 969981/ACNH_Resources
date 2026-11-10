
void FUN_00322658(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x5c) = fVar1;
  return;
}

