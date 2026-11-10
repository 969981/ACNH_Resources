
void FUN_002524c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  lVar3 = FUN_00227acc(param_3);
  if (((lVar3 == 0) || (iVar1 = FUN_00227cb0(param_3), iVar1 == 0)) ||
     (uVar2 = FUN_00227cb0(param_3), 8 < uVar2)) {
    local_44 = 0;
    local_34 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  }
  else {
    FUN_00227af0(&local_34,param_2 + 0x10,param_3);
    if (local_34 == 0) {
      local_44 = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(param_1,&local_44);
      return;
    }
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

