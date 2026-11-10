
void FUN_0024fd00(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_2[3] == 0) || (*(char *)((long)param_2 + 9) != '\0')) {
    local_44 = 0;
    local_34 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  }
  else {
    FUN_0025c750();
    (**(code **)(*param_2 + 0x28))(&local_34,param_2,param_3);
    if (local_34 == 0) {
      local_44 = 0;
      *(undefined1 *)((long)param_2 + 9) = 1;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(param_1,&local_44);
      return;
    }
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

