
void FUN_0030a99c(undefined8 param_1,long param_2,undefined4 param_3,uint param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_4 < 0x65) {
    *(undefined4 *)(param_2 + 8) = param_3;
    *(uint *)(param_2 + 0xc) = param_4;
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

