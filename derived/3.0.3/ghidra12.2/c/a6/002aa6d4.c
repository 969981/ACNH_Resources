
void FUN_002aa6d4(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 < 0) {
    local_24 = 0x10c07;
  }
  else {
    local_24 = 0;
    iVar1 = 1000;
    if (param_3 != 0) {
      iVar1 = param_3;
    }
    *param_2 = iVar1;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

