
undefined8 FUN_03b733d8(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = powf(10.0,param_3 / 20.0);
  if ((((param_2 <= 0.0) || (param_1 <= 0.0)) || (param_2 * 0.5 <= param_1)) ||
     (fVar4 = tanf((param_1 * 3.1415927) / param_2), fVar4 < 0.0)) {
    uVar2 = 0;
    *(undefined2 *)(param_5 + 1) = 0;
    *param_5 = 0x4000;
  }
  else {
    fVar5 = fVar4 * fVar4;
    param_4 = 1.0 / param_4;
    if (0.0 <= param_3) {
      fVar7 = 1.0 / (fVar4 * param_4 + 1.0 + fVar5);
      fVar8 = fVar5 + -1.0 + fVar5 + -1.0;
      fVar1 = fVar8 * fVar7;
      fVar6 = ((1.0 - fVar4 * param_4) + fVar5) * fVar7;
      *(short *)param_5 = (short)(int)((fVar4 * param_4 * fVar3 + 1.0 + fVar5) * fVar7 * 16384.0);
      *(short *)((long)param_5 + 2) = (short)(int)(fVar8 * fVar7 * 16384.0);
      *(short *)((long)param_5 + 4) =
           (short)(int)(((1.0 - fVar4 * param_4 * fVar3) + fVar5) * fVar7 * 16384.0);
    }
    else {
      if (fVar3 <= 0.0) {
        *(undefined2 *)(param_5 + 1) = 0;
        *param_5 = 0;
        return 1;
      }
      fVar6 = param_4 * (1.0 / fVar3);
      fVar8 = 1.0 / (fVar4 * fVar6 + 1.0 + fVar5);
      fVar3 = fVar5 + -1.0 + fVar5 + -1.0;
      fVar1 = fVar3 * fVar8;
      fVar6 = ((1.0 - fVar4 * fVar6) + fVar5) * fVar8;
      *(short *)param_5 = (short)(int)((fVar4 * param_4 + 1.0 + fVar5) * fVar8 * 16384.0);
      *(short *)((long)param_5 + 2) = (short)(int)(fVar3 * fVar8 * 16384.0);
      *(short *)((long)param_5 + 4) =
           (short)(int)(((1.0 - fVar4 * param_4) + fVar5) * fVar8 * 16384.0);
    }
    *(short *)((long)param_5 + 6) = (short)(int)(-fVar1 * 16384.0);
    uVar2 = 1;
    *(short *)(param_5 + 1) = (short)(int)(-fVar6 * 16384.0);
  }
  return uVar2;
}

