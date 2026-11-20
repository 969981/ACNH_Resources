
float FUN_03eb4c60(float param_1,float param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (ulong)(param_1 * 3.1415927 * 6.8356525e+08);
  uVar3 = uVar2 >> 0x18 & 0xff;
  fVar5 = *(float *)(PTR_DAT_04bb2d00 + uVar3 * 0x10 + 8) +
          *(float *)(PTR_DAT_04bb2d00 + uVar3 * 0x10 + 0xc) * (float)((uint)uVar2 & 0xffffff) *
          5.9604645e-08;
  if (0.5 <= param_1) {
    fVar4 = 1.0;
    fVar5 = fVar5 + 1.0;
    if (0.0 < fVar5) {
      if (fVar5 == 0.0) {
        fVar4 = 1.0;
        if (param_2 < 0.0) {
          fVar4 = INFINITY;
        }
        fVar5 = 0.0;
        if (param_2 <= 0.0) {
          fVar5 = fVar4;
        }
      }
      else {
        fVar4 = (float)((uint)fVar5 & 0x7fffff | 0x3f800000) + -1.0;
        uVar3 = (ulong)(uint)(int)(fVar4 * 256.0);
        param_2 = (*(float *)(PTR_DAT_04bd0d98 + uVar3 * 8) +
                   *(float *)((long)(PTR_DAT_04bd0d98 + uVar3 * 8) + 4) *
                   (fVar4 * 256.0 - (float)uVar3) +
                  (float)(int)(((uint)fVar5 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * param_2;
        iVar1 = (int)(param_2 * 1.442695);
        fVar5 = ((param_2 - (float)iVar1 * 0.6931472) + 0.6931472) * 23.08312;
        uVar3 = (ulong)(uint)(int)fVar5;
        fVar5 = ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar3 * 8) +
                                 *(float *)((long)(PTR_DAT_04bd0d90 + uVar3 * 8) + 4) *
                                 (fVar5 - (float)uVar3)) + iVar1 * 0x800000));
      }
      fVar4 = (1.0 - fVar5) * 0.5 + 0.5;
    }
  }
  else {
    fVar5 = 1.0 - fVar5;
    fVar4 = 0.0;
    if (0.0 < fVar5) {
      if (fVar5 != 0.0) {
        fVar4 = (float)((uint)fVar5 & 0x7fffff | 0x3f800000) + -1.0;
        uVar3 = (ulong)(uint)(int)(fVar4 * 256.0);
        param_2 = (*(float *)(PTR_DAT_04bd0d98 + uVar3 * 8) +
                   *(float *)((long)(PTR_DAT_04bd0d98 + uVar3 * 8) + 4) *
                   (fVar4 * 256.0 - (float)uVar3) +
                  (float)(int)(((uint)fVar5 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * param_2;
        iVar1 = (int)(param_2 * 1.442695);
        fVar5 = ((param_2 - (float)iVar1 * 0.6931472) + 0.6931472) * 23.08312;
        uVar3 = (ulong)(uint)(int)fVar5;
        return ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar3 * 8) +
                                *(float *)((long)(PTR_DAT_04bd0d90 + uVar3 * 8) + 4) *
                                (fVar5 - (float)uVar3)) + iVar1 * 0x800000)) * 0.5;
      }
      if ((param_2 <= 0.0) && (fVar4 = 0.5, param_2 < 0.0)) {
        return INFINITY;
      }
    }
  }
  return fVar4;
}

