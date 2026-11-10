
float FUN_0031e264(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = 1.0;
  fVar4 = 1.0;
  fVar2 = *(float *)(param_1 + 0x6c);
  fVar5 = *(float *)(param_1 + 0x70);
  lVar1 = *(long *)(*(long *)(param_1 + 0x240) + 0x10);
  if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.0 <= fVar5 && *(char *)(lVar1 + 0x79a) != '\0')) {
    fVar4 = *(float *)(*(long *)(param_1 + 0xa0) + 0x818);
    fVar4 = fVar4 + (1.0 - fVar4) * fVar5;
  }
  if ((fVar2 < 1.0) && (0.0 <= fVar2 && *(char *)(lVar1 + 0x79c) != '\0')) {
    fVar3 = *(float *)(*(long *)(param_1 + 0xa0) + 0x81c);
    fVar3 = fVar3 + (1.0 - fVar3) * fVar2;
  }
  return fVar4 * fVar3;
}

