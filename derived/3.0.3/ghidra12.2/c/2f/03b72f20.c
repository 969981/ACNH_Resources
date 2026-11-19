
undefined8 FUN_03b72f20(float param_1,float param_2,float param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((((param_3 <= 0.0) || (param_2 <= 0.0)) || (param_1 <= 0.0)) ||
     ((param_2 * 0.5 <= param_1 || (fVar3 = tanf((param_1 * 3.1415927) / param_2), fVar3 < 0.0)))) {
    uVar2 = 0;
    *(undefined2 *)(param_4 + 1) = 0;
    *param_4 = 0x4000;
  }
  else {
    fVar5 = fVar3 * fVar3;
    uVar2 = 1;
    fVar3 = (1.0 / param_3) * fVar3;
    fVar4 = 1.0 / (fVar5 + fVar3 + 1.0);
    fVar6 = (fVar5 + -1.0 + fVar5 + -1.0) * fVar4;
    fVar5 = (fVar5 + 1.0) * fVar4;
    *(short *)((long)param_4 + 2) = (short)(int)(fVar6 * 16384.0);
    uVar1 = (undefined2)(int)(fVar5 * 16384.0);
    *(undefined2 *)param_4 = uVar1;
    *(undefined2 *)((long)param_4 + 4) = uVar1;
    *(short *)(param_4 + 1) = (short)(int)((fVar3 * fVar4 - fVar5) * 16384.0);
    *(short *)((long)param_4 + 6) = (short)(int)(fVar6 * -16384.0);
  }
  return uVar2;
}

