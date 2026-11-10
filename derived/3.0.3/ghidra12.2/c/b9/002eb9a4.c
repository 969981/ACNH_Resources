
void FUN_002eb9a4(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == (undefined4 *)0x0) {
    local_24 = 0x10c07;
  }
  else {
    local_24 = 0;
    *param_3 = *(undefined4 *)(param_2 + 0x660);
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

