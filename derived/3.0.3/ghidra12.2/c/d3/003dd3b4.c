
void FUN_003dd3b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  if ((uVar1 & 1) == 0) {
    FUN_003dc500(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_003dcf10(param_1 + 5,param_2,param_3,param_4);
  return;
}

