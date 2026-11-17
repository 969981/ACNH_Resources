
undefined8 FUN_02b62ab0(float *param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_50;
  float local_48;
  uint local_14;
  
  uVar1 = 0;
  if ((param_1 != (float *)0x0) && ((param_2 & 0xffff) != 0)) {
    FUN_02b62bd0(&local_14,param_2);
    local_48 = 0.0;
    local_50 = 0;
    uVar2 = FUN_02b630b0(&local_50,param_2);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      fVar3 = sinf((float)local_14 * 1.4629181e-09);
      fVar4 = cosf((float)local_14 * 1.4629181e-09);
      fVar5 = fVar3 * 0.0;
      *param_1 = (float)local_50 + fVar5 * 0.0 + fVar4 * 0.0 + (fVar3 + 0.0) * 12.5;
      param_1[1] = local_50._4_4_ + (fVar5 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar5 * 12.5;
      param_1[2] = local_48 + (fVar4 * 0.0 * 0.0 - fVar3 * 0.0) + fVar4 * 12.5;
      FUN_02b62bd0(&local_50,param_2);
      uVar1 = 1;
      param_1[3] = (float)local_50;
    }
  }
  return uVar1;
}

