
void FUN_0022cc60(undefined8 param_1)

{
  long *plVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((DAT_04c60398 & 1) == 0) {
    local_30 = 0x10c0c;
  }
  else if (((DAT_04c60399 & 1) == 0) || (plVar1 = (long *)FUN_0021f418(6), plVar1 == (long *)0x0)) {
    local_30 = 0x10c08;
  }
  else {
    (**(code **)(*plVar1 + 0x28))();
    DAT_04c60399 = 0;
    FUN_0021f4ac();
    local_30 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

