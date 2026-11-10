
void FUN_002a4ff4(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54 [4];
  undefined4 local_44;
  
  (**(code **)(*param_2 + 0x78))(local_54);
  if (local_54[0] == 0) {
    if (param_3 == 0) {
      local_64 = 0x10c07;
    }
    else {
      FUN_002b0940(&local_64,param_2[0xe],param_3,param_4,param_5,param_6);
      FUN_00229780(local_54,&local_64);
      if (local_54[0] == 0) {
        if (DAT_04c60320 != 0) {
          uVar2 = FUN_002290b0(DAT_04c60320,6);
          uVar1 = FUN_002b2830(param_2[0xe]);
          FUN_0022910c(uVar2,uVar1);
        }
        local_64 = 0;
      }
      else {
        local_44 = 0;
        local_64 = 0x10c04;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
        if (local_54[0] == local_64) {
          local_64 = 0x10c04;
        }
        else {
          local_64 = 0x2c09;
        }
      }
    }
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
    piVar3 = &local_64;
  }
  else {
    piVar3 = local_54;
  }
  FUN_002296c4(param_1,piVar3);
  return;
}

