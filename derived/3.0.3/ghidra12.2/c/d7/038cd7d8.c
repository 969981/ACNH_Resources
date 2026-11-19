
uint FUN_038cd7d8(float param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = ((param_1 - (float)(int)(param_1 * 1.442695) * 0.6931472) + 0.6931472) * 23.08312;
  uVar2 = (ulong)(uint)(int)fVar3;
  lVar1 = uVar2 * 8;
  return (int)(*(float *)(&DAT_0419abb0 + lVar1) +
              *(float *)(&DAT_0419abb4 + lVar1) * (fVar3 - (float)uVar2)) +
         (int)(param_1 * 1.442695) * 0x800000 & 0x7fffffff;
}

