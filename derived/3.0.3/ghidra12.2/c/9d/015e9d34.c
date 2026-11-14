
undefined8 FUN_015e9d34(long param_1,float *param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = 1;
  if ((((0.0 < *(float *)(param_1 + 0x3c)) && (0.0 <= *(float *)(param_3 + 4))) &&
      (param_2[2] < *(float *)(param_1 + 0x58))) &&
     ((fVar2 = (*(float *)(param_1 + 100) * param_2[1] + *param_2 * *(float *)(param_1 + 0x60) +
               param_2[2] * *(float *)(param_1 + 0x68)) - *(float *)(param_1 + 0x6c), fVar2 < 0.0 &&
      (param_2[3] < -fVar2)))) {
    uVar1 = 0;
  }
  return uVar1;
}

