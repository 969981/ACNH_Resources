
void FUN_002291b4(undefined8 param_1,ulong *param_2,ulong param_3,uint param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (((param_3 == 0) || ((param_3 & 3) != 0)) || (param_4 >> 4 < 0x175)) {
    local_24 = 0x10c07;
  }
  else if (*param_2 == 0) {
    *param_2 = param_3;
    *(uint *)(param_2 + 1) = param_4;
    local_24 = 0;
  }
  else {
    local_24 = 0x10c02;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

