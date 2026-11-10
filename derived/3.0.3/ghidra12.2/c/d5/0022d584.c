
void FUN_0022d584(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((param_4 < 3) && (param_3 != 0)) {
    if ((param_4 != 0) && (FUN_00243554(param_2 + 0x1c8,param_3), param_4 != 1)) {
      FUN_00243554(param_2 + 0x430,param_3 + 0x268);
    }
    *(uint *)(param_2 + 0x698) = param_4;
    local_40 = 0;
  }
  else {
    local_40 = 0x10c07;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

