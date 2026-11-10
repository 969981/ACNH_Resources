
void FUN_0021cee4(undefined8 param_1,long param_2)

{
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(int *)(param_2 + 0x6c) == 0) {
    FUN_0021cf50(param_2,1);
    *(undefined1 *)(param_2 + 0xa0) = 0;
    local_30 = 0;
  }
  else {
    local_30 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

