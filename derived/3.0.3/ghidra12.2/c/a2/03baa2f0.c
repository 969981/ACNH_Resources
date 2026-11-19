
void FUN_03baa2f0(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  lVar1 = 0xf8;
  lVar2 = param_1 + 0xf8;
  if (*(char *)(param_1 + 0xe8) != '\0') {
    lVar1 = 0x158;
    lVar2 = param_1 + 0x158;
  }
  *param_2 = *(float *)(lVar2 + 0xc) +
             fVar4 * *(float *)(lVar2 + 4) + fVar3 * *(float *)(param_1 + lVar1) +
             fVar5 * *(float *)(lVar2 + 8);
  param_2[1] = *(float *)(lVar2 + 0x1c) +
               fVar4 * *(float *)(lVar2 + 0x14) + fVar3 * *(float *)(lVar2 + 0x10) +
               fVar5 * *(float *)(lVar2 + 0x18);
  fVar3 = *(float *)(lVar2 + 0x2c) +
          fVar4 * *(float *)(lVar2 + 0x24) + fVar3 * *(float *)(lVar2 + 0x20) +
          fVar5 * *(float *)(lVar2 + 0x28);
  param_2[2] = fVar3;
  if (*(char *)(param_1 + 0xe0) != '\0') {
    fVar3 = 0.0;
  }
  param_2[2] = fVar3;
  return;
}

