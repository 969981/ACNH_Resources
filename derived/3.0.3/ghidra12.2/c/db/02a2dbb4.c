
undefined8 FUN_02a2dbb4(float param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_3[2];
  fVar1 = *param_3;
  fVar4 = *(float *)(param_2 + 0x19fab8) - fVar2;
  fVar3 = *(float *)(param_2 + 0x19fab4) - fVar1;
  fVar5 = *(float *)(param_2 + 0x19fabc) + param_1;
  if ((((fVar5 * fVar5 < fVar4 * fVar4 + fVar3 * fVar3) &&
       (fVar3 = *(float *)(param_2 + 0x19fac8) + param_1,
       fVar5 = *(float *)(param_2 + 0x19fac0) - fVar1,
       fVar4 = *(float *)(param_2 + 0x19fac4) - fVar2, fVar3 * fVar3 < fVar4 * fVar4 + fVar5 * fVar5
       )) && (fVar4 = *(float *)(param_2 + 0x19fad0) - fVar2,
             fVar3 = *(float *)(param_2 + 0x19facc) - fVar1,
             fVar5 = *(float *)(param_2 + 0x19fad4) + param_1,
             fVar5 * fVar5 < fVar4 * fVar4 + fVar3 * fVar3)) &&
     (((fVar4 = *(float *)(param_2 + 0x19fadc) - fVar2,
       fVar3 = *(float *)(param_2 + 0x19fad8) - fVar1,
       fVar5 = *(float *)(param_2 + 0x19fae0) + param_1,
       fVar5 * fVar5 < fVar4 * fVar4 + fVar3 * fVar3 &&
       (fVar4 = *(float *)(param_2 + 0x19fae8) - fVar2,
       fVar3 = *(float *)(param_2 + 0x19fae4) - fVar1,
       fVar5 = *(float *)(param_2 + 0x19faec) + param_1,
       fVar5 * fVar5 < fVar4 * fVar4 + fVar3 * fVar3)) &&
      (fVar2 = *(float *)(param_2 + 0x19faf4) - fVar2,
      fVar1 = *(float *)(param_2 + 0x19faf0) - fVar1,
      param_1 = *(float *)(param_2 + 0x19faf8) + param_1,
      param_1 * param_1 < fVar2 * fVar2 + fVar1 * fVar1)))) {
    return 0;
  }
  return 1;
}

