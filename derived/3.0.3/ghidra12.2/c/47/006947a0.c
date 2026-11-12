
undefined8 FUN_006947a0(int *param_1,undefined4 *param_2)

{
  if (*param_1 != 2) {
    return 1;
  }
  if (*(ulong *)(param_1 + 2) >> 0x20 == 0) {
    *param_2 = (int)*(ulong *)(param_1 + 2);
    return 0;
  }
  return 2;
}

