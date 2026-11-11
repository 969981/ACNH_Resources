
bool FUN_003db71c(int *param_1)

{
  if ((*param_1 == 0x4d545346) && ((short)param_1[1] == -0x101)) {
    return param_1[2] - 0x10000U < 0x50301;
  }
  return false;
}

