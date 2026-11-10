
void FUN_00295eac(undefined8 param_1,long *param_2,int param_3,long param_4)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  int local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((((int)param_2[0x12] == 0) || ((int)param_2[0x12] != param_3)) || (param_2[0x14] != param_4))
  {
    local_34 = 0;
    local_24 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_34);
    FUN_002296c4(param_1,&local_24);
    return;
  }
  (**(code **)(*param_2 + 0x90))(&local_24);
  if (local_24 == 0) {
    local_34 = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_14);
    FUN_002296c4(param_1,&local_34);
    return;
  }
  FUN_002296c4(param_1,&local_24);
  return;
}

