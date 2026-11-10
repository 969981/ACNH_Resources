
void FUN_00313b58(long param_1,int param_2)

{
  *(int *)(param_1 + 0x84) = param_2;
  if (param_2 == 1) {
    FUN_0031a4ac(param_1,0x5f);
    return;
  }
  if ((param_2 == 3) || (param_2 == 2)) {
    FUN_0031a4ac(param_1,0x62);
    return;
  }
  FUN_0031a4ac(param_1,0x60,0);
  return;
}

