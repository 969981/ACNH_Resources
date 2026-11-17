
void FUN_030b28c0(float param_1,float *param_2,undefined4 *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  undefined4 local_48;
  
  if (param_2 != (float *)0x0) {
    if ((param_3 != (undefined4 *)0x0) && (param_4 != (long *)0x0)) {
      fVar1 = *param_7;
      fVar2 = param_7[1];
      fVar4 = *param_8;
      fVar6 = param_8[1];
      fVar3 = *param_9;
      fVar5 = param_9[1];
      local_50 = PTR_DAT_04bc0cb8 + 0x10;
      local_48 = 0x29;
      (**(code **)(*param_4 + 0x20))(param_4,&local_50);
      (**(code **)(param_4[3] + 0x2b0))(&local_50,param_4[1]);
      *param_2 = (fVar1 - fVar4) * param_1 * fVar3;
      param_2[1] = (fVar2 - fVar6) * param_1 * fVar5;
      *param_3 = (undefined4)local_50;
      param_3[1] = local_50._4_4_;
    }
  }
  return;
}

