
void FUN_001db6dc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001db6dc(param_1,*param_2);
  FUN_001db6dc(param_1,param_2[1]);
  FUN_001b8504(param_2 + 6);
  FUN_00187e4c(param_2);
  return;
}

