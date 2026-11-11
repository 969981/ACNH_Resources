
uint FUN_003d285c(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 4) >> 8;
}

