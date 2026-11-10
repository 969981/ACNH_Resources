
void FUN_0014a930(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN_0014b1cc(param_2);
    return;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_0014b7c4(param_1,3,2);
  }
  FUN_0014b1cc(param_2);
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  FUN_0014b80c(param_1,3);
  return;
}

