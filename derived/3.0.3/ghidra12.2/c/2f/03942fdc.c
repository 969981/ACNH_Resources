
void FUN_03942fdc(float param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  
  fVar1 = param_5[3];
  fVar3 = param_5[0xb];
  fVar2 = param_5[7];
  local_6c = 0x3f800000;
  local_64 = 0;
  local_7c = 0x3f80000000000000;
  local_74 = 0;
  fStack_94 = fVar2 + param_5[4] * param_1;
  local_90 = fVar3 + param_5[8] * param_1;
  local_8c = 0;
  local_98 = fVar1 + *param_5 * param_1;
  local_84 = 0x3f800000;
  local_80 = param_3;
  local_70 = param_3;
  local_60 = param_3;
  local_5c = fVar1;
  fStack_58 = fVar2;
  local_54 = fVar3;
  FUN_039427b0(param_2,param_4,&local_5c,&local_98,&local_6c);
  local_98 = fVar1 + param_5[1] * param_1;
  fStack_94 = fVar2 + param_5[5] * param_1;
  local_90 = fVar3 + param_5[9] * param_1;
  FUN_039427b0(param_2,param_4,&local_5c,&local_98,&local_7c);
  local_98 = fVar1 + param_5[2] * param_1;
  fStack_94 = fVar2 + param_5[6] * param_1;
  local_90 = fVar3 + param_5[10] * param_1;
  FUN_039427b0(param_2,param_4,&local_5c,&local_98,&local_8c);
  return;
}

