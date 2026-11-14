
void FUN_01730cb4(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((*(int *)(param_1 + 0x168) != 1) &&
     (fVar2 = *(float *)(param_1 + 0x80) - param_2[1], fVar1 = *(float *)(param_1 + 0x7c) - *param_2
     , fVar3 = *(float *)(param_1 + 0x84) - param_2[2],
     2.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3))) {
    *(undefined1 *)(param_1 + 0x16d) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 0x20) = 0;
  *(float *)(param_1 + 0x7c) = *param_2;
  *(float *)(param_1 + 0x80) = param_2[1];
  fVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x168) = 1;
  *(float *)(param_1 + 0x84) = fVar1;
  return;
}

