
uint FUN_03bb90a8(float param_1,undefined1 param_2 [16],float param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  
  param_1 = 1.0 / param_1;
  if (param_1 == 0.0) {
    if (param_3 < 0.0) {
      return 0;
    }
    if (param_3 <= 0.0) {
      return 0x3f800000;
    }
    uVar2 = 0x7f800000;
  }
  else {
    fVar4 = (float)((uint)param_1 & 0x7fffff | 0x3f800000) + -1.0;
    uVar3 = (ulong)(uint)(int)(fVar4 * 256.0);
    fVar4 = -(param_3 *
             (*(float *)(PTR_DAT_04bd0d98 + uVar3 * 8) +
              *(float *)((long)(PTR_DAT_04bd0d98 + uVar3 * 8) + 4) * (fVar4 * 256.0 - (float)uVar3)
             + (float)(int)(((uint)param_1 >> 0x17 & 0xff) - 0x7f) * 0.6931472));
    iVar1 = (int)(fVar4 * 1.442695);
    fVar4 = ((fVar4 - (float)iVar1 * 0.6931472) + 0.6931472) * 23.08312;
    uVar3 = (ulong)(uint)(int)fVar4;
    uVar2 = (int)(*(float *)(PTR_DAT_04bd0d90 + uVar3 * 8) +
                 *(float *)((long)(PTR_DAT_04bd0d90 + uVar3 * 8) + 4) * (fVar4 - (float)uVar3)) +
            iVar1 * 0x800000 & 0x7fffffff;
  }
  return uVar2;
}

