
undefined8 FUN_03b72cfc(float param_1,float param_2,float param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 <= param_2) && (0.0 < param_3)) {
    fVar2 = -1.0;
    if ((0.0 < param_1) && (param_1 < param_3 * 0.5)) {
      fVar2 = tanf((param_1 * 3.1415927) / param_3);
    }
    if ((((0.0 < param_2) && (param_2 < param_3 * 0.5)) &&
        (fVar3 = tanf((param_2 * 3.1415927) / param_3), 0.0 <= fVar2)) && (0.0 <= fVar3)) {
      fVar4 = fVar2 * fVar3;
      fVar6 = 1.0 / (fVar4 + (fVar3 - fVar2) + 1.0);
      fVar5 = (fVar4 + -1.0 + fVar4 + -1.0) * fVar6;
      fVar4 = (fVar4 + 1.0) * fVar6;
      *(short *)((long)param_4 + 2) = (short)(int)(fVar5 * 16384.0);
      uVar1 = (undefined2)(int)(fVar4 * 16384.0);
      *(undefined2 *)param_4 = uVar1;
      *(undefined2 *)((long)param_4 + 4) = uVar1;
      *(short *)(param_4 + 1) = (short)(int)(((fVar3 - fVar2) * fVar6 - fVar4) * 16384.0);
      *(short *)((long)param_4 + 6) = (short)(int)(fVar5 * -16384.0);
      return 1;
    }
  }
  *(undefined2 *)(param_4 + 1) = 0;
  *param_4 = 0x4000;
  return 0;
}

