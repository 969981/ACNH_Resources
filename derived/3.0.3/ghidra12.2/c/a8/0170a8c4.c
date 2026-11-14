
void FUN_0170a8c4(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((*(int *)(param_1 + 0x1428) != 1) &&
     (fVar1 = *(float *)(param_1 + 0x133c) - *param_2,
     fVar2 = *(float *)(param_1 + 0x1340) - param_2[1],
     fVar3 = *(float *)(param_1 + 0x1344) - param_2[2],
     2.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3))) {
    *(undefined1 *)(param_1 + 0x142d) = 0;
  }
  *(undefined4 *)(param_1 + 0x12d0) = 0;
  **(undefined1 **)(param_1 + 0x12e0) = 0;
  *(float *)(param_1 + 0x133c) = *param_2;
  *(float *)(param_1 + 0x1340) = param_2[1];
  fVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x1334) = 0;
  *(undefined4 *)(param_1 + 0x1428) = 1;
  *(float *)(param_1 + 0x1344) = fVar1;
  return;
}

