
void FUN_002a7920(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  int *piVar1;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar1 = &local_60;
  local_50 = 0;
  local_60 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  FUN_002a885c(&local_60,param_2,param_3,*(undefined1 *)(param_6 + 0x20));
  FUN_00229780(&local_50,&local_60);
  if (local_50 == 0) {
    if ((param_4 == 0) || (param_5 == 0)) {
      local_60 = 0x10c07;
    }
    else if (*(long *)(param_2 + 0x30) == 0) {
      *(long *)(param_2 + 0x28) = param_6;
      *(long *)(param_2 + 0x30) = param_4;
      local_60 = 0;
      *(long *)(param_2 + 0xb0) = param_5;
      *(undefined8 *)(param_2 + 0xb8) = 0;
    }
    else {
      local_60 = 0x10c08;
    }
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
  }
  else {
    piVar1 = &local_50;
  }
  FUN_002296c4(param_1,piVar1);
  return;
}

