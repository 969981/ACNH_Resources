
void FUN_001dcab8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001dcab8(param_1,*param_2);
  FUN_001dcab8(param_1,param_2[1]);
  FUN_001e1868(param_2 + 5);
  FUN_00187e4c(param_2);
  return;
}

