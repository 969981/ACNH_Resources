
void FUN_0094af34(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  float fVar1;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  float local_48;
  
  FUN_0094a78c();
  local_50 = *param_4;
  local_48 = *(float *)(param_4 + 1);
  if (*param_3 <= param_3[2]) {
    local_58 = param_3[1];
    local_5c = 0x40a00000;
    local_54 = 0x41200000;
    fVar1 = local_48 + -10.0;
    local_48 = fVar1;
    FUN_0094a78c(param_1,param_2,&local_5c,PTR_DAT_04bb2150,&local_50,0x100000,param_5);
    local_48 = fVar1 + 20.0;
  }
  else {
    local_58 = param_3[1];
    local_5c = 0x41200000;
    local_54 = 0x40a00000;
    fVar1 = (float)local_50 + -10.0;
    local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
    local_50._0_4_ = fVar1;
    FUN_0094a78c(param_1,param_2,&local_5c,PTR_DAT_04bb2150,&local_50,0x100000,param_5);
    local_50 = CONCAT44(local_50._4_4_,fVar1 + 20.0);
  }
  FUN_0094a78c(param_1,param_2,&local_5c,PTR_DAT_04bb2150,&local_50,0x100000,param_5);
  return;
}

