
void FUN_002bcda8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == 0) {
    local_14 = 0;
    local_24 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
    FUN_002296c4(param_1,&local_24);
    return;
  }
  FUN_002bce00(param_1);
  return;
}

