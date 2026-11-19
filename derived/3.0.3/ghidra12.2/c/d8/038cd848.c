
float FUN_038cd848(uint param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = (float)(param_1 & 0x7fffff | 0x3f800000) + -1.0;
  uVar2 = (ulong)(uint)(int)(fVar3 * 256.0);
  lVar1 = uVar2 * 8;
  return *(float *)(&DAT_0419acb8 + lVar1) +
         *(float *)(&DAT_0419acbc + lVar1) * (fVar3 * 256.0 - (float)uVar2) +
         (float)(int)((param_1 >> 0x17 & 0xff) - 0x7f) * 0.6931472;
}

