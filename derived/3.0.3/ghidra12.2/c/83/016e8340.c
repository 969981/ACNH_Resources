
float FUN_016e8340(float param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_5c;
  float fStack_58;
  float local_54;
  
  fVar2 = (float)FUN_016e8440();
  fVar3 = -param_1;
  if (0.0 <= param_1) {
    fVar3 = param_1;
  }
  if (1.1920929e-07 <= fVar3) {
    lVar1 = 0;
    do {
      fVar4 = *(float *)((long)&DAT_04176bac + lVar1);
      fVar3 = *(float *)((long)&DAT_04176bb4 + lVar1);
      fVar6 = SQRT(fVar4 * fVar4 + 0.0 + fVar3 * fVar3);
      if (0.0 < fVar6) {
        fVar6 = 1.0 / fVar6;
        fVar4 = fVar4 * fVar6;
        fVar5 = fVar6 * 0.0;
        fVar3 = fVar3 * fVar6;
      }
      else {
        fVar5 = 0.0;
      }
      local_5c = fVar4 * param_1 + *param_2;
      fStack_58 = fVar5 * param_1 + param_2[1];
      local_54 = fVar3 * param_1 + param_2[2];
      fVar3 = (float)FUN_016e8440(&local_5c,param_3);
      lVar1 = lVar1 + 0xc;
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = fVar3;
    } while (lVar1 != 0x6c);
  }
  return fVar2;
}

