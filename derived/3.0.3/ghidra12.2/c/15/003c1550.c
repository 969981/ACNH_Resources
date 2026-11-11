
void FUN_003c1550(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  if (fVar1 != *(float *)(param_2 + 0x1ec)) {
    *(float *)(param_2 + 0x1ec) = fVar1;
    *(ushort *)(param_2 + 0x1e8) = *(ushort *)(param_2 + 0x1e8) | 0x40;
  }
  return;
}

