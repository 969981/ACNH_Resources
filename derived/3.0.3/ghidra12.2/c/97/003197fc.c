
uint FUN_003197fc(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 local_34;
  undefined1 auStack_30 [28];
  int local_14;
  
  local_14 = param_3;
  if (param_3 == 0) {
    local_34 = 0x8001000a;
    FUN_0018aa70(auStack_30,&local_34);
    uVar1 = FUN_00198714(param_2,auStack_30);
    return uVar1 & 1;
  }
  uVar1 = FUN_003195e0(param_1 + 0xb0,param_2,0,&local_14,param_4);
  return uVar1 & 1;
}

