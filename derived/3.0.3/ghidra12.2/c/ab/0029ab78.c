
void FUN_0029ab78(int *param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (*(int *)(param_2 + 0xd0) != 1) {
    local_34 = 0;
    local_44 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
    FUN_002296c4(param_1,&local_44);
    return;
  }
  local_44 = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_44);
  if (param_5 == 0) {
    FUN_0029def8(&local_44,*(undefined8 *)(param_2 + 0x48),param_2 + 0x110,param_3,param_4);
    FUN_00229780(param_1,&local_44);
    if (*param_1 == 0) {
      FUN_002211bc(*(undefined8 *)(param_2 + 0x48),0);
      return;
    }
  }
  else {
    FUN_0029ac88(&local_44,param_2,param_3,param_4,param_5,1);
    FUN_00229780(param_1,&local_44);
  }
  return;
}

