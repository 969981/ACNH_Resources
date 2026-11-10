
void FUN_002b49d0(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 < 0x21) {
    *(uint *)(param_2 + 0x130) = param_3;
    local_24 = 0;
  }
  else {
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

