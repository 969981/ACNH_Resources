
void FUN_00244280(undefined8 param_1)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((DAT_04c603b0 & 1) == 0) {
    local_24 = 0x10c0c;
  }
  else if (DAT_04c603b1 == '\x01') {
    local_24 = 0x10c08;
  }
  else {
    DAT_04c603b1 = '\x01';
    FUN_0021f470(7);
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

