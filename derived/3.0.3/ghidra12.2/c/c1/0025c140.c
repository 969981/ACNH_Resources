
void FUN_0025c140(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((*(int *)(param_2 + 0x520) == 4) && (*(int *)(param_2 + 0x4f0) - 2U < 3)) {
    FUN_002296c4(param_1,param_2 + 0x4f4);
    return;
  }
  local_14 = 0;
  local_24 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

