
void FUN_0025b80c(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  local_24 = 0;
  local_14 = 0;
  *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_3 + 8);
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

