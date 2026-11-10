
void FUN_002bb480(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  int local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bc1510;
  if (*(char *)(param_2 + 8) == '\0') {
    local_40 = 0;
    local_30 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_40);
  }
  else {
    FUN_002ba648(&local_30,*(undefined8 *)PTR_DAT_04bc1510,param_2 + 0x10,param_2 + 0xd50,
                 param_2 + 0x1a90,param_2 + 0x27d0);
    if (local_30 == 0) {
      FUN_002ba744(*(undefined8 *)puVar1);
      local_40 = 0;
      local_14 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(param_1,&local_40);
      return;
    }
  }
  FUN_002296c4(param_1,&local_30);
  return;
}

