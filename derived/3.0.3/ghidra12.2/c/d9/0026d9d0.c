
void FUN_0026d9d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  int *piVar2;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar2 = &local_60;
  local_50 = 0;
  local_60 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  FUN_002a95b0(&local_60,param_2,param_3,param_4,param_5,param_6);
  FUN_00229780(&local_50,&local_60);
  if (local_50 != 0) {
    piVar2 = &local_50;
    goto LAB_0026dac0;
  }
  if (DAT_04c603c8 == 0) {
LAB_0026da9c:
    local_60 = 0x10c08;
  }
  else {
    lVar1 = FUN_0026c894();
    *(long *)(param_2 + 0x978) = lVar1;
    if (lVar1 == 0) goto LAB_0026da9c;
    FUN_00283aa4(&local_60,lVar1,param_2);
    FUN_00229780(&local_50,&local_60);
    *(undefined8 *)(param_2 + 0x970) = 0;
    *(undefined1 *)(param_2 + 0x96c) = 0xfd;
    local_60 = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
LAB_0026dac0:
  FUN_002296c4(param_1,piVar2);
  return;
}

