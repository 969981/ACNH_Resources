
int FUN_001471a8(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_3;
  if (0x20c49a < param_1) {
    return 0x7fffffff;
  }
  if (param_1 < -0x20c49a) {
    return -0x80000000;
  }
  return (param_2 - param_4) / 1000 + param_1 * 1000;
}

