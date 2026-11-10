
void FUN_00346d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0033458c(param_1 + 0x38);
  FUN_0033458c(param_1 + 0x1e0,param_2,param_3);
  if (*(int *)(param_1 + 4) == 3) {
    FUN_0033458c(param_1 + 0x388,param_2,param_3);
    return;
  }
  return;
}

