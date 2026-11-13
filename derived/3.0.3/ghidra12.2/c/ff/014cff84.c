
void FUN_014cff84(float *param_1,long param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  
  if (DAT_05abbc58 != 0) {
    FUN_0372da60(DAT_05abbc58);
    return;
  }
  if (param_3 - 2U < 6) {
    uVar3 = (&DAT_041757a0)[(int)(param_3 - 2U)];
  }
  else {
    uVar3 = 0;
  }
  pfVar1 = (float *)(param_2 + 0x408);
  pfVar2 = pfVar1 + (ulong)uVar3 * 0x10;
  if (6 < uVar3) {
    pfVar2 = pfVar1;
  }
  if (((pfVar2[3] < *pfVar2) || (pfVar2[4] < pfVar2[1])) || (pfVar2[5] < pfVar2[2])) {
    fVar4 = NAN;
  }
  else {
    param_1[1] = 0.0;
    pfVar2 = pfVar1 + (ulong)uVar3 * 0x10;
    if (6 < uVar3) {
      pfVar2 = pfVar1;
    }
    fVar4 = ((float)(int)pfVar2[10] * 5.0 + (float)(int)pfVar2[0xe] * 5.0 + 5.0) * 0.5 + -0.001;
    param_1[2] = ((float)(int)pfVar2[0xb] * 5.0 + (float)(int)pfVar2[0xf] * 5.0 + 5.0) * 0.5 +
                 -0.001;
  }
  *param_1 = fVar4;
  return;
}

