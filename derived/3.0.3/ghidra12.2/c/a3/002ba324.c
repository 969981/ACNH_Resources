
void FUN_002ba324(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (param_3 == (undefined8 *)0x0) {
    local_64 = 0;
    local_54 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    piVar3 = &local_54;
  }
  else {
    FUN_002296c4(&local_54,param_2 + 0xd4);
    local_64 = 0x10c08;
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
    if (local_54 == local_64) {
      local_64 = 0x10c08;
    }
    else {
      local_44 = 0;
      local_64 = 0x4c11;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
      if (local_54 == local_64) {
        local_64 = 0x4c11;
      }
      else {
        uVar1 = param_4 & 0xff;
        if (((uVar1 == 0xff) || (uVar1 == 0xfe)) || (uVar1 == 0xfd)) {
          *param_3 = 0;
          local_64 = 0;
        }
        else {
          plVar2 = *(long **)(param_2 + 0x68);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x80))(param_1,plVar2,param_3,param_4);
            return;
          }
          local_64 = 0x10c08;
        }
      }
    }
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
    piVar3 = &local_64;
  }
  FUN_002296c4(param_1,piVar3);
  return;
}

