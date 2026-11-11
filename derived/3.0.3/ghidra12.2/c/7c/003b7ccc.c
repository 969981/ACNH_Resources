
float FUN_003b7ccc(float param_1,uint *param_2,int param_3)

{
  undefined **ppuVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (param_1 + 1.0) * 0.5;
  if (1.0 < param_1) {
    fVar4 = 1.0;
  }
  fVar2 = 0.0;
  if (-1.0 <= param_1) {
    fVar2 = fVar4;
  }
  if (((*(char *)((long)param_2 + 6) == '\0') && (param_3 == 2)) &&
     (*(char *)((long)param_2 + 7) != '\0')) {
    ppuVar1 = &PTR_DAT_0484e658;
  }
  else {
    ppuVar1 = &PTR_DAT_0484e670;
  }
  fVar4 = *(float *)(ppuVar1[*param_2] + (long)(int)(fVar2 * 256.0 + 0.5) * 4);
  if ((char)param_2[1] != '\0') {
    fVar4 = fVar4 / *(float *)(ppuVar1[*param_2] + 0x200);
  }
  fVar2 = 0.0;
  if (0.0 <= fVar4) {
    fVar2 = fVar4;
  }
  fVar3 = 2.0;
  if (*(char *)((long)param_2 + 5) != '\0') {
    fVar3 = 1.0;
  }
  if (fVar4 <= fVar3) {
    fVar3 = fVar2;
  }
  return fVar3;
}

