
int FUN_003375f8(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x48);
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  return (int)(*(float *)(*(long *)(*(long *)(param_1 + 0x240) + 0x348) + 0x14) * fVar1);
}

