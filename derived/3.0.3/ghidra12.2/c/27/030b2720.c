
undefined8
FUN_030b2720(float param_1,float param_2,float *param_3,long *param_4,float *param_5,int param_6,
            int param_7)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 != (float *)0x0) && (param_4 != (long *)0x0)) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    uVar1 = (**(code **)(*param_4 + 0x10))(param_4);
    if (((uVar1 & 1) == 0) &&
       (((uVar1 = (**(code **)(*param_4 + 0x18))(param_4), (uVar1 & 1) == 0 &&
         (uVar1 = (**(code **)(*param_4 + 0x20))(param_4), (uVar1 & 1) == 0)) &&
        (uVar1 = (**(code **)(*param_4 + 0x28))(param_4), (uVar1 & 1) == 0)))) {
      fVar2 = (float)(**(code **)(*param_4 + 0x60))(param_4);
      if ((fVar2 != 0.0) || (param_2 != 0.0)) {
        fVar3 = param_5[1];
        *param_3 = (fVar2 * (float)param_7) / (*param_5 * param_1);
        param_3[1] = (param_2 * (float)param_7) / (fVar3 * param_1);
      }
    }
    else {
      uVar1 = (**(code **)(*param_4 + 0x38))(param_4);
      if ((uVar1 & 1) != 0) {
        param_3[1] = param_3[1] + (float)param_6 / param_5[1];
      }
      uVar1 = (**(code **)(*param_4 + 0x50))(param_4);
      if ((uVar1 & 1) != 0) {
        *param_3 = *param_3 + (float)param_6 / *param_5;
      }
      uVar1 = (**(code **)(*param_4 + 0x40))(param_4);
      if ((uVar1 & 1) != 0) {
        param_3[1] = param_3[1] - (float)param_6 / param_5[1];
      }
      uVar1 = (**(code **)(*param_4 + 0x48))(param_4);
      if ((uVar1 & 1) != 0) {
        *param_3 = *param_3 - (float)param_6 / *param_5;
      }
    }
  }
  return 1;
}

