
void FUN_001ec128(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001ec128(param_1,*param_2);
  FUN_001ec128(param_1,param_2[1]);
  FUN_001ec170(param_1 + 8,param_2 + 4);
  FUN_00187e4c(param_2);
  return;
}

