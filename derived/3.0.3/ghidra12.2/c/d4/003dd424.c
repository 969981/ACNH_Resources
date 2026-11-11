
void FUN_003dd424(long *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  if ((uVar1 & 1) == 0) {
    FUN_003dc588(param_1,param_2,param_3);
    return;
  }
  FUN_003dd240(param_1 + 5,param_2,param_3);
  return;
}

