
void FUN_002406a4(undefined8 param_1)

{
  uint in_w3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  int local_30 [4];
  undefined4 local_14;
  
  FUN_0023fc04(local_30);
  if (local_30[0] != 0) {
    FUN_002296c4(param_1,local_30);
    return;
  }
  if (in_w3 < 0xc) {
    local_40 = 0x10c07;
  }
  else {
    local_40 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_40);
  return;
}

