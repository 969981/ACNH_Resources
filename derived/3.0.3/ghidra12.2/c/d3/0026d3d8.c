
void FUN_0026d3d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  local_54 = 0;
  local_64 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
  FUN_002a7920(&local_64,param_2,param_3,param_4,param_5,param_6);
  FUN_00229780(&local_54,&local_64);
  if (local_54 == 0) {
    *(undefined4 *)(param_2 + 0xf8) = 0;
    *(undefined1 *)(param_2 + 0xf5) = 0xfd;
    local_64 = 0;
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
    piVar1 = &local_64;
  }
  else {
    piVar1 = &local_54;
  }
  FUN_002296c4(param_1,piVar1);
  return;
}

