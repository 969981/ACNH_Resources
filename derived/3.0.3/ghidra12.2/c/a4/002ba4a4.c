
void FUN_002ba4a4(undefined8 param_1,long param_2,int *param_3)

{
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*param_3 != 0) {
    local_24 = 0;
    local_40 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    if (*param_3 != local_40) {
      local_24 = 0;
      local_50 = 0x4c11;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      if (*param_3 != local_50) {
        local_40 = 0x10c07;
        goto LAB_002ba538;
      }
    }
  }
  FUN_00229780(param_2 + 0xd4,param_3);
  local_40 = 0;
LAB_002ba538:
  local_50 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  FUN_002296c4(param_1,&local_40);
  return;
}

