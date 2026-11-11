
float FUN_003bec78(float *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (*param_1 == 0.0) {
    return 0.0;
  }
  if ((uint)param_1[2] <= (uint)param_1[4]) {
    pcVar1 = (code *)(&DAT_04c63610)[*(byte *)((long)param_1 + 0xd)];
    if (pcVar1 == (code *)0x0) {
      fVar2 = 1.0;
    }
    else if (*(byte *)((long)param_1 + 0xd) == 4) {
      if (*(char *)((long)param_1 + 0x1d) == '\0') {
        fVar2 = param_1[6];
      }
      else {
        fVar2 = (float)(*pcVar1)(param_1[5]);
        param_1[6] = fVar2;
      }
    }
    else {
      fVar2 = (float)(*pcVar1)(param_1[5]);
    }
    fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 3));
    fVar3 = fVar2 * *param_1 * fVar3;
  }
  return fVar3;
}

