
void FUN_0026e678(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_38;
  ErrorResultVariant aEStack_34 [12];
  char local_28 [4];
  int local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == 0) {
    local_38 = 0;
    local_24 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_38);
    FUN_002296c4(param_1,&local_24);
    return;
  }
  FUN_002ba1c4(&local_24,*(undefined8 *)PTR_DAT_04bc1510,local_28,param_3);
  if (local_24 != 0) {
    FUN_002296c4(param_1,&local_24);
    return;
  }
  if (local_28[0] == -3) {
    local_38 = 0x10c07;
  }
  else {
    local_38 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_34,(Result *)&local_14);
  FUN_002296c4(param_1,&local_38);
  return;
}

