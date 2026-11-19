
undefined8 FUN_03b73010(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  float fVar1;
  undefined8 uVar2;
  float __x;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  __x = powf(10.0,param_3 / 20.0);
  fVar8 = SQRT(__x);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(__x);
  }
  if ((((param_2 <= 0.0) || (param_1 <= 0.0)) || (param_2 * 0.5 <= param_1)) ||
     (fVar3 = tanf((param_1 * 3.1415927) / param_2), fVar3 < 0.0)) {
    uVar2 = 0;
    *(undefined2 *)(param_5 + 1) = 0;
    *param_5 = 0x4000;
  }
  else {
    fVar4 = fVar3 * fVar3;
    param_4 = 1.0 / param_4;
    if (0.0 <= param_3) {
      fVar7 = fVar4 * __x + -1.0;
      fVar5 = 1.0 / (fVar3 * param_4 + 1.0 + fVar4);
      fVar6 = (fVar4 + -1.0) * -2.0 * fVar5;
      fVar1 = ((1.0 - fVar3 * param_4) + fVar4) * fVar5;
      *(short *)param_5 =
           (short)(int)((fVar3 * param_4 * fVar8 + 1.0 + fVar4 * __x) * fVar5 * 16384.0);
      *(short *)((long)param_5 + 2) = (short)(int)((fVar7 + fVar7) * fVar5 * 16384.0);
      *(short *)((long)param_5 + 4) =
           (short)(int)(((1.0 - fVar3 * param_4 * fVar8) + fVar4 * __x) * fVar5 * 16384.0);
    }
    else {
      fVar5 = 1.0 / (__x + fVar3 * param_4 * fVar8 + fVar4);
      fVar6 = (fVar4 - __x) * -2.0 * fVar5;
      fVar1 = ((__x - fVar3 * param_4 * fVar8) + fVar4) * fVar5;
      *(short *)param_5 = (short)(int)(__x * (fVar3 * param_4 + 1.0 + fVar4) * fVar5 * 16384.0);
      *(short *)((long)param_5 + 2) = (short)(int)((__x + __x) * (fVar4 + -1.0) * fVar5 * 16384.0);
      *(short *)((long)param_5 + 4) =
           (short)(int)(__x * ((1.0 - fVar3 * param_4) + fVar4) * fVar5 * 16384.0);
    }
    uVar2 = 1;
    *(short *)((long)param_5 + 6) = (short)(int)(fVar6 * 16384.0);
    *(short *)(param_5 + 1) = (short)(int)(-fVar1 * 16384.0);
  }
  return uVar2;
}

