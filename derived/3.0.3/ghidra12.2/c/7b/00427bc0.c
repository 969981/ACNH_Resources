
void FUN_00427bc0(long *param_1,long param_2,undefined8 param_3)

{
  do {
    FUN_0044ed80(param_1,param_2,param_3);
    if (*param_1 != 0) {
      return;
    }
    if ((param_1[2] & 1U) != 0) {
      FUN_0043dd50(param_1[2] & 0xfffffffffffffffe);
    }
    param_2 = *(long *)(param_2 + 8);
  } while (param_2 != 0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

