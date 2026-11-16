
float FUN_02932f48(long param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x20));
  fVar3 = *(float *)(param_1 + 0x28);
  if ((param_2 & 1) == 0) {
    fVar3 = 0.0;
  }
  uVar1 = (ulong)(long)(fVar2 * 11930465.0) >> 0x18 & 0xff;
  return *(float *)(param_1 + 0xc) +
         (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x1c) * 0.5 + fVar3) *
         ((float)(&DAT_04199798)[uVar1 * 4] +
         (float)((uint)(long)(fVar2 * 11930465.0) & 0xffffff) * 5.9604645e-08 *
         (float)(&DAT_0419979c)[uVar1 * 4]);
}

