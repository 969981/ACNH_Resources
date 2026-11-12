
undefined8 FUN_00694738(int *param_1,undefined1 *param_2)

{
  if (*param_1 != 2) {
    return 1;
  }
  if (*(ulong *)(param_1 + 2) < 0x100) {
    *param_2 = (char)*(ulong *)(param_1 + 2);
    return 0;
  }
  return 2;
}

