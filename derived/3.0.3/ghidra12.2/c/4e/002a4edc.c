
void FUN_002a4edc(undefined8 param_1,long *param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int *piVar2;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar2 = &local_60;
  if (param_4 == 0) {
    local_60 = 0;
    local_50 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
    piVar2 = &local_50;
  }
  else {
    (**(code **)(*param_2 + 0xa0))(&local_50,param_2,param_4);
    if (local_50 == 0) {
      if (param_3 == 0) {
        local_60 = 0x10c07;
      }
      else {
        FUN_002b0d5c(&local_60,param_2[0xe],param_3,param_4,param_5);
        FUN_00229780(&local_50,&local_60);
        if (DAT_04c60320 != 0) {
          uVar1 = FUN_002290b0(DAT_04c60320,5);
          FUN_0022910c(uVar1,*(undefined2 *)(param_2[0xe] + 0x32));
        }
        local_60 = 0;
      }
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
    }
    else {
      piVar2 = &local_50;
    }
  }
  FUN_002296c4(param_1,piVar2);
  return;
}

