
void FUN_0025a9e4(undefined8 param_1,long param_2,int param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((*(int *)(param_2 + 0x520) == param_3) && (*(int *)(param_2 + 0x4f0) == 1)) {
    FUN_002210f0(param_2 + 0x4f0);
    local_24 = 0;
  }
  else {
    local_24 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

