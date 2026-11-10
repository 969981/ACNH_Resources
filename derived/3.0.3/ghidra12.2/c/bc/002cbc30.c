
void FUN_002cbc30(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == 0) {
    local_24 = 0x10c07;
  }
  else {
    FUN_002bd800(param_2 + 8);
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

