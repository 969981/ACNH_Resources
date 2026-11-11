
undefined2 FUN_003b7ad8(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(param_1,0x3f800000);
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  if (fVar1 < 0.13561438) {
    return 0x50;
  }
  if (fVar1 < 0.9) {
    return *(undefined2 *)(&DAT_041354c0 + (long)(int)((fVar1 + -0.13561438) / 0.033333335) * 2);
  }
  return 16000;
}

