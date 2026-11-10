
void FUN_00273b00(undefined8 param_1,long param_2,long *param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (((param_3 == (long *)0x0) || (param_4 == 0)) || (param_5 == 0)) {
    local_24 = 0;
    local_34 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_002296c4(param_1,&local_34);
    return;
  }
  *(long *)(param_2 + 0x90) = param_5;
  uVar1 = (**(code **)(*param_3 + 0x140))(param_3);
  *(undefined8 *)(param_2 + 0x98) = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x148))(param_3);
  *(undefined8 *)(param_2 + 0xa0) = uVar1;
  FUN_002b3c88(param_1,param_2);
  return;
}

