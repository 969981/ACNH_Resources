
undefined8 FUN_03ef35c4(long param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_68;
  float local_60;
  undefined1 auStack_5c [28];
  
  fVar3 = 0.0;
  if (*(int *)(param_1 + 0x70) == 0) {
    fVar4 = 0.0;
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar2 = 0.0;
    fVar4 = 0.0;
    fVar1 = 0.0;
    if (*(short *)(*(long *)(param_1 + 0x78) + 0x30) != -1 &&
        *(short *)(*(long *)(param_1 + 0x78) + 0x32) != -1) {
      FUN_03ef3704(auStack_5c,param_1);
      local_68 = *(undefined8 *)(param_1 + 0x50);
      local_60 = *(float *)(param_1 + 0x58);
      FUN_03ee49d4(auStack_5c,&local_68,&local_68);
      fVar2 = SQRT(local_68._4_4_ * local_68._4_4_ + (float)local_68 * (float)local_68 +
                   local_60 * local_60);
      fVar4 = local_68._4_4_;
      fVar3 = local_60;
      fVar1 = (float)local_68;
      if (0.0 < fVar2) {
        fVar3 = 1.0 / fVar2;
        fVar1 = (float)local_68 * fVar3;
        fVar4 = local_68._4_4_ * fVar3;
        fVar3 = local_60 * fVar3;
      }
    }
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar2;
  }
  if ((fVar2 < -1.1920929e-07) || (1.1920929e-07 < fVar2)) {
    fVar3 = atan2f(fVar1,fVar3);
    *param_2 = -fVar3;
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    fVar1 = -1.0;
    if (-1.0 <= fVar4) {
      fVar1 = fVar3;
    }
    fVar3 = asinf(fVar1);
  }
  else {
    fVar3 = 0.0;
    *param_2 = 0.0;
  }
  *param_3 = fVar3;
  return 1;
}

