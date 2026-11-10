
void FUN_002bd290(undefined8 param_1)

{
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((DAT_04c6119c & 1) == 0) {
    local_30 = 0x10c0c;
  }
  else if (DAT_04c6119d == '\x01') {
    local_30 = 0x10c08;
  }
  else {
    FUN_0021f470(5);
    local_30 = 0;
    DAT_04c6119d = '\x01';
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

