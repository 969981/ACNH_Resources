
undefined8 FUN_00694700(int *param_1,long *param_2)

{
  if (*param_1 != 2) {
    return 1;
  }
  if (((char)param_1[4] == '\0') && (*(long *)(param_1 + 2) < 0)) {
    return 2;
  }
  *param_2 = *(long *)(param_1 + 2);
  return 0;
}

