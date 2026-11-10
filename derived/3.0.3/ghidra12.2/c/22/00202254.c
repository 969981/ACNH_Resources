
void FUN_00202254(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00202254(param_1,*param_2);
  FUN_00202254(param_1,param_2[1]);
  FUN_00187e4c(param_2);
  return;
}

