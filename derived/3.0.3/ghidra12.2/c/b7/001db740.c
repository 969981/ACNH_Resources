
void FUN_001db740(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001db740(param_1,*param_2);
  FUN_001db740(param_1,param_2[1]);
  (**(code **)param_2[4])();
  FUN_00187e4c(param_2);
  return;
}

