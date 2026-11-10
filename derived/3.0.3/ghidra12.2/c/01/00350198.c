
float FUN_00350198(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar2 = *(float *)(param_1 + 0xc) * fVar2;
    fVar1 = *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x20);
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar1 = (fVar2 - *(float *)(param_1 + 0xc) * fVar1) * 0.5 +
            *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  FUN_0035022c(SUB42(fVar1 + *(float *)(param_1 + 0x14),0),param_1);
  *(float *)(param_1 + 0x14) = fVar2 + *(float *)(param_1 + 0x14);
  return fVar2;
}

