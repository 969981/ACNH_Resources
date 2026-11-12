
undefined8 FUN_0069476c(int *param_1,undefined2 *param_2)

{
  if (*param_1 != 2) {
    return 1;
  }
  if (*(ulong *)(param_1 + 2) >> 0x10 == 0) {
    *param_2 = (short)*(ulong *)(param_1 + 2);
    return 0;
  }
  return 2;
}

