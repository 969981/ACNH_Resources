
void FUN_002ba1c4(undefined8 param_1,long param_2,undefined1 *param_3,long param_4)

{
  long *plVar1;
  int *piVar2;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (param_3 == (undefined1 *)0x0) {
    local_64 = 0;
    local_54 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    piVar2 = &local_54;
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
      else if (param_4 == 0) {
        local_64 = 0;
        *param_3 = 0xfd;
      }
      else {
        plVar1 = *(long **)(param_2 + 0x68);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x88))(param_1,plVar1,param_3,param_4);
          return;
        }
        local_64 = 0x10c08;
      }
    }
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
    piVar2 = &local_64;
  }
  FUN_002296c4(param_1,piVar2);
  return;
}

