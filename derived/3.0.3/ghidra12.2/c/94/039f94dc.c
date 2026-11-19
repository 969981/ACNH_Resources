
bool FUN_039f94dc(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[3];
  if (param_2[0x38] - fVar1 <= -param_1) {
    fVar2 = param_2[1] * param_3[1] + *param_3 * *param_2 + param_3[2] * param_2[2] + param_2[3];
    fVar3 = param_2[7] + param_3[1] * param_2[5] + *param_3 * param_2[4] + param_3[2] * param_2[6];
    if ((((fVar3 * param_2[0x42] + param_2[0x41] * fVar2 + param_2[0x43] * param_1) - param_2[0x4d]
          < fVar1) &&
        ((fVar3 * param_2[0x45] + param_2[0x44] * fVar2 + param_2[0x46] * param_1) - param_2[0x4e] <
         fVar1)) &&
       ((fVar3 * param_2[0x48] + param_2[0x47] * fVar2 + param_2[0x49] * param_1) - param_2[0x4f] <
        fVar1)) {
      return (fVar3 * param_2[0x4b] + param_2[0x4a] * fVar2 + param_2[0x4c] * param_1) -
             param_2[0x50] < fVar1;
    }
  }
  return false;
}

