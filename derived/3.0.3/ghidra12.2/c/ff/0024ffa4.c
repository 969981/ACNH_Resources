
void FUN_0024ffa4(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    local_14 = 0;
    local_24 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
    FUN_002296c4(param_1,&local_24);
    return;
  }
  FUN_0025c06c(param_1);
  return;
}

