
int FUN_00652ec0(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 1:
    break;
  case 2:
    return param_2 << 1;
  case 3:
    return param_2 * 3;
  case 4:
    return param_2 + 2;
  default:
    param_2 = 0;
  }
  return param_2;
}

