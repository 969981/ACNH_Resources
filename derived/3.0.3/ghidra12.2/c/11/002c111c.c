
void FUN_002c111c(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  piVar1 = (int *)(param_2 + 0xd8);
  if (*piVar1 == 1) {
LAB_002c11c8:
    local_64 = 0;
    local_54 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
  }
  else {
    FUN_00220f24(piVar1);
    *(undefined4 *)(param_2 + 0xd0) = 0;
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_002c11c8;
    FUN_00305eb8(&local_54,*(undefined8 *)(param_2 + 200),piVar1,param_3,param_4,param_5,param_6);
    if (local_54 == 0) {
      *(undefined4 *)(param_2 + 0xd0) = 1;
      FUN_002211bc(*(undefined8 *)(param_2 + 200),0);
      local_64 = 0;
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
      piVar1 = &local_64;
      goto LAB_002c11ec;
    }
  }
  piVar1 = &local_54;
LAB_002c11ec:
  FUN_002296c4(param_1,piVar1);
  return;
}

