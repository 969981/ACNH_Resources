
undefined8 FUN_01fb2ee4(int *param_1,int *param_2)

{
  if ((*param_2 <= *param_1) && (*param_1 <= *param_2)) {
    return 0;
  }
  if ((*param_2 <= param_1[1]) && (param_1[1] <= *param_2)) {
    return 1;
  }
  if ((*param_2 <= param_1[2]) && (param_1[2] <= *param_2)) {
    return 2;
  }
  if ((*param_2 <= param_1[3]) && (param_1[3] <= *param_2)) {
    return 3;
  }
  if ((param_1[4] < *param_2) || (*param_2 < param_1[4])) {
    return 0xffffffff;
  }
  return 4;
}

