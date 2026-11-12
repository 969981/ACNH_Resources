
bool FUN_0073e274(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_3[2];
  fVar3 = *param_3;
  fVar5 = param_3[1];
  fVar1 = param_2[9] * fVar5 + fVar3 * param_2[8] + fVar4 * param_2[10] + param_2[0xb];
  if ((param_2[0x38] - param_1 <= -fVar1) && (-fVar1 - param_1 <= param_2[0x39])) {
    fVar2 = param_2[3] + fVar5 * param_2[1] + fVar3 * *param_2 + fVar4 * param_2[2];
    fVar3 = param_2[7] + fVar5 * param_2[5] + fVar3 * param_2[4] + fVar4 * param_2[6];
    if (((fVar3 * param_2[0x42] + param_2[0x41] * fVar2 + param_2[0x43] * fVar1) - param_2[0x4d] <
         param_1) &&
       (((fVar3 * param_2[0x45] + param_2[0x44] * fVar2 + param_2[0x46] * fVar1) - param_2[0x4e] <
         param_1 &&
        ((fVar3 * param_2[0x48] + param_2[0x47] * fVar2 + param_2[0x49] * fVar1) - param_2[0x4f] <
         param_1)))) {
      return (fVar3 * param_2[0x4b] + param_2[0x4a] * fVar2 + param_2[0x4c] * fVar1) - param_2[0x50]
             < param_1;
    }
  }
  return false;
}

