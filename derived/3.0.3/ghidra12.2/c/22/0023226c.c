
void FUN_0023226c(undefined8 param_1,long param_2)

{
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(long *)(param_2 + 0x16e0) != 0) {
    FUN_00221064();
    *(undefined8 *)(param_2 + 0x16e0) = 0;
  }
  local_30 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

