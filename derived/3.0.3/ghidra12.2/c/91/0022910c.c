
void FUN_0022910c(long *param_1,long param_2)

{
  if ((char)param_1[4] != '\0') {
    if (param_1[1] < param_2) {
      param_1[1] = param_2;
    }
    if (param_2 < *param_1) {
      *param_1 = param_2;
    }
    param_1[2] = param_2;
    param_1[3] = param_1[3] + 1;
  }
  return;
}

