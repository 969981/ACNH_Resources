
undefined8 FUN_006947d4(int *param_1,long *param_2)

{
  if (*param_1 != 2) {
    return 1;
  }
  if (((char)param_1[4] == '\0') || (-1 < *(long *)(param_1 + 2))) {
    *param_2 = *(long *)(param_1 + 2);
    return 0;
  }
  return 2;
}

