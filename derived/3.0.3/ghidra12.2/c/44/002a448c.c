
void FUN_002a448c(undefined8 param_1,long *param_2,long param_3,undefined4 param_4,long *param_5,
                 undefined8 param_6,uint param_7)

{
  ulong uVar1;
  int *piVar2;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (param_3 == 0) {
    local_54 = 0x10c07;
LAB_002a455c:
    local_64 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
  }
  else {
    uVar1 = (**(code **)(*param_5 + 0xe0))(param_5);
    if ((uVar1 & 1) == 0) {
      local_54 = 0x10c08;
      goto LAB_002a455c;
    }
    (**(code **)(*param_2 + 0x38))(&local_54,param_2,param_4,param_5,param_6,param_7 & 1);
    if (local_54 == 0) {
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      *(undefined4 *)(param_2 + 0x12) = param_4;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_64 = 0;
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
      piVar2 = &local_64;
      goto LAB_002a4578;
    }
  }
  piVar2 = &local_54;
LAB_002a4578:
  FUN_002296c4(param_1,piVar2);
  return;
}

