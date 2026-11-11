
uint FUN_003d2878(uint *param_1)

{
  if ((*param_1 >> 1 & 1) == 0) {
    return 0x3f800000;
  }
  return param_1[((ulong)*param_1 & 1) + 1];
}

