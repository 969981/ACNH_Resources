
void FUN_002bc100(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((*(uint *)(param_2 + 0xa8) | 2) == 3) {
    FUN_002296c4(param_1,param_2 + 0xb0);
    return;
  }
  local_24 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

