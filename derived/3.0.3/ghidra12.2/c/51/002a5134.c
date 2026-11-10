
void FUN_002a5134(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34 [4];
  undefined4 local_24;
  
  (**(code **)(*param_2 + 0xa0))(local_34,param_2,param_4);
  if (local_34[0] == 0) {
    plVar1 = (long *)FUN_002aaa54(param_2);
    (**(code **)(*plVar1 + 0x88))(&local_44,plVar1,param_3);
    FUN_00229780(local_34,&local_44);
    if (local_34[0] == 0) {
      uVar2 = FUN_002aee28(param_2[0xe],param_3);
      if ((uVar2 & 1) == 0) {
        local_44 = 0x10c07;
      }
      else {
        local_44 = 0;
      }
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(param_1,&local_44);
      return;
    }
  }
  FUN_002296c4(param_1,local_34);
  return;
}

