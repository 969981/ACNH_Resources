
undefined8 FUN_03b72e2c(float param_1,float param_2,float param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((param_3 <= 0.0) || (param_2 <= 0.0)) || (param_1 <= 0.0)) ||
     ((param_2 * 0.5 <= param_1 || (fVar2 = tanf((param_1 * 3.1415927) / param_2), fVar2 < 0.0)))) {
    uVar1 = 0;
    *(undefined2 *)(param_4 + 1) = 0;
    *param_4 = 0x4000;
  }
  else {
    uVar1 = 1;
    *(undefined2 *)((long)param_4 + 2) = 0;
    fVar3 = (1.0 / param_3) * fVar2;
    fVar2 = fVar2 * fVar2;
    fVar4 = 1.0 / (fVar2 + fVar3 + 1.0);
    fVar3 = fVar3 * fVar4;
    *(short *)param_4 = (short)(int)(fVar3 * 16384.0);
    *(short *)((long)param_4 + 6) = (short)(int)((fVar2 + -1.0) * -2.0 * fVar4 * 16384.0);
    *(short *)((long)param_4 + 4) = (short)(int)(fVar3 * -16384.0);
    *(short *)(param_4 + 1) = (short)(int)((fVar3 - fVar4 * (fVar2 + 1.0)) * 16384.0);
  }
  return uVar1;
}

