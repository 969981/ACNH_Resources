
uint FUN_0031986c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 local_34;
  undefined1 auStack_30 [24];
  undefined1 local_18 [4];
  int local_14;
  
  local_18[0] = 1;
  local_14 = param_3;
  if (param_3 == 0) {
    local_34 = 0x8001000a;
    FUN_0018aa70(auStack_30,&local_34);
    uVar1 = FUN_00198714(param_2,auStack_30);
    return uVar1 & 1;
  }
  uVar1 = FUN_003198e0(param_1 + 0x20,param_2,&local_14,param_4,local_18);
  return uVar1 & 1;
}

