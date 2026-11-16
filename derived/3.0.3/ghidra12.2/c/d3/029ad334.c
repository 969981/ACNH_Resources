
void FUN_029ad334(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  fVar2 = *(float *)(param_1 + 0xc);
  if (fVar2 == 1.0) {
    fVar2 = *(float *)(param_1 + 8);
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    fVar2 = fVar2 * 0.70794576;
    *param_2 = fVar2;
    param_2[1] = fVar2;
  }
  else {
    if (fVar2 <= 0.0) {
      FUN_02a07180(param_1 + 0x10,param_2);
      return;
    }
    local_40 = 0;
    local_38 = 0;
    local_48 = 0;
    fVar3 = *(float *)(param_1 + 8) * 0.70794576;
    FUN_02a07180(param_1 + 0x10,&local_48);
    fVar1 = 1.0 - fVar2;
    *param_2 = fVar1 * (float)local_48 + fVar2 * fVar3;
    param_2[1] = fVar1 * local_48._4_4_ + fVar2 * fVar3;
    param_2[2] = fVar1 * (float)local_40 + fVar2 * 0.0;
    param_2[3] = fVar1 * local_40._4_4_ + fVar2 * 0.0;
    param_2[4] = fVar1 * (float)local_38 + fVar2 * 0.0;
    param_2[5] = fVar1 * local_38._4_4_ + fVar2 * 0.0;
  }
  return;
}

