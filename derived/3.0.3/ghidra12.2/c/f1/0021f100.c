
void FUN_0021f100(undefined8 param_1)

{
  undefined4 local_40 [4];
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  
  if ((DAT_04c5efb8 & 1) == 0) {
    local_30 = 0x10c0c;
  }
  else if (DAT_04c5efba == '\x01') {
    local_30 = 0x10c08;
  }
  else {
    FUN_0021f470(2);
    local_30 = 0;
    DAT_04c5efba = '\x01';
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)local_40);
    FUN_00222ebc(local_40);
    FUN_00229780(&local_30,local_40);
    FUN_00220240(local_40);
    FUN_00229780(&local_30,local_40);
    local_30 = 0;
  }
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)local_40);
  FUN_002296c4(param_1,&local_30);
  return;
}

