
void FUN_002a3864(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  *(undefined4 *)(param_2 + 8) = param_3;
  *(undefined4 *)(param_2 + 0xc) = param_4;
  local_24 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

