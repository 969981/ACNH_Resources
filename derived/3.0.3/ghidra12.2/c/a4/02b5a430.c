
bool FUN_02b5a430(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(DAT_05231900 + 0x70);
  if (lVar1 == 0) {
    return false;
  }
  fVar2 = *(float *)(lVar1 + 0x108) + -0.5;
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(lVar1 + 0x104) + fVar3 * 2.0;
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar2) {
    fVar4 = fVar3;
  }
  return 0.5 <= fVar4;
}

