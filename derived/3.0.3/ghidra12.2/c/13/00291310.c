
void FUN_00291310(undefined8 param_1)

{
  long *plVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((DAT_04c60f40 & 1) == 0) {
    local_30 = 0x10c0c;
  }
  else if ((DAT_04c60f41 & 1) == 0) {
    local_30 = 0x10c08;
  }
  else {
    plVar1 = (long *)FUN_0021f454();
    (**(code **)(*plVar1 + 0x28))();
    FUN_0021f4ac();
    DAT_04c60f41 = 0;
    local_30 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

